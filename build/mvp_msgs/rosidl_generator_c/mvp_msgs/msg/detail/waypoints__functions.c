// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from mvp_msgs:msg/Waypoints.idl
// generated code does not contain a copyright notice
#include "mvp_msgs/msg/detail/waypoints__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `type`
#include "rosidl_runtime_c/string_functions.h"
// Member `wpt`
#include "mvp_msgs/msg/detail/waypoint__functions.h"

bool
mvp_msgs__msg__Waypoints__init(mvp_msgs__msg__Waypoints * msg)
{
  if (!msg) {
    return false;
  }
  // type
  if (!rosidl_runtime_c__String__init(&msg->type)) {
    mvp_msgs__msg__Waypoints__fini(msg);
    return false;
  }
  // wpt
  if (!mvp_msgs__msg__Waypoint__Sequence__init(&msg->wpt, 0)) {
    mvp_msgs__msg__Waypoints__fini(msg);
    return false;
  }
  return true;
}

void
mvp_msgs__msg__Waypoints__fini(mvp_msgs__msg__Waypoints * msg)
{
  if (!msg) {
    return;
  }
  // type
  rosidl_runtime_c__String__fini(&msg->type);
  // wpt
  mvp_msgs__msg__Waypoint__Sequence__fini(&msg->wpt);
}

bool
mvp_msgs__msg__Waypoints__are_equal(const mvp_msgs__msg__Waypoints * lhs, const mvp_msgs__msg__Waypoints * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // type
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->type), &(rhs->type)))
  {
    return false;
  }
  // wpt
  if (!mvp_msgs__msg__Waypoint__Sequence__are_equal(
      &(lhs->wpt), &(rhs->wpt)))
  {
    return false;
  }
  return true;
}

bool
mvp_msgs__msg__Waypoints__copy(
  const mvp_msgs__msg__Waypoints * input,
  mvp_msgs__msg__Waypoints * output)
{
  if (!input || !output) {
    return false;
  }
  // type
  if (!rosidl_runtime_c__String__copy(
      &(input->type), &(output->type)))
  {
    return false;
  }
  // wpt
  if (!mvp_msgs__msg__Waypoint__Sequence__copy(
      &(input->wpt), &(output->wpt)))
  {
    return false;
  }
  return true;
}

mvp_msgs__msg__Waypoints *
mvp_msgs__msg__Waypoints__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mvp_msgs__msg__Waypoints * msg = (mvp_msgs__msg__Waypoints *)allocator.allocate(sizeof(mvp_msgs__msg__Waypoints), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(mvp_msgs__msg__Waypoints));
  bool success = mvp_msgs__msg__Waypoints__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
mvp_msgs__msg__Waypoints__destroy(mvp_msgs__msg__Waypoints * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    mvp_msgs__msg__Waypoints__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
mvp_msgs__msg__Waypoints__Sequence__init(mvp_msgs__msg__Waypoints__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mvp_msgs__msg__Waypoints * data = NULL;

  if (size) {
    data = (mvp_msgs__msg__Waypoints *)allocator.zero_allocate(size, sizeof(mvp_msgs__msg__Waypoints), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = mvp_msgs__msg__Waypoints__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        mvp_msgs__msg__Waypoints__fini(&data[i - 1]);
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
mvp_msgs__msg__Waypoints__Sequence__fini(mvp_msgs__msg__Waypoints__Sequence * array)
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
      mvp_msgs__msg__Waypoints__fini(&array->data[i]);
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

mvp_msgs__msg__Waypoints__Sequence *
mvp_msgs__msg__Waypoints__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mvp_msgs__msg__Waypoints__Sequence * array = (mvp_msgs__msg__Waypoints__Sequence *)allocator.allocate(sizeof(mvp_msgs__msg__Waypoints__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = mvp_msgs__msg__Waypoints__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
mvp_msgs__msg__Waypoints__Sequence__destroy(mvp_msgs__msg__Waypoints__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    mvp_msgs__msg__Waypoints__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
mvp_msgs__msg__Waypoints__Sequence__are_equal(const mvp_msgs__msg__Waypoints__Sequence * lhs, const mvp_msgs__msg__Waypoints__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!mvp_msgs__msg__Waypoints__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
mvp_msgs__msg__Waypoints__Sequence__copy(
  const mvp_msgs__msg__Waypoints__Sequence * input,
  mvp_msgs__msg__Waypoints__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(mvp_msgs__msg__Waypoints);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    mvp_msgs__msg__Waypoints * data =
      (mvp_msgs__msg__Waypoints *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!mvp_msgs__msg__Waypoints__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          mvp_msgs__msg__Waypoints__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!mvp_msgs__msg__Waypoints__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
