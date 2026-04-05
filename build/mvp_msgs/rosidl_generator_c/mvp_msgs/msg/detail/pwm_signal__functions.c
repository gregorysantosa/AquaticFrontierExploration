// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from mvp_msgs:msg/PwmSignal.idl
// generated code does not contain a copyright notice
#include "mvp_msgs/msg/detail/pwm_signal__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
mvp_msgs__msg__PwmSignal__init(mvp_msgs__msg__PwmSignal * msg)
{
  if (!msg) {
    return false;
  }
  // signal
  // channel
  return true;
}

void
mvp_msgs__msg__PwmSignal__fini(mvp_msgs__msg__PwmSignal * msg)
{
  if (!msg) {
    return;
  }
  // signal
  // channel
}

bool
mvp_msgs__msg__PwmSignal__are_equal(const mvp_msgs__msg__PwmSignal * lhs, const mvp_msgs__msg__PwmSignal * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // signal
  if (lhs->signal != rhs->signal) {
    return false;
  }
  // channel
  if (lhs->channel != rhs->channel) {
    return false;
  }
  return true;
}

bool
mvp_msgs__msg__PwmSignal__copy(
  const mvp_msgs__msg__PwmSignal * input,
  mvp_msgs__msg__PwmSignal * output)
{
  if (!input || !output) {
    return false;
  }
  // signal
  output->signal = input->signal;
  // channel
  output->channel = input->channel;
  return true;
}

mvp_msgs__msg__PwmSignal *
mvp_msgs__msg__PwmSignal__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mvp_msgs__msg__PwmSignal * msg = (mvp_msgs__msg__PwmSignal *)allocator.allocate(sizeof(mvp_msgs__msg__PwmSignal), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(mvp_msgs__msg__PwmSignal));
  bool success = mvp_msgs__msg__PwmSignal__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
mvp_msgs__msg__PwmSignal__destroy(mvp_msgs__msg__PwmSignal * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    mvp_msgs__msg__PwmSignal__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
mvp_msgs__msg__PwmSignal__Sequence__init(mvp_msgs__msg__PwmSignal__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mvp_msgs__msg__PwmSignal * data = NULL;

  if (size) {
    data = (mvp_msgs__msg__PwmSignal *)allocator.zero_allocate(size, sizeof(mvp_msgs__msg__PwmSignal), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = mvp_msgs__msg__PwmSignal__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        mvp_msgs__msg__PwmSignal__fini(&data[i - 1]);
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
mvp_msgs__msg__PwmSignal__Sequence__fini(mvp_msgs__msg__PwmSignal__Sequence * array)
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
      mvp_msgs__msg__PwmSignal__fini(&array->data[i]);
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

mvp_msgs__msg__PwmSignal__Sequence *
mvp_msgs__msg__PwmSignal__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mvp_msgs__msg__PwmSignal__Sequence * array = (mvp_msgs__msg__PwmSignal__Sequence *)allocator.allocate(sizeof(mvp_msgs__msg__PwmSignal__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = mvp_msgs__msg__PwmSignal__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
mvp_msgs__msg__PwmSignal__Sequence__destroy(mvp_msgs__msg__PwmSignal__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    mvp_msgs__msg__PwmSignal__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
mvp_msgs__msg__PwmSignal__Sequence__are_equal(const mvp_msgs__msg__PwmSignal__Sequence * lhs, const mvp_msgs__msg__PwmSignal__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!mvp_msgs__msg__PwmSignal__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
mvp_msgs__msg__PwmSignal__Sequence__copy(
  const mvp_msgs__msg__PwmSignal__Sequence * input,
  mvp_msgs__msg__PwmSignal__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(mvp_msgs__msg__PwmSignal);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    mvp_msgs__msg__PwmSignal * data =
      (mvp_msgs__msg__PwmSignal *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!mvp_msgs__msg__PwmSignal__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          mvp_msgs__msg__PwmSignal__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!mvp_msgs__msg__PwmSignal__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
