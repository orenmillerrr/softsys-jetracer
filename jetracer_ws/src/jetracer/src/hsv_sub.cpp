#include <memory>
#include "rclcpp/rclcpp.hpp"
#include "sensor_msgs/msg/image.hpp"
#include "std_msgs/msg/float64.hpp"               // ← NEW
#include "softsys_msgs/msg/steer.hpp"
#include "softsys_msgs/msg/throttle.hpp"
#include "cv_bridge/cv_bridge.hpp"
#include "image_transport/image_transport.hpp"
#include <opencv2/opencv.hpp>

#include <cmath>
#include <iostream>

using namespace std;
using namespace cv;

#define PI 3.1415926

// HSV thresholds & ROI
int low_H = 0, low_S = 53, low_V = 108;
int high_H = 94, high_S = 226, high_V = 220;
int Rectx = 0, Recty = 398, Rectw = 1280, Recth = 157, ELx = 660;

class ImageSubscriber : public rclcpp::Node
{
public:
  ImageSubscriber()
  : Node("image_subscriber_line_following")
  {
    // subscribe camera
    subscription_ = this->create_subscription<sensor_msgs::msg::Image>(
      "softsys/image_raw", 10,
      std::bind(&ImageSubscriber::topic_callback, this, std::placeholders::_1)
    );

    // existing publishers
    steering_pub_ = this->create_publisher<softsys_msgs::msg::Steer>("cmd_steering", 10);
    throttle_pub_ = this->create_publisher<softsys_msgs::msg::Throttle>("cmd_throttle", 10);

    // ← NEW: publish centerline error
    error_pub_ = this->create_publisher<std_msgs::msg::Float64>("centerline_error", 10);

    // build your tuning UI
    namedWindow("Sliders", WINDOW_NORMAL);
    resizeWindow("Sliders", 400, 400);
    createTrackbar("ROI X",      "Sliders", &Rectx, 640);
    createTrackbar("ROI Y",      "Sliders", &Recty, 480);
    createTrackbar("ROI W",      "Sliders", &Rectw, 640);
    createTrackbar("ROI H",      "Sliders", &Recth, 480);
    createTrackbar("EgoLine X",  "Sliders", &ELx,    640);

    last_time_ = this->now();
  }

private:
  void topic_callback(const sensor_msgs::msg::Image::SharedPtr msg)
  {
    // Step 1: convert ROS image to OpenCV Mat
    cv_bridge::CvImagePtr cv_ptr;
    try {
      cv_ptr = cv_bridge::toCvCopy(msg, msg->encoding);
    } catch (cv_bridge::Exception &e) {
      RCLCPP_ERROR(this->get_logger(), "cv_bridge exception: %s", e.what());
      return;
    }
    Mat frame = cv_ptr->image;

    // Step 2: extract ROI & HSV mask
    Rect roi(Rectx, Recty, Rectw, Recth);
    Mat roiImage = frame(roi);
    Mat hsv, mask;
    cvtColor(roiImage, hsv, COLOR_BGR2HSV);
    inRange(hsv, Scalar(low_H, low_S, low_V),
                 Scalar(high_H, high_S, high_V),
            mask);

    // Step 3: find contours, pick largest
    vector<vector<Point>> contours;
    findContours(mask, contours, RETR_EXTERNAL, CHAIN_APPROX_SIMPLE);
    if(contours.empty()) return;

    auto max_it = max_element(
      contours.begin(), contours.end(),
      [](auto &a, auto &b){ return contourArea(a)<contourArea(b); }
    );
    vector<Point> c = *max_it;

    // Step 4: compute centroid of largest contour
    Moments M = moments(c);
    if (M.m00 == 0) return;
    int CX = int(M.m10 / M.m00);
    int CY = int(M.m01 / M.m00);

    // Step 5: compute lateral error (in pixels)
    int ELx_rel = ELx;                       // ego-line X in ROI frame
    int Centx = CX;                          // centroid in ROI frame
    double LatE_d = static_cast<double>(Centx - ELx_rel);

    // ← NEW: publish the pixel‐error
    std_msgs::msg::Float64 err_msg;
    err_msg.data = LatE_d;
    error_pub_->publish(err_msg);

    // existing: draw results
    Mat drawing = roiImage.clone();
    line(drawing, Point(ELx_rel, 0),
                  Point(ELx_rel, Recth), Scalar(158,230,117), 2);
    circle(drawing, Point(CX, CY), 4, Scalar(89,100,255), FILLED);
    putText(drawing, "Error: "+to_string(int(LatE_d)),
            Point(20,30), FONT_HERSHEY_SIMPLEX, 0.6,
            Scalar(128,200,255), 2);

    imshow("Drawing", drawing);
    waitKey(33);
  }

  rclcpp::Subscription<sensor_msgs::msg::Image>::SharedPtr subscription_;
  rclcpp::Publisher<softsys_msgs::msg::Steer>::SharedPtr steering_pub_;
  rclcpp::Publisher<softsys_msgs::msg::Throttle>::SharedPtr throttle_pub_;
  rclcpp::Publisher<std_msgs::msg::Float64>::SharedPtr error_pub_;  // ← NEW

  // (If you still use your PID variables, keep them; else remove:)
  double kp_ = 0.01, ki_ = 0.0001, kd_ = 0.001, integral_ = 0.0, prev_error_ = 0.0;
  rclcpp::Time last_time_;
};

int main(int argc, char * argv[])
{
  rclcpp::init(argc, argv);
  rclcpp::spin(std::make_shared<ImageSubscriber>());
  rclcpp::shutdown();
  return 0;
}
