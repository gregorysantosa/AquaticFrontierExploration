// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mvp_msgs:srv/GetWaypoints.idl
// generated code does not contain a copyright notice

#ifndef MVP_MSGS__SRV__DETAIL__GET_WAYPOINTS__STRUCT_H_
#define MVP_MSGS__SRV__DETAIL__GET_WAYPOINTS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'count'
#include "std_msgs/msg/detail/int16__struct.h"

/// Struct defined in srv/GetWaypoints in the package mvp_msgs.
typedef struct mvp_msgs__srv__GetWaypoints_Request
{
  std_msgs__msg__Int16 count;
} mvp_msgs__srv__GetWaypoints_Request;

// Struct for a sequence of mvp_msgs__srv__GetWaypoints_Request.
typedef struct mvp_msgs__srv__GetWaypoints_Request__Sequence
{
  mvp_msgs__srv__GetWaypoints_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mvp_msgs__srv__GetWaypoints_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'wpt'
#include "mvp_msgs/msg/detail/waypoint__struct.h"

/// Struct defined in srv/GetWaypoints in the package mvp_msgs.
typedef struct mvp_msgs__srv__GetWaypoints_Response
{
  mvp_msgs__msg__Waypoint__Sequence wpt;
} mvp_msgs__srv__GetWaypoints_Response;

// Struct for a sequence of mvp_msgs__srv__GetWaypoints_Response.
typedef struct mvp_msgs__srv__GetWaypoints_Response__Sequence
{
  mvp_msgs__srv__GetWaypoints_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mvp_msgs__srv__GetWaypoints_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MVP_MSGS__SRV__DETAIL__GET_WAYPOINTS__STRUCT_H_
