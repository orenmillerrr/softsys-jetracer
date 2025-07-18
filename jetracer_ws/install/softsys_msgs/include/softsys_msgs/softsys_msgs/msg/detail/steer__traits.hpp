// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from softsys_msgs:msg/Steer.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "softsys_msgs/msg/steer.hpp"


#ifndef SOFTSYS_MSGS__MSG__DETAIL__STEER__TRAITS_HPP_
#define SOFTSYS_MSGS__MSG__DETAIL__STEER__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "softsys_msgs/msg/detail/steer__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace softsys_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Steer & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: steer_angle
  {
    out << "steer_angle: ";
    rosidl_generator_traits::value_to_yaml(msg.steer_angle, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Steer & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header:\n";
    to_block_style_yaml(msg.header, out, indentation + 2);
  }

  // member: steer_angle
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "steer_angle: ";
    rosidl_generator_traits::value_to_yaml(msg.steer_angle, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Steer & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace softsys_msgs

namespace rosidl_generator_traits
{

[[deprecated("use softsys_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const softsys_msgs::msg::Steer & msg,
  std::ostream & out, size_t indentation = 0)
{
  softsys_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use softsys_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const softsys_msgs::msg::Steer & msg)
{
  return softsys_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<softsys_msgs::msg::Steer>()
{
  return "softsys_msgs::msg::Steer";
}

template<>
inline const char * name<softsys_msgs::msg::Steer>()
{
  return "softsys_msgs/msg/Steer";
}

template<>
struct has_fixed_size<softsys_msgs::msg::Steer>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<softsys_msgs::msg::Steer>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<softsys_msgs::msg::Steer>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // SOFTSYS_MSGS__MSG__DETAIL__STEER__TRAITS_HPP_
