// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from mvp_msgs:msg/SetpointBehavior.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "mvp_msgs/msg/detail/setpoint_behavior__rosidl_typesupport_introspection_c.h"
#include "mvp_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "mvp_msgs/msg/detail/setpoint_behavior__functions.h"
#include "mvp_msgs/msg/detail/setpoint_behavior__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `child_frame_id`
// Member `control_mode`
// Member `behavior`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void mvp_msgs__msg__SetpointBehavior__rosidl_typesupport_introspection_c__SetpointBehavior_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  mvp_msgs__msg__SetpointBehavior__init(message_memory);
}

void mvp_msgs__msg__SetpointBehavior__rosidl_typesupport_introspection_c__SetpointBehavior_fini_function(void * message_memory)
{
  mvp_msgs__msg__SetpointBehavior__fini(message_memory);
}

size_t mvp_msgs__msg__SetpointBehavior__rosidl_typesupport_introspection_c__size_function__SetpointBehavior__behavior(
  const void * untyped_member)
{
  (void)untyped_member;
  return 12;
}

const void * mvp_msgs__msg__SetpointBehavior__rosidl_typesupport_introspection_c__get_const_function__SetpointBehavior__behavior(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String * member =
    (const rosidl_runtime_c__String *)(untyped_member);
  return &member[index];
}

void * mvp_msgs__msg__SetpointBehavior__rosidl_typesupport_introspection_c__get_function__SetpointBehavior__behavior(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String * member =
    (rosidl_runtime_c__String *)(untyped_member);
  return &member[index];
}

void mvp_msgs__msg__SetpointBehavior__rosidl_typesupport_introspection_c__fetch_function__SetpointBehavior__behavior(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    mvp_msgs__msg__SetpointBehavior__rosidl_typesupport_introspection_c__get_const_function__SetpointBehavior__behavior(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void mvp_msgs__msg__SetpointBehavior__rosidl_typesupport_introspection_c__assign_function__SetpointBehavior__behavior(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    mvp_msgs__msg__SetpointBehavior__rosidl_typesupport_introspection_c__get_function__SetpointBehavior__behavior(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

static rosidl_typesupport_introspection_c__MessageMember mvp_msgs__msg__SetpointBehavior__rosidl_typesupport_introspection_c__SetpointBehavior_message_member_array[4] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mvp_msgs__msg__SetpointBehavior, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "child_frame_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mvp_msgs__msg__SetpointBehavior, child_frame_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "control_mode",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mvp_msgs__msg__SetpointBehavior, control_mode),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "behavior",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    12,  // array size
    false,  // is upper bound
    offsetof(mvp_msgs__msg__SetpointBehavior, behavior),  // bytes offset in struct
    NULL,  // default value
    mvp_msgs__msg__SetpointBehavior__rosidl_typesupport_introspection_c__size_function__SetpointBehavior__behavior,  // size() function pointer
    mvp_msgs__msg__SetpointBehavior__rosidl_typesupport_introspection_c__get_const_function__SetpointBehavior__behavior,  // get_const(index) function pointer
    mvp_msgs__msg__SetpointBehavior__rosidl_typesupport_introspection_c__get_function__SetpointBehavior__behavior,  // get(index) function pointer
    mvp_msgs__msg__SetpointBehavior__rosidl_typesupport_introspection_c__fetch_function__SetpointBehavior__behavior,  // fetch(index, &value) function pointer
    mvp_msgs__msg__SetpointBehavior__rosidl_typesupport_introspection_c__assign_function__SetpointBehavior__behavior,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers mvp_msgs__msg__SetpointBehavior__rosidl_typesupport_introspection_c__SetpointBehavior_message_members = {
  "mvp_msgs__msg",  // message namespace
  "SetpointBehavior",  // message name
  4,  // number of fields
  sizeof(mvp_msgs__msg__SetpointBehavior),
  mvp_msgs__msg__SetpointBehavior__rosidl_typesupport_introspection_c__SetpointBehavior_message_member_array,  // message members
  mvp_msgs__msg__SetpointBehavior__rosidl_typesupport_introspection_c__SetpointBehavior_init_function,  // function to initialize message memory (memory has to be allocated)
  mvp_msgs__msg__SetpointBehavior__rosidl_typesupport_introspection_c__SetpointBehavior_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t mvp_msgs__msg__SetpointBehavior__rosidl_typesupport_introspection_c__SetpointBehavior_message_type_support_handle = {
  0,
  &mvp_msgs__msg__SetpointBehavior__rosidl_typesupport_introspection_c__SetpointBehavior_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_mvp_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mvp_msgs, msg, SetpointBehavior)() {
  mvp_msgs__msg__SetpointBehavior__rosidl_typesupport_introspection_c__SetpointBehavior_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  if (!mvp_msgs__msg__SetpointBehavior__rosidl_typesupport_introspection_c__SetpointBehavior_message_type_support_handle.typesupport_identifier) {
    mvp_msgs__msg__SetpointBehavior__rosidl_typesupport_introspection_c__SetpointBehavior_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &mvp_msgs__msg__SetpointBehavior__rosidl_typesupport_introspection_c__SetpointBehavior_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
