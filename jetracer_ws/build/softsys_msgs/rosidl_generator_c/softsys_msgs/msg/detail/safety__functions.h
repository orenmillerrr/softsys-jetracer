// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from softsys_msgs:msg/Safety.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "softsys_msgs/msg/safety.h"


#ifndef SOFTSYS_MSGS__MSG__DETAIL__SAFETY__FUNCTIONS_H_
#define SOFTSYS_MSGS__MSG__DETAIL__SAFETY__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/action_type_support_struct.h"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_runtime_c/service_type_support_struct.h"
#include "rosidl_runtime_c/type_description/type_description__struct.h"
#include "rosidl_runtime_c/type_description/type_source__struct.h"
#include "rosidl_runtime_c/type_hash.h"
#include "rosidl_runtime_c/visibility_control.h"
#include "softsys_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "softsys_msgs/msg/detail/safety__struct.h"

/// Initialize msg/Safety message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * softsys_msgs__msg__Safety
 * )) before or use
 * softsys_msgs__msg__Safety__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_softsys_msgs
bool
softsys_msgs__msg__Safety__init(softsys_msgs__msg__Safety * msg);

/// Finalize msg/Safety message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_softsys_msgs
void
softsys_msgs__msg__Safety__fini(softsys_msgs__msg__Safety * msg);

/// Create msg/Safety message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * softsys_msgs__msg__Safety__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_softsys_msgs
softsys_msgs__msg__Safety *
softsys_msgs__msg__Safety__create(void);

/// Destroy msg/Safety message.
/**
 * It calls
 * softsys_msgs__msg__Safety__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_softsys_msgs
void
softsys_msgs__msg__Safety__destroy(softsys_msgs__msg__Safety * msg);

/// Check for msg/Safety message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_softsys_msgs
bool
softsys_msgs__msg__Safety__are_equal(const softsys_msgs__msg__Safety * lhs, const softsys_msgs__msg__Safety * rhs);

/// Copy a msg/Safety message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_softsys_msgs
bool
softsys_msgs__msg__Safety__copy(
  const softsys_msgs__msg__Safety * input,
  softsys_msgs__msg__Safety * output);

/// Retrieve pointer to the hash of the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_softsys_msgs
const rosidl_type_hash_t *
softsys_msgs__msg__Safety__get_type_hash(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_softsys_msgs
const rosidl_runtime_c__type_description__TypeDescription *
softsys_msgs__msg__Safety__get_type_description(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the single raw source text that defined this type.
ROSIDL_GENERATOR_C_PUBLIC_softsys_msgs
const rosidl_runtime_c__type_description__TypeSource *
softsys_msgs__msg__Safety__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the recursive raw sources that defined the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_softsys_msgs
const rosidl_runtime_c__type_description__TypeSource__Sequence *
softsys_msgs__msg__Safety__get_type_description_sources(
  const rosidl_message_type_support_t * type_support);

/// Initialize array of msg/Safety messages.
/**
 * It allocates the memory for the number of elements and calls
 * softsys_msgs__msg__Safety__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_softsys_msgs
bool
softsys_msgs__msg__Safety__Sequence__init(softsys_msgs__msg__Safety__Sequence * array, size_t size);

/// Finalize array of msg/Safety messages.
/**
 * It calls
 * softsys_msgs__msg__Safety__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_softsys_msgs
void
softsys_msgs__msg__Safety__Sequence__fini(softsys_msgs__msg__Safety__Sequence * array);

/// Create array of msg/Safety messages.
/**
 * It allocates the memory for the array and calls
 * softsys_msgs__msg__Safety__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_softsys_msgs
softsys_msgs__msg__Safety__Sequence *
softsys_msgs__msg__Safety__Sequence__create(size_t size);

/// Destroy array of msg/Safety messages.
/**
 * It calls
 * softsys_msgs__msg__Safety__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_softsys_msgs
void
softsys_msgs__msg__Safety__Sequence__destroy(softsys_msgs__msg__Safety__Sequence * array);

/// Check for msg/Safety message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_softsys_msgs
bool
softsys_msgs__msg__Safety__Sequence__are_equal(const softsys_msgs__msg__Safety__Sequence * lhs, const softsys_msgs__msg__Safety__Sequence * rhs);

/// Copy an array of msg/Safety messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_softsys_msgs
bool
softsys_msgs__msg__Safety__Sequence__copy(
  const softsys_msgs__msg__Safety__Sequence * input,
  softsys_msgs__msg__Safety__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // SOFTSYS_MSGS__MSG__DETAIL__SAFETY__FUNCTIONS_H_
