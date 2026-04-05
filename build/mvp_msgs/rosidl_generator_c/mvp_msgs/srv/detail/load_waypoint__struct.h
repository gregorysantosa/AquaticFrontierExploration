// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mvp_msgs:srv/LoadWaypoint.idl
// generated code does not contain a copyright notice

#ifndef MVP_MSGS__SRV__DETAIL__LOAD_WAYPOINT__STRUCT_H_
#define MVP_MSGS__SRV__DETAIL__LOAD_WAYPOINT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'file'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/LoadWaypoint in the package mvp_msgs.
typedef struct mvp_msgs__srv__LoadWaypoint_Request
{
  rosidl_runtime_c__String file;
} mvp_msgs__srv__LoadWaypoint_Request;

// Struct for a sequence of mvp_msgs__srv__LoadWaypoint_Request.
typedef struct mvp_msgs__srv__LoadWaypoint_Request__Sequence
{
  mvp_msgs__srv__LoadWaypoint_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mvp_msgs__srv__LoadWaypoint_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/LoadWaypoint in the package mvp_msgs.
typedef struct mvp_msgs__srv__LoadWaypoint_Response
{
  bool success;
} mvp_msgs__srv__LoadWaypoint_Response;

// Struct for a sequence of mvp_msgs__srv__LoadWaypoint_Response.
typedef struct mvp_msgs__srv__LoadWaypoint_Response__Sequence
{
  mvp_msgs__srv__LoadWaypoint_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mvp_msgs__srv__LoadWaypoint_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MVP_MSGS__SRV__DETAIL__LOAD_WAYPOINT__STRUCT_H_
