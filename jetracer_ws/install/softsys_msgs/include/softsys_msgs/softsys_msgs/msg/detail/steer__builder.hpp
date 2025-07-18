// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from softsys_msgs:msg/Steer.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "softsys_msgs/msg/steer.hpp"


#ifndef SOFTSYS_MSGS__MSG__DETAIL__STEER__BUILDER_HPP_
#define SOFTSYS_MSGS__MSG__DETAIL__STEER__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "softsys_msgs/msg/detail/steer__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace softsys_msgs
{

namespace msg
{

namespace builder
{

class Init_Steer_steer_angle
{
public:
  explicit Init_Steer_steer_angle(::softsys_msgs::msg::Steer & msg)
  : msg_(msg)
  {}
  ::softsys_msgs::msg::Steer steer_angle(::softsys_msgs::msg::Steer::_steer_angle_type arg)
  {
    msg_.steer_angle = std::move(arg);
    return std::move(msg_);
  }

private:
  ::softsys_msgs::msg::Steer msg_;
};

class Init_Steer_header
{
public:
  Init_Steer_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Steer_steer_angle header(::softsys_msgs::msg::Steer::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_Steer_steer_angle(msg_);
  }

private:
  ::softsys_msgs::msg::Steer msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::softsys_msgs::msg::Steer>()
{
  return softsys_msgs::msg::builder::Init_Steer_header();
}

}  // namespace softsys_msgs

#endif  // SOFTSYS_MSGS__MSG__DETAIL__STEER__BUILDER_HPP_
