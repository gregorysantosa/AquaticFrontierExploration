// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from mvp_msgs:srv/SetControlPoint.idl
// generated code does not contain a copyright notice
#include "mvp_msgs/srv/detail/set_control_point__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `setpoint`
#include "mvp_msgs/msg/detail/control_process__functions.h"

bool
mvp_msgs__srv__SetControlPoint_Request__init(mvp_msgs__srv__SetControlPoint_Request * msg)
{
  if (!msg) {
    return false;
  }
  // setpoint
  if (!mvp_msgs__msg__ControlProcess__init(&msg->setpoint)) {
    mvp_msgs__srv__SetControlPoint_Request__fini(msg);
    return false;
  }
  return true;
}

void
mvp_msgs__srv__SetControlPoint_Request__fini(mvp_msgs__srv__SetControlPoint_Request * msg)
{
  if (!msg) {
    return;
  }
  // setpoint
  mvp_msgs__msg__ControlProcess__fini(&msg->setpoint);
}

bool
mvp_msgs__srv__SetControlPoint_Request__are_equal(const mvp_msgs__srv__SetControlPoint_Request * lhs, const mvp_msgs__srv__SetControlPoint_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // setpoint
  if (!mvp_msgs__msg__ControlProcess__are_equal(
      &(lhs->setpoint), &(rhs->setpoint)))
  {
    return false;
  }
  return true;
}

bool
mvp_msgs__srv__SetControlPoint_Request__copy(
  const mvp_msgs__srv__SetControlPoint_Request * input,
  mvp_msgs__srv__SetControlPoint_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // setpoint
  if (!mvp_msgs__msg__ControlProcess__copy(
      &(input->setpoint), &(output->setpoint)))
  {
    return false;
  }
  return true;
}

mvp_msgs__srv__SetControlPoint_Request *
mvp_msgs__srv__SetControlPoint_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mvp_msgs__srv__SetControlPoint_Request * msg = (mvp_msgs__srv__SetControlPoint_Request *)allocator.allocate(sizeof(mvp_msgs__srv__SetControlPoint_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(mvp_msgs__srv__SetControlPoint_Request));
  bool success = mvp_msgs__srv__SetControlPoint_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
mvp_msgs__srv__SetControlPoint_Request__destroy(mvp_msgs__srv__SetControlPoint_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    mvp_msgs__srv__SetControlPoint_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
mvp_msgs__srv__SetControlPoint_Request__Sequence__init(mvp_msgs__srv__SetControlPoint_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mvp_msgs__srv__SetControlPoint_Request * data = NULL;

  if (size) {
    data = (mvp_msgs__srv__SetControlPoint_Request *)allocator.zero_allocate(size, sizeof(mvp_msgs__srv__SetControlPoint_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = mvp_msgs__srv__SetControlPoint_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        mvp_msgs__srv__SetControlPoint_Request__fini(&data[i - 1]);
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
mvp_msgs__srv__SetControlPoint_Request__Sequence__fini(mvp_msgs__srv__SetControlPoint_Request__Sequence * array)
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
      mvp_msgs__srv__SetControlPoint_Request__fini(&array->data[i]);
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

mvp_msgs__srv__SetControlPoint_Request__Sequence *
mvp_msgs__srv__SetControlPoint_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mvp_msgs__srv__SetControlPoint_Request__Sequence * array = (mvp_msgs__srv__SetControlPoint_Request__Sequence *)allocator.allocate(sizeof(mvp_msgs__srv__SetControlPoint_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = mvp_msgs__srv__SetControlPoint_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
mvp_msgs__srv__SetControlPoint_Request__Sequence__destroy(mvp_msgs__srv__SetControlPoint_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    mvp_msgs__srv__SetControlPoint_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
mvp_msgs__srv__SetControlPoint_Request__Sequence__are_equal(const mvp_msgs__srv__SetControlPoint_Request__Sequence * lhs, const mvp_msgs__srv__SetControlPoint_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!mvp_msgs__srv__SetControlPoint_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
mvp_msgs__srv__SetControlPoint_Request__Sequence__copy(
  const mvp_msgs__srv__SetControlPoint_Request__Sequence * input,
  mvp_msgs__srv__SetControlPoint_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(mvp_msgs__srv__SetControlPoint_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    mvp_msgs__srv__SetControlPoint_Request * data =
      (mvp_msgs__srv__SetControlPoint_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!mvp_msgs__srv__SetControlPoint_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          mvp_msgs__srv__SetControlPoint_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!mvp_msgs__srv__SetControlPoint_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
mvp_msgs__srv__SetControlPoint_Response__init(mvp_msgs__srv__SetControlPoint_Response * msg)
{
  if (!msg) {
    return false;
  }
  // structure_needs_at_least_one_member
  return true;
}

void
mvp_msgs__srv__SetControlPoint_Response__fini(mvp_msgs__srv__SetControlPoint_Response * msg)
{
  if (!msg) {
    return;
  }
  // structure_needs_at_least_one_member
}

bool
mvp_msgs__srv__SetControlPoint_Response__are_equal(const mvp_msgs__srv__SetControlPoint_Response * lhs, const mvp_msgs__srv__SetControlPoint_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // structure_needs_at_least_one_member
  if (lhs->structure_needs_at_least_one_member != rhs->structure_needs_at_least_one_member) {
    return false;
  }
  return true;
}

bool
mvp_msgs__srv__SetControlPoint_Response__copy(
  const mvp_msgs__srv__SetControlPoint_Response * input,
  mvp_msgs__srv__SetControlPoint_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // structure_needs_at_least_one_member
  output->structure_needs_at_least_one_member = input->structure_needs_at_least_one_member;
  return true;
}

mvp_msgs__srv__SetControlPoint_Response *
mvp_msgs__srv__SetControlPoint_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mvp_msgs__srv__SetControlPoint_Response * msg = (mvp_msgs__srv__SetControlPoint_Response *)allocator.allocate(sizeof(mvp_msgs__srv__SetControlPoint_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(mvp_msgs__srv__SetControlPoint_Response));
  bool success = mvp_msgs__srv__SetControlPoint_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
mvp_msgs__srv__SetControlPoint_Response__destroy(mvp_msgs__srv__SetControlPoint_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    mvp_msgs__srv__SetControlPoint_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
mvp_msgs__srv__SetControlPoint_Response__Sequence__init(mvp_msgs__srv__SetControlPoint_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mvp_msgs__srv__SetControlPoint_Response * data = NULL;

  if (size) {
    data = (mvp_msgs__srv__SetControlPoint_Response *)allocator.zero_allocate(size, sizeof(mvp_msgs__srv__SetControlPoint_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = mvp_msgs__srv__SetControlPoint_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        mvp_msgs__srv__SetControlPoint_Response__fini(&data[i - 1]);
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
mvp_msgs__srv__SetControlPoint_Response__Sequence__fini(mvp_msgs__srv__SetControlPoint_Response__Sequence * array)
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
      mvp_msgs__srv__SetControlPoint_Response__fini(&array->data[i]);
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

mvp_msgs__srv__SetControlPoint_Response__Sequence *
mvp_msgs__srv__SetControlPoint_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mvp_msgs__srv__SetControlPoint_Response__Sequence * array = (mvp_msgs__srv__SetControlPoint_Response__Sequence *)allocator.allocate(sizeof(mvp_msgs__srv__SetControlPoint_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = mvp_msgs__srv__SetControlPoint_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
mvp_msgs__srv__SetControlPoint_Response__Sequence__destroy(mvp_msgs__srv__SetControlPoint_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    mvp_msgs__srv__SetControlPoint_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
mvp_msgs__srv__SetControlPoint_Response__Sequence__are_equal(const mvp_msgs__srv__SetControlPoint_Response__Sequence * lhs, const mvp_msgs__srv__SetControlPoint_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!mvp_msgs__srv__SetControlPoint_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
mvp_msgs__srv__SetControlPoint_Response__Sequence__copy(
  const mvp_msgs__srv__SetControlPoint_Response__Sequence * input,
  mvp_msgs__srv__SetControlPoint_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(mvp_msgs__srv__SetControlPoint_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    mvp_msgs__srv__SetControlPoint_Response * data =
      (mvp_msgs__srv__SetControlPoint_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!mvp_msgs__srv__SetControlPoint_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          mvp_msgs__srv__SetControlPoint_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!mvp_msgs__srv__SetControlPoint_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
