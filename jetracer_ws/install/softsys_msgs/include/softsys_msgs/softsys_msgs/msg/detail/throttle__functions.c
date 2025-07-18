// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from softsys_msgs:msg/Throttle.idl
// generated code does not contain a copyright notice
#include "softsys_msgs/msg/detail/throttle__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"

bool
softsys_msgs__msg__Throttle__init(softsys_msgs__msg__Throttle * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    softsys_msgs__msg__Throttle__fini(msg);
    return false;
  }
  // throttle
  return true;
}

void
softsys_msgs__msg__Throttle__fini(softsys_msgs__msg__Throttle * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // throttle
}

bool
softsys_msgs__msg__Throttle__are_equal(const softsys_msgs__msg__Throttle * lhs, const softsys_msgs__msg__Throttle * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__are_equal(
      &(lhs->header), &(rhs->header)))
  {
    return false;
  }
  // throttle
  if (lhs->throttle != rhs->throttle) {
    return false;
  }
  return true;
}

bool
softsys_msgs__msg__Throttle__copy(
  const softsys_msgs__msg__Throttle * input,
  softsys_msgs__msg__Throttle * output)
{
  if (!input || !output) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__copy(
      &(input->header), &(output->header)))
  {
    return false;
  }
  // throttle
  output->throttle = input->throttle;
  return true;
}

softsys_msgs__msg__Throttle *
softsys_msgs__msg__Throttle__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  softsys_msgs__msg__Throttle * msg = (softsys_msgs__msg__Throttle *)allocator.allocate(sizeof(softsys_msgs__msg__Throttle), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(softsys_msgs__msg__Throttle));
  bool success = softsys_msgs__msg__Throttle__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
softsys_msgs__msg__Throttle__destroy(softsys_msgs__msg__Throttle * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    softsys_msgs__msg__Throttle__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
softsys_msgs__msg__Throttle__Sequence__init(softsys_msgs__msg__Throttle__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  softsys_msgs__msg__Throttle * data = NULL;

  if (size) {
    data = (softsys_msgs__msg__Throttle *)allocator.zero_allocate(size, sizeof(softsys_msgs__msg__Throttle), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = softsys_msgs__msg__Throttle__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        softsys_msgs__msg__Throttle__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
softsys_msgs__msg__Throttle__Sequence__fini(softsys_msgs__msg__Throttle__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      softsys_msgs__msg__Throttle__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

softsys_msgs__msg__Throttle__Sequence *
softsys_msgs__msg__Throttle__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  softsys_msgs__msg__Throttle__Sequence * array = (softsys_msgs__msg__Throttle__Sequence *)allocator.allocate(sizeof(softsys_msgs__msg__Throttle__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = softsys_msgs__msg__Throttle__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
softsys_msgs__msg__Throttle__Sequence__destroy(softsys_msgs__msg__Throttle__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    softsys_msgs__msg__Throttle__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
softsys_msgs__msg__Throttle__Sequence__are_equal(const softsys_msgs__msg__Throttle__Sequence * lhs, const softsys_msgs__msg__Throttle__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!softsys_msgs__msg__Throttle__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
softsys_msgs__msg__Throttle__Sequence__copy(
  const softsys_msgs__msg__Throttle__Sequence * input,
  softsys_msgs__msg__Throttle__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(softsys_msgs__msg__Throttle);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    softsys_msgs__msg__Throttle * data =
      (softsys_msgs__msg__Throttle *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!softsys_msgs__msg__Throttle__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          softsys_msgs__msg__Throttle__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!softsys_msgs__msg__Throttle__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
