// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mvp_msgs:srv/GetControlModes.idl
// generated code does not contain a copyright notice

#ifndef MVP_MSGS__SRV__DETAIL__GET_CONTROL_MODES__STRUCT_H_
#define MVP_MSGS__SRV__DETAIL__GET_CONTROL_MODES__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/GetControlModes in the package mvp_msgs.
typedef struct mvp_msgs__srv__GetControlModes_Request
{
  uint8_t structure_needs_at_least_one_member;
} mvp_msgs__srv__GetControlModes_Request;

// Struct for a sequence of mvp_msgs__srv__GetControlModes_Request.
typedef struct mvp_msgs__srv__GetControlModes_Request__Sequence
{
  mvp_msgs__srv__GetControlModes_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mvp_msgs__srv__GetControlModes_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'modes'
#include "mvp_msgs/msg/detail/control_mode__struct.h"

/// Struct defined in srv/GetControlModes in the package mvp_msgs.
typedef struct mvp_msgs__srv__GetControlModes_Response
{
  mvp_msgs__msg__ControlMode__Sequence modes;
} mvp_msgs__srv__GetControlModes_Response;

// Struct for a sequence of mvp_msgs__srv__GetControlModes_Response.
typedef struct mvp_msgs__srv__GetControlModes_Response__Sequence
{
  mvp_msgs__srv__GetControlModes_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mvp_msgs__srv__GetControlModes_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MVP_MSGS__SRV__DETAIL__GET_CONTROL_MODES__STRUCT_H_
