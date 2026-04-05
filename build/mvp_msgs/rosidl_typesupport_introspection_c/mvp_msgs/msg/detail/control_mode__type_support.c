// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from mvp_msgs:msg/ControlMode.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "mvp_msgs/msg/detail/control_mode__rosidl_typesupport_introspection_c.h"
#include "mvp_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "mvp_msgs/msg/detail/control_mode__functions.h"
#include "mvp_msgs/msg/detail/control_mode__struct.h"


// Include directives for member types
// Member `name`
#include "rosidl_runtime_c/string_functions.h"
// Member `dofs`
#include "rosidl_runtime_c/primitives_sequence_functions.h"
// Member `pid_x`
// Member `pid_y`
// Member `pid_z`
// Member `pid_roll`
// Member `pid_pitch`
// Member `pid_yaw`
// Member `pid_u`
// Member `pid_v`
// Member `pid_w`
// Member `pid_p`
// Member `pid_q`
// Member `pid_r`
#include "mvp_msgs/msg/pid_gains.h"
// Member `pid_x`
// Member `pid_y`
// Member `pid_z`
// Member `pid_roll`
// Member `pid_pitch`
// Member `pid_yaw`
// Member `pid_u`
// Member `pid_v`
// Member `pid_w`
// Member `pid_p`
// Member `pid_q`
// Member `pid_r`
#include "mvp_msgs/msg/detail/pid_gains__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void mvp_msgs__msg__ControlMode__rosidl_typesupport_introspection_c__ControlMode_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  mvp_msgs__msg__ControlMode__init(message_memory);
}

void mvp_msgs__msg__ControlMode__rosidl_typesupport_introspection_c__ControlMode_fini_function(void * message_memory)
{
  mvp_msgs__msg__ControlMode__fini(message_memory);
}

size_t mvp_msgs__msg__ControlMode__rosidl_typesupport_introspection_c__size_function__ControlMode__dofs(
  const void * untyped_member)
{
  const rosidl_runtime_c__int32__Sequence * member =
    (const rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return member->size;
}

const void * mvp_msgs__msg__ControlMode__rosidl_typesupport_introspection_c__get_const_function__ControlMode__dofs(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__int32__Sequence * member =
    (const rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return &member->data[index];
}

void * mvp_msgs__msg__ControlMode__rosidl_typesupport_introspection_c__get_function__ControlMode__dofs(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__int32__Sequence * member =
    (rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return &member->data[index];
}

void mvp_msgs__msg__ControlMode__rosidl_typesupport_introspection_c__fetch_function__ControlMode__dofs(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const int32_t * item =
    ((const int32_t *)
    mvp_msgs__msg__ControlMode__rosidl_typesupport_introspection_c__get_const_function__ControlMode__dofs(untyped_member, index));
  int32_t * value =
    (int32_t *)(untyped_value);
  *value = *item;
}

void mvp_msgs__msg__ControlMode__rosidl_typesupport_introspection_c__assign_function__ControlMode__dofs(
  void * untyped_member, size_t index, const void * untyped_value)
{
  int32_t * item =
    ((int32_t *)
    mvp_msgs__msg__ControlMode__rosidl_typesupport_introspection_c__get_function__ControlMode__dofs(untyped_member, index));
  const int32_t * value =
    (const int32_t *)(untyped_value);
  *item = *value;
}

bool mvp_msgs__msg__ControlMode__rosidl_typesupport_introspection_c__resize_function__ControlMode__dofs(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__int32__Sequence * member =
    (rosidl_runtime_c__int32__Sequence *)(untyped_member);
  rosidl_runtime_c__int32__Sequence__fini(member);
  return rosidl_runtime_c__int32__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember mvp_msgs__msg__ControlMode__rosidl_typesupport_introspection_c__ControlMode_message_member_array[14] = {
  {
    "name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mvp_msgs__msg__ControlMode, name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "dofs",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mvp_msgs__msg__ControlMode, dofs),  // bytes offset in struct
    NULL,  // default value
    mvp_msgs__msg__ControlMode__rosidl_typesupport_introspection_c__size_function__ControlMode__dofs,  // size() function pointer
    mvp_msgs__msg__ControlMode__rosidl_typesupport_introspection_c__get_const_function__ControlMode__dofs,  // get_const(index) function pointer
    mvp_msgs__msg__ControlMode__rosidl_typesupport_introspection_c__get_function__ControlMode__dofs,  // get(index) function pointer
    mvp_msgs__msg__ControlMode__rosidl_typesupport_introspection_c__fetch_function__ControlMode__dofs,  // fetch(index, &value) function pointer
    mvp_msgs__msg__ControlMode__rosidl_typesupport_introspection_c__assign_function__ControlMode__dofs,  // assign(index, value) function pointer
    mvp_msgs__msg__ControlMode__rosidl_typesupport_introspection_c__resize_function__ControlMode__dofs  // resize(index) function pointer
  },
  {
    "pid_x",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mvp_msgs__msg__ControlMode, pid_x),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "pid_y",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mvp_msgs__msg__ControlMode, pid_y),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "pid_z",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mvp_msgs__msg__ControlMode, pid_z),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "pid_roll",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mvp_msgs__msg__ControlMode, pid_roll),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "pid_pitch",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mvp_msgs__msg__ControlMode, pid_pitch),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "pid_yaw",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mvp_msgs__msg__ControlMode, pid_yaw),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "pid_u",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mvp_msgs__msg__ControlMode, pid_u),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "pid_v",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mvp_msgs__msg__ControlMode, pid_v),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "pid_w",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mvp_msgs__msg__ControlMode, pid_w),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "pid_p",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mvp_msgs__msg__ControlMode, pid_p),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "pid_q",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mvp_msgs__msg__ControlMode, pid_q),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "pid_r",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mvp_msgs__msg__ControlMode, pid_r),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers mvp_msgs__msg__ControlMode__rosidl_typesupport_introspection_c__ControlMode_message_members = {
  "mvp_msgs__msg",  // message namespace
  "ControlMode",  // message name
  14,  // number of fields
  sizeof(mvp_msgs__msg__ControlMode),
  mvp_msgs__msg__ControlMode__rosidl_typesupport_introspection_c__ControlMode_message_member_array,  // message members
  mvp_msgs__msg__ControlMode__rosidl_typesupport_introspection_c__ControlMode_init_function,  // function to initialize message memory (memory has to be allocated)
  mvp_msgs__msg__ControlMode__rosidl_typesupport_introspection_c__ControlMode_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t mvp_msgs__msg__ControlMode__rosidl_typesupport_introspection_c__ControlMode_message_type_support_handle = {
  0,
  &mvp_msgs__msg__ControlMode__rosidl_typesupport_introspection_c__ControlMode_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_mvp_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mvp_msgs, msg, ControlMode)() {
  mvp_msgs__msg__ControlMode__rosidl_typesupport_introspection_c__ControlMode_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mvp_msgs, msg, PidGains)();
  mvp_msgs__msg__ControlMode__rosidl_typesupport_introspection_c__ControlMode_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mvp_msgs, msg, PidGains)();
  mvp_msgs__msg__ControlMode__rosidl_typesupport_introspection_c__ControlMode_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mvp_msgs, msg, PidGains)();
  mvp_msgs__msg__ControlMode__rosidl_typesupport_introspection_c__ControlMode_message_member_array[5].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mvp_msgs, msg, PidGains)();
  mvp_msgs__msg__ControlMode__rosidl_typesupport_introspection_c__ControlMode_message_member_array[6].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mvp_msgs, msg, PidGains)();
  mvp_msgs__msg__ControlMode__rosidl_typesupport_introspection_c__ControlMode_message_member_array[7].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mvp_msgs, msg, PidGains)();
  mvp_msgs__msg__ControlMode__rosidl_typesupport_introspection_c__ControlMode_message_member_array[8].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mvp_msgs, msg, PidGains)();
  mvp_msgs__msg__ControlMode__rosidl_typesupport_introspection_c__ControlMode_message_member_array[9].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mvp_msgs, msg, PidGains)();
  mvp_msgs__msg__ControlMode__rosidl_typesupport_introspection_c__ControlMode_message_member_array[10].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mvp_msgs, msg, PidGains)();
  mvp_msgs__msg__ControlMode__rosidl_typesupport_introspection_c__ControlMode_message_member_array[11].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mvp_msgs, msg, PidGains)();
  mvp_msgs__msg__ControlMode__rosidl_typesupport_introspection_c__ControlMode_message_member_array[12].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mvp_msgs, msg, PidGains)();
  mvp_msgs__msg__ControlMode__rosidl_typesupport_introspection_c__ControlMode_message_member_array[13].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mvp_msgs, msg, PidGains)();
  if (!mvp_msgs__msg__ControlMode__rosidl_typesupport_introspection_c__ControlMode_message_type_support_handle.typesupport_identifier) {
    mvp_msgs__msg__ControlMode__rosidl_typesupport_introspection_c__ControlMode_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &mvp_msgs__msg__ControlMode__rosidl_typesupport_introspection_c__ControlMode_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
