// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from acomms_msgs:msg/AcommsTx.idl
// generated code does not contain a copyright notice

#ifndef ACOMMS_MSGS__MSG__DETAIL__ACOMMS_TX__STRUCT_H_
#define ACOMMS_MSGS__MSG__DETAIL__ACOMMS_TX__STRUCT_H_

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
// Member 'subbuffer_id'
// Member 'data'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/AcommsTx in the package acomms_msgs.
typedef struct acomms_msgs__msg__AcommsTx
{
  std_msgs__msg__Header header;
  rosidl_runtime_c__String subbuffer_id;
  rosidl_runtime_c__String data;
} acomms_msgs__msg__AcommsTx;

// Struct for a sequence of acomms_msgs__msg__AcommsTx.
typedef struct acomms_msgs__msg__AcommsTx__Sequence
{
  acomms_msgs__msg__AcommsTx * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} acomms_msgs__msg__AcommsTx__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ACOMMS_MSGS__MSG__DETAIL__ACOMMS_TX__STRUCT_H_
