// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from softsys_msgs:msg/Throttle.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "softsys_msgs/msg/throttle.hpp"


#ifndef SOFTSYS_MSGS__MSG__DETAIL__THROTTLE__STRUCT_HPP_
#define SOFTSYS_MSGS__MSG__DETAIL__THROTTLE__STRUCT_HPP_

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
# define DEPRECATED__softsys_msgs__msg__Throttle __attribute__((deprecated))
#else
# define DEPRECATED__softsys_msgs__msg__Throttle __declspec(deprecated)
#endif

namespace softsys_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Throttle_
{
  using Type = Throttle_<ContainerAllocator>;

  explicit Throttle_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->throttle = 0.0;
    }
  }

  explicit Throttle_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->throttle = 0.0;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _throttle_type =
    double;
  _throttle_type throttle;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__throttle(
    const double & _arg)
  {
    this->throttle = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    softsys_msgs::msg::Throttle_<ContainerAllocator> *;
  using ConstRawPtr =
    const softsys_msgs::msg::Throttle_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<softsys_msgs::msg::Throttle_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<softsys_msgs::msg::Throttle_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      softsys_msgs::msg::Throttle_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<softsys_msgs::msg::Throttle_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      softsys_msgs::msg::Throttle_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<softsys_msgs::msg::Throttle_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<softsys_msgs::msg::Throttle_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<softsys_msgs::msg::Throttle_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__softsys_msgs__msg__Throttle
    std::shared_ptr<softsys_msgs::msg::Throttle_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__softsys_msgs__msg__Throttle
    std::shared_ptr<softsys_msgs::msg::Throttle_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Throttle_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->throttle != other.throttle) {
      return false;
    }
    return true;
  }
  bool operator!=(const Throttle_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Throttle_

// alias to use template instance with default allocator
using Throttle =
  softsys_msgs::msg::Throttle_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace softsys_msgs

#endif  // SOFTSYS_MSGS__MSG__DETAIL__THROTTLE__STRUCT_HPP_
