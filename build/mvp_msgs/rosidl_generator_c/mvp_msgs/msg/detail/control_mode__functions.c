// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from mvp_msgs:msg/ControlMode.idl
// generated code does not contain a copyright notice
#include "mvp_msgs/msg/detail/control_mode__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `name`
#include "rosidl_runtime_c/string_functions.h"
// Member `dofs`
#include "rosidl_runtime_c/primitives_sequence_functions.h"
// Member `pid_x`
// Member `pid_y`
// Member `pid_z`
// Member `pid_roll`
// Member `pid_pitch`
// Member `pid_yaw`
// Member `pid_u`
// Member `pid_v`
// Member `pid_w`
// Member `pid_p`
// Member `pid_q`
// Member `pid_r`
#include "mvp_msgs/msg/detail/pid_gains__functions.h"

bool
mvp_msgs__msg__ControlMode__init(mvp_msgs__msg__ControlMode * msg)
{
  if (!msg) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__init(&msg->name)) {
    mvp_msgs__msg__ControlMode__fini(msg);
    return false;
  }
  // dofs
  if (!rosidl_runtime_c__int32__Sequence__init(&msg->dofs, 0)) {
    mvp_msgs__msg__ControlMode__fini(msg);
    return false;
  }
  // pid_x
  if (!mvp_msgs__msg__PidGains__init(&msg->pid_x)) {
    mvp_msgs__msg__ControlMode__fini(msg);
    return false;
  }
  // pid_y
  if (!mvp_msgs__msg__PidGains__init(&msg->pid_y)) {
    mvp_msgs__msg__ControlMode__fini(msg);
    return false;
  }
  // pid_z
  if (!mvp_msgs__msg__PidGains__init(&msg->pid_z)) {
    mvp_msgs__msg__ControlMode__fini(msg);
    return false;
  }
  // pid_roll
  if (!mvp_msgs__msg__PidGains__init(&msg->pid_roll)) {
    mvp_msgs__msg__ControlMode__fini(msg);
    return false;
  }
  // pid_pitch
  if (!mvp_msgs__msg__PidGains__init(&msg->pid_pitch)) {
    mvp_msgs__msg__ControlMode__fini(msg);
    return false;
  }
  // pid_yaw
  if (!mvp_msgs__msg__PidGains__init(&msg->pid_yaw)) {
    mvp_msgs__msg__ControlMode__fini(msg);
    return false;
  }
  // pid_u
  if (!mvp_msgs__msg__PidGains__init(&msg->pid_u)) {
    mvp_msgs__msg__ControlMode__fini(msg);
    return false;
  }
  // pid_v
  if (!mvp_msgs__msg__PidGains__init(&msg->pid_v)) {
    mvp_msgs__msg__ControlMode__fini(msg);
    return false;
  }
  // pid_w
  if (!mvp_msgs__msg__PidGains__init(&msg->pid_w)) {
    mvp_msgs__msg__ControlMode__fini(msg);
    return false;
  }
  // pid_p
  if (!mvp_msgs__msg__PidGains__init(&msg->pid_p)) {
    mvp_msgs__msg__ControlMode__fini(msg);
    return false;
  }
  // pid_q
  if (!mvp_msgs__msg__PidGains__init(&msg->pid_q)) {
    mvp_msgs__msg__ControlMode__fini(msg);
    return false;
  }
  // pid_r
  if (!mvp_msgs__msg__PidGains__init(&msg->pid_r)) {
    mvp_msgs__msg__ControlMode__fini(msg);
    return false;
  }
  return true;
}

void
mvp_msgs__msg__ControlMode__fini(mvp_msgs__msg__ControlMode * msg)
{
  if (!msg) {
    return;
  }
  // name
  rosidl_runtime_c__String__fini(&msg->name);
  // dofs
  rosidl_runtime_c__int32__Sequence__fini(&msg->dofs);
  // pid_x
  mvp_msgs__msg__PidGains__fini(&msg->pid_x);
  // pid_y
  mvp_msgs__msg__PidGains__fini(&msg->pid_y);
  // pid_z
  mvp_msgs__msg__PidGains__fini(&msg->pid_z);
  // pid_roll
  mvp_msgs__msg__PidGains__fini(&msg->pid_roll);
  // pid_pitch
  mvp_msgs__msg__PidGains__fini(&msg->pid_pitch);
  // pid_yaw
  mvp_msgs__msg__PidGains__fini(&msg->pid_yaw);
  // pid_u
  mvp_msgs__msg__PidGains__fini(&msg->pid_u);
  // pid_v
  mvp_msgs__msg__PidGains__fini(&msg->pid_v);
  // pid_w
  mvp_msgs__msg__PidGains__fini(&msg->pid_w);
  // pid_p
  mvp_msgs__msg__PidGains__fini(&msg->pid_p);
  // pid_q
  mvp_msgs__msg__PidGains__fini(&msg->pid_q);
  // pid_r
  mvp_msgs__msg__PidGains__fini(&msg->pid_r);
}

bool
mvp_msgs__msg__ControlMode__are_equal(const mvp_msgs__msg__ControlMode * lhs, const mvp_msgs__msg__ControlMode * rhs)
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
  // dofs
  if (!rosidl_runtime_c__int32__Sequence__are_equal(
      &(lhs->dofs), &(rhs->dofs)))
  {
    return false;
  }
  // pid_x
  if (!mvp_msgs__msg__PidGains__are_equal(
      &(lhs->pid_x), &(rhs->pid_x)))
  {
    return false;
  }
  // pid_y
  if (!mvp_msgs__msg__PidGains__are_equal(
      &(lhs->pid_y), &(rhs->pid_y)))
  {
    return false;
  }
  // pid_z
  if (!mvp_msgs__msg__PidGains__are_equal(
      &(lhs->pid_z), &(rhs->pid_z)))
  {
    return false;
  }
  // pid_roll
  if (!mvp_msgs__msg__PidGains__are_equal(
      &(lhs->pid_roll), &(rhs->pid_roll)))
  {
    return false;
  }
  // pid_pitch
  if (!mvp_msgs__msg__PidGains__are_equal(
      &(lhs->pid_pitch), &(rhs->pid_pitch)))
  {
    return false;
  }
  // pid_yaw
  if (!mvp_msgs__msg__PidGains__are_equal(
      &(lhs->pid_yaw), &(rhs->pid_yaw)))
  {
    return false;
  }
  // pid_u
  if (!mvp_msgs__msg__PidGains__are_equal(
      &(lhs->pid_u), &(rhs->pid_u)))
  {
    return false;
  }
  // pid_v
  if (!mvp_msgs__msg__PidGains__are_equal(
      &(lhs->pid_v), &(rhs->pid_v)))
  {
    return false;
  }
  // pid_w
  if (!mvp_msgs__msg__PidGains__are_equal(
      &(lhs->pid_w), &(rhs->pid_w)))
  {
    return false;
  }
  // pid_p
  if (!mvp_msgs__msg__PidGains__are_equal(
      &(lhs->pid_p), &(rhs->pid_p)))
  {
    return false;
  }
  // pid_q
  if (!mvp_msgs__msg__PidGains__are_equal(
      &(lhs->pid_q), &(rhs->pid_q)))
  {
    return false;
  }
  // pid_r
  if (!mvp_msgs__msg__PidGains__are_equal(
      &(lhs->pid_r), &(rhs->pid_r)))
  {
    return false;
  }
  return true;
}

bool
mvp_msgs__msg__ControlMode__copy(
  const mvp_msgs__msg__ControlMode * input,
  mvp_msgs__msg__ControlMode * output)
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
  // dofs
  if (!rosidl_runtime_c__int32__Sequence__copy(
      &(input->dofs), &(output->dofs)))
  {
    return false;
  }
  // pid_x
  if (!mvp_msgs__msg__PidGains__copy(
      &(input->pid_x), &(output->pid_x)))
  {
    return false;
  }
  // pid_y
  if (!mvp_msgs__msg__PidGains__copy(
      &(input->pid_y), &(output->pid_y)))
  {
    return false;
  }
  // pid_z
  if (!mvp_msgs__msg__PidGains__copy(
      &(input->pid_z), &(output->pid_z)))
  {
    return false;
  }
  // pid_roll
  if (!mvp_msgs__msg__PidGains__copy(
      &(input->pid_roll), &(output->pid_roll)))
  {
    return false;
  }
  // pid_pitch
  if (!mvp_msgs__msg__PidGains__copy(
      &(input->pid_pitch), &(output->pid_pitch)))
  {
    return false;
  }
  // pid_yaw
  if (!mvp_msgs__msg__PidGains__copy(
      &(input->pid_yaw), &(output->pid_yaw)))
  {
    return false;
  }
  // pid_u
  if (!mvp_msgs__msg__PidGains__copy(
      &(input->pid_u), &(output->pid_u)))
  {
    return false;
  }
  // pid_v
  if (!mvp_msgs__msg__PidGains__copy(
      &(input->pid_v), &(output->pid_v)))
  {
    return false;
  }
  // pid_w
  if (!mvp_msgs__msg__PidGains__copy(
      &(input->pid_w), &(output->pid_w)))
  {
    return false;
  }
  // pid_p
  if (!mvp_msgs__msg__PidGains__copy(
      &(input->pid_p), &(output->pid_p)))
  {
    return false;
  }
  // pid_q
  if (!mvp_msgs__msg__PidGains__copy(
      &(input->pid_q), &(output->pid_q)))
  {
    return false;
  }
  // pid_r
  if (!mvp_msgs__msg__PidGains__copy(
      &(input->pid_r), &(output->pid_r)))
  {
    return false;
  }
  return true;
}

mvp_msgs__msg__ControlMode *
mvp_msgs__msg__ControlMode__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mvp_msgs__msg__ControlMode * msg = (mvp_msgs__msg__ControlMode *)allocator.allocate(sizeof(mvp_msgs__msg__ControlMode), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(mvp_msgs__msg__ControlMode));
  bool success = mvp_msgs__msg__ControlMode__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
mvp_msgs__msg__ControlMode__destroy(mvp_msgs__msg__ControlMode * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    mvp_msgs__msg__ControlMode__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
mvp_msgs__msg__ControlMode__Sequence__init(mvp_msgs__msg__ControlMode__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mvp_msgs__msg__ControlMode * data = NULL;

  if (size) {
    data = (mvp_msgs__msg__ControlMode *)allocator.zero_allocate(size, sizeof(mvp_msgs__msg__ControlMode), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = mvp_msgs__msg__ControlMode__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        mvp_msgs__msg__ControlMode__fini(&data[i - 1]);
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
mvp_msgs__msg__ControlMode__Sequence__fini(mvp_msgs__msg__ControlMode__Sequence * array)
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
      mvp_msgs__msg__ControlMode__fini(&array->data[i]);
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

mvp_msgs__msg__ControlMode__Sequence *
mvp_msgs__msg__ControlMode__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mvp_msgs__msg__ControlMode__Sequence * array = (mvp_msgs__msg__ControlMode__Sequence *)allocator.allocate(sizeof(mvp_msgs__msg__ControlMode__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = mvp_msgs__msg__ControlMode__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
mvp_msgs__msg__ControlMode__Sequence__destroy(mvp_msgs__msg__ControlMode__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    mvp_msgs__msg__ControlMode__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
mvp_msgs__msg__ControlMode__Sequence__are_equal(const mvp_msgs__msg__ControlMode__Sequence * lhs, const mvp_msgs__msg__ControlMode__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!mvp_msgs__msg__ControlMode__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
mvp_msgs__msg__ControlMode__Sequence__copy(
  const mvp_msgs__msg__ControlMode__Sequence * input,
  mvp_msgs__msg__ControlMode__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(mvp_msgs__msg__ControlMode);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    mvp_msgs__msg__ControlMode * data =
      (mvp_msgs__msg__ControlMode *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!mvp_msgs__msg__ControlMode__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          mvp_msgs__msg__ControlMode__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!mvp_msgs__msg__ControlMode__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
