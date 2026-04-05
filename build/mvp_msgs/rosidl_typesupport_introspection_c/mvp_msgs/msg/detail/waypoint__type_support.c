// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from mvp_msgs:msg/Waypoint.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "mvp_msgs/msg/detail/waypoint__rosidl_typesupport_introspection_c.h"
#include "mvp_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "mvp_msgs/msg/detail/waypoint__functions.h"
#include "mvp_msgs/msg/detail/waypoint__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `wpt`
#include "geometry_msgs/msg/point.h"
// Member `wpt`
#include "geometry_msgs/msg/detail/point__rosidl_typesupport_introspection_c.h"
// Member `ll_wpt`
#include "geographic_msgs/msg/geo_point.h"
// Member `ll_wpt`
#include "geographic_msgs/msg/detail/geo_point__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void mvp_msgs__msg__Waypoint__rosidl_typesupport_introspection_c__Waypoint_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  mvp_msgs__msg__Waypoint__init(message_memory);
}

void mvp_msgs__msg__Waypoint__rosidl_typesupport_introspection_c__Waypoint_fini_function(void * message_memory)
{
  mvp_msgs__msg__Waypoint__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember mvp_msgs__msg__Waypoint__rosidl_typesupport_introspection_c__Waypoint_message_member_array[4] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mvp_msgs__msg__Waypoint, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "wpt",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mvp_msgs__msg__Waypoint, wpt),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "ll_wpt",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mvp_msgs__msg__Waypoint, ll_wpt),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "u",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mvp_msgs__msg__Waypoint, u),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers mvp_msgs__msg__Waypoint__rosidl_typesupport_introspection_c__Waypoint_message_members = {
  "mvp_msgs__msg",  // message namespace
  "Waypoint",  // message name
  4,  // number of fields
  sizeof(mvp_msgs__msg__Waypoint),
  mvp_msgs__msg__Waypoint__rosidl_typesupport_introspection_c__Waypoint_message_member_array,  // message members
  mvp_msgs__msg__Waypoint__rosidl_typesupport_introspection_c__Waypoint_init_function,  // function to initialize message memory (memory has to be allocated)
  mvp_msgs__msg__Waypoint__rosidl_typesupport_introspection_c__Waypoint_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t mvp_msgs__msg__Waypoint__rosidl_typesupport_introspection_c__Waypoint_message_type_support_handle = {
  0,
  &mvp_msgs__msg__Waypoint__rosidl_typesupport_introspection_c__Waypoint_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_mvp_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mvp_msgs, msg, Waypoint)() {
  mvp_msgs__msg__Waypoint__rosidl_typesupport_introspection_c__Waypoint_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  mvp_msgs__msg__Waypoint__rosidl_typesupport_introspection_c__Waypoint_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Point)();
  mvp_msgs__msg__Waypoint__rosidl_typesupport_introspection_c__Waypoint_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geographic_msgs, msg, GeoPoint)();
  if (!mvp_msgs__msg__Waypoint__rosidl_typesupport_introspection_c__Waypoint_message_type_support_handle.typesupport_identifier) {
    mvp_msgs__msg__Waypoint__rosidl_typesupport_introspection_c__Waypoint_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &mvp_msgs__msg__Waypoint__rosidl_typesupport_introspection_c__Waypoint_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
