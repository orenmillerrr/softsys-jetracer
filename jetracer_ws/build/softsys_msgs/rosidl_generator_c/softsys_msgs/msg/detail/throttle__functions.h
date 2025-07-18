// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from softsys_msgs:msg/Throttle.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "softsys_msgs/msg/throttle.h"


#ifndef SOFTSYS_MSGS__MSG__DETAIL__THROTTLE__FUNCTIONS_H_
#define SOFTSYS_MSGS__MSG__DETAIL__THROTTLE__FUNCTIONS_H_

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

#include "softsys_msgs/msg/detail/throttle__struct.h"

/// Initialize msg/Throttle message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * softsys_msgs__msg__Throttle
 * )) before or use
 * softsys_msgs__msg__Throttle__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_softsys_msgs
bool
softsys_msgs__msg__Throttle__init(softsys_msgs__msg__Throttle * msg);

/// Finalize msg/Throttle message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_softsys_msgs
void
softsys_msgs__msg__Throttle__fini(softsys_msgs__msg__Throttle * msg);

/// Create msg/Throttle message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * softsys_msgs__msg__Throttle__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_softsys_msgs
softsys_msgs__msg__Throttle *
softsys_msgs__msg__Throttle__create(void);

/// Destroy msg/Throttle message.
/**
 * It calls
 * softsys_msgs__msg__Throttle__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_softsys_msgs
void
softsys_msgs__msg__Throttle__destroy(softsys_msgs__msg__Throttle * msg);

/// Check for msg/Throttle message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_softsys_msgs
bool
softsys_msgs__msg__Throttle__are_equal(const softsys_msgs__msg__Throttle * lhs, const softsys_msgs__msg__Throttle * rhs);

/// Copy a msg/Throttle message.
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
softsys_msgs__msg__Throttle__copy(
  const softsys_msgs__msg__Throttle * input,
  softsys_msgs__msg__Throttle * output);

/// Retrieve pointer to the hash of the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_softsys_msgs
const rosidl_type_hash_t *
softsys_msgs__msg__Throttle__get_type_hash(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_softsys_msgs
const rosidl_runtime_c__type_description__TypeDescription *
softsys_msgs__msg__Throttle__get_type_description(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the single raw source text that defined this type.
ROSIDL_GENERATOR_C_PUBLIC_softsys_msgs
const rosidl_runtime_c__type_description__TypeSource *
softsys_msgs__msg__Throttle__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the recursive raw sources that defined the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_softsys_msgs
const rosidl_runtime_c__type_description__TypeSource__Sequence *
softsys_msgs__msg__Throttle__get_type_description_sources(
  const rosidl_message_type_support_t * type_support);

/// Initialize array of msg/Throttle messages.
/**
 * It allocates the memory for the number of elements and calls
 * softsys_msgs__msg__Throttle__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_softsys_msgs
bool
softsys_msgs__msg__Throttle__Sequence__init(softsys_msgs__msg__Throttle__Sequence * array, size_t size);

/// Finalize array of msg/Throttle messages.
/**
 * It calls
 * softsys_msgs__msg__Throttle__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_softsys_msgs
void
softsys_msgs__msg__Throttle__Sequence__fini(softsys_msgs__msg__Throttle__Sequence * array);

/// Create array of msg/Throttle messages.
/**
 * It allocates the memory for the array and calls
 * softsys_msgs__msg__Throttle__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_softsys_msgs
softsys_msgs__msg__Throttle__Sequence *
softsys_msgs__msg__Throttle__Sequence__create(size_t size);

/// Destroy array of msg/Throttle messages.
/**
 * It calls
 * softsys_msgs__msg__Throttle__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_softsys_msgs
void
softsys_msgs__msg__Throttle__Sequence__destroy(softsys_msgs__msg__Throttle__Sequence * array);

/// Check for msg/Throttle message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_softsys_msgs
bool
softsys_msgs__msg__Throttle__Sequence__are_equal(const softsys_msgs__msg__Throttle__Sequence * lhs, const softsys_msgs__msg__Throttle__Sequence * rhs);

/// Copy an array of msg/Throttle messages.
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
softsys_msgs__msg__Throttle__Sequence__copy(
  const softsys_msgs__msg__Throttle__Sequence * input,
  softsys_msgs__msg__Throttle__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // SOFTSYS_MSGS__MSG__DETAIL__THROTTLE__FUNCTIONS_H_
