// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from mvp_msgs:msg/Float64StampedWithVariance.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "mvp_msgs/msg/detail/float64_stamped_with_variance__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace mvp_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void Float64StampedWithVariance_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) mvp_msgs::msg::Float64StampedWithVariance(_init);
}

void Float64StampedWithVariance_fini_function(void * message_memory)
{
  auto typed_message = static_cast<mvp_msgs::msg::Float64StampedWithVariance *>(message_memory);
  typed_message->~Float64StampedWithVariance();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember Float64StampedWithVariance_message_member_array[3] = {
  {
    "header",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<std_msgs::msg::Header>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mvp_msgs::msg::Float64StampedWithVariance, header),  // bytes offset in struct
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
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mvp_msgs::msg::Float64StampedWithVariance, data),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "variance",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mvp_msgs::msg::Float64StampedWithVariance, variance),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers Float64StampedWithVariance_message_members = {
  "mvp_msgs::msg",  // message namespace
  "Float64StampedWithVariance",  // message name
  3,  // number of fields
  sizeof(mvp_msgs::msg::Float64StampedWithVariance),
  Float64StampedWithVariance_message_member_array,  // message members
  Float64StampedWithVariance_init_function,  // function to initialize message memory (memory has to be allocated)
  Float64StampedWithVariance_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t Float64StampedWithVariance_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &Float64StampedWithVariance_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace mvp_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<mvp_msgs::msg::Float64StampedWithVariance>()
{
  return &::mvp_msgs::msg::rosidl_typesupport_introspection_cpp::Float64StampedWithVariance_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, mvp_msgs, msg, Float64StampedWithVariance)() {
  return &::mvp_msgs::msg::rosidl_typesupport_introspection_cpp::Float64StampedWithVariance_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
