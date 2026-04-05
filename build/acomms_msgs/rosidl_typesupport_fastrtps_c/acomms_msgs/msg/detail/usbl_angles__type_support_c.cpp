// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from acomms_msgs:msg/UsblAngles.idl
// generated code does not contain a copyright notice
#include "acomms_msgs/msg/detail/usbl_angles__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "acomms_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "acomms_msgs/msg/detail/usbl_angles__struct.h"
#include "acomms_msgs/msg/detail/usbl_angles__functions.h"
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

#include "std_msgs/msg/detail/header__functions.h"  // header

// forward declare type support functions
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_acomms_msgs
size_t get_serialized_size_std_msgs__msg__Header(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_acomms_msgs
size_t max_serialized_size_std_msgs__msg__Header(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_acomms_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, std_msgs, msg, Header)();


using _UsblAngles__ros_msg_type = acomms_msgs__msg__UsblAngles;

static bool _UsblAngles__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _UsblAngles__ros_msg_type * ros_message = static_cast<const _UsblAngles__ros_msg_type *>(untyped_ros_message);
  // Field name: header
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, Header
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->header, cdr))
    {
      return false;
    }
  }

  // Field name: current_time
  {
    cdr << ros_message->current_time;
  }

  // Field name: measurement_time
  {
    cdr << ros_message->measurement_time;
  }

  // Field name: remote_address
  {
    cdr << ros_message->remote_address;
  }

  // Field name: local_bearing
  {
    cdr << ros_message->local_bearing;
  }

  // Field name: local_elevation
  {
    cdr << ros_message->local_elevation;
  }

  // Field name: bearing
  {
    cdr << ros_message->bearing;
  }

  // Field name: elevation
  {
    cdr << ros_message->elevation;
  }

  // Field name: roll
  {
    cdr << ros_message->roll;
  }

  // Field name: pitch
  {
    cdr << ros_message->pitch;
  }

  // Field name: yaw
  {
    cdr << ros_message->yaw;
  }

  // Field name: rssi
  {
    cdr << ros_message->rssi;
  }

  // Field name: signal_integrity
  {
    cdr << ros_message->signal_integrity;
  }

  // Field name: accuracy
  {
    cdr << ros_message->accuracy;
  }

  return true;
}

static bool _UsblAngles__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _UsblAngles__ros_msg_type * ros_message = static_cast<_UsblAngles__ros_msg_type *>(untyped_ros_message);
  // Field name: header
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, Header
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->header))
    {
      return false;
    }
  }

  // Field name: current_time
  {
    cdr >> ros_message->current_time;
  }

  // Field name: measurement_time
  {
    cdr >> ros_message->measurement_time;
  }

  // Field name: remote_address
  {
    cdr >> ros_message->remote_address;
  }

  // Field name: local_bearing
  {
    cdr >> ros_message->local_bearing;
  }

  // Field name: local_elevation
  {
    cdr >> ros_message->local_elevation;
  }

  // Field name: bearing
  {
    cdr >> ros_message->bearing;
  }

  // Field name: elevation
  {
    cdr >> ros_message->elevation;
  }

  // Field name: roll
  {
    cdr >> ros_message->roll;
  }

  // Field name: pitch
  {
    cdr >> ros_message->pitch;
  }

  // Field name: yaw
  {
    cdr >> ros_message->yaw;
  }

  // Field name: rssi
  {
    cdr >> ros_message->rssi;
  }

  // Field name: signal_integrity
  {
    cdr >> ros_message->signal_integrity;
  }

  // Field name: accuracy
  {
    cdr >> ros_message->accuracy;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_acomms_msgs
size_t get_serialized_size_acomms_msgs__msg__UsblAngles(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _UsblAngles__ros_msg_type * ros_message = static_cast<const _UsblAngles__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name header

  current_alignment += get_serialized_size_std_msgs__msg__Header(
    &(ros_message->header), current_alignment);
  // field.name current_time
  {
    size_t item_size = sizeof(ros_message->current_time);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name measurement_time
  {
    size_t item_size = sizeof(ros_message->measurement_time);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name remote_address
  {
    size_t item_size = sizeof(ros_message->remote_address);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name local_bearing
  {
    size_t item_size = sizeof(ros_message->local_bearing);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name local_elevation
  {
    size_t item_size = sizeof(ros_message->local_elevation);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name bearing
  {
    size_t item_size = sizeof(ros_message->bearing);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name elevation
  {
    size_t item_size = sizeof(ros_message->elevation);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name roll
  {
    size_t item_size = sizeof(ros_message->roll);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name pitch
  {
    size_t item_size = sizeof(ros_message->pitch);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name yaw
  {
    size_t item_size = sizeof(ros_message->yaw);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name rssi
  {
    size_t item_size = sizeof(ros_message->rssi);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name signal_integrity
  {
    size_t item_size = sizeof(ros_message->signal_integrity);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name accuracy
  {
    size_t item_size = sizeof(ros_message->accuracy);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _UsblAngles__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_acomms_msgs__msg__UsblAngles(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_acomms_msgs
size_t max_serialized_size_acomms_msgs__msg__UsblAngles(
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

  // member: header
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_std_msgs__msg__Header(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: current_time
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: measurement_time
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: remote_address
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: local_bearing
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: local_elevation
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: bearing
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: elevation
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: roll
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: pitch
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: yaw
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: rssi
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: signal_integrity
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: accuracy
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = acomms_msgs__msg__UsblAngles;
    is_plain =
      (
      offsetof(DataType, accuracy) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _UsblAngles__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_acomms_msgs__msg__UsblAngles(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_UsblAngles = {
  "acomms_msgs::msg",
  "UsblAngles",
  _UsblAngles__cdr_serialize,
  _UsblAngles__cdr_deserialize,
  _UsblAngles__get_serialized_size,
  _UsblAngles__max_serialized_size
};

static rosidl_message_type_support_t _UsblAngles__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_UsblAngles,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, acomms_msgs, msg, UsblAngles)() {
  return &_UsblAngles__type_support;
}

#if defined(__cplusplus)
}
#endif
