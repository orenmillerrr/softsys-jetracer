// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from softsys_msgs:msg/Safety.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "softsys_msgs/msg/safety.h"


#ifndef SOFTSYS_MSGS__MSG__DETAIL__SAFETY__STRUCT_H_
#define SOFTSYS_MSGS__MSG__DETAIL__SAFETY__STRUCT_H_

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

/// Struct defined in msg/Safety in the package softsys_msgs.
typedef struct softsys_msgs__msg__Safety
{
  std_msgs__msg__Header header;
  bool is_auto;
  bool is_auto_steer;
  bool is_auto_throttle;
  bool is_emergency_stop;
  bool is_recieving_joystick;
  bool is_recieving_auto_steer;
  bool is_recieving_auto_throttle;
} softsys_msgs__msg__Safety;

// Struct for a sequence of softsys_msgs__msg__Safety.
typedef struct softsys_msgs__msg__Safety__Sequence
{
  softsys_msgs__msg__Safety * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} softsys_msgs__msg__Safety__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SOFTSYS_MSGS__MSG__DETAIL__SAFETY__STRUCT_H_
