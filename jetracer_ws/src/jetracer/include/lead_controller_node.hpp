#ifndef LEAD_CONTROLLER_NODE_HPP_
#define LEAD_CONTROLLER_NODE_HPP_

#include <memory>
#include <string>
#include "rclcpp/rclcpp.hpp"
#include "std_msgs/msg/float64.hpp"
#include "lead_controller.hpp"

class LeadControllerNode : public rclcpp::Node {
public:
  explicit LeadControllerNode(const rclcpp::NodeOptions & options = {});
private:
  void errorCallback(const std_msgs::msg::Float64::SharedPtr msg);
  void timerCallback();

  // parameters & topics
  double a0_, a1_, b1_;
  std::string error_topic_, output_topic_;

  // controller & ROS interfaces
  std::shared_ptr<LeadController> controller_;
  rclcpp::Subscription<std_msgs::msg::Float64>::SharedPtr error_sub_;
  rclcpp::Publisher<std_msgs::msg::Float64>::SharedPtr output_pub_;
  rclcpp::TimerBase::SharedPtr timer_;
};

#endif  // LEAD_CONTROLLER_NODE_HPP_
