// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from acomms_msgs:msg/UsblPhyd.idl
// generated code does not contain a copyright notice
#include "acomms_msgs/msg/detail/usbl_phyd__rosidl_typesupport_fastrtps_cpp.hpp"
#include "acomms_msgs/msg/detail/usbl_phyd__struct.hpp"

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
  const acomms_msgs::msg::UsblPhyd & ros_message,
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
  // Member: fix_type
  cdr << (ros_message.fix_type ? true : false);
  // Member: delay_1_5
  cdr << ros_message.delay_1_5;
  // Member: delay_2_5
  cdr << ros_message.delay_2_5;
  // Member: delay_3_5
  cdr << ros_message.delay_3_5;
  // Member: delay_4_5
  cdr << ros_message.delay_4_5;
  // Member: delay_1_2
  cdr << ros_message.delay_1_2;
  // Member: delay_4_1
  cdr << ros_message.delay_4_1;
  // Member: delay_3_2
  cdr << ros_message.delay_3_2;
  // Member: delay_3_4
  cdr << ros_message.delay_3_4;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_acomms_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  acomms_msgs::msg::UsblPhyd & ros_message)
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

  // Member: fix_type
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.fix_type = tmp ? true : false;
  }

  // Member: delay_1_5
  cdr >> ros_message.delay_1_5;

  // Member: delay_2_5
  cdr >> ros_message.delay_2_5;

  // Member: delay_3_5
  cdr >> ros_message.delay_3_5;

  // Member: delay_4_5
  cdr >> ros_message.delay_4_5;

  // Member: delay_1_2
  cdr >> ros_message.delay_1_2;

  // Member: delay_4_1
  cdr >> ros_message.delay_4_1;

  // Member: delay_3_2
  cdr >> ros_message.delay_3_2;

  // Member: delay_3_4
  cdr >> ros_message.delay_3_4;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_acomms_msgs
get_serialized_size(
  const acomms_msgs::msg::UsblPhyd & ros_message,
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
  // Member: fix_type
  {
    size_t item_size = sizeof(ros_message.fix_type);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: delay_1_5
  {
    size_t item_size = sizeof(ros_message.delay_1_5);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: delay_2_5
  {
    size_t item_size = sizeof(ros_message.delay_2_5);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: delay_3_5
  {
    size_t item_size = sizeof(ros_message.delay_3_5);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: delay_4_5
  {
    size_t item_size = sizeof(ros_message.delay_4_5);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: delay_1_2
  {
    size_t item_size = sizeof(ros_message.delay_1_2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: delay_4_1
  {
    size_t item_size = sizeof(ros_message.delay_4_1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: delay_3_2
  {
    size_t item_size = sizeof(ros_message.delay_3_2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: delay_3_4
  {
    size_t item_size = sizeof(ros_message.delay_3_4);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_acomms_msgs
max_serialized_size_UsblPhyd(
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

  // Member: fix_type
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: delay_1_5
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: delay_2_5
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: delay_3_5
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: delay_4_5
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: delay_1_2
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: delay_4_1
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: delay_3_2
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: delay_3_4
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
    using DataType = acomms_msgs::msg::UsblPhyd;
    is_plain =
      (
      offsetof(DataType, delay_3_4) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _UsblPhyd__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const acomms_msgs::msg::UsblPhyd *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _UsblPhyd__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<acomms_msgs::msg::UsblPhyd *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _UsblPhyd__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const acomms_msgs::msg::UsblPhyd *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _UsblPhyd__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_UsblPhyd(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _UsblPhyd__callbacks = {
  "acomms_msgs::msg",
  "UsblPhyd",
  _UsblPhyd__cdr_serialize,
  _UsblPhyd__cdr_deserialize,
  _UsblPhyd__get_serialized_size,
  _UsblPhyd__max_serialized_size
};

static rosidl_message_type_support_t _UsblPhyd__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_UsblPhyd__callbacks,
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
get_message_type_support_handle<acomms_msgs::msg::UsblPhyd>()
{
  return &acomms_msgs::msg::typesupport_fastrtps_cpp::_UsblPhyd__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, acomms_msgs, msg, UsblPhyd)() {
  return &acomms_msgs::msg::typesupport_fastrtps_cpp::_UsblPhyd__handle;
}

#ifdef __cplusplus
}
#endif
