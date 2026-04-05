// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from mvp_msgs:msg/ControlModes.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "mvp_msgs/msg/detail/control_modes__struct.hpp"
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

void ControlModes_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) mvp_msgs::msg::ControlModes(_init);
}

void ControlModes_fini_function(void * message_memory)
{
  auto typed_message = static_cast<mvp_msgs::msg::ControlModes *>(message_memory);
  typed_message->~ControlModes();
}

size_t size_function__ControlModes__modes(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<mvp_msgs::msg::ControlMode> *>(untyped_member);
  return member->size();
}

const void * get_const_function__ControlModes__modes(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<mvp_msgs::msg::ControlMode> *>(untyped_member);
  return &member[index];
}

void * get_function__ControlModes__modes(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<mvp_msgs::msg::ControlMode> *>(untyped_member);
  return &member[index];
}

void fetch_function__ControlModes__modes(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const mvp_msgs::msg::ControlMode *>(
    get_const_function__ControlModes__modes(untyped_member, index));
  auto & value = *reinterpret_cast<mvp_msgs::msg::ControlMode *>(untyped_value);
  value = item;
}

void assign_function__ControlModes__modes(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<mvp_msgs::msg::ControlMode *>(
    get_function__ControlModes__modes(untyped_member, index));
  const auto & value = *reinterpret_cast<const mvp_msgs::msg::ControlMode *>(untyped_value);
  item = value;
}

void resize_function__ControlModes__modes(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<mvp_msgs::msg::ControlMode> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember ControlModes_message_member_array[1] = {
  {
    "modes",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<mvp_msgs::msg::ControlMode>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mvp_msgs::msg::ControlModes, modes),  // bytes offset in struct
    nullptr,  // default value
    size_function__ControlModes__modes,  // size() function pointer
    get_const_function__ControlModes__modes,  // get_const(index) function pointer
    get_function__ControlModes__modes,  // get(index) function pointer
    fetch_function__ControlModes__modes,  // fetch(index, &value) function pointer
    assign_function__ControlModes__modes,  // assign(index, value) function pointer
    resize_function__ControlModes__modes  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers ControlModes_message_members = {
  "mvp_msgs::msg",  // message namespace
  "ControlModes",  // message name
  1,  // number of fields
  sizeof(mvp_msgs::msg::ControlModes),
  ControlModes_message_member_array,  // message members
  ControlModes_init_function,  // function to initialize message memory (memory has to be allocated)
  ControlModes_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t ControlModes_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &ControlModes_message_members,
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
get_message_type_support_handle<mvp_msgs::msg::ControlModes>()
{
  return &::mvp_msgs::msg::rosidl_typesupport_introspection_cpp::ControlModes_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, mvp_msgs, msg, ControlModes)() {
  return &::mvp_msgs::msg::rosidl_typesupport_introspection_cpp::ControlModes_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
