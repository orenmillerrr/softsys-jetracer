// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from softsys_msgs:msg/Safety.idl
// generated code does not contain a copyright notice
#include "softsys_msgs/msg/detail/safety__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"

bool
softsys_msgs__msg__Safety__init(softsys_msgs__msg__Safety * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    softsys_msgs__msg__Safety__fini(msg);
    return false;
  }
  // is_auto
  // is_auto_steer
  // is_auto_throttle
  // is_emergency_stop
  // is_recieving_joystick
  // is_recieving_auto_steer
  // is_recieving_auto_throttle
  return true;
}

void
softsys_msgs__msg__Safety__fini(softsys_msgs__msg__Safety * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // is_auto
  // is_auto_steer
  // is_auto_throttle
  // is_emergency_stop
  // is_recieving_joystick
  // is_recieving_auto_steer
  // is_recieving_auto_throttle
}

bool
softsys_msgs__msg__Safety__are_equal(const softsys_msgs__msg__Safety * lhs, const softsys_msgs__msg__Safety * rhs)
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
  // is_auto
  if (lhs->is_auto != rhs->is_auto) {
    return false;
  }
  // is_auto_steer
  if (lhs->is_auto_steer != rhs->is_auto_steer) {
    return false;
  }
  // is_auto_throttle
  if (lhs->is_auto_throttle != rhs->is_auto_throttle) {
    return false;
  }
  // is_emergency_stop
  if (lhs->is_emergency_stop != rhs->is_emergency_stop) {
    return false;
  }
  // is_recieving_joystick
  if (lhs->is_recieving_joystick != rhs->is_recieving_joystick) {
    return false;
  }
  // is_recieving_auto_steer
  if (lhs->is_recieving_auto_steer != rhs->is_recieving_auto_steer) {
    return false;
  }
  // is_recieving_auto_throttle
  if (lhs->is_recieving_auto_throttle != rhs->is_recieving_auto_throttle) {
    return false;
  }
  return true;
}

bool
softsys_msgs__msg__Safety__copy(
  const softsys_msgs__msg__Safety * input,
  softsys_msgs__msg__Safety * output)
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
  // is_auto
  output->is_auto = input->is_auto;
  // is_auto_steer
  output->is_auto_steer = input->is_auto_steer;
  // is_auto_throttle
  output->is_auto_throttle = input->is_auto_throttle;
  // is_emergency_stop
  output->is_emergency_stop = input->is_emergency_stop;
  // is_recieving_joystick
  output->is_recieving_joystick = input->is_recieving_joystick;
  // is_recieving_auto_steer
  output->is_recieving_auto_steer = input->is_recieving_auto_steer;
  // is_recieving_auto_throttle
  output->is_recieving_auto_throttle = input->is_recieving_auto_throttle;
  return true;
}

softsys_msgs__msg__Safety *
softsys_msgs__msg__Safety__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  softsys_msgs__msg__Safety * msg = (softsys_msgs__msg__Safety *)allocator.allocate(sizeof(softsys_msgs__msg__Safety), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(softsys_msgs__msg__Safety));
  bool success = softsys_msgs__msg__Safety__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
softsys_msgs__msg__Safety__destroy(softsys_msgs__msg__Safety * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    softsys_msgs__msg__Safety__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
softsys_msgs__msg__Safety__Sequence__init(softsys_msgs__msg__Safety__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  softsys_msgs__msg__Safety * data = NULL;

  if (size) {
    data = (softsys_msgs__msg__Safety *)allocator.zero_allocate(size, sizeof(softsys_msgs__msg__Safety), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = softsys_msgs__msg__Safety__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        softsys_msgs__msg__Safety__fini(&data[i - 1]);
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
softsys_msgs__msg__Safety__Sequence__fini(softsys_msgs__msg__Safety__Sequence * array)
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
      softsys_msgs__msg__Safety__fini(&array->data[i]);
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

softsys_msgs__msg__Safety__Sequence *
softsys_msgs__msg__Safety__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  softsys_msgs__msg__Safety__Sequence * array = (softsys_msgs__msg__Safety__Sequence *)allocator.allocate(sizeof(softsys_msgs__msg__Safety__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = softsys_msgs__msg__Safety__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
softsys_msgs__msg__Safety__Sequence__destroy(softsys_msgs__msg__Safety__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    softsys_msgs__msg__Safety__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
softsys_msgs__msg__Safety__Sequence__are_equal(const softsys_msgs__msg__Safety__Sequence * lhs, const softsys_msgs__msg__Safety__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!softsys_msgs__msg__Safety__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
softsys_msgs__msg__Safety__Sequence__copy(
  const softsys_msgs__msg__Safety__Sequence * input,
  softsys_msgs__msg__Safety__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(softsys_msgs__msg__Safety);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    softsys_msgs__msg__Safety * data =
      (softsys_msgs__msg__Safety *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!softsys_msgs__msg__Safety__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          softsys_msgs__msg__Safety__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!softsys_msgs__msg__Safety__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
