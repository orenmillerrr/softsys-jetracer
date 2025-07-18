// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from softsys_msgs:msg/Steer.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "softsys_msgs/msg/detail/steer__rosidl_typesupport_introspection_c.h"
#include "softsys_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "softsys_msgs/msg/detail/steer__functions.h"
#include "softsys_msgs/msg/detail/steer__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void softsys_msgs__msg__Steer__rosidl_typesupport_introspection_c__Steer_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  softsys_msgs__msg__Steer__init(message_memory);
}

void softsys_msgs__msg__Steer__rosidl_typesupport_introspection_c__Steer_fini_function(void * message_memory)
{
  softsys_msgs__msg__Steer__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember softsys_msgs__msg__Steer__rosidl_typesupport_introspection_c__Steer_message_member_array[2] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(softsys_msgs__msg__Steer, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "steer_angle",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(softsys_msgs__msg__Steer, steer_angle),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers softsys_msgs__msg__Steer__rosidl_typesupport_introspection_c__Steer_message_members = {
  "softsys_msgs__msg",  // message namespace
  "Steer",  // message name
  2,  // number of fields
  sizeof(softsys_msgs__msg__Steer),
  false,  // has_any_key_member_
  softsys_msgs__msg__Steer__rosidl_typesupport_introspection_c__Steer_message_member_array,  // message members
  softsys_msgs__msg__Steer__rosidl_typesupport_introspection_c__Steer_init_function,  // function to initialize message memory (memory has to be allocated)
  softsys_msgs__msg__Steer__rosidl_typesupport_introspection_c__Steer_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t softsys_msgs__msg__Steer__rosidl_typesupport_introspection_c__Steer_message_type_support_handle = {
  0,
  &softsys_msgs__msg__Steer__rosidl_typesupport_introspection_c__Steer_message_members,
  get_message_typesupport_handle_function,
  &softsys_msgs__msg__Steer__get_type_hash,
  &softsys_msgs__msg__Steer__get_type_description,
  &softsys_msgs__msg__Steer__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_softsys_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, softsys_msgs, msg, Steer)() {
  softsys_msgs__msg__Steer__rosidl_typesupport_introspection_c__Steer_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  if (!softsys_msgs__msg__Steer__rosidl_typesupport_introspection_c__Steer_message_type_support_handle.typesupport_identifier) {
    softsys_msgs__msg__Steer__rosidl_typesupport_introspection_c__Steer_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &softsys_msgs__msg__Steer__rosidl_typesupport_introspection_c__Steer_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
