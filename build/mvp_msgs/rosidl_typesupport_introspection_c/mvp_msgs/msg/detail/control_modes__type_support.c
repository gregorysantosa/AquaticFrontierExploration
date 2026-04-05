// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from mvp_msgs:msg/ControlModes.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "mvp_msgs/msg/detail/control_modes__rosidl_typesupport_introspection_c.h"
#include "mvp_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "mvp_msgs/msg/detail/control_modes__functions.h"
#include "mvp_msgs/msg/detail/control_modes__struct.h"


// Include directives for member types
// Member `modes`
#include "mvp_msgs/msg/control_mode.h"
// Member `modes`
#include "mvp_msgs/msg/detail/control_mode__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void mvp_msgs__msg__ControlModes__rosidl_typesupport_introspection_c__ControlModes_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  mvp_msgs__msg__ControlModes__init(message_memory);
}

void mvp_msgs__msg__ControlModes__rosidl_typesupport_introspection_c__ControlModes_fini_function(void * message_memory)
{
  mvp_msgs__msg__ControlModes__fini(message_memory);
}

size_t mvp_msgs__msg__ControlModes__rosidl_typesupport_introspection_c__size_function__ControlModes__modes(
  const void * untyped_member)
{
  const mvp_msgs__msg__ControlMode__Sequence * member =
    (const mvp_msgs__msg__ControlMode__Sequence *)(untyped_member);
  return member->size;
}

const void * mvp_msgs__msg__ControlModes__rosidl_typesupport_introspection_c__get_const_function__ControlModes__modes(
  const void * untyped_member, size_t index)
{
  const mvp_msgs__msg__ControlMode__Sequence * member =
    (const mvp_msgs__msg__ControlMode__Sequence *)(untyped_member);
  return &member->data[index];
}

void * mvp_msgs__msg__ControlModes__rosidl_typesupport_introspection_c__get_function__ControlModes__modes(
  void * untyped_member, size_t index)
{
  mvp_msgs__msg__ControlMode__Sequence * member =
    (mvp_msgs__msg__ControlMode__Sequence *)(untyped_member);
  return &member->data[index];
}

void mvp_msgs__msg__ControlModes__rosidl_typesupport_introspection_c__fetch_function__ControlModes__modes(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const mvp_msgs__msg__ControlMode * item =
    ((const mvp_msgs__msg__ControlMode *)
    mvp_msgs__msg__ControlModes__rosidl_typesupport_introspection_c__get_const_function__ControlModes__modes(untyped_member, index));
  mvp_msgs__msg__ControlMode * value =
    (mvp_msgs__msg__ControlMode *)(untyped_value);
  *value = *item;
}

void mvp_msgs__msg__ControlModes__rosidl_typesupport_introspection_c__assign_function__ControlModes__modes(
  void * untyped_member, size_t index, const void * untyped_value)
{
  mvp_msgs__msg__ControlMode * item =
    ((mvp_msgs__msg__ControlMode *)
    mvp_msgs__msg__ControlModes__rosidl_typesupport_introspection_c__get_function__ControlModes__modes(untyped_member, index));
  const mvp_msgs__msg__ControlMode * value =
    (const mvp_msgs__msg__ControlMode *)(untyped_value);
  *item = *value;
}

bool mvp_msgs__msg__ControlModes__rosidl_typesupport_introspection_c__resize_function__ControlModes__modes(
  void * untyped_member, size_t size)
{
  mvp_msgs__msg__ControlMode__Sequence * member =
    (mvp_msgs__msg__ControlMode__Sequence *)(untyped_member);
  mvp_msgs__msg__ControlMode__Sequence__fini(member);
  return mvp_msgs__msg__ControlMode__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember mvp_msgs__msg__ControlModes__rosidl_typesupport_introspection_c__ControlModes_message_member_array[1] = {
  {
    "modes",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mvp_msgs__msg__ControlModes, modes),  // bytes offset in struct
    NULL,  // default value
    mvp_msgs__msg__ControlModes__rosidl_typesupport_introspection_c__size_function__ControlModes__modes,  // size() function pointer
    mvp_msgs__msg__ControlModes__rosidl_typesupport_introspection_c__get_const_function__ControlModes__modes,  // get_const(index) function pointer
    mvp_msgs__msg__ControlModes__rosidl_typesupport_introspection_c__get_function__ControlModes__modes,  // get(index) function pointer
    mvp_msgs__msg__ControlModes__rosidl_typesupport_introspection_c__fetch_function__ControlModes__modes,  // fetch(index, &value) function pointer
    mvp_msgs__msg__ControlModes__rosidl_typesupport_introspection_c__assign_function__ControlModes__modes,  // assign(index, value) function pointer
    mvp_msgs__msg__ControlModes__rosidl_typesupport_introspection_c__resize_function__ControlModes__modes  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers mvp_msgs__msg__ControlModes__rosidl_typesupport_introspection_c__ControlModes_message_members = {
  "mvp_msgs__msg",  // message namespace
  "ControlModes",  // message name
  1,  // number of fields
  sizeof(mvp_msgs__msg__ControlModes),
  mvp_msgs__msg__ControlModes__rosidl_typesupport_introspection_c__ControlModes_message_member_array,  // message members
  mvp_msgs__msg__ControlModes__rosidl_typesupport_introspection_c__ControlModes_init_function,  // function to initialize message memory (memory has to be allocated)
  mvp_msgs__msg__ControlModes__rosidl_typesupport_introspection_c__ControlModes_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t mvp_msgs__msg__ControlModes__rosidl_typesupport_introspection_c__ControlModes_message_type_support_handle = {
  0,
  &mvp_msgs__msg__ControlModes__rosidl_typesupport_introspection_c__ControlModes_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_mvp_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mvp_msgs, msg, ControlModes)() {
  mvp_msgs__msg__ControlModes__rosidl_typesupport_introspection_c__ControlModes_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mvp_msgs, msg, ControlMode)();
  if (!mvp_msgs__msg__ControlModes__rosidl_typesupport_introspection_c__ControlModes_message_type_support_handle.typesupport_identifier) {
    mvp_msgs__msg__ControlModes__rosidl_typesupport_introspection_c__ControlModes_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &mvp_msgs__msg__ControlModes__rosidl_typesupport_introspection_c__ControlModes_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
