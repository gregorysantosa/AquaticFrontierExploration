// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mvp_msgs:msg/Waypoint.idl
// generated code does not contain a copyright notice

#ifndef MVP_MSGS__MSG__DETAIL__WAYPOINT__STRUCT_H_
#define MVP_MSGS__MSG__DETAIL__WAYPOINT__STRUCT_H_

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
// Member 'wpt'
#include "geometry_msgs/msg/detail/point__struct.h"
// Member 'll_wpt'
#include "geographic_msgs/msg/detail/geo_point__struct.h"

/// Struct defined in msg/Waypoint in the package mvp_msgs.
/**
  *  frame_id in the header indicate the waypoint's x,y, z frame.
  * It is set to be the same as the controller id.
 */
typedef struct mvp_msgs__msg__Waypoint
{
  std_msgs__msg__Header header;
  geometry_msgs__msg__Point wpt;
  geographic_msgs__msg__GeoPoint ll_wpt;
  double u;
} mvp_msgs__msg__Waypoint;

// Struct for a sequence of mvp_msgs__msg__Waypoint.
typedef struct mvp_msgs__msg__Waypoint__Sequence
{
  mvp_msgs__msg__Waypoint * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mvp_msgs__msg__Waypoint__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MVP_MSGS__MSG__DETAIL__WAYPOINT__STRUCT_H_
