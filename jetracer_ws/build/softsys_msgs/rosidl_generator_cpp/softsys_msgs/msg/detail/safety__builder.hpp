// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from softsys_msgs:msg/Safety.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "softsys_msgs/msg/safety.hpp"


#ifndef SOFTSYS_MSGS__MSG__DETAIL__SAFETY__BUILDER_HPP_
#define SOFTSYS_MSGS__MSG__DETAIL__SAFETY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "softsys_msgs/msg/detail/safety__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace softsys_msgs
{

namespace msg
{

namespace builder
{

class Init_Safety_is_recieving_auto_throttle
{
public:
  explicit Init_Safety_is_recieving_auto_throttle(::softsys_msgs::msg::Safety & msg)
  : msg_(msg)
  {}
  ::softsys_msgs::msg::Safety is_recieving_auto_throttle(::softsys_msgs::msg::Safety::_is_recieving_auto_throttle_type arg)
  {
    msg_.is_recieving_auto_throttle = std::move(arg);
    return std::move(msg_);
  }

private:
  ::softsys_msgs::msg::Safety msg_;
};

class Init_Safety_is_recieving_auto_steer
{
public:
  explicit Init_Safety_is_recieving_auto_steer(::softsys_msgs::msg::Safety & msg)
  : msg_(msg)
  {}
  Init_Safety_is_recieving_auto_throttle is_recieving_auto_steer(::softsys_msgs::msg::Safety::_is_recieving_auto_steer_type arg)
  {
    msg_.is_recieving_auto_steer = std::move(arg);
    return Init_Safety_is_recieving_auto_throttle(msg_);
  }

private:
  ::softsys_msgs::msg::Safety msg_;
};

class Init_Safety_is_recieving_joystick
{
public:
  explicit Init_Safety_is_recieving_joystick(::softsys_msgs::msg::Safety & msg)
  : msg_(msg)
  {}
  Init_Safety_is_recieving_auto_steer is_recieving_joystick(::softsys_msgs::msg::Safety::_is_recieving_joystick_type arg)
  {
    msg_.is_recieving_joystick = std::move(arg);
    return Init_Safety_is_recieving_auto_steer(msg_);
  }

private:
  ::softsys_msgs::msg::Safety msg_;
};

class Init_Safety_is_emergency_stop
{
public:
  explicit Init_Safety_is_emergency_stop(::softsys_msgs::msg::Safety & msg)
  : msg_(msg)
  {}
  Init_Safety_is_recieving_joystick is_emergency_stop(::softsys_msgs::msg::Safety::_is_emergency_stop_type arg)
  {
    msg_.is_emergency_stop = std::move(arg);
    return Init_Safety_is_recieving_joystick(msg_);
  }

private:
  ::softsys_msgs::msg::Safety msg_;
};

class Init_Safety_is_auto_throttle
{
public:
  explicit Init_Safety_is_auto_throttle(::softsys_msgs::msg::Safety & msg)
  : msg_(msg)
  {}
  Init_Safety_is_emergency_stop is_auto_throttle(::softsys_msgs::msg::Safety::_is_auto_throttle_type arg)
  {
    msg_.is_auto_throttle = std::move(arg);
    return Init_Safety_is_emergency_stop(msg_);
  }

private:
  ::softsys_msgs::msg::Safety msg_;
};

class Init_Safety_is_auto_steer
{
public:
  explicit Init_Safety_is_auto_steer(::softsys_msgs::msg::Safety & msg)
  : msg_(msg)
  {}
  Init_Safety_is_auto_throttle is_auto_steer(::softsys_msgs::msg::Safety::_is_auto_steer_type arg)
  {
    msg_.is_auto_steer = std::move(arg);
    return Init_Safety_is_auto_throttle(msg_);
  }

private:
  ::softsys_msgs::msg::Safety msg_;
};

class Init_Safety_is_auto
{
public:
  explicit Init_Safety_is_auto(::softsys_msgs::msg::Safety & msg)
  : msg_(msg)
  {}
  Init_Safety_is_auto_steer is_auto(::softsys_msgs::msg::Safety::_is_auto_type arg)
  {
    msg_.is_auto = std::move(arg);
    return Init_Safety_is_auto_steer(msg_);
  }

private:
  ::softsys_msgs::msg::Safety msg_;
};

class Init_Safety_header
{
public:
  Init_Safety_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Safety_is_auto header(::softsys_msgs::msg::Safety::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_Safety_is_auto(msg_);
  }

private:
  ::softsys_msgs::msg::Safety msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::softsys_msgs::msg::Safety>()
{
  return softsys_msgs::msg::builder::Init_Safety_header();
}

}  // namespace softsys_msgs

#endif  // SOFTSYS_MSGS__MSG__DETAIL__SAFETY__BUILDER_HPP_
