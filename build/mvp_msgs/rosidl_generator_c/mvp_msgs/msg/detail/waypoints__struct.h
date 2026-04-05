// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mvp_msgs:msg/Waypoints.idl
// generated code does not contain a copyright notice

#ifndef MVP_MSGS__MSG__DETAIL__WAYPOINTS__STRUCT_H_
#define MVP_MSGS__MSG__DETAIL__WAYPOINTS__STRUCT_H_

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

/// Struct defined in msg/Waypoints in the package mvp_msgs.
/**
  *  frame_id in the header indicate the waypoint's x,y, z frame.
  * It is set to be the same as the controller id.
 */
typedef struct mvp_msgs__msg__Waypoints
{
  /// geopath for lat lon or leave empty for cartisian coord
  rosidl_runtime_c__String type;
  mvp_msgs__msg__Waypoint__Sequence wpt;
} mvp_msgs__msg__Waypoints;

// Struct for a sequence of mvp_msgs__msg__Waypoints.
typedef struct mvp_msgs__msg__Waypoints__Sequence
{
  mvp_msgs__msg__Waypoints * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mvp_msgs__msg__Waypoints__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MVP_MSGS__MSG__DETAIL__WAYPOINTS__STRUCT_H_
