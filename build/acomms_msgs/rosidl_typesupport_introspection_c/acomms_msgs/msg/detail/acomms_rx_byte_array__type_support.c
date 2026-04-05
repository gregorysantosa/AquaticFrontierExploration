// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from acomms_msgs:msg/AcommsRxByteArray.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "acomms_msgs/msg/detail/acomms_rx_byte_array__rosidl_typesupport_introspection_c.h"
#include "acomms_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "acomms_msgs/msg/detail/acomms_rx_byte_array__functions.h"
#include "acomms_msgs/msg/detail/acomms_rx_byte_array__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `msg`
#include "std_msgs/msg/u_int8_multi_array.h"
// Member `msg`
#include "std_msgs/msg/detail/u_int8_multi_array__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void acomms_msgs__msg__AcommsRxByteArray__rosidl_typesupport_introspection_c__AcommsRxByteArray_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  acomms_msgs__msg__AcommsRxByteArray__init(message_memory);
}

void acomms_msgs__msg__AcommsRxByteArray__rosidl_typesupport_introspection_c__AcommsRxByteArray_fini_function(void * message_memory)
{
  acomms_msgs__msg__AcommsRxByteArray__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember acomms_msgs__msg__AcommsRxByteArray__rosidl_typesupport_introspection_c__AcommsRxByteArray_message_member_array[2] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(acomms_msgs__msg__AcommsRxByteArray, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "msg",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(acomms_msgs__msg__AcommsRxByteArray, msg),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers acomms_msgs__msg__AcommsRxByteArray__rosidl_typesupport_introspection_c__AcommsRxByteArray_message_members = {
  "acomms_msgs__msg",  // message namespace
  "AcommsRxByteArray",  // message name
  2,  // number of fields
  sizeof(acomms_msgs__msg__AcommsRxByteArray),
  acomms_msgs__msg__AcommsRxByteArray__rosidl_typesupport_introspection_c__AcommsRxByteArray_message_member_array,  // message members
  acomms_msgs__msg__AcommsRxByteArray__rosidl_typesupport_introspection_c__AcommsRxByteArray_init_function,  // function to initialize message memory (memory has to be allocated)
  acomms_msgs__msg__AcommsRxByteArray__rosidl_typesupport_introspection_c__AcommsRxByteArray_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t acomms_msgs__msg__AcommsRxByteArray__rosidl_typesupport_introspection_c__AcommsRxByteArray_message_type_support_handle = {
  0,
  &acomms_msgs__msg__AcommsRxByteArray__rosidl_typesupport_introspection_c__AcommsRxByteArray_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_acomms_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, acomms_msgs, msg, AcommsRxByteArray)() {
  acomms_msgs__msg__AcommsRxByteArray__rosidl_typesupport_introspection_c__AcommsRxByteArray_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  acomms_msgs__msg__AcommsRxByteArray__rosidl_typesupport_introspection_c__AcommsRxByteArray_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, UInt8MultiArray)();
  if (!acomms_msgs__msg__AcommsRxByteArray__rosidl_typesupport_introspection_c__AcommsRxByteArray_message_type_support_handle.typesupport_identifier) {
    acomms_msgs__msg__AcommsRxByteArray__rosidl_typesupport_introspection_c__AcommsRxByteArray_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &acomms_msgs__msg__AcommsRxByteArray__rosidl_typesupport_introspection_c__AcommsRxByteArray_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
