// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from softsys_msgs:msg/Safety.idl
// generated code does not contain a copyright notice
#include "softsys_msgs/msg/detail/safety__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <cstddef>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "softsys_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "softsys_msgs/msg/detail/safety__struct.h"
#include "softsys_msgs/msg/detail/safety__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "std_msgs/msg/detail/header__functions.h"  // header

// forward declare type support functions

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_softsys_msgs
bool cdr_serialize_std_msgs__msg__Header(
  const std_msgs__msg__Header * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_softsys_msgs
bool cdr_deserialize_std_msgs__msg__Header(
  eprosima::fastcdr::Cdr & cdr,
  std_msgs__msg__Header * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_softsys_msgs
size_t get_serialized_size_std_msgs__msg__Header(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_softsys_msgs
size_t max_serialized_size_std_msgs__msg__Header(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_softsys_msgs
bool cdr_serialize_key_std_msgs__msg__Header(
  const std_msgs__msg__Header * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_softsys_msgs
size_t get_serialized_size_key_std_msgs__msg__Header(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_softsys_msgs
size_t max_serialized_size_key_std_msgs__msg__Header(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_softsys_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, std_msgs, msg, Header)();


using _Safety__ros_msg_type = softsys_msgs__msg__Safety;


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_softsys_msgs
bool cdr_serialize_softsys_msgs__msg__Safety(
  const softsys_msgs__msg__Safety * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: header
  {
    cdr_serialize_std_msgs__msg__Header(
      &ros_message->header, cdr);
  }

  // Field name: is_auto
  {
    cdr << (ros_message->is_auto ? true : false);
  }

  // Field name: is_auto_steer
  {
    cdr << (ros_message->is_auto_steer ? true : false);
  }

  // Field name: is_auto_throttle
  {
    cdr << (ros_message->is_auto_throttle ? true : false);
  }

  // Field name: is_emergency_stop
  {
    cdr << (ros_message->is_emergency_stop ? true : false);
  }

  // Field name: is_recieving_joystick
  {
    cdr << (ros_message->is_recieving_joystick ? true : false);
  }

  // Field name: is_recieving_auto_steer
  {
    cdr << (ros_message->is_recieving_auto_steer ? true : false);
  }

  // Field name: is_recieving_auto_throttle
  {
    cdr << (ros_message->is_recieving_auto_throttle ? true : false);
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_softsys_msgs
bool cdr_deserialize_softsys_msgs__msg__Safety(
  eprosima::fastcdr::Cdr & cdr,
  softsys_msgs__msg__Safety * ros_message)
{
  // Field name: header
  {
    cdr_deserialize_std_msgs__msg__Header(cdr, &ros_message->header);
  }

  // Field name: is_auto
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->is_auto = tmp ? true : false;
  }

  // Field name: is_auto_steer
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->is_auto_steer = tmp ? true : false;
  }

  // Field name: is_auto_throttle
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->is_auto_throttle = tmp ? true : false;
  }

  // Field name: is_emergency_stop
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->is_emergency_stop = tmp ? true : false;
  }

  // Field name: is_recieving_joystick
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->is_recieving_joystick = tmp ? true : false;
  }

  // Field name: is_recieving_auto_steer
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->is_recieving_auto_steer = tmp ? true : false;
  }

  // Field name: is_recieving_auto_throttle
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->is_recieving_auto_throttle = tmp ? true : false;
  }

  return true;
}  // NOLINT(readability/fn_size)


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_softsys_msgs
size_t get_serialized_size_softsys_msgs__msg__Safety(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Safety__ros_msg_type * ros_message = static_cast<const _Safety__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: header
  current_alignment += get_serialized_size_std_msgs__msg__Header(
    &(ros_message->header), current_alignment);

  // Field name: is_auto
  {
    size_t item_size = sizeof(ros_message->is_auto);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: is_auto_steer
  {
    size_t item_size = sizeof(ros_message->is_auto_steer);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: is_auto_throttle
  {
    size_t item_size = sizeof(ros_message->is_auto_throttle);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: is_emergency_stop
  {
    size_t item_size = sizeof(ros_message->is_emergency_stop);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: is_recieving_joystick
  {
    size_t item_size = sizeof(ros_message->is_recieving_joystick);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: is_recieving_auto_steer
  {
    size_t item_size = sizeof(ros_message->is_recieving_auto_steer);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: is_recieving_auto_throttle
  {
    size_t item_size = sizeof(ros_message->is_recieving_auto_throttle);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_softsys_msgs
size_t max_serialized_size_softsys_msgs__msg__Safety(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // Field name: header
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_std_msgs__msg__Header(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: is_auto
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: is_auto_steer
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: is_auto_throttle
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: is_emergency_stop
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: is_recieving_joystick
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: is_recieving_auto_steer
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: is_recieving_auto_throttle
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }


  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = softsys_msgs__msg__Safety;
    is_plain =
      (
      offsetof(DataType, is_recieving_auto_throttle) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_softsys_msgs
bool cdr_serialize_key_softsys_msgs__msg__Safety(
  const softsys_msgs__msg__Safety * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: header
  {
    cdr_serialize_key_std_msgs__msg__Header(
      &ros_message->header, cdr);
  }

  // Field name: is_auto
  {
    cdr << (ros_message->is_auto ? true : false);
  }

  // Field name: is_auto_steer
  {
    cdr << (ros_message->is_auto_steer ? true : false);
  }

  // Field name: is_auto_throttle
  {
    cdr << (ros_message->is_auto_throttle ? true : false);
  }

  // Field name: is_emergency_stop
  {
    cdr << (ros_message->is_emergency_stop ? true : false);
  }

  // Field name: is_recieving_joystick
  {
    cdr << (ros_message->is_recieving_joystick ? true : false);
  }

  // Field name: is_recieving_auto_steer
  {
    cdr << (ros_message->is_recieving_auto_steer ? true : false);
  }

  // Field name: is_recieving_auto_throttle
  {
    cdr << (ros_message->is_recieving_auto_throttle ? true : false);
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_softsys_msgs
size_t get_serialized_size_key_softsys_msgs__msg__Safety(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Safety__ros_msg_type * ros_message = static_cast<const _Safety__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;

  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: header
  current_alignment += get_serialized_size_key_std_msgs__msg__Header(
    &(ros_message->header), current_alignment);

  // Field name: is_auto
  {
    size_t item_size = sizeof(ros_message->is_auto);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: is_auto_steer
  {
    size_t item_size = sizeof(ros_message->is_auto_steer);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: is_auto_throttle
  {
    size_t item_size = sizeof(ros_message->is_auto_throttle);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: is_emergency_stop
  {
    size_t item_size = sizeof(ros_message->is_emergency_stop);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: is_recieving_joystick
  {
    size_t item_size = sizeof(ros_message->is_recieving_joystick);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: is_recieving_auto_steer
  {
    size_t item_size = sizeof(ros_message->is_recieving_auto_steer);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: is_recieving_auto_throttle
  {
    size_t item_size = sizeof(ros_message->is_recieving_auto_throttle);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_softsys_msgs
size_t max_serialized_size_key_softsys_msgs__msg__Safety(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;
  // Field name: header
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_std_msgs__msg__Header(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: is_auto
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: is_auto_steer
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: is_auto_throttle
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: is_emergency_stop
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: is_recieving_joystick
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: is_recieving_auto_steer
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: is_recieving_auto_throttle
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = softsys_msgs__msg__Safety;
    is_plain =
      (
      offsetof(DataType, is_recieving_auto_throttle) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}


static bool _Safety__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const softsys_msgs__msg__Safety * ros_message = static_cast<const softsys_msgs__msg__Safety *>(untyped_ros_message);
  (void)ros_message;
  return cdr_serialize_softsys_msgs__msg__Safety(ros_message, cdr);
}

static bool _Safety__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  softsys_msgs__msg__Safety * ros_message = static_cast<softsys_msgs__msg__Safety *>(untyped_ros_message);
  (void)ros_message;
  return cdr_deserialize_softsys_msgs__msg__Safety(cdr, ros_message);
}

static uint32_t _Safety__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_softsys_msgs__msg__Safety(
      untyped_ros_message, 0));
}

static size_t _Safety__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_softsys_msgs__msg__Safety(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_Safety = {
  "softsys_msgs::msg",
  "Safety",
  _Safety__cdr_serialize,
  _Safety__cdr_deserialize,
  _Safety__get_serialized_size,
  _Safety__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _Safety__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Safety,
  get_message_typesupport_handle_function,
  &softsys_msgs__msg__Safety__get_type_hash,
  &softsys_msgs__msg__Safety__get_type_description,
  &softsys_msgs__msg__Safety__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, softsys_msgs, msg, Safety)() {
  return &_Safety__type_support;
}

#if defined(__cplusplus)
}
#endif
