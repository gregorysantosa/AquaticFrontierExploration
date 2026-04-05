// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from acomms_msgs:msg/AcommsTx.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "acomms_msgs/msg/detail/acomms_tx__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace acomms_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void AcommsTx_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) acomms_msgs::msg::AcommsTx(_init);
}

void AcommsTx_fini_function(void * message_memory)
{
  auto typed_message = static_cast<acomms_msgs::msg::AcommsTx *>(message_memory);
  typed_message->~AcommsTx();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember AcommsTx_message_member_array[3] = {
  {
    "header",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<std_msgs::msg::Header>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(acomms_msgs::msg::AcommsTx, header),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "subbuffer_id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(acomms_msgs::msg::AcommsTx, subbuffer_id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "data",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(acomms_msgs::msg::AcommsTx, data),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers AcommsTx_message_members = {
  "acomms_msgs::msg",  // message namespace
  "AcommsTx",  // message name
  3,  // number of fields
  sizeof(acomms_msgs::msg::AcommsTx),
  AcommsTx_message_member_array,  // message members
  AcommsTx_init_function,  // function to initialize message memory (memory has to be allocated)
  AcommsTx_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t AcommsTx_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &AcommsTx_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace acomms_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<acomms_msgs::msg::AcommsTx>()
{
  return &::acomms_msgs::msg::rosidl_typesupport_introspection_cpp::AcommsTx_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, acomms_msgs, msg, AcommsTx)() {
  return &::acomms_msgs::msg::rosidl_typesupport_introspection_cpp::AcommsTx_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
