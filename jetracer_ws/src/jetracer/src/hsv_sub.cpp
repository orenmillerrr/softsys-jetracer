// // MECH 5970/6970 SoftSys
// // JetRacer
// // HSV Image Subscriber

#include <memory>
#include "rclcpp/rclcpp.hpp"
#include "sensor_msgs/msg/image.hpp"
#include "cv_bridge/cv_bridge.hpp"
#include "image_transport/image_transport.hpp"

#include <opencv2/opencv.hpp>
#include <cmath>
#include <iostream>

using namespace std;
using namespace cv;

#define PI 3.1415926

// HSV slider values
//         cv::Scalar lower(0, 53, 108);     // Lower bound
//         cv::Scalar upper(94, 226, 220);   // Upper bound
int low_H = 0, low_S = 53, low_V = 108;
int high_H = 94, high_S = 226, high_V = 220;

// ROI sliders
int Rectx = 0, Recty = 398, Rectw = 1280, Recth = 157, ELx = 660;

class ImageSubscriber : public rclcpp::Node
{
public:
    ImageSubscriber()
    : Node("image_subscriber_line_following")
    {
        subscription_ = this->create_subscription<sensor_msgs::msg::Image>(
            "softsys/image_raw", 10,
            std::bind(&ImageSubscriber::topic_callback, this, std::placeholders::_1));

        namedWindow("Sliders", WINDOW_NORMAL);
        resizeWindow("Sliders", 400, 400);

        // HSV Sliders
        // createTrackbar("Low H", "Sliders", &low_H, 179);
        // createTrackbar("High H", "Sliders", &high_H, 179);
        // createTrackbar("Low S", "Sliders", &low_S, 255);
        // createTrackbar("High S", "Sliders", &high_S, 255);
        // createTrackbar("Low V", "Sliders", &low_V, 255);
        // createTrackbar("High V", "Sliders", &high_V, 255);

        // ROI + Ego-line sliders
        createTrackbar("ROI X", "Sliders", &Rectx, 640);
        createTrackbar("ROI Y", "Sliders", &Recty, 480);
        createTrackbar("ROI W", "Sliders", &Rectw, 640);
        createTrackbar("ROI H", "Sliders", &Recth, 480);
        createTrackbar("EgoLine X", "Sliders", &ELx, 640);
    }

private:
    void topic_callback(const sensor_msgs::msg::Image::SharedPtr msg) const
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

        // // Optional: Update slider max values dynamically (do this once or on resolution change)
        // cv::setTrackbarMax("ROI X", "Sliders", frame.cols - 1);
        // cv::setTrackbarMax("ROI Y", "Sliders", frame.rows - 1);
        // cv::setTrackbarMax("ROI W", "Sliders", frame.cols);
        // cv::setTrackbarMax("ROI H", "Sliders", frame.rows);
        // cv::setTrackbarMax("EgoLine X", "Sliders", frame.cols - 1);

        // Clamp all values to be safe
        Rectx = std::clamp(Rectx, 0, frame.cols - 1);
        Recty = std::clamp(Recty, 0, frame.rows - 1);
        Rectw = std::clamp(Rectw, 1, frame.cols - Rectx);
        Recth = std::clamp(Recth, 1, frame.rows - Recty);

        // Convert to HSV and threshold
        cv::Mat hsv;
        cv::cvtColor(frame, hsv, COLOR_BGR2HSV);
        cv::Mat mask;
        cv::inRange(hsv, Scalar(low_H, low_S, low_V), Scalar(high_H, high_S, high_V), mask);

        // Morphology
        Mat eroded, dilated;
        Mat eElement = getStructuringElement(MORPH_RECT, Size(2, 2));
        Mat dElement = getStructuringElement(MORPH_RECT, Size(3, 3));
        erode(mask, eroded, eElement);
        dilate(eroded, dilated, dElement);

        // Contours
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

        // ROI and line detection
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

            double LatE_d = LatE;
            double y = (double)frame.rows - (Recty + Recth / 2);
            double yawE = atan2(LatE_d, y) * 180 / PI;

            // Draw ROI and guide lines
            rectangle(drawing, roi, Scalar(252, 153, 255), 1);
            line(drawing, Point(ELx, 0), Point(ELx, frame.rows), Scalar(158, 230, 117), 2);
            line(drawing, Point(ELx, Recty + midY), Point(Centx + Rectx, Recty + midY), Scalar(128, 200, 255), 2);
            line(drawing, Point(ELx, frame.rows - 1), Point(Centx + Rectx, Recty + midY), Scalar(255, 160, 153), 2);
            circle(drawing, Point(Rectx + Centx, Recty + midY), 3, Scalar(89, 100, 255), FILLED);
            circle(drawing, Point(ELx, frame.rows - 1), 3, Scalar(89, 100, 255), FILLED);

            // Overlay error values
            putText(drawing, "LatE: " + to_string(LatE), Point(20, 30),
                    FONT_HERSHEY_SIMPLEX, 0.6, Scalar(128, 200, 255), 2);
            putText(drawing, "YawE: " + to_string(yawE), Point(20, 60),
                    FONT_HERSHEY_SIMPLEX, 0.6, Scalar(255, 160, 153), 2);
        }

        // Show results
        imshow("Mask", mask);
        imshow("Contour", contourImage);
        imshow("ROI", roiImage);
        imshow("Drawing", drawing);
        waitKey(33);
    }

    rclcpp::Subscription<sensor_msgs::msg::Image>::SharedPtr subscription_;
};

int main(int argc, char * argv[])
{
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<ImageSubscriber>());
    rclcpp::shutdown();
    return 0;
}


// #include <memory>
// #include "rclcpp/rclcpp.hpp"
// #include "sensor_msgs/msg/image.hpp"
// #include "cv_bridge/cv_bridge.hpp"
// #include "image_transport/image_transport.hpp"
// #include "opencv2/imgproc/imgproc.hpp"
// #include "opencv2/highgui/highgui.hpp"

// using std::placeholders::_1;

// // HSV slider variables (declared globally for use in callback and trackbars)
// int low_H = 0, low_S = 0, low_V = 0;
// int high_H = 179, high_S = 255, high_V = 255;

// class ImageSubscriber : public rclcpp::Node
// {
// public:
//     ImageSubscriber()
//     : Node("image_subscriber")
//     {
//         subscription_ = this->create_subscription<sensor_msgs::msg::Image>(
//             "softsys/image_raw", 10,
//             std::bind(&ImageSubscriber::topic_callback, this, _1));

//         // // Create OpenCV window
//         // cv::namedWindow("HSV Tuner", cv::WINDOW_NORMAL);
//         // // Create Trackbars
//         // cv::createTrackbar("Low H", "HSV Tuner", &low_H, 179);
//         // cv::createTrackbar("High H", "HSV Tuner", &high_H, 179);
//         // cv::createTrackbar("Low S", "HSV Tuner", &low_S, 255);
//         // cv::createTrackbar("High S", "HSV Tuner", &high_S, 255);
//         // cv::createTrackbar("Low V", "HSV Tuner", &low_V, 255);
//         // cv::createTrackbar("High V", "HSV Tuner", &high_V, 255);
//     }

// private:
//     void topic_callback(const sensor_msgs::msg::Image::SharedPtr msg) const
//     {
//         cv_bridge::CvImagePtr cv_ptr;

//         // Step 1: Print image info
//         RCLCPP_INFO(this->get_logger(), "Image received - width: %d, height: %d, encoding: %s",
//                     msg->width, msg->height, msg->encoding.c_str());

//         // Step 2: Convert ROS image to OpenCV image
//         try {
//             cv_ptr = cv_bridge::toCvCopy(msg, msg->encoding);
//         } catch (cv_bridge::Exception& e) {
//             RCLCPP_ERROR(this->get_logger(), "cv_bridge exception: %s", e.what());
//             return;
//         }

//         // Step 3.1: Convert to HSV
//         cv::Mat hsv_image;
//         cv::cvtColor(cv_ptr->image, hsv_image, cv::COLOR_BGR2HSV);
//         cv::cvtColor(cv_ptr->image, cv_ptr->image, cv::COLOR_BGR2RGB);
        
//         cv::imshow("Original", cv_ptr->image);

//         // Step 3.2: Define HSV range for filtering (green as example)
//         cv::Scalar lower(0, 53, 108);     // Lower bound
//         cv::Scalar upper(94, 226, 220);   // Upper bound

//         // Get HSV bounds from sliders
//         // cv::Scalar lower(low_H, low_S, low_V);
//         // cv::Scalar upper(high_H, high_S, high_V);

//         // Step 3.3: Threshold
//         cv::Mat mask;
//         cv::inRange(hsv_image, lower, upper, mask);

//         // Step 3.4: Apply mask
//         // cv::Mat filtered_image;
//         // cv::bitwise_and(cv_ptr->image, cv_ptr->image, filtered_image, mask);

//         // cv::imshow("Mask",mask)


//         // Step 3.5: Combine original and filtered for display
//         // cv::Mat combined;
//         // cv::hconcat(cv_ptr->image, mask, combined);

//         // Step 4: Display
//         cv::imshow("HSV Filter", mask);
//         cv::waitKey(3);
//     }

//     rclcpp::Subscription<sensor_msgs::msg::Image>::SharedPtr subscription_;
// };

// int main(int argc, char * argv[])
// {
//     rclcpp::init(argc, argv);
//     rclcpp::spin(std::make_shared<ImageSubscriber>());
//     rclcpp::shutdown();
//     return 0;
// }
