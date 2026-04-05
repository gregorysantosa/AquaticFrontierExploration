// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from mvp_msgs:msg/ControlProcess.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "mvp_msgs/msg/detail/control_process__rosidl_typesupport_introspection_c.h"
#include "mvp_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "mvp_msgs/msg/detail/control_process__functions.h"
#include "mvp_msgs/msg/detail/control_process__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `control_mode`
// Member `child_frame_id`
#include "rosidl_runtime_c/string_functions.h"
// Member `position`
// Member `orientation`
// Member `velocity`
// Member `angular_rate`
#include "geometry_msgs/msg/vector3.h"
// Member `position`
// Member `orientation`
// Member `velocity`
// Member `angular_rate`
#include "geometry_msgs/msg/detail/vector3__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void mvp_msgs__msg__ControlProcess__rosidl_typesupport_introspection_c__ControlProcess_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  mvp_msgs__msg__ControlProcess__init(message_memory);
}

void mvp_msgs__msg__ControlProcess__rosidl_typesupport_introspection_c__ControlProcess_fini_function(void * message_memory)
{
  mvp_msgs__msg__ControlProcess__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember mvp_msgs__msg__ControlProcess__rosidl_typesupport_introspection_c__ControlProcess_message_member_array[7] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mvp_msgs__msg__ControlProcess, header),  // bytes offset in struct
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
    offsetof(mvp_msgs__msg__ControlProcess, control_mode),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "position",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mvp_msgs__msg__ControlProcess, position),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "orientation",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mvp_msgs__msg__ControlProcess, orientation),  // bytes offset in struct
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
    offsetof(mvp_msgs__msg__ControlProcess, child_frame_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "velocity",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mvp_msgs__msg__ControlProcess, velocity),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "angular_rate",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mvp_msgs__msg__ControlProcess, angular_rate),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers mvp_msgs__msg__ControlProcess__rosidl_typesupport_introspection_c__ControlProcess_message_members = {
  "mvp_msgs__msg",  // message namespace
  "ControlProcess",  // message name
  7,  // number of fields
  sizeof(mvp_msgs__msg__ControlProcess),
  mvp_msgs__msg__ControlProcess__rosidl_typesupport_introspection_c__ControlProcess_message_member_array,  // message members
  mvp_msgs__msg__ControlProcess__rosidl_typesupport_introspection_c__ControlProcess_init_function,  // function to initialize message memory (memory has to be allocated)
  mvp_msgs__msg__ControlProcess__rosidl_typesupport_introspection_c__ControlProcess_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t mvp_msgs__msg__ControlProcess__rosidl_typesupport_introspection_c__ControlProcess_message_type_support_handle = {
  0,
  &mvp_msgs__msg__ControlProcess__rosidl_typesupport_introspection_c__ControlProcess_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_mvp_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mvp_msgs, msg, ControlProcess)() {
  mvp_msgs__msg__ControlProcess__rosidl_typesupport_introspection_c__ControlProcess_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  mvp_msgs__msg__ControlProcess__rosidl_typesupport_introspection_c__ControlProcess_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Vector3)();
  mvp_msgs__msg__ControlProcess__rosidl_typesupport_introspection_c__ControlProcess_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Vector3)();
  mvp_msgs__msg__ControlProcess__rosidl_typesupport_introspection_c__ControlProcess_message_member_array[5].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Vector3)();
  mvp_msgs__msg__ControlProcess__rosidl_typesupport_introspection_c__ControlProcess_message_member_array[6].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Vector3)();
  if (!mvp_msgs__msg__ControlProcess__rosidl_typesupport_introspection_c__ControlProcess_message_type_support_handle.typesupport_identifier) {
    mvp_msgs__msg__ControlProcess__rosidl_typesupport_introspection_c__ControlProcess_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &mvp_msgs__msg__ControlProcess__rosidl_typesupport_introspection_c__ControlProcess_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
