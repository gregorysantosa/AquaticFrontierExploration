// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from mvp_msgs:msg/SetpointBehavior.idl
// generated code does not contain a copyright notice
#include "mvp_msgs/msg/detail/setpoint_behavior__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `child_frame_id`
// Member `control_mode`
// Member `behavior`
#include "rosidl_runtime_c/string_functions.h"

bool
mvp_msgs__msg__SetpointBehavior__init(mvp_msgs__msg__SetpointBehavior * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    mvp_msgs__msg__SetpointBehavior__fini(msg);
    return false;
  }
  // child_frame_id
  if (!rosidl_runtime_c__String__init(&msg->child_frame_id)) {
    mvp_msgs__msg__SetpointBehavior__fini(msg);
    return false;
  }
  // control_mode
  if (!rosidl_runtime_c__String__init(&msg->control_mode)) {
    mvp_msgs__msg__SetpointBehavior__fini(msg);
    return false;
  }
  // behavior
  for (size_t i = 0; i < 12; ++i) {
    if (!rosidl_runtime_c__String__init(&msg->behavior[i])) {
      mvp_msgs__msg__SetpointBehavior__fini(msg);
      return false;
    }
  }
  return true;
}

void
mvp_msgs__msg__SetpointBehavior__fini(mvp_msgs__msg__SetpointBehavior * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // child_frame_id
  rosidl_runtime_c__String__fini(&msg->child_frame_id);
  // control_mode
  rosidl_runtime_c__String__fini(&msg->control_mode);
  // behavior
  for (size_t i = 0; i < 12; ++i) {
    rosidl_runtime_c__String__fini(&msg->behavior[i]);
  }
}

bool
mvp_msgs__msg__SetpointBehavior__are_equal(const mvp_msgs__msg__SetpointBehavior * lhs, const mvp_msgs__msg__SetpointBehavior * rhs)
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
  // child_frame_id
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->child_frame_id), &(rhs->child_frame_id)))
  {
    return false;
  }
  // control_mode
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->control_mode), &(rhs->control_mode)))
  {
    return false;
  }
  // behavior
  for (size_t i = 0; i < 12; ++i) {
    if (!rosidl_runtime_c__String__are_equal(
        &(lhs->behavior[i]), &(rhs->behavior[i])))
    {
      return false;
    }
  }
  return true;
}

bool
mvp_msgs__msg__SetpointBehavior__copy(
  const mvp_msgs__msg__SetpointBehavior * input,
  mvp_msgs__msg__SetpointBehavior * output)
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
  // child_frame_id
  if (!rosidl_runtime_c__String__copy(
      &(input->child_frame_id), &(output->child_frame_id)))
  {
    return false;
  }
  // control_mode
  if (!rosidl_runtime_c__String__copy(
      &(input->control_mode), &(output->control_mode)))
  {
    return false;
  }
  // behavior
  for (size_t i = 0; i < 12; ++i) {
    if (!rosidl_runtime_c__String__copy(
        &(input->behavior[i]), &(output->behavior[i])))
    {
      return false;
    }
  }
  return true;
}

mvp_msgs__msg__SetpointBehavior *
mvp_msgs__msg__SetpointBehavior__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mvp_msgs__msg__SetpointBehavior * msg = (mvp_msgs__msg__SetpointBehavior *)allocator.allocate(sizeof(mvp_msgs__msg__SetpointBehavior), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(mvp_msgs__msg__SetpointBehavior));
  bool success = mvp_msgs__msg__SetpointBehavior__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
mvp_msgs__msg__SetpointBehavior__destroy(mvp_msgs__msg__SetpointBehavior * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    mvp_msgs__msg__SetpointBehavior__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
mvp_msgs__msg__SetpointBehavior__Sequence__init(mvp_msgs__msg__SetpointBehavior__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mvp_msgs__msg__SetpointBehavior * data = NULL;

  if (size) {
    data = (mvp_msgs__msg__SetpointBehavior *)allocator.zero_allocate(size, sizeof(mvp_msgs__msg__SetpointBehavior), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = mvp_msgs__msg__SetpointBehavior__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        mvp_msgs__msg__SetpointBehavior__fini(&data[i - 1]);
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
mvp_msgs__msg__SetpointBehavior__Sequence__fini(mvp_msgs__msg__SetpointBehavior__Sequence * array)
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
      mvp_msgs__msg__SetpointBehavior__fini(&array->data[i]);
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

mvp_msgs__msg__SetpointBehavior__Sequence *
mvp_msgs__msg__SetpointBehavior__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mvp_msgs__msg__SetpointBehavior__Sequence * array = (mvp_msgs__msg__SetpointBehavior__Sequence *)allocator.allocate(sizeof(mvp_msgs__msg__SetpointBehavior__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = mvp_msgs__msg__SetpointBehavior__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
mvp_msgs__msg__SetpointBehavior__Sequence__destroy(mvp_msgs__msg__SetpointBehavior__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    mvp_msgs__msg__SetpointBehavior__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
mvp_msgs__msg__SetpointBehavior__Sequence__are_equal(const mvp_msgs__msg__SetpointBehavior__Sequence * lhs, const mvp_msgs__msg__SetpointBehavior__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!mvp_msgs__msg__SetpointBehavior__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
mvp_msgs__msg__SetpointBehavior__Sequence__copy(
  const mvp_msgs__msg__SetpointBehavior__Sequence * input,
  mvp_msgs__msg__SetpointBehavior__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(mvp_msgs__msg__SetpointBehavior);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    mvp_msgs__msg__SetpointBehavior * data =
      (mvp_msgs__msg__SetpointBehavior *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!mvp_msgs__msg__SetpointBehavior__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          mvp_msgs__msg__SetpointBehavior__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!mvp_msgs__msg__SetpointBehavior__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
