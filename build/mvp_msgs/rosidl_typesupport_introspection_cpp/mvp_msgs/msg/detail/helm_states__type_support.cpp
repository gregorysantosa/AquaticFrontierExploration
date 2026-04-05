// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from mvp_msgs:msg/HelmStates.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "mvp_msgs/msg/detail/helm_states__struct.hpp"
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

void HelmStates_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) mvp_msgs::msg::HelmStates(_init);
}

void HelmStates_fini_function(void * message_memory)
{
  auto typed_message = static_cast<mvp_msgs::msg::HelmStates *>(message_memory);
  typed_message->~HelmStates();
}

size_t size_function__HelmStates__states(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<mvp_msgs::msg::HelmState> *>(untyped_member);
  return member->size();
}

const void * get_const_function__HelmStates__states(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<mvp_msgs::msg::HelmState> *>(untyped_member);
  return &member[index];
}

void * get_function__HelmStates__states(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<mvp_msgs::msg::HelmState> *>(untyped_member);
  return &member[index];
}

void fetch_function__HelmStates__states(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const mvp_msgs::msg::HelmState *>(
    get_const_function__HelmStates__states(untyped_member, index));
  auto & value = *reinterpret_cast<mvp_msgs::msg::HelmState *>(untyped_value);
  value = item;
}

void assign_function__HelmStates__states(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<mvp_msgs::msg::HelmState *>(
    get_function__HelmStates__states(untyped_member, index));
  const auto & value = *reinterpret_cast<const mvp_msgs::msg::HelmState *>(untyped_value);
  item = value;
}

void resize_function__HelmStates__states(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<mvp_msgs::msg::HelmState> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember HelmStates_message_member_array[1] = {
  {
    "states",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<mvp_msgs::msg::HelmState>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mvp_msgs::msg::HelmStates, states),  // bytes offset in struct
    nullptr,  // default value
    size_function__HelmStates__states,  // size() function pointer
    get_const_function__HelmStates__states,  // get_const(index) function pointer
    get_function__HelmStates__states,  // get(index) function pointer
    fetch_function__HelmStates__states,  // fetch(index, &value) function pointer
    assign_function__HelmStates__states,  // assign(index, value) function pointer
    resize_function__HelmStates__states  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers HelmStates_message_members = {
  "mvp_msgs::msg",  // message namespace
  "HelmStates",  // message name
  1,  // number of fields
  sizeof(mvp_msgs::msg::HelmStates),
  HelmStates_message_member_array,  // message members
  HelmStates_init_function,  // function to initialize message memory (memory has to be allocated)
  HelmStates_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t HelmStates_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &HelmStates_message_members,
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
get_message_type_support_handle<mvp_msgs::msg::HelmStates>()
{
  return &::mvp_msgs::msg::rosidl_typesupport_introspection_cpp::HelmStates_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, mvp_msgs, msg, HelmStates)() {
  return &::mvp_msgs::msg::rosidl_typesupport_introspection_cpp::HelmStates_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
