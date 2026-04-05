// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from acomms_msgs:msg/UsblAngles.idl
// generated code does not contain a copyright notice
#include "acomms_msgs/msg/detail/usbl_angles__rosidl_typesupport_fastrtps_cpp.hpp"
#include "acomms_msgs/msg/detail/usbl_angles__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions
namespace std_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const std_msgs::msg::Header &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  std_msgs::msg::Header &);
size_t get_serialized_size(
  const std_msgs::msg::Header &,
  size_t current_alignment);
size_t
max_serialized_size_Header(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace std_msgs


namespace acomms_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_acomms_msgs
cdr_serialize(
  const acomms_msgs::msg::UsblAngles & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.header,
    cdr);
  // Member: current_time
  cdr << ros_message.current_time;
  // Member: measurement_time
  cdr << ros_message.measurement_time;
  // Member: remote_address
  cdr << ros_message.remote_address;
  // Member: local_bearing
  cdr << ros_message.local_bearing;
  // Member: local_elevation
  cdr << ros_message.local_elevation;
  // Member: bearing
  cdr << ros_message.bearing;
  // Member: elevation
  cdr << ros_message.elevation;
  // Member: roll
  cdr << ros_message.roll;
  // Member: pitch
  cdr << ros_message.pitch;
  // Member: yaw
  cdr << ros_message.yaw;
  // Member: rssi
  cdr << ros_message.rssi;
  // Member: signal_integrity
  cdr << ros_message.signal_integrity;
  // Member: accuracy
  cdr << ros_message.accuracy;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_acomms_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  acomms_msgs::msg::UsblAngles & ros_message)
{
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.header);

  // Member: current_time
  cdr >> ros_message.current_time;

  // Member: measurement_time
  cdr >> ros_message.measurement_time;

  // Member: remote_address
  cdr >> ros_message.remote_address;

  // Member: local_bearing
  cdr >> ros_message.local_bearing;

  // Member: local_elevation
  cdr >> ros_message.local_elevation;

  // Member: bearing
  cdr >> ros_message.bearing;

  // Member: elevation
  cdr >> ros_message.elevation;

  // Member: roll
  cdr >> ros_message.roll;

  // Member: pitch
  cdr >> ros_message.pitch;

  // Member: yaw
  cdr >> ros_message.yaw;

  // Member: rssi
  cdr >> ros_message.rssi;

  // Member: signal_integrity
  cdr >> ros_message.signal_integrity;

  // Member: accuracy
  cdr >> ros_message.accuracy;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_acomms_msgs
get_serialized_size(
  const acomms_msgs::msg::UsblAngles & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: header

  current_alignment +=
    std_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.header, current_alignment);
  // Member: current_time
  {
    size_t item_size = sizeof(ros_message.current_time);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: measurement_time
  {
    size_t item_size = sizeof(ros_message.measurement_time);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: remote_address
  {
    size_t item_size = sizeof(ros_message.remote_address);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: local_bearing
  {
    size_t item_size = sizeof(ros_message.local_bearing);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: local_elevation
  {
    size_t item_size = sizeof(ros_message.local_elevation);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: bearing
  {
    size_t item_size = sizeof(ros_message.bearing);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: elevation
  {
    size_t item_size = sizeof(ros_message.elevation);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: roll
  {
    size_t item_size = sizeof(ros_message.roll);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: pitch
  {
    size_t item_size = sizeof(ros_message.pitch);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: yaw
  {
    size_t item_size = sizeof(ros_message.yaw);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: rssi
  {
    size_t item_size = sizeof(ros_message.rssi);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: signal_integrity
  {
    size_t item_size = sizeof(ros_message.signal_integrity);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: accuracy
  {
    size_t item_size = sizeof(ros_message.accuracy);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_acomms_msgs
max_serialized_size_UsblAngles(
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


  // Member: header
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        std_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_Header(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: current_time
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: measurement_time
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: remote_address
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: local_bearing
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: local_elevation
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: bearing
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: elevation
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: roll
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: pitch
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: yaw
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: rssi
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: signal_integrity
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: accuracy
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
    using DataType = acomms_msgs::msg::UsblAngles;
    is_plain =
      (
      offsetof(DataType, accuracy) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _UsblAngles__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const acomms_msgs::msg::UsblAngles *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _UsblAngles__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<acomms_msgs::msg::UsblAngles *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _UsblAngles__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const acomms_msgs::msg::UsblAngles *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _UsblAngles__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_UsblAngles(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _UsblAngles__callbacks = {
  "acomms_msgs::msg",
  "UsblAngles",
  _UsblAngles__cdr_serialize,
  _UsblAngles__cdr_deserialize,
  _UsblAngles__get_serialized_size,
  _UsblAngles__max_serialized_size
};

static rosidl_message_type_support_t _UsblAngles__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_UsblAngles__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace acomms_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_acomms_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<acomms_msgs::msg::UsblAngles>()
{
  return &acomms_msgs::msg::typesupport_fastrtps_cpp::_UsblAngles__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, acomms_msgs, msg, UsblAngles)() {
  return &acomms_msgs::msg::typesupport_fastrtps_cpp::_UsblAngles__handle;
}

#ifdef __cplusplus
}
#endif
