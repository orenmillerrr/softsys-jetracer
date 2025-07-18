// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from softsys_msgs:msg/Throttle.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "softsys_msgs/msg/detail/throttle__functions.h"
#include "softsys_msgs/msg/detail/throttle__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace softsys_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void Throttle_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) softsys_msgs::msg::Throttle(_init);
}

void Throttle_fini_function(void * message_memory)
{
  auto typed_message = static_cast<softsys_msgs::msg::Throttle *>(message_memory);
  typed_message->~Throttle();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember Throttle_message_member_array[2] = {
  {
    "header",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<std_msgs::msg::Header>(),  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(softsys_msgs::msg::Throttle, header),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "throttle",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(softsys_msgs::msg::Throttle, throttle),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers Throttle_message_members = {
  "softsys_msgs::msg",  // message namespace
  "Throttle",  // message name
  2,  // number of fields
  sizeof(softsys_msgs::msg::Throttle),
  false,  // has_any_key_member_
  Throttle_message_member_array,  // message members
  Throttle_init_function,  // function to initialize message memory (memory has to be allocated)
  Throttle_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t Throttle_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &Throttle_message_members,
  get_message_typesupport_handle_function,
  &softsys_msgs__msg__Throttle__get_type_hash,
  &softsys_msgs__msg__Throttle__get_type_description,
  &softsys_msgs__msg__Throttle__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace softsys_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<softsys_msgs::msg::Throttle>()
{
  return &::softsys_msgs::msg::rosidl_typesupport_introspection_cpp::Throttle_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, softsys_msgs, msg, Throttle)() {
  return &::softsys_msgs::msg::rosidl_typesupport_introspection_cpp::Throttle_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
