// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from mvp_msgs:msg/HelmStates.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "mvp_msgs/msg/detail/helm_states__rosidl_typesupport_introspection_c.h"
#include "mvp_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "mvp_msgs/msg/detail/helm_states__functions.h"
#include "mvp_msgs/msg/detail/helm_states__struct.h"


// Include directives for member types
// Member `states`
#include "mvp_msgs/msg/helm_state.h"
// Member `states`
#include "mvp_msgs/msg/detail/helm_state__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void mvp_msgs__msg__HelmStates__rosidl_typesupport_introspection_c__HelmStates_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  mvp_msgs__msg__HelmStates__init(message_memory);
}

void mvp_msgs__msg__HelmStates__rosidl_typesupport_introspection_c__HelmStates_fini_function(void * message_memory)
{
  mvp_msgs__msg__HelmStates__fini(message_memory);
}

size_t mvp_msgs__msg__HelmStates__rosidl_typesupport_introspection_c__size_function__HelmStates__states(
  const void * untyped_member)
{
  const mvp_msgs__msg__HelmState__Sequence * member =
    (const mvp_msgs__msg__HelmState__Sequence *)(untyped_member);
  return member->size;
}

const void * mvp_msgs__msg__HelmStates__rosidl_typesupport_introspection_c__get_const_function__HelmStates__states(
  const void * untyped_member, size_t index)
{
  const mvp_msgs__msg__HelmState__Sequence * member =
    (const mvp_msgs__msg__HelmState__Sequence *)(untyped_member);
  return &member->data[index];
}

void * mvp_msgs__msg__HelmStates__rosidl_typesupport_introspection_c__get_function__HelmStates__states(
  void * untyped_member, size_t index)
{
  mvp_msgs__msg__HelmState__Sequence * member =
    (mvp_msgs__msg__HelmState__Sequence *)(untyped_member);
  return &member->data[index];
}

void mvp_msgs__msg__HelmStates__rosidl_typesupport_introspection_c__fetch_function__HelmStates__states(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const mvp_msgs__msg__HelmState * item =
    ((const mvp_msgs__msg__HelmState *)
    mvp_msgs__msg__HelmStates__rosidl_typesupport_introspection_c__get_const_function__HelmStates__states(untyped_member, index));
  mvp_msgs__msg__HelmState * value =
    (mvp_msgs__msg__HelmState *)(untyped_value);
  *value = *item;
}

void mvp_msgs__msg__HelmStates__rosidl_typesupport_introspection_c__assign_function__HelmStates__states(
  void * untyped_member, size_t index, const void * untyped_value)
{
  mvp_msgs__msg__HelmState * item =
    ((mvp_msgs__msg__HelmState *)
    mvp_msgs__msg__HelmStates__rosidl_typesupport_introspection_c__get_function__HelmStates__states(untyped_member, index));
  const mvp_msgs__msg__HelmState * value =
    (const mvp_msgs__msg__HelmState *)(untyped_value);
  *item = *value;
}

bool mvp_msgs__msg__HelmStates__rosidl_typesupport_introspection_c__resize_function__HelmStates__states(
  void * untyped_member, size_t size)
{
  mvp_msgs__msg__HelmState__Sequence * member =
    (mvp_msgs__msg__HelmState__Sequence *)(untyped_member);
  mvp_msgs__msg__HelmState__Sequence__fini(member);
  return mvp_msgs__msg__HelmState__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember mvp_msgs__msg__HelmStates__rosidl_typesupport_introspection_c__HelmStates_message_member_array[1] = {
  {
    "states",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mvp_msgs__msg__HelmStates, states),  // bytes offset in struct
    NULL,  // default value
    mvp_msgs__msg__HelmStates__rosidl_typesupport_introspection_c__size_function__HelmStates__states,  // size() function pointer
    mvp_msgs__msg__HelmStates__rosidl_typesupport_introspection_c__get_const_function__HelmStates__states,  // get_const(index) function pointer
    mvp_msgs__msg__HelmStates__rosidl_typesupport_introspection_c__get_function__HelmStates__states,  // get(index) function pointer
    mvp_msgs__msg__HelmStates__rosidl_typesupport_introspection_c__fetch_function__HelmStates__states,  // fetch(index, &value) function pointer
    mvp_msgs__msg__HelmStates__rosidl_typesupport_introspection_c__assign_function__HelmStates__states,  // assign(index, value) function pointer
    mvp_msgs__msg__HelmStates__rosidl_typesupport_introspection_c__resize_function__HelmStates__states  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers mvp_msgs__msg__HelmStates__rosidl_typesupport_introspection_c__HelmStates_message_members = {
  "mvp_msgs__msg",  // message namespace
  "HelmStates",  // message name
  1,  // number of fields
  sizeof(mvp_msgs__msg__HelmStates),
  mvp_msgs__msg__HelmStates__rosidl_typesupport_introspection_c__HelmStates_message_member_array,  // message members
  mvp_msgs__msg__HelmStates__rosidl_typesupport_introspection_c__HelmStates_init_function,  // function to initialize message memory (memory has to be allocated)
  mvp_msgs__msg__HelmStates__rosidl_typesupport_introspection_c__HelmStates_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t mvp_msgs__msg__HelmStates__rosidl_typesupport_introspection_c__HelmStates_message_type_support_handle = {
  0,
  &mvp_msgs__msg__HelmStates__rosidl_typesupport_introspection_c__HelmStates_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_mvp_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mvp_msgs, msg, HelmStates)() {
  mvp_msgs__msg__HelmStates__rosidl_typesupport_introspection_c__HelmStates_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mvp_msgs, msg, HelmState)();
  if (!mvp_msgs__msg__HelmStates__rosidl_typesupport_introspection_c__HelmStates_message_type_support_handle.typesupport_identifier) {
    mvp_msgs__msg__HelmStates__rosidl_typesupport_introspection_c__HelmStates_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &mvp_msgs__msg__HelmStates__rosidl_typesupport_introspection_c__HelmStates_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
