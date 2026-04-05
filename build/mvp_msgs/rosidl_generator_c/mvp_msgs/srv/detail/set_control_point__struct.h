// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mvp_msgs:srv/SetControlPoint.idl
// generated code does not contain a copyright notice

#ifndef MVP_MSGS__SRV__DETAIL__SET_CONTROL_POINT__STRUCT_H_
#define MVP_MSGS__SRV__DETAIL__SET_CONTROL_POINT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'setpoint'
#include "mvp_msgs/msg/detail/control_process__struct.h"

/// Struct defined in srv/SetControlPoint in the package mvp_msgs.
typedef struct mvp_msgs__srv__SetControlPoint_Request
{
  mvp_msgs__msg__ControlProcess setpoint;
} mvp_msgs__srv__SetControlPoint_Request;

// Struct for a sequence of mvp_msgs__srv__SetControlPoint_Request.
typedef struct mvp_msgs__srv__SetControlPoint_Request__Sequence
{
  mvp_msgs__srv__SetControlPoint_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mvp_msgs__srv__SetControlPoint_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/SetControlPoint in the package mvp_msgs.
typedef struct mvp_msgs__srv__SetControlPoint_Response
{
  uint8_t structure_needs_at_least_one_member;
} mvp_msgs__srv__SetControlPoint_Response;

// Struct for a sequence of mvp_msgs__srv__SetControlPoint_Response.
typedef struct mvp_msgs__srv__SetControlPoint_Response__Sequence
{
  mvp_msgs__srv__SetControlPoint_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mvp_msgs__srv__SetControlPoint_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MVP_MSGS__SRV__DETAIL__SET_CONTROL_POINT__STRUCT_H_
