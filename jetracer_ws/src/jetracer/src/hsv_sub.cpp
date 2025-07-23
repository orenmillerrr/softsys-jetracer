#include <memory>
#include "rclcpp/rclcpp.hpp"
#include "sensor_msgs/msg/image.hpp"
#include "softsys_msgs/msg/steer.hpp"
#include "softsys_msgs/msg/throttle.hpp"
#include "cv_bridge/cv_bridge.h"
#include "image_transport/image_transport.hpp"
#include <opencv2/opencv.hpp>

#include <cmath>
#include <iostream>
#include <algorithm>

using namespace std;
using namespace cv;

#define PI 3.1415926

int low_H = 0, low_S = 53, low_V = 108;
int high_H = 94, high_S = 226, high_V = 220;

int Rectx = 0, Recty = 398, Rectw = 1280, Recth = 157, ELx = 660;

class ImageSubscriber : public rclcpp::Node
{
public:
    ImageSubscriber() : Node("image_processing")
    {
        subscription_ = this->create_subscription<sensor_msgs::msg::Image>(
            "softsys/image_raw", 10,
            std::bind(&ImageSubscriber::topic_callback, this, std::placeholders::_1));

        steering_pub_ = this->create_publisher<softsys_msgs::msg::Steer>("cmd_steering", 10);
        throttle_pub_ = this->create_publisher<softsys_msgs::msg::Throttle>("cmd_throttle", 10);

        last_time_ = this->now();
    }

private:
    rclcpp::Subscription<sensor_msgs::msg::Image>::SharedPtr subscription_;
    rclcpp::Publisher<softsys_msgs::msg::Steer>::SharedPtr steering_pub_;
    rclcpp::Publisher<softsys_msgs::msg::Throttle>::SharedPtr throttle_pub_;

    double kp_ = 0.01;
    double ki_ = 0.0001;
    double kd_ = 0.001;
    double integral_ = 0.0;
    double prev_error_ = 0.0;
    rclcpp::Time last_time_;

    void topic_callback(const sensor_msgs::msg::Image::SharedPtr msg)
    {
        cv_bridge::CvImagePtr cv_ptr;
        try {
            cv_ptr = cv_bridge::toCvCopy(msg, msg->encoding);
        } catch (cv_bridge::Exception& e) {
            RCLCPP_ERROR(this->get_logger(), "cv_bridge exception: %s", e.what());
            return;
        }

        Mat frame = cv_ptr->image;
        Mat original = frame.clone();

        // Check that ROI stays inside image bounds
        if (Rectx < 0 || Recty < 0 || Rectx + Rectw > frame.cols || Recty + Recth > frame.rows) {
            RCLCPP_WARN(this->get_logger(), "ROI out of image bounds. Skipping frame.");
            return;
        }

        Mat hsv, mask;
        cvtColor(frame, hsv, COLOR_BGR2HSV);
        inRange(hsv, Scalar(low_H, low_S, low_V), Scalar(high_H, high_S, high_V), mask);

        Mat eroded, dilated;
        Mat eElement = getStructuringElement(MORPH_RECT, Size(2, 2));
        Mat dElement = getStructuringElement(MORPH_RECT, Size(3, 3));
        erode(mask, eroded, eElement);
        dilate(eroded, dilated, dElement);

        vector<vector<Point>> contours;
        findContours(dilated, contours, RETR_LIST, CHAIN_APPROX_NONE);

        Mat contourImage = Mat::zeros(dilated.size(), CV_8UC3);
        int maxElement = -1;
        double maxArea = 0;
        for (size_t i = 0; i < contours.size(); ++i) {
            double area = contourArea(contours[i]);
            if (area > maxArea) {
                maxArea = area;
                maxElement = i;
            }
        }

        if (maxElement >= 0) {
            drawContours(contourImage, contours, maxElement, Scalar(0, 255, 0), FILLED);
        }

        Rect roi(Rectx, Recty, Rectw, Recth);
        Mat roiImage = contourImage(roi);

        int XL = -1, XR = -1, Centx = -1;
        bool detected = false;
        int midY = Recth / 2;

        for (int x = 0; x < roiImage.cols; x++) {
            if (roiImage.at<Vec3b>(midY, x)[1] == 255) {
                XL = x;
                break;
            }
        }
        for (int x = roiImage.cols - 1; x >= 0; x--) {
            if (roiImage.at<Vec3b>(midY, x)[1] == 255) {
                XR = x;
                detected = true;
                break;
            }
        }

        Mat drawing;
        cvtColor(original, drawing, COLOR_BGR2GRAY);
        cvtColor(drawing, drawing, COLOR_GRAY2BGR);

        if (detected && XL >= 0 && XR >= 0) {
            Centx = (XL + XR) / 2;
            int LatE = Centx + Rectx - ELx;

            double LatE_d = static_cast<double>(LatE);
            double y = static_cast<double>(frame.rows - (Recty + Recth / 2));
            double yawE = atan2(LatE_d, y) * 180 / PI;

            rclcpp::Time current_time = this->now();
            double dt = (current_time - last_time_).seconds();
            last_time_ = current_time;
            if (dt <= 0.0) dt = 1e-3;

            double error = LatE_d;
            integral_ += error * dt;
            double derivative = (error - prev_error_) / dt;
            double control = kp_ * error + ki_ * integral_ + kd_ * derivative;
            prev_error_ = error;

            if (control > 1.0) control = 1.0;
            else if (control < -1.0) control = -1.0;

            softsys_msgs::msg::Steer steer_msg;
            steer_msg.steer_angle = control;
            steering_pub_->publish(steer_msg);

            double throttle_val = 1.0 - std::abs(control) * 0.8;
            if (throttle_val < 0.0) throttle_val = 0.0;
            else if (throttle_val > 1.0) throttle_val = 1.0;

            softsys_msgs::msg::Throttle throttle_msg;
            throttle_msg.throttle = throttle_val;
            throttle_pub_->publish(throttle_msg);
        }
    }
};

int main(int argc, char * argv[])
{
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<ImageSubscriber>());
    rclcpp::shutdown();
    return 0;
}
