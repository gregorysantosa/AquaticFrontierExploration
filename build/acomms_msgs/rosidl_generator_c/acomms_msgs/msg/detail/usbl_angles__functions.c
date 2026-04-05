// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from acomms_msgs:msg/UsblAngles.idl
// generated code does not contain a copyright notice
#include "acomms_msgs/msg/detail/usbl_angles__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"

bool
acomms_msgs__msg__UsblAngles__init(acomms_msgs__msg__UsblAngles * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    acomms_msgs__msg__UsblAngles__fini(msg);
    return false;
  }
  // current_time
  // measurement_time
  // remote_address
  // local_bearing
  // local_elevation
  // bearing
  // elevation
  // roll
  // pitch
  // yaw
  // rssi
  // signal_integrity
  // accuracy
  return true;
}

void
acomms_msgs__msg__UsblAngles__fini(acomms_msgs__msg__UsblAngles * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // current_time
  // measurement_time
  // remote_address
  // local_bearing
  // local_elevation
  // bearing
  // elevation
  // roll
  // pitch
  // yaw
  // rssi
  // signal_integrity
  // accuracy
}

bool
acomms_msgs__msg__UsblAngles__are_equal(const acomms_msgs__msg__UsblAngles * lhs, const acomms_msgs__msg__UsblAngles * rhs)
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
  // local_bearing
  if (lhs->local_bearing != rhs->local_bearing) {
    return false;
  }
  // local_elevation
  if (lhs->local_elevation != rhs->local_elevation) {
    return false;
  }
  // bearing
  if (lhs->bearing != rhs->bearing) {
    return false;
  }
  // elevation
  if (lhs->elevation != rhs->elevation) {
    return false;
  }
  // roll
  if (lhs->roll != rhs->roll) {
    return false;
  }
  // pitch
  if (lhs->pitch != rhs->pitch) {
    return false;
  }
  // yaw
  if (lhs->yaw != rhs->yaw) {
    return false;
  }
  // rssi
  if (lhs->rssi != rhs->rssi) {
    return false;
  }
  // signal_integrity
  if (lhs->signal_integrity != rhs->signal_integrity) {
    return false;
  }
  // accuracy
  if (lhs->accuracy != rhs->accuracy) {
    return false;
  }
  return true;
}

bool
acomms_msgs__msg__UsblAngles__copy(
  const acomms_msgs__msg__UsblAngles * input,
  acomms_msgs__msg__UsblAngles * output)
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
  // local_bearing
  output->local_bearing = input->local_bearing;
  // local_elevation
  output->local_elevation = input->local_elevation;
  // bearing
  output->bearing = input->bearing;
  // elevation
  output->elevation = input->elevation;
  // roll
  output->roll = input->roll;
  // pitch
  output->pitch = input->pitch;
  // yaw
  output->yaw = input->yaw;
  // rssi
  output->rssi = input->rssi;
  // signal_integrity
  output->signal_integrity = input->signal_integrity;
  // accuracy
  output->accuracy = input->accuracy;
  return true;
}

acomms_msgs__msg__UsblAngles *
acomms_msgs__msg__UsblAngles__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  acomms_msgs__msg__UsblAngles * msg = (acomms_msgs__msg__UsblAngles *)allocator.allocate(sizeof(acomms_msgs__msg__UsblAngles), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(acomms_msgs__msg__UsblAngles));
  bool success = acomms_msgs__msg__UsblAngles__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
acomms_msgs__msg__UsblAngles__destroy(acomms_msgs__msg__UsblAngles * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    acomms_msgs__msg__UsblAngles__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
acomms_msgs__msg__UsblAngles__Sequence__init(acomms_msgs__msg__UsblAngles__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  acomms_msgs__msg__UsblAngles * data = NULL;

  if (size) {
    data = (acomms_msgs__msg__UsblAngles *)allocator.zero_allocate(size, sizeof(acomms_msgs__msg__UsblAngles), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = acomms_msgs__msg__UsblAngles__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        acomms_msgs__msg__UsblAngles__fini(&data[i - 1]);
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
acomms_msgs__msg__UsblAngles__Sequence__fini(acomms_msgs__msg__UsblAngles__Sequence * array)
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
      acomms_msgs__msg__UsblAngles__fini(&array->data[i]);
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

acomms_msgs__msg__UsblAngles__Sequence *
acomms_msgs__msg__UsblAngles__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  acomms_msgs__msg__UsblAngles__Sequence * array = (acomms_msgs__msg__UsblAngles__Sequence *)allocator.allocate(sizeof(acomms_msgs__msg__UsblAngles__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = acomms_msgs__msg__UsblAngles__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
acomms_msgs__msg__UsblAngles__Sequence__destroy(acomms_msgs__msg__UsblAngles__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    acomms_msgs__msg__UsblAngles__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
acomms_msgs__msg__UsblAngles__Sequence__are_equal(const acomms_msgs__msg__UsblAngles__Sequence * lhs, const acomms_msgs__msg__UsblAngles__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!acomms_msgs__msg__UsblAngles__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
acomms_msgs__msg__UsblAngles__Sequence__copy(
  const acomms_msgs__msg__UsblAngles__Sequence * input,
  acomms_msgs__msg__UsblAngles__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(acomms_msgs__msg__UsblAngles);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    acomms_msgs__msg__UsblAngles * data =
      (acomms_msgs__msg__UsblAngles *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!acomms_msgs__msg__UsblAngles__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          acomms_msgs__msg__UsblAngles__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!acomms_msgs__msg__UsblAngles__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
