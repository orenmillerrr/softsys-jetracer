// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from softsys_msgs:msg/Steer.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "softsys_msgs/msg/steer.h"


#ifndef SOFTSYS_MSGS__MSG__DETAIL__STEER__STRUCT_H_
#define SOFTSYS_MSGS__MSG__DETAIL__STEER__STRUCT_H_

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

/// Struct defined in msg/Steer in the package softsys_msgs.
/**
  * Percentage of max steering angle to be commanded, from -1.0 to 1.0. All commands outside of this range will be ignored.
 */
typedef struct softsys_msgs__msg__Steer
{
  std_msgs__msg__Header header;
  double steer_angle;
} softsys_msgs__msg__Steer;

// Struct for a sequence of softsys_msgs__msg__Steer.
typedef struct softsys_msgs__msg__Steer__Sequence
{
  softsys_msgs__msg__Steer * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} softsys_msgs__msg__Steer__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SOFTSYS_MSGS__MSG__DETAIL__STEER__STRUCT_H_
