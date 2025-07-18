// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from softsys_msgs:msg/Safety.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "softsys_msgs/msg/safety.hpp"


#ifndef SOFTSYS_MSGS__MSG__DETAIL__SAFETY__STRUCT_HPP_
#define SOFTSYS_MSGS__MSG__DETAIL__SAFETY__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__softsys_msgs__msg__Safety __attribute__((deprecated))
#else
# define DEPRECATED__softsys_msgs__msg__Safety __declspec(deprecated)
#endif

namespace softsys_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Safety_
{
  using Type = Safety_<ContainerAllocator>;

  explicit Safety_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->is_auto = false;
      this->is_auto_steer = false;
      this->is_auto_throttle = false;
      this->is_emergency_stop = false;
      this->is_recieving_joystick = false;
      this->is_recieving_auto_steer = false;
      this->is_recieving_auto_throttle = false;
    }
  }

  explicit Safety_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->is_auto = false;
      this->is_auto_steer = false;
      this->is_auto_throttle = false;
      this->is_emergency_stop = false;
      this->is_recieving_joystick = false;
      this->is_recieving_auto_steer = false;
      this->is_recieving_auto_throttle = false;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _is_auto_type =
    bool;
  _is_auto_type is_auto;
  using _is_auto_steer_type =
    bool;
  _is_auto_steer_type is_auto_steer;
  using _is_auto_throttle_type =
    bool;
  _is_auto_throttle_type is_auto_throttle;
  using _is_emergency_stop_type =
    bool;
  _is_emergency_stop_type is_emergency_stop;
  using _is_recieving_joystick_type =
    bool;
  _is_recieving_joystick_type is_recieving_joystick;
  using _is_recieving_auto_steer_type =
    bool;
  _is_recieving_auto_steer_type is_recieving_auto_steer;
  using _is_recieving_auto_throttle_type =
    bool;
  _is_recieving_auto_throttle_type is_recieving_auto_throttle;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__is_auto(
    const bool & _arg)
  {
    this->is_auto = _arg;
    return *this;
  }
  Type & set__is_auto_steer(
    const bool & _arg)
  {
    this->is_auto_steer = _arg;
    return *this;
  }
  Type & set__is_auto_throttle(
    const bool & _arg)
  {
    this->is_auto_throttle = _arg;
    return *this;
  }
  Type & set__is_emergency_stop(
    const bool & _arg)
  {
    this->is_emergency_stop = _arg;
    return *this;
  }
  Type & set__is_recieving_joystick(
    const bool & _arg)
  {
    this->is_recieving_joystick = _arg;
    return *this;
  }
  Type & set__is_recieving_auto_steer(
    const bool & _arg)
  {
    this->is_recieving_auto_steer = _arg;
    return *this;
  }
  Type & set__is_recieving_auto_throttle(
    const bool & _arg)
  {
    this->is_recieving_auto_throttle = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    softsys_msgs::msg::Safety_<ContainerAllocator> *;
  using ConstRawPtr =
    const softsys_msgs::msg::Safety_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<softsys_msgs::msg::Safety_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<softsys_msgs::msg::Safety_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      softsys_msgs::msg::Safety_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<softsys_msgs::msg::Safety_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      softsys_msgs::msg::Safety_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<softsys_msgs::msg::Safety_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<softsys_msgs::msg::Safety_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<softsys_msgs::msg::Safety_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__softsys_msgs__msg__Safety
    std::shared_ptr<softsys_msgs::msg::Safety_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__softsys_msgs__msg__Safety
    std::shared_ptr<softsys_msgs::msg::Safety_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Safety_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->is_auto != other.is_auto) {
      return false;
    }
    if (this->is_auto_steer != other.is_auto_steer) {
      return false;
    }
    if (this->is_auto_throttle != other.is_auto_throttle) {
      return false;
    }
    if (this->is_emergency_stop != other.is_emergency_stop) {
      return false;
    }
    if (this->is_recieving_joystick != other.is_recieving_joystick) {
      return false;
    }
    if (this->is_recieving_auto_steer != other.is_recieving_auto_steer) {
      return false;
    }
    if (this->is_recieving_auto_throttle != other.is_recieving_auto_throttle) {
      return false;
    }
    return true;
  }
  bool operator!=(const Safety_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Safety_

// alias to use template instance with default allocator
using Safety =
  softsys_msgs::msg::Safety_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace softsys_msgs

#endif  // SOFTSYS_MSGS__MSG__DETAIL__SAFETY__STRUCT_HPP_
