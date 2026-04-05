// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from mvp_msgs:msg/Waypoints.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "mvp_msgs/msg/detail/waypoints__rosidl_typesupport_introspection_c.h"
#include "mvp_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "mvp_msgs/msg/detail/waypoints__functions.h"
#include "mvp_msgs/msg/detail/waypoints__struct.h"


// Include directives for member types
// Member `type`
#include "rosidl_runtime_c/string_functions.h"
// Member `wpt`
#include "mvp_msgs/msg/waypoint.h"
// Member `wpt`
#include "mvp_msgs/msg/detail/waypoint__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void mvp_msgs__msg__Waypoints__rosidl_typesupport_introspection_c__Waypoints_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  mvp_msgs__msg__Waypoints__init(message_memory);
}

void mvp_msgs__msg__Waypoints__rosidl_typesupport_introspection_c__Waypoints_fini_function(void * message_memory)
{
  mvp_msgs__msg__Waypoints__fini(message_memory);
}

size_t mvp_msgs__msg__Waypoints__rosidl_typesupport_introspection_c__size_function__Waypoints__wpt(
  const void * untyped_member)
{
  const mvp_msgs__msg__Waypoint__Sequence * member =
    (const mvp_msgs__msg__Waypoint__Sequence *)(untyped_member);
  return member->size;
}

const void * mvp_msgs__msg__Waypoints__rosidl_typesupport_introspection_c__get_const_function__Waypoints__wpt(
  const void * untyped_member, size_t index)
{
  const mvp_msgs__msg__Waypoint__Sequence * member =
    (const mvp_msgs__msg__Waypoint__Sequence *)(untyped_member);
  return &member->data[index];
}

void * mvp_msgs__msg__Waypoints__rosidl_typesupport_introspection_c__get_function__Waypoints__wpt(
  void * untyped_member, size_t index)
{
  mvp_msgs__msg__Waypoint__Sequence * member =
    (mvp_msgs__msg__Waypoint__Sequence *)(untyped_member);
  return &member->data[index];
}

void mvp_msgs__msg__Waypoints__rosidl_typesupport_introspection_c__fetch_function__Waypoints__wpt(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const mvp_msgs__msg__Waypoint * item =
    ((const mvp_msgs__msg__Waypoint *)
    mvp_msgs__msg__Waypoints__rosidl_typesupport_introspection_c__get_const_function__Waypoints__wpt(untyped_member, index));
  mvp_msgs__msg__Waypoint * value =
    (mvp_msgs__msg__Waypoint *)(untyped_value);
  *value = *item;
}

void mvp_msgs__msg__Waypoints__rosidl_typesupport_introspection_c__assign_function__Waypoints__wpt(
  void * untyped_member, size_t index, const void * untyped_value)
{
  mvp_msgs__msg__Waypoint * item =
    ((mvp_msgs__msg__Waypoint *)
    mvp_msgs__msg__Waypoints__rosidl_typesupport_introspection_c__get_function__Waypoints__wpt(untyped_member, index));
  const mvp_msgs__msg__Waypoint * value =
    (const mvp_msgs__msg__Waypoint *)(untyped_value);
  *item = *value;
}

bool mvp_msgs__msg__Waypoints__rosidl_typesupport_introspection_c__resize_function__Waypoints__wpt(
  void * untyped_member, size_t size)
{
  mvp_msgs__msg__Waypoint__Sequence * member =
    (mvp_msgs__msg__Waypoint__Sequence *)(untyped_member);
  mvp_msgs__msg__Waypoint__Sequence__fini(member);
  return mvp_msgs__msg__Waypoint__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember mvp_msgs__msg__Waypoints__rosidl_typesupport_introspection_c__Waypoints_message_member_array[2] = {
  {
    "type",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mvp_msgs__msg__Waypoints, type),  // bytes offset in struct
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
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mvp_msgs__msg__Waypoints, wpt),  // bytes offset in struct
    NULL,  // default value
    mvp_msgs__msg__Waypoints__rosidl_typesupport_introspection_c__size_function__Waypoints__wpt,  // size() function pointer
    mvp_msgs__msg__Waypoints__rosidl_typesupport_introspection_c__get_const_function__Waypoints__wpt,  // get_const(index) function pointer
    mvp_msgs__msg__Waypoints__rosidl_typesupport_introspection_c__get_function__Waypoints__wpt,  // get(index) function pointer
    mvp_msgs__msg__Waypoints__rosidl_typesupport_introspection_c__fetch_function__Waypoints__wpt,  // fetch(index, &value) function pointer
    mvp_msgs__msg__Waypoints__rosidl_typesupport_introspection_c__assign_function__Waypoints__wpt,  // assign(index, value) function pointer
    mvp_msgs__msg__Waypoints__rosidl_typesupport_introspection_c__resize_function__Waypoints__wpt  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers mvp_msgs__msg__Waypoints__rosidl_typesupport_introspection_c__Waypoints_message_members = {
  "mvp_msgs__msg",  // message namespace
  "Waypoints",  // message name
  2,  // number of fields
  sizeof(mvp_msgs__msg__Waypoints),
  mvp_msgs__msg__Waypoints__rosidl_typesupport_introspection_c__Waypoints_message_member_array,  // message members
  mvp_msgs__msg__Waypoints__rosidl_typesupport_introspection_c__Waypoints_init_function,  // function to initialize message memory (memory has to be allocated)
  mvp_msgs__msg__Waypoints__rosidl_typesupport_introspection_c__Waypoints_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t mvp_msgs__msg__Waypoints__rosidl_typesupport_introspection_c__Waypoints_message_type_support_handle = {
  0,
  &mvp_msgs__msg__Waypoints__rosidl_typesupport_introspection_c__Waypoints_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_mvp_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mvp_msgs, msg, Waypoints)() {
  mvp_msgs__msg__Waypoints__rosidl_typesupport_introspection_c__Waypoints_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mvp_msgs, msg, Waypoint)();
  if (!mvp_msgs__msg__Waypoints__rosidl_typesupport_introspection_c__Waypoints_message_type_support_handle.typesupport_identifier) {
    mvp_msgs__msg__Waypoints__rosidl_typesupport_introspection_c__Waypoints_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &mvp_msgs__msg__Waypoints__rosidl_typesupport_introspection_c__Waypoints_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
