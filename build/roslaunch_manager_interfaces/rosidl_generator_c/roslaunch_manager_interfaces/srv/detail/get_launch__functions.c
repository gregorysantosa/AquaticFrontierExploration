// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from roslaunch_manager_interfaces:srv/GetLaunch.idl
// generated code does not contain a copyright notice
#include "roslaunch_manager_interfaces/srv/detail/get_launch__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

bool
roslaunch_manager_interfaces__srv__GetLaunch_Request__init(roslaunch_manager_interfaces__srv__GetLaunch_Request * msg)
{
  if (!msg) {
    return false;
  }
  // structure_needs_at_least_one_member
  return true;
}

void
roslaunch_manager_interfaces__srv__GetLaunch_Request__fini(roslaunch_manager_interfaces__srv__GetLaunch_Request * msg)
{
  if (!msg) {
    return;
  }
  // structure_needs_at_least_one_member
}

bool
roslaunch_manager_interfaces__srv__GetLaunch_Request__are_equal(const roslaunch_manager_interfaces__srv__GetLaunch_Request * lhs, const roslaunch_manager_interfaces__srv__GetLaunch_Request * rhs)
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
roslaunch_manager_interfaces__srv__GetLaunch_Request__copy(
  const roslaunch_manager_interfaces__srv__GetLaunch_Request * input,
  roslaunch_manager_interfaces__srv__GetLaunch_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // structure_needs_at_least_one_member
  output->structure_needs_at_least_one_member = input->structure_needs_at_least_one_member;
  return true;
}

roslaunch_manager_interfaces__srv__GetLaunch_Request *
roslaunch_manager_interfaces__srv__GetLaunch_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  roslaunch_manager_interfaces__srv__GetLaunch_Request * msg = (roslaunch_manager_interfaces__srv__GetLaunch_Request *)allocator.allocate(sizeof(roslaunch_manager_interfaces__srv__GetLaunch_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(roslaunch_manager_interfaces__srv__GetLaunch_Request));
  bool success = roslaunch_manager_interfaces__srv__GetLaunch_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
roslaunch_manager_interfaces__srv__GetLaunch_Request__destroy(roslaunch_manager_interfaces__srv__GetLaunch_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    roslaunch_manager_interfaces__srv__GetLaunch_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
roslaunch_manager_interfaces__srv__GetLaunch_Request__Sequence__init(roslaunch_manager_interfaces__srv__GetLaunch_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  roslaunch_manager_interfaces__srv__GetLaunch_Request * data = NULL;

  if (size) {
    data = (roslaunch_manager_interfaces__srv__GetLaunch_Request *)allocator.zero_allocate(size, sizeof(roslaunch_manager_interfaces__srv__GetLaunch_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = roslaunch_manager_interfaces__srv__GetLaunch_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        roslaunch_manager_interfaces__srv__GetLaunch_Request__fini(&data[i - 1]);
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
roslaunch_manager_interfaces__srv__GetLaunch_Request__Sequence__fini(roslaunch_manager_interfaces__srv__GetLaunch_Request__Sequence * array)
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
      roslaunch_manager_interfaces__srv__GetLaunch_Request__fini(&array->data[i]);
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

roslaunch_manager_interfaces__srv__GetLaunch_Request__Sequence *
roslaunch_manager_interfaces__srv__GetLaunch_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  roslaunch_manager_interfaces__srv__GetLaunch_Request__Sequence * array = (roslaunch_manager_interfaces__srv__GetLaunch_Request__Sequence *)allocator.allocate(sizeof(roslaunch_manager_interfaces__srv__GetLaunch_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = roslaunch_manager_interfaces__srv__GetLaunch_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
roslaunch_manager_interfaces__srv__GetLaunch_Request__Sequence__destroy(roslaunch_manager_interfaces__srv__GetLaunch_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    roslaunch_manager_interfaces__srv__GetLaunch_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
roslaunch_manager_interfaces__srv__GetLaunch_Request__Sequence__are_equal(const roslaunch_manager_interfaces__srv__GetLaunch_Request__Sequence * lhs, const roslaunch_manager_interfaces__srv__GetLaunch_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!roslaunch_manager_interfaces__srv__GetLaunch_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
roslaunch_manager_interfaces__srv__GetLaunch_Request__Sequence__copy(
  const roslaunch_manager_interfaces__srv__GetLaunch_Request__Sequence * input,
  roslaunch_manager_interfaces__srv__GetLaunch_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(roslaunch_manager_interfaces__srv__GetLaunch_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    roslaunch_manager_interfaces__srv__GetLaunch_Request * data =
      (roslaunch_manager_interfaces__srv__GetLaunch_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!roslaunch_manager_interfaces__srv__GetLaunch_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          roslaunch_manager_interfaces__srv__GetLaunch_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!roslaunch_manager_interfaces__srv__GetLaunch_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `list`
#include "rosidl_runtime_c/string_functions.h"

bool
roslaunch_manager_interfaces__srv__GetLaunch_Response__init(roslaunch_manager_interfaces__srv__GetLaunch_Response * msg)
{
  if (!msg) {
    return false;
  }
  // list
  if (!rosidl_runtime_c__String__Sequence__init(&msg->list, 0)) {
    roslaunch_manager_interfaces__srv__GetLaunch_Response__fini(msg);
    return false;
  }
  return true;
}

void
roslaunch_manager_interfaces__srv__GetLaunch_Response__fini(roslaunch_manager_interfaces__srv__GetLaunch_Response * msg)
{
  if (!msg) {
    return;
  }
  // list
  rosidl_runtime_c__String__Sequence__fini(&msg->list);
}

bool
roslaunch_manager_interfaces__srv__GetLaunch_Response__are_equal(const roslaunch_manager_interfaces__srv__GetLaunch_Response * lhs, const roslaunch_manager_interfaces__srv__GetLaunch_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // list
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->list), &(rhs->list)))
  {
    return false;
  }
  return true;
}

bool
roslaunch_manager_interfaces__srv__GetLaunch_Response__copy(
  const roslaunch_manager_interfaces__srv__GetLaunch_Response * input,
  roslaunch_manager_interfaces__srv__GetLaunch_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // list
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->list), &(output->list)))
  {
    return false;
  }
  return true;
}

roslaunch_manager_interfaces__srv__GetLaunch_Response *
roslaunch_manager_interfaces__srv__GetLaunch_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  roslaunch_manager_interfaces__srv__GetLaunch_Response * msg = (roslaunch_manager_interfaces__srv__GetLaunch_Response *)allocator.allocate(sizeof(roslaunch_manager_interfaces__srv__GetLaunch_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(roslaunch_manager_interfaces__srv__GetLaunch_Response));
  bool success = roslaunch_manager_interfaces__srv__GetLaunch_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
roslaunch_manager_interfaces__srv__GetLaunch_Response__destroy(roslaunch_manager_interfaces__srv__GetLaunch_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    roslaunch_manager_interfaces__srv__GetLaunch_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
roslaunch_manager_interfaces__srv__GetLaunch_Response__Sequence__init(roslaunch_manager_interfaces__srv__GetLaunch_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  roslaunch_manager_interfaces__srv__GetLaunch_Response * data = NULL;

  if (size) {
    data = (roslaunch_manager_interfaces__srv__GetLaunch_Response *)allocator.zero_allocate(size, sizeof(roslaunch_manager_interfaces__srv__GetLaunch_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = roslaunch_manager_interfaces__srv__GetLaunch_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        roslaunch_manager_interfaces__srv__GetLaunch_Response__fini(&data[i - 1]);
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
roslaunch_manager_interfaces__srv__GetLaunch_Response__Sequence__fini(roslaunch_manager_interfaces__srv__GetLaunch_Response__Sequence * array)
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
      roslaunch_manager_interfaces__srv__GetLaunch_Response__fini(&array->data[i]);
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

roslaunch_manager_interfaces__srv__GetLaunch_Response__Sequence *
roslaunch_manager_interfaces__srv__GetLaunch_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  roslaunch_manager_interfaces__srv__GetLaunch_Response__Sequence * array = (roslaunch_manager_interfaces__srv__GetLaunch_Response__Sequence *)allocator.allocate(sizeof(roslaunch_manager_interfaces__srv__GetLaunch_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = roslaunch_manager_interfaces__srv__GetLaunch_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
roslaunch_manager_interfaces__srv__GetLaunch_Response__Sequence__destroy(roslaunch_manager_interfaces__srv__GetLaunch_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    roslaunch_manager_interfaces__srv__GetLaunch_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
roslaunch_manager_interfaces__srv__GetLaunch_Response__Sequence__are_equal(const roslaunch_manager_interfaces__srv__GetLaunch_Response__Sequence * lhs, const roslaunch_manager_interfaces__srv__GetLaunch_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!roslaunch_manager_interfaces__srv__GetLaunch_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
roslaunch_manager_interfaces__srv__GetLaunch_Response__Sequence__copy(
  const roslaunch_manager_interfaces__srv__GetLaunch_Response__Sequence * input,
  roslaunch_manager_interfaces__srv__GetLaunch_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(roslaunch_manager_interfaces__srv__GetLaunch_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    roslaunch_manager_interfaces__srv__GetLaunch_Response * data =
      (roslaunch_manager_interfaces__srv__GetLaunch_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!roslaunch_manager_interfaces__srv__GetLaunch_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          roslaunch_manager_interfaces__srv__GetLaunch_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!roslaunch_manager_interfaces__srv__GetLaunch_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
