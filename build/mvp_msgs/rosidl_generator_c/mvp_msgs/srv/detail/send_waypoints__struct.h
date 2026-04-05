// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mvp_msgs:srv/SendWaypoints.idl
// generated code does not contain a copyright notice

#ifndef MVP_MSGS__SRV__DETAIL__SEND_WAYPOINTS__STRUCT_H_
#define MVP_MSGS__SRV__DETAIL__SEND_WAYPOINTS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'type'
#include "rosidl_runtime_c/string.h"
// Member 'wpt'
#include "mvp_msgs/msg/detail/waypoint__struct.h"

/// Struct defined in srv/SendWaypoints in the package mvp_msgs.
typedef struct mvp_msgs__srv__SendWaypoints_Request
{
  rosidl_runtime_c__String type;
  mvp_msgs__msg__Waypoint__Sequence wpt;
} mvp_msgs__srv__SendWaypoints_Request;

// Struct for a sequence of mvp_msgs__srv__SendWaypoints_Request.
typedef struct mvp_msgs__srv__SendWaypoints_Request__Sequence
{
  mvp_msgs__srv__SendWaypoints_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mvp_msgs__srv__SendWaypoints_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/SendWaypoints in the package mvp_msgs.
typedef struct mvp_msgs__srv__SendWaypoints_Response
{
  bool success;
} mvp_msgs__srv__SendWaypoints_Response;

// Struct for a sequence of mvp_msgs__srv__SendWaypoints_Response.
typedef struct mvp_msgs__srv__SendWaypoints_Response__Sequence
{
  mvp_msgs__srv__SendWaypoints_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mvp_msgs__srv__SendWaypoints_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MVP_MSGS__SRV__DETAIL__SEND_WAYPOINTS__STRUCT_H_
