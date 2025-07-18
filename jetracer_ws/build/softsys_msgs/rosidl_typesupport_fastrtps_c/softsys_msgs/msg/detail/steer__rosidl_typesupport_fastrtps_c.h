// generated from rosidl_typesupport_fastrtps_c/resource/idl__rosidl_typesupport_fastrtps_c.h.em
// with input from softsys_msgs:msg/Steer.idl
// generated code does not contain a copyright notice
#ifndef SOFTSYS_MSGS__MSG__DETAIL__STEER__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
#define SOFTSYS_MSGS__MSG__DETAIL__STEER__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_


#include <stddef.h>
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "softsys_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "softsys_msgs/msg/detail/steer__struct.h"
#include "fastcdr/Cdr.h"

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_softsys_msgs
bool cdr_serialize_softsys_msgs__msg__Steer(
  const softsys_msgs__msg__Steer * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_softsys_msgs
bool cdr_deserialize_softsys_msgs__msg__Steer(
  eprosima::fastcdr::Cdr &,
  softsys_msgs__msg__Steer * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_softsys_msgs
size_t get_serialized_size_softsys_msgs__msg__Steer(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_softsys_msgs
size_t max_serialized_size_softsys_msgs__msg__Steer(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_softsys_msgs
bool cdr_serialize_key_softsys_msgs__msg__Steer(
  const softsys_msgs__msg__Steer * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_softsys_msgs
size_t get_serialized_size_key_softsys_msgs__msg__Steer(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_softsys_msgs
size_t max_serialized_size_key_softsys_msgs__msg__Steer(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_softsys_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, softsys_msgs, msg, Steer)();

#ifdef __cplusplus
}
#endif

#endif  // SOFTSYS_MSGS__MSG__DETAIL__STEER__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
