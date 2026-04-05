// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from acomms_msgs:msg/UsblAngles.idl
// generated code does not contain a copyright notice

#ifndef ACOMMS_MSGS__MSG__DETAIL__USBL_ANGLES__STRUCT_H_
#define ACOMMS_MSGS__MSG__DETAIL__USBL_ANGLES__STRUCT_H_

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

/// Struct defined in msg/UsblAngles in the package acomms_msgs.
typedef struct acomms_msgs__msg__UsblAngles
{
  std_msgs__msg__Header header;
  float current_time;
  float measurement_time;
  int32_t remote_address;
  float local_bearing;
  float local_elevation;
  float bearing;
  float elevation;
  float roll;
  float pitch;
  float yaw;
  int32_t rssi;
  int32_t signal_integrity;
  float accuracy;
} acomms_msgs__msg__UsblAngles;

// Struct for a sequence of acomms_msgs__msg__UsblAngles.
typedef struct acomms_msgs__msg__UsblAngles__Sequence
{
  acomms_msgs__msg__UsblAngles * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} acomms_msgs__msg__UsblAngles__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ACOMMS_MSGS__MSG__DETAIL__USBL_ANGLES__STRUCT_H_
