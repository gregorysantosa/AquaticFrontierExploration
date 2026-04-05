// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from acomms_msgs:msg/UsblPhyd.idl
// generated code does not contain a copyright notice

#ifndef ACOMMS_MSGS__MSG__DETAIL__USBL_PHYD__STRUCT_H_
#define ACOMMS_MSGS__MSG__DETAIL__USBL_PHYD__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"

/// Struct defined in msg/UsblPhyd in the package acomms_msgs.
typedef struct acomms_msgs__msg__UsblPhyd
{
  std_msgs__msg__Header header;
  float current_time;
  float measurement_time;
  int32_t remote_address;
  bool fix_type;
  int32_t delay_1_5;
  int32_t delay_2_5;
  int32_t delay_3_5;
  int32_t delay_4_5;
  int32_t delay_1_2;
  int32_t delay_4_1;
  int32_t delay_3_2;
  int32_t delay_3_4;
} acomms_msgs__msg__UsblPhyd;

// Struct for a sequence of acomms_msgs__msg__UsblPhyd.
typedef struct acomms_msgs__msg__UsblPhyd__Sequence
{
  acomms_msgs__msg__UsblPhyd * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} acomms_msgs__msg__UsblPhyd__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ACOMMS_MSGS__MSG__DETAIL__USBL_PHYD__STRUCT_H_
