// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from mvp_msgs:srv/GetStates.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "mvp_msgs/srv/detail/get_states__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace mvp_msgs
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

void GetStates_Request_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) mvp_msgs::srv::GetStates_Request(_init);
}

void GetStates_Request_fini_function(void * message_memory)
{
  auto typed_message = static_cast<mvp_msgs::srv::GetStates_Request *>(message_memory);
  typed_message->~GetStates_Request();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember GetStates_Request_message_member_array[1] = {
  {
    "structure_needs_at_least_one_member",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mvp_msgs::srv::GetStates_Request, structure_needs_at_least_one_member),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers GetStates_Request_message_members = {
  "mvp_msgs::srv",  // message namespace
  "GetStates_Request",  // message name
  1,  // number of fields
  sizeof(mvp_msgs::srv::GetStates_Request),
  GetStates_Request_message_member_array,  // message members
  GetStates_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  GetStates_Request_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t GetStates_Request_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &GetStates_Request_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace mvp_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<mvp_msgs::srv::GetStates_Request>()
{
  return &::mvp_msgs::srv::rosidl_typesupport_introspection_cpp::GetStates_Request_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, mvp_msgs, srv, GetStates_Request)() {
  return &::mvp_msgs::srv::rosidl_typesupport_introspection_cpp::GetStates_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "mvp_msgs/srv/detail/get_states__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace mvp_msgs
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

void GetStates_Response_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) mvp_msgs::srv::GetStates_Response(_init);
}

void GetStates_Response_fini_function(void * message_memory)
{
  auto typed_message = static_cast<mvp_msgs::srv::GetStates_Response *>(message_memory);
  typed_message->~GetStates_Response();
}

size_t size_function__GetStates_Response__states(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<mvp_msgs::msg::HelmState> *>(untyped_member);
  return member->size();
}

const void * get_const_function__GetStates_Response__states(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<mvp_msgs::msg::HelmState> *>(untyped_member);
  return &member[index];
}

void * get_function__GetStates_Response__states(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<mvp_msgs::msg::HelmState> *>(untyped_member);
  return &member[index];
}

void fetch_function__GetStates_Response__states(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const mvp_msgs::msg::HelmState *>(
    get_const_function__GetStates_Response__states(untyped_member, index));
  auto & value = *reinterpret_cast<mvp_msgs::msg::HelmState *>(untyped_value);
  value = item;
}

void assign_function__GetStates_Response__states(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<mvp_msgs::msg::HelmState *>(
    get_function__GetStates_Response__states(untyped_member, index));
  const auto & value = *reinterpret_cast<const mvp_msgs::msg::HelmState *>(untyped_value);
  item = value;
}

void resize_function__GetStates_Response__states(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<mvp_msgs::msg::HelmState> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember GetStates_Response_message_member_array[1] = {
  {
    "states",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<mvp_msgs::msg::HelmState>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mvp_msgs::srv::GetStates_Response, states),  // bytes offset in struct
    nullptr,  // default value
    size_function__GetStates_Response__states,  // size() function pointer
    get_const_function__GetStates_Response__states,  // get_const(index) function pointer
    get_function__GetStates_Response__states,  // get(index) function pointer
    fetch_function__GetStates_Response__states,  // fetch(index, &value) function pointer
    assign_function__GetStates_Response__states,  // assign(index, value) function pointer
    resize_function__GetStates_Response__states  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers GetStates_Response_message_members = {
  "mvp_msgs::srv",  // message namespace
  "GetStates_Response",  // message name
  1,  // number of fields
  sizeof(mvp_msgs::srv::GetStates_Response),
  GetStates_Response_message_member_array,  // message members
  GetStates_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  GetStates_Response_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t GetStates_Response_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &GetStates_Response_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace mvp_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<mvp_msgs::srv::GetStates_Response>()
{
  return &::mvp_msgs::srv::rosidl_typesupport_introspection_cpp::GetStates_Response_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, mvp_msgs, srv, GetStates_Response)() {
  return &::mvp_msgs::srv::rosidl_typesupport_introspection_cpp::GetStates_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"
// already included above
// #include "mvp_msgs/srv/detail/get_states__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/service_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/service_type_support_decl.hpp"

namespace mvp_msgs
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

// this is intentionally not const to allow initialization later to prevent an initialization race
static ::rosidl_typesupport_introspection_cpp::ServiceMembers GetStates_service_members = {
  "mvp_msgs::srv",  // service namespace
  "GetStates",  // service name
  // these two fields are initialized below on the first access
  // see get_service_type_support_handle<mvp_msgs::srv::GetStates>()
  nullptr,  // request message
  nullptr  // response message
};

static const rosidl_service_type_support_t GetStates_service_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &GetStates_service_members,
  get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace mvp_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<mvp_msgs::srv::GetStates>()
{
  // get a handle to the value to be returned
  auto service_type_support =
    &::mvp_msgs::srv::rosidl_typesupport_introspection_cpp::GetStates_service_type_support_handle;
  // get a non-const and properly typed version of the data void *
  auto service_members = const_cast<::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
    static_cast<const ::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
      service_type_support->data));
  // make sure that both the request_members_ and the response_members_ are initialized
  // if they are not, initialize them
  if (
    service_members->request_members_ == nullptr ||
    service_members->response_members_ == nullptr)
  {
    // initialize the request_members_ with the static function from the external library
    service_members->request_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::mvp_msgs::srv::GetStates_Request
      >()->data
      );
    // initialize the response_members_ with the static function from the external library
    service_members->response_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::mvp_msgs::srv::GetStates_Response
      >()->data
      );
  }
  // finally return the properly initialized service_type_support handle
  return service_type_support;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, mvp_msgs, srv, GetStates)() {
  return ::rosidl_typesupport_introspection_cpp::get_service_type_support_handle<mvp_msgs::srv::GetStates>();
}

#ifdef __cplusplus
}
#endif
