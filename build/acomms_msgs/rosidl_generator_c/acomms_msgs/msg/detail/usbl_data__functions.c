// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from acomms_msgs:msg/UsblData.idl
// generated code does not contain a copyright notice
#include "acomms_msgs/msg/detail/usbl_data__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `xyz`
// Member `enu`
#include "geometry_msgs/msg/detail/vector3__functions.h"
// Member `orientation`
#include "geometry_msgs/msg/detail/quaternion__functions.h"

bool
acomms_msgs__msg__UsblData__init(acomms_msgs__msg__UsblData * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    acomms_msgs__msg__UsblData__fini(msg);
    return false;
  }
  // current_time
  // measurement_time
  // remote_address
  // xyz
  if (!geometry_msgs__msg__Vector3__init(&msg->xyz)) {
    acomms_msgs__msg__UsblData__fini(msg);
    return false;
  }
  // enu
  if (!geometry_msgs__msg__Vector3__init(&msg->enu)) {
    acomms_msgs__msg__UsblData__fini(msg);
    return false;
  }
  // orientation
  if (!geometry_msgs__msg__Quaternion__init(&msg->orientation)) {
    acomms_msgs__msg__UsblData__fini(msg);
    return false;
  }
  // propagation_time
  // rssi
  // integrity
  // accuracy
  return true;
}

void
acomms_msgs__msg__UsblData__fini(acomms_msgs__msg__UsblData * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // current_time
  // measurement_time
  // remote_address
  // xyz
  geometry_msgs__msg__Vector3__fini(&msg->xyz);
  // enu
  geometry_msgs__msg__Vector3__fini(&msg->enu);
  // orientation
  geometry_msgs__msg__Quaternion__fini(&msg->orientation);
  // propagation_time
  // rssi
  // integrity
  // accuracy
}

bool
acomms_msgs__msg__UsblData__are_equal(const acomms_msgs__msg__UsblData * lhs, const acomms_msgs__msg__UsblData * rhs)
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
  // current_time
  if (lhs->current_time != rhs->current_time) {
    return false;
  }
  // measurement_time
  if (lhs->measurement_time != rhs->measurement_time) {
    return false;
  }
  // remote_address
  if (lhs->remote_address != rhs->remote_address) {
    return false;
  }
  // xyz
  if (!geometry_msgs__msg__Vector3__are_equal(
      &(lhs->xyz), &(rhs->xyz)))
  {
    return false;
  }
  // enu
  if (!geometry_msgs__msg__Vector3__are_equal(
      &(lhs->enu), &(rhs->enu)))
  {
    return false;
  }
  // orientation
  if (!geometry_msgs__msg__Quaternion__are_equal(
      &(lhs->orientation), &(rhs->orientation)))
  {
    return false;
  }
  // propagation_time
  if (lhs->propagation_time != rhs->propagation_time) {
    return false;
  }
  // rssi
  if (lhs->rssi != rhs->rssi) {
    return false;
  }
  // integrity
  if (lhs->integrity != rhs->integrity) {
    return false;
  }
  // accuracy
  if (lhs->accuracy != rhs->accuracy) {
    return false;
  }
  return true;
}

bool
acomms_msgs__msg__UsblData__copy(
  const acomms_msgs__msg__UsblData * input,
  acomms_msgs__msg__UsblData * output)
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
  // current_time
  output->current_time = input->current_time;
  // measurement_time
  output->measurement_time = input->measurement_time;
  // remote_address
  output->remote_address = input->remote_address;
  // xyz
  if (!geometry_msgs__msg__Vector3__copy(
      &(input->xyz), &(output->xyz)))
  {
    return false;
  }
  // enu
  if (!geometry_msgs__msg__Vector3__copy(
      &(input->enu), &(output->enu)))
  {
    return false;
  }
  // orientation
  if (!geometry_msgs__msg__Quaternion__copy(
      &(input->orientation), &(output->orientation)))
  {
    return false;
  }
  // propagation_time
  output->propagation_time = input->propagation_time;
  // rssi
  output->rssi = input->rssi;
  // integrity
  output->integrity = input->integrity;
  // accuracy
  output->accuracy = input->accuracy;
  return true;
}

acomms_msgs__msg__UsblData *
acomms_msgs__msg__UsblData__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  acomms_msgs__msg__UsblData * msg = (acomms_msgs__msg__UsblData *)allocator.allocate(sizeof(acomms_msgs__msg__UsblData), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(acomms_msgs__msg__UsblData));
  bool success = acomms_msgs__msg__UsblData__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
acomms_msgs__msg__UsblData__destroy(acomms_msgs__msg__UsblData * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    acomms_msgs__msg__UsblData__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
acomms_msgs__msg__UsblData__Sequence__init(acomms_msgs__msg__UsblData__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  acomms_msgs__msg__UsblData * data = NULL;

  if (size) {
    data = (acomms_msgs__msg__UsblData *)allocator.zero_allocate(size, sizeof(acomms_msgs__msg__UsblData), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = acomms_msgs__msg__UsblData__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        acomms_msgs__msg__UsblData__fini(&data[i - 1]);
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
acomms_msgs__msg__UsblData__Sequence__fini(acomms_msgs__msg__UsblData__Sequence * array)
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
      acomms_msgs__msg__UsblData__fini(&array->data[i]);
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

acomms_msgs__msg__UsblData__Sequence *
acomms_msgs__msg__UsblData__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  acomms_msgs__msg__UsblData__Sequence * array = (acomms_msgs__msg__UsblData__Sequence *)allocator.allocate(sizeof(acomms_msgs__msg__UsblData__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = acomms_msgs__msg__UsblData__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
acomms_msgs__msg__UsblData__Sequence__destroy(acomms_msgs__msg__UsblData__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    acomms_msgs__msg__UsblData__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
acomms_msgs__msg__UsblData__Sequence__are_equal(const acomms_msgs__msg__UsblData__Sequence * lhs, const acomms_msgs__msg__UsblData__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!acomms_msgs__msg__UsblData__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
acomms_msgs__msg__UsblData__Sequence__copy(
  const acomms_msgs__msg__UsblData__Sequence * input,
  acomms_msgs__msg__UsblData__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(acomms_msgs__msg__UsblData);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    acomms_msgs__msg__UsblData * data =
      (acomms_msgs__msg__UsblData *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!acomms_msgs__msg__UsblData__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          acomms_msgs__msg__UsblData__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!acomms_msgs__msg__UsblData__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
