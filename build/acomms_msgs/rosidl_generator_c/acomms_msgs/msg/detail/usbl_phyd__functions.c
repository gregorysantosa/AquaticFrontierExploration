// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from acomms_msgs:msg/UsblPhyd.idl
// generated code does not contain a copyright notice
#include "acomms_msgs/msg/detail/usbl_phyd__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"

bool
acomms_msgs__msg__UsblPhyd__init(acomms_msgs__msg__UsblPhyd * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    acomms_msgs__msg__UsblPhyd__fini(msg);
    return false;
  }
  // current_time
  // measurement_time
  // remote_address
  // fix_type
  // delay_1_5
  // delay_2_5
  // delay_3_5
  // delay_4_5
  // delay_1_2
  // delay_4_1
  // delay_3_2
  // delay_3_4
  return true;
}

void
acomms_msgs__msg__UsblPhyd__fini(acomms_msgs__msg__UsblPhyd * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // current_time
  // measurement_time
  // remote_address
  // fix_type
  // delay_1_5
  // delay_2_5
  // delay_3_5
  // delay_4_5
  // delay_1_2
  // delay_4_1
  // delay_3_2
  // delay_3_4
}

bool
acomms_msgs__msg__UsblPhyd__are_equal(const acomms_msgs__msg__UsblPhyd * lhs, const acomms_msgs__msg__UsblPhyd * rhs)
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
  // fix_type
  if (lhs->fix_type != rhs->fix_type) {
    return false;
  }
  // delay_1_5
  if (lhs->delay_1_5 != rhs->delay_1_5) {
    return false;
  }
  // delay_2_5
  if (lhs->delay_2_5 != rhs->delay_2_5) {
    return false;
  }
  // delay_3_5
  if (lhs->delay_3_5 != rhs->delay_3_5) {
    return false;
  }
  // delay_4_5
  if (lhs->delay_4_5 != rhs->delay_4_5) {
    return false;
  }
  // delay_1_2
  if (lhs->delay_1_2 != rhs->delay_1_2) {
    return false;
  }
  // delay_4_1
  if (lhs->delay_4_1 != rhs->delay_4_1) {
    return false;
  }
  // delay_3_2
  if (lhs->delay_3_2 != rhs->delay_3_2) {
    return false;
  }
  // delay_3_4
  if (lhs->delay_3_4 != rhs->delay_3_4) {
    return false;
  }
  return true;
}

bool
acomms_msgs__msg__UsblPhyd__copy(
  const acomms_msgs__msg__UsblPhyd * input,
  acomms_msgs__msg__UsblPhyd * output)
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
  // fix_type
  output->fix_type = input->fix_type;
  // delay_1_5
  output->delay_1_5 = input->delay_1_5;
  // delay_2_5
  output->delay_2_5 = input->delay_2_5;
  // delay_3_5
  output->delay_3_5 = input->delay_3_5;
  // delay_4_5
  output->delay_4_5 = input->delay_4_5;
  // delay_1_2
  output->delay_1_2 = input->delay_1_2;
  // delay_4_1
  output->delay_4_1 = input->delay_4_1;
  // delay_3_2
  output->delay_3_2 = input->delay_3_2;
  // delay_3_4
  output->delay_3_4 = input->delay_3_4;
  return true;
}

acomms_msgs__msg__UsblPhyd *
acomms_msgs__msg__UsblPhyd__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  acomms_msgs__msg__UsblPhyd * msg = (acomms_msgs__msg__UsblPhyd *)allocator.allocate(sizeof(acomms_msgs__msg__UsblPhyd), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(acomms_msgs__msg__UsblPhyd));
  bool success = acomms_msgs__msg__UsblPhyd__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
acomms_msgs__msg__UsblPhyd__destroy(acomms_msgs__msg__UsblPhyd * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    acomms_msgs__msg__UsblPhyd__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
acomms_msgs__msg__UsblPhyd__Sequence__init(acomms_msgs__msg__UsblPhyd__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  acomms_msgs__msg__UsblPhyd * data = NULL;

  if (size) {
    data = (acomms_msgs__msg__UsblPhyd *)allocator.zero_allocate(size, sizeof(acomms_msgs__msg__UsblPhyd), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = acomms_msgs__msg__UsblPhyd__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        acomms_msgs__msg__UsblPhyd__fini(&data[i - 1]);
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
acomms_msgs__msg__UsblPhyd__Sequence__fini(acomms_msgs__msg__UsblPhyd__Sequence * array)
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
      acomms_msgs__msg__UsblPhyd__fini(&array->data[i]);
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

acomms_msgs__msg__UsblPhyd__Sequence *
acomms_msgs__msg__UsblPhyd__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  acomms_msgs__msg__UsblPhyd__Sequence * array = (acomms_msgs__msg__UsblPhyd__Sequence *)allocator.allocate(sizeof(acomms_msgs__msg__UsblPhyd__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = acomms_msgs__msg__UsblPhyd__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
acomms_msgs__msg__UsblPhyd__Sequence__destroy(acomms_msgs__msg__UsblPhyd__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    acomms_msgs__msg__UsblPhyd__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
acomms_msgs__msg__UsblPhyd__Sequence__are_equal(const acomms_msgs__msg__UsblPhyd__Sequence * lhs, const acomms_msgs__msg__UsblPhyd__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!acomms_msgs__msg__UsblPhyd__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
acomms_msgs__msg__UsblPhyd__Sequence__copy(
  const acomms_msgs__msg__UsblPhyd__Sequence * input,
  acomms_msgs__msg__UsblPhyd__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(acomms_msgs__msg__UsblPhyd);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    acomms_msgs__msg__UsblPhyd * data =
      (acomms_msgs__msg__UsblPhyd *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!acomms_msgs__msg__UsblPhyd__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          acomms_msgs__msg__UsblPhyd__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!acomms_msgs__msg__UsblPhyd__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
