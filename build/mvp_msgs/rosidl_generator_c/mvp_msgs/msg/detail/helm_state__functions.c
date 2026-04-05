// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from mvp_msgs:msg/HelmState.idl
// generated code does not contain a copyright notice
#include "mvp_msgs/msg/detail/helm_state__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `name`
// Member `mode`
// Member `transitions`
// Member `exit_state`
#include "rosidl_runtime_c/string_functions.h"

bool
mvp_msgs__msg__HelmState__init(mvp_msgs__msg__HelmState * msg)
{
  if (!msg) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__init(&msg->name)) {
    mvp_msgs__msg__HelmState__fini(msg);
    return false;
  }
  // mode
  if (!rosidl_runtime_c__String__init(&msg->mode)) {
    mvp_msgs__msg__HelmState__fini(msg);
    return false;
  }
  // transitions
  if (!rosidl_runtime_c__String__Sequence__init(&msg->transitions, 0)) {
    mvp_msgs__msg__HelmState__fini(msg);
    return false;
  }
  // max_duration
  // exit_state
  if (!rosidl_runtime_c__String__init(&msg->exit_state)) {
    mvp_msgs__msg__HelmState__fini(msg);
    return false;
  }
  return true;
}

void
mvp_msgs__msg__HelmState__fini(mvp_msgs__msg__HelmState * msg)
{
  if (!msg) {
    return;
  }
  // name
  rosidl_runtime_c__String__fini(&msg->name);
  // mode
  rosidl_runtime_c__String__fini(&msg->mode);
  // transitions
  rosidl_runtime_c__String__Sequence__fini(&msg->transitions);
  // max_duration
  // exit_state
  rosidl_runtime_c__String__fini(&msg->exit_state);
}

bool
mvp_msgs__msg__HelmState__are_equal(const mvp_msgs__msg__HelmState * lhs, const mvp_msgs__msg__HelmState * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->name), &(rhs->name)))
  {
    return false;
  }
  // mode
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->mode), &(rhs->mode)))
  {
    return false;
  }
  // transitions
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->transitions), &(rhs->transitions)))
  {
    return false;
  }
  // max_duration
  if (lhs->max_duration != rhs->max_duration) {
    return false;
  }
  // exit_state
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->exit_state), &(rhs->exit_state)))
  {
    return false;
  }
  return true;
}

bool
mvp_msgs__msg__HelmState__copy(
  const mvp_msgs__msg__HelmState * input,
  mvp_msgs__msg__HelmState * output)
{
  if (!input || !output) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__copy(
      &(input->name), &(output->name)))
  {
    return false;
  }
  // mode
  if (!rosidl_runtime_c__String__copy(
      &(input->mode), &(output->mode)))
  {
    return false;
  }
  // transitions
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->transitions), &(output->transitions)))
  {
    return false;
  }
  // max_duration
  output->max_duration = input->max_duration;
  // exit_state
  if (!rosidl_runtime_c__String__copy(
      &(input->exit_state), &(output->exit_state)))
  {
    return false;
  }
  return true;
}

mvp_msgs__msg__HelmState *
mvp_msgs__msg__HelmState__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mvp_msgs__msg__HelmState * msg = (mvp_msgs__msg__HelmState *)allocator.allocate(sizeof(mvp_msgs__msg__HelmState), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(mvp_msgs__msg__HelmState));
  bool success = mvp_msgs__msg__HelmState__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
mvp_msgs__msg__HelmState__destroy(mvp_msgs__msg__HelmState * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    mvp_msgs__msg__HelmState__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
mvp_msgs__msg__HelmState__Sequence__init(mvp_msgs__msg__HelmState__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mvp_msgs__msg__HelmState * data = NULL;

  if (size) {
    data = (mvp_msgs__msg__HelmState *)allocator.zero_allocate(size, sizeof(mvp_msgs__msg__HelmState), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = mvp_msgs__msg__HelmState__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        mvp_msgs__msg__HelmState__fini(&data[i - 1]);
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
mvp_msgs__msg__HelmState__Sequence__fini(mvp_msgs__msg__HelmState__Sequence * array)
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
      mvp_msgs__msg__HelmState__fini(&array->data[i]);
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

mvp_msgs__msg__HelmState__Sequence *
mvp_msgs__msg__HelmState__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mvp_msgs__msg__HelmState__Sequence * array = (mvp_msgs__msg__HelmState__Sequence *)allocator.allocate(sizeof(mvp_msgs__msg__HelmState__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = mvp_msgs__msg__HelmState__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
mvp_msgs__msg__HelmState__Sequence__destroy(mvp_msgs__msg__HelmState__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    mvp_msgs__msg__HelmState__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
mvp_msgs__msg__HelmState__Sequence__are_equal(const mvp_msgs__msg__HelmState__Sequence * lhs, const mvp_msgs__msg__HelmState__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!mvp_msgs__msg__HelmState__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
mvp_msgs__msg__HelmState__Sequence__copy(
  const mvp_msgs__msg__HelmState__Sequence * input,
  mvp_msgs__msg__HelmState__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(mvp_msgs__msg__HelmState);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    mvp_msgs__msg__HelmState * data =
      (mvp_msgs__msg__HelmState *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!mvp_msgs__msg__HelmState__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          mvp_msgs__msg__HelmState__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!mvp_msgs__msg__HelmState__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
