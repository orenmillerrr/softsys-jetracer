// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from softsys_msgs:msg/Throttle.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "softsys_msgs/msg/throttle.hpp"


#ifndef SOFTSYS_MSGS__MSG__DETAIL__THROTTLE__TRAITS_HPP_
#define SOFTSYS_MSGS__MSG__DETAIL__THROTTLE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "softsys_msgs/msg/detail/throttle__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace softsys_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Throttle & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: throttle
  {
    out << "throttle: ";
    rosidl_generator_traits::value_to_yaml(msg.throttle, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Throttle & msg,
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

  // member: throttle
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "throttle: ";
    rosidl_generator_traits::value_to_yaml(msg.throttle, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Throttle & msg, bool use_flow_style = false)
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
  const softsys_msgs::msg::Throttle & msg,
  std::ostream & out, size_t indentation = 0)
{
  softsys_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use softsys_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const softsys_msgs::msg::Throttle & msg)
{
  return softsys_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<softsys_msgs::msg::Throttle>()
{
  return "softsys_msgs::msg::Throttle";
}

template<>
inline const char * name<softsys_msgs::msg::Throttle>()
{
  return "softsys_msgs/msg/Throttle";
}

template<>
struct has_fixed_size<softsys_msgs::msg::Throttle>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<softsys_msgs::msg::Throttle>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<softsys_msgs::msg::Throttle>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // SOFTSYS_MSGS__MSG__DETAIL__THROTTLE__TRAITS_HPP_
