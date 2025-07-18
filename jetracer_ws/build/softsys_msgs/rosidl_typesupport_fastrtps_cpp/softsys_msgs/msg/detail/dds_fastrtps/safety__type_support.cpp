// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from softsys_msgs:msg/Safety.idl
// generated code does not contain a copyright notice
#include "softsys_msgs/msg/detail/safety__rosidl_typesupport_fastrtps_cpp.hpp"
#include "softsys_msgs/msg/detail/safety__functions.h"
#include "softsys_msgs/msg/detail/safety__struct.hpp"

#include <cstddef>
#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions
namespace std_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const std_msgs::msg::Header &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  std_msgs::msg::Header &);
size_t get_serialized_size(
  const std_msgs::msg::Header &,
  size_t current_alignment);
size_t
max_serialized_size_Header(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
bool cdr_serialize_key(
  const std_msgs::msg::Header &,
  eprosima::fastcdr::Cdr &);
size_t get_serialized_size_key(
  const std_msgs::msg::Header &,
  size_t current_alignment);
size_t
max_serialized_size_key_Header(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace std_msgs


namespace softsys_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{


bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_softsys_msgs
cdr_serialize(
  const softsys_msgs::msg::Safety & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.header,
    cdr);

  // Member: is_auto
  cdr << (ros_message.is_auto ? true : false);

  // Member: is_auto_steer
  cdr << (ros_message.is_auto_steer ? true : false);

  // Member: is_auto_throttle
  cdr << (ros_message.is_auto_throttle ? true : false);

  // Member: is_emergency_stop
  cdr << (ros_message.is_emergency_stop ? true : false);

  // Member: is_recieving_joystick
  cdr << (ros_message.is_recieving_joystick ? true : false);

  // Member: is_recieving_auto_steer
  cdr << (ros_message.is_recieving_auto_steer ? true : false);

  // Member: is_recieving_auto_throttle
  cdr << (ros_message.is_recieving_auto_throttle ? true : false);

  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_softsys_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  softsys_msgs::msg::Safety & ros_message)
{
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.header);

  // Member: is_auto
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.is_auto = tmp ? true : false;
  }

  // Member: is_auto_steer
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.is_auto_steer = tmp ? true : false;
  }

  // Member: is_auto_throttle
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.is_auto_throttle = tmp ? true : false;
  }

  // Member: is_emergency_stop
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.is_emergency_stop = tmp ? true : false;
  }

  // Member: is_recieving_joystick
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.is_recieving_joystick = tmp ? true : false;
  }

  // Member: is_recieving_auto_steer
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.is_recieving_auto_steer = tmp ? true : false;
  }

  // Member: is_recieving_auto_throttle
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.is_recieving_auto_throttle = tmp ? true : false;
  }

  return true;
}


size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_softsys_msgs
get_serialized_size(
  const softsys_msgs::msg::Safety & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: header
  current_alignment +=
    std_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.header, current_alignment);

  // Member: is_auto
  {
    size_t item_size = sizeof(ros_message.is_auto);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: is_auto_steer
  {
    size_t item_size = sizeof(ros_message.is_auto_steer);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: is_auto_throttle
  {
    size_t item_size = sizeof(ros_message.is_auto_throttle);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: is_emergency_stop
  {
    size_t item_size = sizeof(ros_message.is_emergency_stop);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: is_recieving_joystick
  {
    size_t item_size = sizeof(ros_message.is_recieving_joystick);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: is_recieving_auto_steer
  {
    size_t item_size = sizeof(ros_message.is_recieving_auto_steer);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: is_recieving_auto_throttle
  {
    size_t item_size = sizeof(ros_message.is_recieving_auto_throttle);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}


size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_softsys_msgs
max_serialized_size_Safety(
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

  // Member: header
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        std_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_Header(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // Member: is_auto
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // Member: is_auto_steer
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // Member: is_auto_throttle
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // Member: is_emergency_stop
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // Member: is_recieving_joystick
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // Member: is_recieving_auto_steer
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // Member: is_recieving_auto_throttle
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
    using DataType = softsys_msgs::msg::Safety;
    is_plain =
      (
      offsetof(DataType, is_recieving_auto_throttle) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_softsys_msgs
cdr_serialize_key(
  const softsys_msgs::msg::Safety & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize_key(
    ros_message.header,
    cdr);

  // Member: is_auto
  cdr << (ros_message.is_auto ? true : false);

  // Member: is_auto_steer
  cdr << (ros_message.is_auto_steer ? true : false);

  // Member: is_auto_throttle
  cdr << (ros_message.is_auto_throttle ? true : false);

  // Member: is_emergency_stop
  cdr << (ros_message.is_emergency_stop ? true : false);

  // Member: is_recieving_joystick
  cdr << (ros_message.is_recieving_joystick ? true : false);

  // Member: is_recieving_auto_steer
  cdr << (ros_message.is_recieving_auto_steer ? true : false);

  // Member: is_recieving_auto_throttle
  cdr << (ros_message.is_recieving_auto_throttle ? true : false);

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_softsys_msgs
get_serialized_size_key(
  const softsys_msgs::msg::Safety & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: header
  current_alignment +=
    std_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size_key(
    ros_message.header, current_alignment);

  // Member: is_auto
  {
    size_t item_size = sizeof(ros_message.is_auto);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: is_auto_steer
  {
    size_t item_size = sizeof(ros_message.is_auto_steer);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: is_auto_throttle
  {
    size_t item_size = sizeof(ros_message.is_auto_throttle);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: is_emergency_stop
  {
    size_t item_size = sizeof(ros_message.is_emergency_stop);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: is_recieving_joystick
  {
    size_t item_size = sizeof(ros_message.is_recieving_joystick);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: is_recieving_auto_steer
  {
    size_t item_size = sizeof(ros_message.is_recieving_auto_steer);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: is_recieving_auto_throttle
  {
    size_t item_size = sizeof(ros_message.is_recieving_auto_throttle);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_softsys_msgs
max_serialized_size_key_Safety(
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

  // Member: header
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        std_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_key_Header(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: is_auto
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: is_auto_steer
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: is_auto_throttle
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: is_emergency_stop
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: is_recieving_joystick
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: is_recieving_auto_steer
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: is_recieving_auto_throttle
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
    using DataType = softsys_msgs::msg::Safety;
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
  auto typed_message =
    static_cast<const softsys_msgs::msg::Safety *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _Safety__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<softsys_msgs::msg::Safety *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _Safety__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const softsys_msgs::msg::Safety *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _Safety__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_Safety(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _Safety__callbacks = {
  "softsys_msgs::msg",
  "Safety",
  _Safety__cdr_serialize,
  _Safety__cdr_deserialize,
  _Safety__get_serialized_size,
  _Safety__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _Safety__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_Safety__callbacks,
  get_message_typesupport_handle_function,
  &softsys_msgs__msg__Safety__get_type_hash,
  &softsys_msgs__msg__Safety__get_type_description,
  &softsys_msgs__msg__Safety__get_type_description_sources,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace softsys_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_softsys_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<softsys_msgs::msg::Safety>()
{
  return &softsys_msgs::msg::typesupport_fastrtps_cpp::_Safety__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, softsys_msgs, msg, Safety)() {
  return &softsys_msgs::msg::typesupport_fastrtps_cpp::_Safety__handle;
}

#ifdef __cplusplus
}
#endif
