// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from softsys_msgs:msg/Throttle.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "softsys_msgs/msg/throttle.hpp"


#ifndef SOFTSYS_MSGS__MSG__DETAIL__THROTTLE__BUILDER_HPP_
#define SOFTSYS_MSGS__MSG__DETAIL__THROTTLE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "softsys_msgs/msg/detail/throttle__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace softsys_msgs
{

namespace msg
{

namespace builder
{

class Init_Throttle_throttle
{
public:
  explicit Init_Throttle_throttle(::softsys_msgs::msg::Throttle & msg)
  : msg_(msg)
  {}
  ::softsys_msgs::msg::Throttle throttle(::softsys_msgs::msg::Throttle::_throttle_type arg)
  {
    msg_.throttle = std::move(arg);
    return std::move(msg_);
  }

private:
  ::softsys_msgs::msg::Throttle msg_;
};

class Init_Throttle_header
{
public:
  Init_Throttle_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Throttle_throttle header(::softsys_msgs::msg::Throttle::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_Throttle_throttle(msg_);
  }

private:
  ::softsys_msgs::msg::Throttle msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::softsys_msgs::msg::Throttle>()
{
  return softsys_msgs::msg::builder::Init_Throttle_header();
}

}  // namespace softsys_msgs

#endif  // SOFTSYS_MSGS__MSG__DETAIL__THROTTLE__BUILDER_HPP_
