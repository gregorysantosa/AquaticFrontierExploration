// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from acomms_msgs:msg/AcommsRxByteArray.idl
// generated code does not contain a copyright notice

#ifndef ACOMMS_MSGS__MSG__DETAIL__ACOMMS_RX_BYTE_ARRAY__STRUCT_H_
#define ACOMMS_MSGS__MSG__DETAIL__ACOMMS_RX_BYTE_ARRAY__STRUCT_H_

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
// Member 'msg'
#include "std_msgs/msg/detail/u_int8_multi_array__struct.h"

/// Struct defined in msg/AcommsRxByteArray in the package acomms_msgs.
typedef struct acomms_msgs__msg__AcommsRxByteArray
{
  std_msgs__msg__Header header;
  std_msgs__msg__UInt8MultiArray msg;
} acomms_msgs__msg__AcommsRxByteArray;

// Struct for a sequence of acomms_msgs__msg__AcommsRxByteArray.
typedef struct acomms_msgs__msg__AcommsRxByteArray__Sequence
{
  acomms_msgs__msg__AcommsRxByteArray * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} acomms_msgs__msg__AcommsRxByteArray__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ACOMMS_MSGS__MSG__DETAIL__ACOMMS_RX_BYTE_ARRAY__STRUCT_H_
