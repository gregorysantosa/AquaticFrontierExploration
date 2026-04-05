// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from mvp_msgs:msg/NMEA.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "mvp_msgs/msg/detail/nmea__rosidl_typesupport_introspection_c.h"
#include "mvp_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "mvp_msgs/msg/detail/nmea__functions.h"
#include "mvp_msgs/msg/detail/nmea__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `command`
#include "rosidl_runtime_c/string_functions.h"
// Member `values`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void mvp_msgs__msg__NMEA__rosidl_typesupport_introspection_c__NMEA_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  mvp_msgs__msg__NMEA__init(message_memory);
}

void mvp_msgs__msg__NMEA__rosidl_typesupport_introspection_c__NMEA_fini_function(void * message_memory)
{
  mvp_msgs__msg__NMEA__fini(message_memory);
}

size_t mvp_msgs__msg__NMEA__rosidl_typesupport_introspection_c__size_function__NMEA__values(
  const void * untyped_member)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return member->size;
}

const void * mvp_msgs__msg__NMEA__rosidl_typesupport_introspection_c__get_const_function__NMEA__values(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void * mvp_msgs__msg__NMEA__rosidl_typesupport_introspection_c__get_function__NMEA__values(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void mvp_msgs__msg__NMEA__rosidl_typesupport_introspection_c__fetch_function__NMEA__values(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    mvp_msgs__msg__NMEA__rosidl_typesupport_introspection_c__get_const_function__NMEA__values(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void mvp_msgs__msg__NMEA__rosidl_typesupport_introspection_c__assign_function__NMEA__values(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    mvp_msgs__msg__NMEA__rosidl_typesupport_introspection_c__get_function__NMEA__values(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

bool mvp_msgs__msg__NMEA__rosidl_typesupport_introspection_c__resize_function__NMEA__values(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  rosidl_runtime_c__float__Sequence__fini(member);
  return rosidl_runtime_c__float__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember mvp_msgs__msg__NMEA__rosidl_typesupport_introspection_c__NMEA_message_member_array[3] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mvp_msgs__msg__NMEA, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "command",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mvp_msgs__msg__NMEA, command),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "values",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mvp_msgs__msg__NMEA, values),  // bytes offset in struct
    NULL,  // default value
    mvp_msgs__msg__NMEA__rosidl_typesupport_introspection_c__size_function__NMEA__values,  // size() function pointer
    mvp_msgs__msg__NMEA__rosidl_typesupport_introspection_c__get_const_function__NMEA__values,  // get_const(index) function pointer
    mvp_msgs__msg__NMEA__rosidl_typesupport_introspection_c__get_function__NMEA__values,  // get(index) function pointer
    mvp_msgs__msg__NMEA__rosidl_typesupport_introspection_c__fetch_function__NMEA__values,  // fetch(index, &value) function pointer
    mvp_msgs__msg__NMEA__rosidl_typesupport_introspection_c__assign_function__NMEA__values,  // assign(index, value) function pointer
    mvp_msgs__msg__NMEA__rosidl_typesupport_introspection_c__resize_function__NMEA__values  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers mvp_msgs__msg__NMEA__rosidl_typesupport_introspection_c__NMEA_message_members = {
  "mvp_msgs__msg",  // message namespace
  "NMEA",  // message name
  3,  // number of fields
  sizeof(mvp_msgs__msg__NMEA),
  mvp_msgs__msg__NMEA__rosidl_typesupport_introspection_c__NMEA_message_member_array,  // message members
  mvp_msgs__msg__NMEA__rosidl_typesupport_introspection_c__NMEA_init_function,  // function to initialize message memory (memory has to be allocated)
  mvp_msgs__msg__NMEA__rosidl_typesupport_introspection_c__NMEA_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t mvp_msgs__msg__NMEA__rosidl_typesupport_introspection_c__NMEA_message_type_support_handle = {
  0,
  &mvp_msgs__msg__NMEA__rosidl_typesupport_introspection_c__NMEA_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_mvp_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mvp_msgs, msg, NMEA)() {
  mvp_msgs__msg__NMEA__rosidl_typesupport_introspection_c__NMEA_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  if (!mvp_msgs__msg__NMEA__rosidl_typesupport_introspection_c__NMEA_message_type_support_handle.typesupport_identifier) {
    mvp_msgs__msg__NMEA__rosidl_typesupport_introspection_c__NMEA_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &mvp_msgs__msg__NMEA__rosidl_typesupport_introspection_c__NMEA_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
