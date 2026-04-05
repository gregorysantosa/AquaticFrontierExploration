// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from acomms_msgs:msg/AcommsTx.idl
// generated code does not contain a copyright notice
#include "acomms_msgs/msg/detail/acomms_tx__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `subbuffer_id`
// Member `data`
#include "rosidl_runtime_c/string_functions.h"

bool
acomms_msgs__msg__AcommsTx__init(acomms_msgs__msg__AcommsTx * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    acomms_msgs__msg__AcommsTx__fini(msg);
    return false;
  }
  // subbuffer_id
  if (!rosidl_runtime_c__String__init(&msg->subbuffer_id)) {
    acomms_msgs__msg__AcommsTx__fini(msg);
    return false;
  }
  // data
  if (!rosidl_runtime_c__String__init(&msg->data)) {
    acomms_msgs__msg__AcommsTx__fini(msg);
    return false;
  }
  return true;
}

void
acomms_msgs__msg__AcommsTx__fini(acomms_msgs__msg__AcommsTx * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // subbuffer_id
  rosidl_runtime_c__String__fini(&msg->subbuffer_id);
  // data
  rosidl_runtime_c__String__fini(&msg->data);
}

bool
acomms_msgs__msg__AcommsTx__are_equal(const acomms_msgs__msg__AcommsTx * lhs, const acomms_msgs__msg__AcommsTx * rhs)
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
  // subbuffer_id
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->subbuffer_id), &(rhs->subbuffer_id)))
  {
    return false;
  }
  // data
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->data), &(rhs->data)))
  {
    return false;
  }
  return true;
}

bool
acomms_msgs__msg__AcommsTx__copy(
  const acomms_msgs__msg__AcommsTx * input,
  acomms_msgs__msg__AcommsTx * output)
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
  // subbuffer_id
  if (!rosidl_runtime_c__String__copy(
      &(input->subbuffer_id), &(output->subbuffer_id)))
  {
    return false;
  }
  // data
  if (!rosidl_runtime_c__String__copy(
      &(input->data), &(output->data)))
  {
    return false;
  }
  return true;
}

acomms_msgs__msg__AcommsTx *
acomms_msgs__msg__AcommsTx__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  acomms_msgs__msg__AcommsTx * msg = (acomms_msgs__msg__AcommsTx *)allocator.allocate(sizeof(acomms_msgs__msg__AcommsTx), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(acomms_msgs__msg__AcommsTx));
  bool success = acomms_msgs__msg__AcommsTx__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
acomms_msgs__msg__AcommsTx__destroy(acomms_msgs__msg__AcommsTx * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    acomms_msgs__msg__AcommsTx__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
acomms_msgs__msg__AcommsTx__Sequence__init(acomms_msgs__msg__AcommsTx__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  acomms_msgs__msg__AcommsTx * data = NULL;

  if (size) {
    data = (acomms_msgs__msg__AcommsTx *)allocator.zero_allocate(size, sizeof(acomms_msgs__msg__AcommsTx), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = acomms_msgs__msg__AcommsTx__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        acomms_msgs__msg__AcommsTx__fini(&data[i - 1]);
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
acomms_msgs__msg__AcommsTx__Sequence__fini(acomms_msgs__msg__AcommsTx__Sequence * array)
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
      acomms_msgs__msg__AcommsTx__fini(&array->data[i]);
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

acomms_msgs__msg__AcommsTx__Sequence *
acomms_msgs__msg__AcommsTx__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  acomms_msgs__msg__AcommsTx__Sequence * array = (acomms_msgs__msg__AcommsTx__Sequence *)allocator.allocate(sizeof(acomms_msgs__msg__AcommsTx__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = acomms_msgs__msg__AcommsTx__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
acomms_msgs__msg__AcommsTx__Sequence__destroy(acomms_msgs__msg__AcommsTx__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    acomms_msgs__msg__AcommsTx__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
acomms_msgs__msg__AcommsTx__Sequence__are_equal(const acomms_msgs__msg__AcommsTx__Sequence * lhs, const acomms_msgs__msg__AcommsTx__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!acomms_msgs__msg__AcommsTx__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
acomms_msgs__msg__AcommsTx__Sequence__copy(
  const acomms_msgs__msg__AcommsTx__Sequence * input,
  acomms_msgs__msg__AcommsTx__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(acomms_msgs__msg__AcommsTx);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    acomms_msgs__msg__AcommsTx * data =
      (acomms_msgs__msg__AcommsTx *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!acomms_msgs__msg__AcommsTx__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          acomms_msgs__msg__AcommsTx__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!acomms_msgs__msg__AcommsTx__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
