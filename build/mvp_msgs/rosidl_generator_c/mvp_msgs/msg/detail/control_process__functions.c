// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from mvp_msgs:msg/ControlProcess.idl
// generated code does not contain a copyright notice
#include "mvp_msgs/msg/detail/control_process__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `control_mode`
// Member `child_frame_id`
#include "rosidl_runtime_c/string_functions.h"
// Member `position`
// Member `orientation`
// Member `velocity`
// Member `angular_rate`
#include "geometry_msgs/msg/detail/vector3__functions.h"

bool
mvp_msgs__msg__ControlProcess__init(mvp_msgs__msg__ControlProcess * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    mvp_msgs__msg__ControlProcess__fini(msg);
    return false;
  }
  // control_mode
  if (!rosidl_runtime_c__String__init(&msg->control_mode)) {
    mvp_msgs__msg__ControlProcess__fini(msg);
    return false;
  }
  // position
  if (!geometry_msgs__msg__Vector3__init(&msg->position)) {
    mvp_msgs__msg__ControlProcess__fini(msg);
    return false;
  }
  // orientation
  if (!geometry_msgs__msg__Vector3__init(&msg->orientation)) {
    mvp_msgs__msg__ControlProcess__fini(msg);
    return false;
  }
  // child_frame_id
  if (!rosidl_runtime_c__String__init(&msg->child_frame_id)) {
    mvp_msgs__msg__ControlProcess__fini(msg);
    return false;
  }
  // velocity
  if (!geometry_msgs__msg__Vector3__init(&msg->velocity)) {
    mvp_msgs__msg__ControlProcess__fini(msg);
    return false;
  }
  // angular_rate
  if (!geometry_msgs__msg__Vector3__init(&msg->angular_rate)) {
    mvp_msgs__msg__ControlProcess__fini(msg);
    return false;
  }
  return true;
}

void
mvp_msgs__msg__ControlProcess__fini(mvp_msgs__msg__ControlProcess * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // control_mode
  rosidl_runtime_c__String__fini(&msg->control_mode);
  // position
  geometry_msgs__msg__Vector3__fini(&msg->position);
  // orientation
  geometry_msgs__msg__Vector3__fini(&msg->orientation);
  // child_frame_id
  rosidl_runtime_c__String__fini(&msg->child_frame_id);
  // velocity
  geometry_msgs__msg__Vector3__fini(&msg->velocity);
  // angular_rate
  geometry_msgs__msg__Vector3__fini(&msg->angular_rate);
}

bool
mvp_msgs__msg__ControlProcess__are_equal(const mvp_msgs__msg__ControlProcess * lhs, const mvp_msgs__msg__ControlProcess * rhs)
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
  // control_mode
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->control_mode), &(rhs->control_mode)))
  {
    return false;
  }
  // position
  if (!geometry_msgs__msg__Vector3__are_equal(
      &(lhs->position), &(rhs->position)))
  {
    return false;
  }
  // orientation
  if (!geometry_msgs__msg__Vector3__are_equal(
      &(lhs->orientation), &(rhs->orientation)))
  {
    return false;
  }
  // child_frame_id
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->child_frame_id), &(rhs->child_frame_id)))
  {
    return false;
  }
  // velocity
  if (!geometry_msgs__msg__Vector3__are_equal(
      &(lhs->velocity), &(rhs->velocity)))
  {
    return false;
  }
  // angular_rate
  if (!geometry_msgs__msg__Vector3__are_equal(
      &(lhs->angular_rate), &(rhs->angular_rate)))
  {
    return false;
  }
  return true;
}

bool
mvp_msgs__msg__ControlProcess__copy(
  const mvp_msgs__msg__ControlProcess * input,
  mvp_msgs__msg__ControlProcess * output)
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
  // control_mode
  if (!rosidl_runtime_c__String__copy(
      &(input->control_mode), &(output->control_mode)))
  {
    return false;
  }
  // position
  if (!geometry_msgs__msg__Vector3__copy(
      &(input->position), &(output->position)))
  {
    return false;
  }
  // orientation
  if (!geometry_msgs__msg__Vector3__copy(
      &(input->orientation), &(output->orientation)))
  {
    return false;
  }
  // child_frame_id
  if (!rosidl_runtime_c__String__copy(
      &(input->child_frame_id), &(output->child_frame_id)))
  {
    return false;
  }
  // velocity
  if (!geometry_msgs__msg__Vector3__copy(
      &(input->velocity), &(output->velocity)))
  {
    return false;
  }
  // angular_rate
  if (!geometry_msgs__msg__Vector3__copy(
      &(input->angular_rate), &(output->angular_rate)))
  {
    return false;
  }
  return true;
}

mvp_msgs__msg__ControlProcess *
mvp_msgs__msg__ControlProcess__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mvp_msgs__msg__ControlProcess * msg = (mvp_msgs__msg__ControlProcess *)allocator.allocate(sizeof(mvp_msgs__msg__ControlProcess), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(mvp_msgs__msg__ControlProcess));
  bool success = mvp_msgs__msg__ControlProcess__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
mvp_msgs__msg__ControlProcess__destroy(mvp_msgs__msg__ControlProcess * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    mvp_msgs__msg__ControlProcess__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
mvp_msgs__msg__ControlProcess__Sequence__init(mvp_msgs__msg__ControlProcess__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mvp_msgs__msg__ControlProcess * data = NULL;

  if (size) {
    data = (mvp_msgs__msg__ControlProcess *)allocator.zero_allocate(size, sizeof(mvp_msgs__msg__ControlProcess), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = mvp_msgs__msg__ControlProcess__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        mvp_msgs__msg__ControlProcess__fini(&data[i - 1]);
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
mvp_msgs__msg__ControlProcess__Sequence__fini(mvp_msgs__msg__ControlProcess__Sequence * array)
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
      mvp_msgs__msg__ControlProcess__fini(&array->data[i]);
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

mvp_msgs__msg__ControlProcess__Sequence *
mvp_msgs__msg__ControlProcess__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mvp_msgs__msg__ControlProcess__Sequence * array = (mvp_msgs__msg__ControlProcess__Sequence *)allocator.allocate(sizeof(mvp_msgs__msg__ControlProcess__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = mvp_msgs__msg__ControlProcess__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
mvp_msgs__msg__ControlProcess__Sequence__destroy(mvp_msgs__msg__ControlProcess__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    mvp_msgs__msg__ControlProcess__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
mvp_msgs__msg__ControlProcess__Sequence__are_equal(const mvp_msgs__msg__ControlProcess__Sequence * lhs, const mvp_msgs__msg__ControlProcess__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!mvp_msgs__msg__ControlProcess__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
mvp_msgs__msg__ControlProcess__Sequence__copy(
  const mvp_msgs__msg__ControlProcess__Sequence * input,
  mvp_msgs__msg__ControlProcess__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(mvp_msgs__msg__ControlProcess);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    mvp_msgs__msg__ControlProcess * data =
      (mvp_msgs__msg__ControlProcess *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!mvp_msgs__msg__ControlProcess__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          mvp_msgs__msg__ControlProcess__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!mvp_msgs__msg__ControlProcess__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
