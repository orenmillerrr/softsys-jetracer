// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from softsys_msgs:msg/Throttle.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "softsys_msgs/msg/throttle.h"


#ifndef SOFTSYS_MSGS__MSG__DETAIL__THROTTLE__STRUCT_H_
#define SOFTSYS_MSGS__MSG__DETAIL__THROTTLE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"

/// Struct defined in msg/Throttle in the package softsys_msgs.
/**
  * percentage of max throttle to be commanded -1.0 to 1.0. All commands outside of this range will be ignored.
 */
typedef struct softsys_msgs__msg__Throttle
{
  std_msgs__msg__Header header;
  double throttle;
} softsys_msgs__msg__Throttle;

// Struct for a sequence of softsys_msgs__msg__Throttle.
typedef struct softsys_msgs__msg__Throttle__Sequence
{
  softsys_msgs__msg__Throttle * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} softsys_msgs__msg__Throttle__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SOFTSYS_MSGS__MSG__DETAIL__THROTTLE__STRUCT_H_
