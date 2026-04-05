// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from mvp_msgs:srv/GetWaypoints.idl
// generated code does not contain a copyright notice
#include "mvp_msgs/srv/detail/get_waypoints__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `count`
#include "std_msgs/msg/detail/int16__functions.h"

bool
mvp_msgs__srv__GetWaypoints_Request__init(mvp_msgs__srv__GetWaypoints_Request * msg)
{
  if (!msg) {
    return false;
  }
  // count
  if (!std_msgs__msg__Int16__init(&msg->count)) {
    mvp_msgs__srv__GetWaypoints_Request__fini(msg);
    return false;
  }
  return true;
}

void
mvp_msgs__srv__GetWaypoints_Request__fini(mvp_msgs__srv__GetWaypoints_Request * msg)
{
  if (!msg) {
    return;
  }
  // count
  std_msgs__msg__Int16__fini(&msg->count);
}

bool
mvp_msgs__srv__GetWaypoints_Request__are_equal(const mvp_msgs__srv__GetWaypoints_Request * lhs, const mvp_msgs__srv__GetWaypoints_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // count
  if (!std_msgs__msg__Int16__are_equal(
      &(lhs->count), &(rhs->count)))
  {
    return false;
  }
  return true;
}

bool
mvp_msgs__srv__GetWaypoints_Request__copy(
  const mvp_msgs__srv__GetWaypoints_Request * input,
  mvp_msgs__srv__GetWaypoints_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // count
  if (!std_msgs__msg__Int16__copy(
      &(input->count), &(output->count)))
  {
    return false;
  }
  return true;
}

mvp_msgs__srv__GetWaypoints_Request *
mvp_msgs__srv__GetWaypoints_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mvp_msgs__srv__GetWaypoints_Request * msg = (mvp_msgs__srv__GetWaypoints_Request *)allocator.allocate(sizeof(mvp_msgs__srv__GetWaypoints_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(mvp_msgs__srv__GetWaypoints_Request));
  bool success = mvp_msgs__srv__GetWaypoints_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
mvp_msgs__srv__GetWaypoints_Request__destroy(mvp_msgs__srv__GetWaypoints_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    mvp_msgs__srv__GetWaypoints_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
mvp_msgs__srv__GetWaypoints_Request__Sequence__init(mvp_msgs__srv__GetWaypoints_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mvp_msgs__srv__GetWaypoints_Request * data = NULL;

  if (size) {
    data = (mvp_msgs__srv__GetWaypoints_Request *)allocator.zero_allocate(size, sizeof(mvp_msgs__srv__GetWaypoints_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = mvp_msgs__srv__GetWaypoints_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        mvp_msgs__srv__GetWaypoints_Request__fini(&data[i - 1]);
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
mvp_msgs__srv__GetWaypoints_Request__Sequence__fini(mvp_msgs__srv__GetWaypoints_Request__Sequence * array)
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
      mvp_msgs__srv__GetWaypoints_Request__fini(&array->data[i]);
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

mvp_msgs__srv__GetWaypoints_Request__Sequence *
mvp_msgs__srv__GetWaypoints_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mvp_msgs__srv__GetWaypoints_Request__Sequence * array = (mvp_msgs__srv__GetWaypoints_Request__Sequence *)allocator.allocate(sizeof(mvp_msgs__srv__GetWaypoints_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = mvp_msgs__srv__GetWaypoints_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
mvp_msgs__srv__GetWaypoints_Request__Sequence__destroy(mvp_msgs__srv__GetWaypoints_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    mvp_msgs__srv__GetWaypoints_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
mvp_msgs__srv__GetWaypoints_Request__Sequence__are_equal(const mvp_msgs__srv__GetWaypoints_Request__Sequence * lhs, const mvp_msgs__srv__GetWaypoints_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!mvp_msgs__srv__GetWaypoints_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
mvp_msgs__srv__GetWaypoints_Request__Sequence__copy(
  const mvp_msgs__srv__GetWaypoints_Request__Sequence * input,
  mvp_msgs__srv__GetWaypoints_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(mvp_msgs__srv__GetWaypoints_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    mvp_msgs__srv__GetWaypoints_Request * data =
      (mvp_msgs__srv__GetWaypoints_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!mvp_msgs__srv__GetWaypoints_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          mvp_msgs__srv__GetWaypoints_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!mvp_msgs__srv__GetWaypoints_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `wpt`
#include "mvp_msgs/msg/detail/waypoint__functions.h"

bool
mvp_msgs__srv__GetWaypoints_Response__init(mvp_msgs__srv__GetWaypoints_Response * msg)
{
  if (!msg) {
    return false;
  }
  // wpt
  if (!mvp_msgs__msg__Waypoint__Sequence__init(&msg->wpt, 0)) {
    mvp_msgs__srv__GetWaypoints_Response__fini(msg);
    return false;
  }
  return true;
}

void
mvp_msgs__srv__GetWaypoints_Response__fini(mvp_msgs__srv__GetWaypoints_Response * msg)
{
  if (!msg) {
    return;
  }
  // wpt
  mvp_msgs__msg__Waypoint__Sequence__fini(&msg->wpt);
}

bool
mvp_msgs__srv__GetWaypoints_Response__are_equal(const mvp_msgs__srv__GetWaypoints_Response * lhs, const mvp_msgs__srv__GetWaypoints_Response * rhs)
{
  if (!lhs || !rhs) {
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
mvp_msgs__srv__GetWaypoints_Response__copy(
  const mvp_msgs__srv__GetWaypoints_Response * input,
  mvp_msgs__srv__GetWaypoints_Response * output)
{
  if (!input || !output) {
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

mvp_msgs__srv__GetWaypoints_Response *
mvp_msgs__srv__GetWaypoints_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mvp_msgs__srv__GetWaypoints_Response * msg = (mvp_msgs__srv__GetWaypoints_Response *)allocator.allocate(sizeof(mvp_msgs__srv__GetWaypoints_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(mvp_msgs__srv__GetWaypoints_Response));
  bool success = mvp_msgs__srv__GetWaypoints_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
mvp_msgs__srv__GetWaypoints_Response__destroy(mvp_msgs__srv__GetWaypoints_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    mvp_msgs__srv__GetWaypoints_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
mvp_msgs__srv__GetWaypoints_Response__Sequence__init(mvp_msgs__srv__GetWaypoints_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mvp_msgs__srv__GetWaypoints_Response * data = NULL;

  if (size) {
    data = (mvp_msgs__srv__GetWaypoints_Response *)allocator.zero_allocate(size, sizeof(mvp_msgs__srv__GetWaypoints_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = mvp_msgs__srv__GetWaypoints_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        mvp_msgs__srv__GetWaypoints_Response__fini(&data[i - 1]);
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
mvp_msgs__srv__GetWaypoints_Response__Sequence__fini(mvp_msgs__srv__GetWaypoints_Response__Sequence * array)
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
      mvp_msgs__srv__GetWaypoints_Response__fini(&array->data[i]);
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

mvp_msgs__srv__GetWaypoints_Response__Sequence *
mvp_msgs__srv__GetWaypoints_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mvp_msgs__srv__GetWaypoints_Response__Sequence * array = (mvp_msgs__srv__GetWaypoints_Response__Sequence *)allocator.allocate(sizeof(mvp_msgs__srv__GetWaypoints_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = mvp_msgs__srv__GetWaypoints_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
mvp_msgs__srv__GetWaypoints_Response__Sequence__destroy(mvp_msgs__srv__GetWaypoints_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    mvp_msgs__srv__GetWaypoints_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
mvp_msgs__srv__GetWaypoints_Response__Sequence__are_equal(const mvp_msgs__srv__GetWaypoints_Response__Sequence * lhs, const mvp_msgs__srv__GetWaypoints_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!mvp_msgs__srv__GetWaypoints_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
mvp_msgs__srv__GetWaypoints_Response__Sequence__copy(
  const mvp_msgs__srv__GetWaypoints_Response__Sequence * input,
  mvp_msgs__srv__GetWaypoints_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(mvp_msgs__srv__GetWaypoints_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    mvp_msgs__srv__GetWaypoints_Response * data =
      (mvp_msgs__srv__GetWaypoints_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!mvp_msgs__srv__GetWaypoints_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          mvp_msgs__srv__GetWaypoints_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!mvp_msgs__srv__GetWaypoints_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
