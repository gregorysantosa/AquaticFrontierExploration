// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from acomms_msgs:msg/UsblData.idl
// generated code does not contain a copyright notice

#ifndef ACOMMS_MSGS__MSG__DETAIL__USBL_DATA__STRUCT_H_
#define ACOMMS_MSGS__MSG__DETAIL__USBL_DATA__STRUCT_H_

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
// Member 'xyz'
// Member 'enu'
#include "geometry_msgs/msg/detail/vector3__struct.h"
// Member 'orientation'
#include "geometry_msgs/msg/detail/quaternion__struct.h"

/// Struct defined in msg/UsblData in the package acomms_msgs.
typedef struct acomms_msgs__msg__UsblData
{
  std_msgs__msg__Header header;
  float current_time;
  float measurement_time;
  int32_t remote_address;
  geometry_msgs__msg__Vector3 xyz;
  geometry_msgs__msg__Vector3 enu;
  geometry_msgs__msg__Quaternion orientation;
  float propagation_time;
  int32_t rssi;
  int32_t integrity;
  float accuracy;
} acomms_msgs__msg__UsblData;

// Struct for a sequence of acomms_msgs__msg__UsblData.
typedef struct acomms_msgs__msg__UsblData__Sequence
{
  acomms_msgs__msg__UsblData * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} acomms_msgs__msg__UsblData__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ACOMMS_MSGS__MSG__DETAIL__USBL_DATA__STRUCT_H_
