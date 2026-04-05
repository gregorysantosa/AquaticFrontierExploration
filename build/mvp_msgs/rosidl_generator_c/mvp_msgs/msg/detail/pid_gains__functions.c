// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from mvp_msgs:msg/PidGains.idl
// generated code does not contain a copyright notice
#include "mvp_msgs/msg/detail/pid_gains__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
mvp_msgs__msg__PidGains__init(mvp_msgs__msg__PidGains * msg)
{
  if (!msg) {
    return false;
  }
  // kp
  // ki
  // kd
  // kv
  // pid_max
  // pid_min
  return true;
}

void
mvp_msgs__msg__PidGains__fini(mvp_msgs__msg__PidGains * msg)
{
  if (!msg) {
    return;
  }
  // kp
  // ki
  // kd
  // kv
  // pid_max
  // pid_min
}

bool
mvp_msgs__msg__PidGains__are_equal(const mvp_msgs__msg__PidGains * lhs, const mvp_msgs__msg__PidGains * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // kp
  if (lhs->kp != rhs->kp) {
    return false;
  }
  // ki
  if (lhs->ki != rhs->ki) {
    return false;
  }
  // kd
  if (lhs->kd != rhs->kd) {
    return false;
  }
  // kv
  if (lhs->kv != rhs->kv) {
    return false;
  }
  // pid_max
  if (lhs->pid_max != rhs->pid_max) {
    return false;
  }
  // pid_min
  if (lhs->pid_min != rhs->pid_min) {
    return false;
  }
  return true;
}

bool
mvp_msgs__msg__PidGains__copy(
  const mvp_msgs__msg__PidGains * input,
  mvp_msgs__msg__PidGains * output)
{
  if (!input || !output) {
    return false;
  }
  // kp
  output->kp = input->kp;
  // ki
  output->ki = input->ki;
  // kd
  output->kd = input->kd;
  // kv
  output->kv = input->kv;
  // pid_max
  output->pid_max = input->pid_max;
  // pid_min
  output->pid_min = input->pid_min;
  return true;
}

mvp_msgs__msg__PidGains *
mvp_msgs__msg__PidGains__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mvp_msgs__msg__PidGains * msg = (mvp_msgs__msg__PidGains *)allocator.allocate(sizeof(mvp_msgs__msg__PidGains), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(mvp_msgs__msg__PidGains));
  bool success = mvp_msgs__msg__PidGains__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
mvp_msgs__msg__PidGains__destroy(mvp_msgs__msg__PidGains * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    mvp_msgs__msg__PidGains__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
mvp_msgs__msg__PidGains__Sequence__init(mvp_msgs__msg__PidGains__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mvp_msgs__msg__PidGains * data = NULL;

  if (size) {
    data = (mvp_msgs__msg__PidGains *)allocator.zero_allocate(size, sizeof(mvp_msgs__msg__PidGains), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = mvp_msgs__msg__PidGains__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        mvp_msgs__msg__PidGains__fini(&data[i - 1]);
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
mvp_msgs__msg__PidGains__Sequence__fini(mvp_msgs__msg__PidGains__Sequence * array)
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
      mvp_msgs__msg__PidGains__fini(&array->data[i]);
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

mvp_msgs__msg__PidGains__Sequence *
mvp_msgs__msg__PidGains__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mvp_msgs__msg__PidGains__Sequence * array = (mvp_msgs__msg__PidGains__Sequence *)allocator.allocate(sizeof(mvp_msgs__msg__PidGains__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = mvp_msgs__msg__PidGains__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
mvp_msgs__msg__PidGains__Sequence__destroy(mvp_msgs__msg__PidGains__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    mvp_msgs__msg__PidGains__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
mvp_msgs__msg__PidGains__Sequence__are_equal(const mvp_msgs__msg__PidGains__Sequence * lhs, const mvp_msgs__msg__PidGains__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!mvp_msgs__msg__PidGains__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
mvp_msgs__msg__PidGains__Sequence__copy(
  const mvp_msgs__msg__PidGains__Sequence * input,
  mvp_msgs__msg__PidGains__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(mvp_msgs__msg__PidGains);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    mvp_msgs__msg__PidGains * data =
      (mvp_msgs__msg__PidGains *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!mvp_msgs__msg__PidGains__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          mvp_msgs__msg__PidGains__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!mvp_msgs__msg__PidGains__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
