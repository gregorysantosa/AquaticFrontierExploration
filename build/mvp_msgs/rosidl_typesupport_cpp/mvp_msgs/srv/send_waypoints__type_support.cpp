// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from mvp_msgs:srv/SendWaypoints.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "mvp_msgs/srv/detail/send_waypoints__struct.hpp"
#include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
#include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace mvp_msgs
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _SendWaypoints_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SendWaypoints_Request_type_support_ids_t;

static const _SendWaypoints_Request_type_support_ids_t _SendWaypoints_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _SendWaypoints_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SendWaypoints_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SendWaypoints_Request_type_support_symbol_names_t _SendWaypoints_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, mvp_msgs, srv, SendWaypoints_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, mvp_msgs, srv, SendWaypoints_Request)),
  }
};

typedef struct _SendWaypoints_Request_type_support_data_t
{
  void * data[2];
} _SendWaypoints_Request_type_support_data_t;

static _SendWaypoints_Request_type_support_data_t _SendWaypoints_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SendWaypoints_Request_message_typesupport_map = {
  2,
  "mvp_msgs",
  &_SendWaypoints_Request_message_typesupport_ids.typesupport_identifier[0],
  &_SendWaypoints_Request_message_typesupport_symbol_names.symbol_name[0],
  &_SendWaypoints_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t SendWaypoints_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SendWaypoints_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace mvp_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<mvp_msgs::srv::SendWaypoints_Request>()
{
  return &::mvp_msgs::srv::rosidl_typesupport_cpp::SendWaypoints_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, mvp_msgs, srv, SendWaypoints_Request)() {
  return get_message_type_support_handle<mvp_msgs::srv::SendWaypoints_Request>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "mvp_msgs/srv/detail/send_waypoints__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace mvp_msgs
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _SendWaypoints_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SendWaypoints_Response_type_support_ids_t;

static const _SendWaypoints_Response_type_support_ids_t _SendWaypoints_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _SendWaypoints_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SendWaypoints_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SendWaypoints_Response_type_support_symbol_names_t _SendWaypoints_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, mvp_msgs, srv, SendWaypoints_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, mvp_msgs, srv, SendWaypoints_Response)),
  }
};

typedef struct _SendWaypoints_Response_type_support_data_t
{
  void * data[2];
} _SendWaypoints_Response_type_support_data_t;

static _SendWaypoints_Response_type_support_data_t _SendWaypoints_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SendWaypoints_Response_message_typesupport_map = {
  2,
  "mvp_msgs",
  &_SendWaypoints_Response_message_typesupport_ids.typesupport_identifier[0],
  &_SendWaypoints_Response_message_typesupport_symbol_names.symbol_name[0],
  &_SendWaypoints_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t SendWaypoints_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SendWaypoints_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace mvp_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<mvp_msgs::srv::SendWaypoints_Response>()
{
  return &::mvp_msgs::srv::rosidl_typesupport_cpp::SendWaypoints_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, mvp_msgs, srv, SendWaypoints_Response)() {
  return get_message_type_support_handle<mvp_msgs::srv::SendWaypoints_Response>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "mvp_msgs/srv/detail/send_waypoints__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/service_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace mvp_msgs
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _SendWaypoints_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SendWaypoints_type_support_ids_t;

static const _SendWaypoints_type_support_ids_t _SendWaypoints_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _SendWaypoints_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SendWaypoints_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SendWaypoints_type_support_symbol_names_t _SendWaypoints_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, mvp_msgs, srv, SendWaypoints)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, mvp_msgs, srv, SendWaypoints)),
  }
};

typedef struct _SendWaypoints_type_support_data_t
{
  void * data[2];
} _SendWaypoints_type_support_data_t;

static _SendWaypoints_type_support_data_t _SendWaypoints_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SendWaypoints_service_typesupport_map = {
  2,
  "mvp_msgs",
  &_SendWaypoints_service_typesupport_ids.typesupport_identifier[0],
  &_SendWaypoints_service_typesupport_symbol_names.symbol_name[0],
  &_SendWaypoints_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t SendWaypoints_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SendWaypoints_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace mvp_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<mvp_msgs::srv::SendWaypoints>()
{
  return &::mvp_msgs::srv::rosidl_typesupport_cpp::SendWaypoints_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_cpp, mvp_msgs, srv, SendWaypoints)() {
  return ::rosidl_typesupport_cpp::get_service_type_support_handle<mvp_msgs::srv::SendWaypoints>();
}

#ifdef __cplusplus
}
#endif
