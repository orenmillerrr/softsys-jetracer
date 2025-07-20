#include "lead_controller_node.hpp"

LeadControllerNode::LeadControllerNode(const rclcpp::NodeOptions & options)
: Node("lead_controller_node", options)
{
  // declare & read parameters
  this->declare_parameter<double>("a0", 0.5);
  this->declare_parameter<double>("a1", 0.2);
  this->declare_parameter<double>("b1", 0.1);
  this->declare_parameter<std::string>("error_topic",   "centerline_error");
  this->declare_parameter<std::string>("output_topic",  "steering");

  this->get_parameter("a0", a0_);
  this->get_parameter("a1", a1_);
  this->get_parameter("b1", b1_);
  this->get_parameter("error_topic", error_topic_);
  this->get_parameter("output_topic", output_topic_);

  controller_ = std::make_shared<LeadController>(a0_, a1_, b1_);

  // subscribe to the error from vision
  error_sub_ = this->create_subscription<std_msgs::msg::Float64>(
    error_topic_, 10,
    std::bind(&LeadControllerNode::errorCallback, this, std::placeholders::_1)
  );

  // publish the control output
  output_pub_ = this->create_publisher<std_msgs::msg::Float64>(output_topic_, 10);

  // timer: sample at 100 Hz
  timer_ = this->create_wall_timer(
    std::chrono::milliseconds(10),
    std::bind(&LeadControllerNode::timerCallback, this)
  );
}

void LeadControllerNode::errorCallback(const std_msgs::msg::Float64::SharedPtr msg) {
  controller_->setError(msg->data);
}

void LeadControllerNode::timerCallback() {
  auto msg = std_msgs::msg::Float64();
  msg.data = controller_->getControl();
  output_pub_->publish(msg);
}

int main(int argc, char ** argv) {
  rclcpp::init(argc, argv);
  rclcpp::spin(std::make_shared<LeadControllerNode>(rclcpp::NodeOptions()));
  rclcpp::shutdown();
  return 0;
}
