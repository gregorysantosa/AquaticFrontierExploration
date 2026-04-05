// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from mvp_msgs:srv/GetWaypoints.idl
// generated code does not contain a copyright notice
#include "mvp_msgs/srv/detail/get_waypoints__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "mvp_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "mvp_msgs/srv/detail/get_waypoints__struct.h"
#include "mvp_msgs/srv/detail/get_waypoints__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "std_msgs/msg/detail/int16__functions.h"  // count

// forward declare type support functions
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_mvp_msgs
size_t get_serialized_size_std_msgs__msg__Int16(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_mvp_msgs
size_t max_serialized_size_std_msgs__msg__Int16(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_mvp_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, std_msgs, msg, Int16)();


using _GetWaypoints_Request__ros_msg_type = mvp_msgs__srv__GetWaypoints_Request;

static bool _GetWaypoints_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _GetWaypoints_Request__ros_msg_type * ros_message = static_cast<const _GetWaypoints_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: count
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, Int16
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->count, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _GetWaypoints_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _GetWaypoints_Request__ros_msg_type * ros_message = static_cast<_GetWaypoints_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: count
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, Int16
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->count))
    {
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mvp_msgs
size_t get_serialized_size_mvp_msgs__srv__GetWaypoints_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _GetWaypoints_Request__ros_msg_type * ros_message = static_cast<const _GetWaypoints_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name count

  current_alignment += get_serialized_size_std_msgs__msg__Int16(
    &(ros_message->count), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _GetWaypoints_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_mvp_msgs__srv__GetWaypoints_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mvp_msgs
size_t max_serialized_size_mvp_msgs__srv__GetWaypoints_Request(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: count
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_std_msgs__msg__Int16(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = mvp_msgs__srv__GetWaypoints_Request;
    is_plain =
      (
      offsetof(DataType, count) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _GetWaypoints_Request__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_mvp_msgs__srv__GetWaypoints_Request(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_GetWaypoints_Request = {
  "mvp_msgs::srv",
  "GetWaypoints_Request",
  _GetWaypoints_Request__cdr_serialize,
  _GetWaypoints_Request__cdr_deserialize,
  _GetWaypoints_Request__get_serialized_size,
  _GetWaypoints_Request__max_serialized_size
};

static rosidl_message_type_support_t _GetWaypoints_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_GetWaypoints_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, mvp_msgs, srv, GetWaypoints_Request)() {
  return &_GetWaypoints_Request__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "mvp_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "mvp_msgs/srv/detail/get_waypoints__struct.h"
// already included above
// #include "mvp_msgs/srv/detail/get_waypoints__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "mvp_msgs/msg/detail/waypoint__functions.h"  // wpt

// forward declare type support functions
size_t get_serialized_size_mvp_msgs__msg__Waypoint(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_mvp_msgs__msg__Waypoint(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, mvp_msgs, msg, Waypoint)();


using _GetWaypoints_Response__ros_msg_type = mvp_msgs__srv__GetWaypoints_Response;

static bool _GetWaypoints_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _GetWaypoints_Response__ros_msg_type * ros_message = static_cast<const _GetWaypoints_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: wpt
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, mvp_msgs, msg, Waypoint
      )()->data);
    size_t size = ros_message->wpt.size;
    auto array_ptr = ros_message->wpt.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  return true;
}

static bool _GetWaypoints_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _GetWaypoints_Response__ros_msg_type * ros_message = static_cast<_GetWaypoints_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: wpt
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, mvp_msgs, msg, Waypoint
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->wpt.data) {
      mvp_msgs__msg__Waypoint__Sequence__fini(&ros_message->wpt);
    }
    if (!mvp_msgs__msg__Waypoint__Sequence__init(&ros_message->wpt, size)) {
      fprintf(stderr, "failed to create array for field 'wpt'");
      return false;
    }
    auto array_ptr = ros_message->wpt.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mvp_msgs
size_t get_serialized_size_mvp_msgs__srv__GetWaypoints_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _GetWaypoints_Response__ros_msg_type * ros_message = static_cast<const _GetWaypoints_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name wpt
  {
    size_t array_size = ros_message->wpt.size;
    auto array_ptr = ros_message->wpt.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_mvp_msgs__msg__Waypoint(
        &array_ptr[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static uint32_t _GetWaypoints_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_mvp_msgs__srv__GetWaypoints_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mvp_msgs
size_t max_serialized_size_mvp_msgs__srv__GetWaypoints_Response(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: wpt
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_mvp_msgs__msg__Waypoint(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = mvp_msgs__srv__GetWaypoints_Response;
    is_plain =
      (
      offsetof(DataType, wpt) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _GetWaypoints_Response__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_mvp_msgs__srv__GetWaypoints_Response(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_GetWaypoints_Response = {
  "mvp_msgs::srv",
  "GetWaypoints_Response",
  _GetWaypoints_Response__cdr_serialize,
  _GetWaypoints_Response__cdr_deserialize,
  _GetWaypoints_Response__get_serialized_size,
  _GetWaypoints_Response__max_serialized_size
};

static rosidl_message_type_support_t _GetWaypoints_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_GetWaypoints_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, mvp_msgs, srv, GetWaypoints_Response)() {
  return &_GetWaypoints_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "mvp_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "mvp_msgs/srv/get_waypoints.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t GetWaypoints__callbacks = {
  "mvp_msgs::srv",
  "GetWaypoints",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, mvp_msgs, srv, GetWaypoints_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, mvp_msgs, srv, GetWaypoints_Response)(),
};

static rosidl_service_type_support_t GetWaypoints__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &GetWaypoints__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, mvp_msgs, srv, GetWaypoints)() {
  return &GetWaypoints__handle;
}

#if defined(__cplusplus)
}
#endif
