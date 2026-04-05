// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from mvp_msgs:msg/ControlMode.idl
// generated code does not contain a copyright notice
#include "mvp_msgs/msg/detail/control_mode__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "mvp_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "mvp_msgs/msg/detail/control_mode__struct.h"
#include "mvp_msgs/msg/detail/control_mode__functions.h"
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

#include "mvp_msgs/msg/detail/pid_gains__functions.h"  // pid_p, pid_pitch, pid_q, pid_r, pid_roll, pid_u, pid_v, pid_w, pid_x, pid_y, pid_yaw, pid_z
#include "rosidl_runtime_c/primitives_sequence.h"  // dofs
#include "rosidl_runtime_c/primitives_sequence_functions.h"  // dofs
#include "rosidl_runtime_c/string.h"  // name
#include "rosidl_runtime_c/string_functions.h"  // name

// forward declare type support functions
size_t get_serialized_size_mvp_msgs__msg__PidGains(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_mvp_msgs__msg__PidGains(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, mvp_msgs, msg, PidGains)();


using _ControlMode__ros_msg_type = mvp_msgs__msg__ControlMode;

static bool _ControlMode__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _ControlMode__ros_msg_type * ros_message = static_cast<const _ControlMode__ros_msg_type *>(untyped_ros_message);
  // Field name: name
  {
    const rosidl_runtime_c__String * str = &ros_message->name;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: dofs
  {
    size_t size = ros_message->dofs.size;
    auto array_ptr = ros_message->dofs.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: pid_x
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, mvp_msgs, msg, PidGains
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->pid_x, cdr))
    {
      return false;
    }
  }

  // Field name: pid_y
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, mvp_msgs, msg, PidGains
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->pid_y, cdr))
    {
      return false;
    }
  }

  // Field name: pid_z
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, mvp_msgs, msg, PidGains
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->pid_z, cdr))
    {
      return false;
    }
  }

  // Field name: pid_roll
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, mvp_msgs, msg, PidGains
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->pid_roll, cdr))
    {
      return false;
    }
  }

  // Field name: pid_pitch
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, mvp_msgs, msg, PidGains
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->pid_pitch, cdr))
    {
      return false;
    }
  }

  // Field name: pid_yaw
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, mvp_msgs, msg, PidGains
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->pid_yaw, cdr))
    {
      return false;
    }
  }

  // Field name: pid_u
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, mvp_msgs, msg, PidGains
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->pid_u, cdr))
    {
      return false;
    }
  }

  // Field name: pid_v
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, mvp_msgs, msg, PidGains
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->pid_v, cdr))
    {
      return false;
    }
  }

  // Field name: pid_w
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, mvp_msgs, msg, PidGains
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->pid_w, cdr))
    {
      return false;
    }
  }

  // Field name: pid_p
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, mvp_msgs, msg, PidGains
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->pid_p, cdr))
    {
      return false;
    }
  }

  // Field name: pid_q
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, mvp_msgs, msg, PidGains
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->pid_q, cdr))
    {
      return false;
    }
  }

  // Field name: pid_r
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, mvp_msgs, msg, PidGains
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->pid_r, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _ControlMode__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _ControlMode__ros_msg_type * ros_message = static_cast<_ControlMode__ros_msg_type *>(untyped_ros_message);
  // Field name: name
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->name.data) {
      rosidl_runtime_c__String__init(&ros_message->name);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->name,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'name'\n");
      return false;
    }
  }

  // Field name: dofs
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->dofs.data) {
      rosidl_runtime_c__int32__Sequence__fini(&ros_message->dofs);
    }
    if (!rosidl_runtime_c__int32__Sequence__init(&ros_message->dofs, size)) {
      fprintf(stderr, "failed to create array for field 'dofs'");
      return false;
    }
    auto array_ptr = ros_message->dofs.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: pid_x
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, mvp_msgs, msg, PidGains
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->pid_x))
    {
      return false;
    }
  }

  // Field name: pid_y
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, mvp_msgs, msg, PidGains
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->pid_y))
    {
      return false;
    }
  }

  // Field name: pid_z
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, mvp_msgs, msg, PidGains
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->pid_z))
    {
      return false;
    }
  }

  // Field name: pid_roll
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, mvp_msgs, msg, PidGains
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->pid_roll))
    {
      return false;
    }
  }

  // Field name: pid_pitch
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, mvp_msgs, msg, PidGains
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->pid_pitch))
    {
      return false;
    }
  }

  // Field name: pid_yaw
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, mvp_msgs, msg, PidGains
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->pid_yaw))
    {
      return false;
    }
  }

  // Field name: pid_u
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, mvp_msgs, msg, PidGains
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->pid_u))
    {
      return false;
    }
  }

  // Field name: pid_v
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, mvp_msgs, msg, PidGains
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->pid_v))
    {
      return false;
    }
  }

  // Field name: pid_w
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, mvp_msgs, msg, PidGains
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->pid_w))
    {
      return false;
    }
  }

  // Field name: pid_p
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, mvp_msgs, msg, PidGains
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->pid_p))
    {
      return false;
    }
  }

  // Field name: pid_q
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, mvp_msgs, msg, PidGains
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->pid_q))
    {
      return false;
    }
  }

  // Field name: pid_r
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, mvp_msgs, msg, PidGains
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->pid_r))
    {
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mvp_msgs
size_t get_serialized_size_mvp_msgs__msg__ControlMode(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _ControlMode__ros_msg_type * ros_message = static_cast<const _ControlMode__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name name
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->name.size + 1);
  // field.name dofs
  {
    size_t array_size = ros_message->dofs.size;
    auto array_ptr = ros_message->dofs.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name pid_x

  current_alignment += get_serialized_size_mvp_msgs__msg__PidGains(
    &(ros_message->pid_x), current_alignment);
  // field.name pid_y

  current_alignment += get_serialized_size_mvp_msgs__msg__PidGains(
    &(ros_message->pid_y), current_alignment);
  // field.name pid_z

  current_alignment += get_serialized_size_mvp_msgs__msg__PidGains(
    &(ros_message->pid_z), current_alignment);
  // field.name pid_roll

  current_alignment += get_serialized_size_mvp_msgs__msg__PidGains(
    &(ros_message->pid_roll), current_alignment);
  // field.name pid_pitch

  current_alignment += get_serialized_size_mvp_msgs__msg__PidGains(
    &(ros_message->pid_pitch), current_alignment);
  // field.name pid_yaw

  current_alignment += get_serialized_size_mvp_msgs__msg__PidGains(
    &(ros_message->pid_yaw), current_alignment);
  // field.name pid_u

  current_alignment += get_serialized_size_mvp_msgs__msg__PidGains(
    &(ros_message->pid_u), current_alignment);
  // field.name pid_v

  current_alignment += get_serialized_size_mvp_msgs__msg__PidGains(
    &(ros_message->pid_v), current_alignment);
  // field.name pid_w

  current_alignment += get_serialized_size_mvp_msgs__msg__PidGains(
    &(ros_message->pid_w), current_alignment);
  // field.name pid_p

  current_alignment += get_serialized_size_mvp_msgs__msg__PidGains(
    &(ros_message->pid_p), current_alignment);
  // field.name pid_q

  current_alignment += get_serialized_size_mvp_msgs__msg__PidGains(
    &(ros_message->pid_q), current_alignment);
  // field.name pid_r

  current_alignment += get_serialized_size_mvp_msgs__msg__PidGains(
    &(ros_message->pid_r), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _ControlMode__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_mvp_msgs__msg__ControlMode(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mvp_msgs
size_t max_serialized_size_mvp_msgs__msg__ControlMode(
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

  // member: name
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: dofs
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: pid_x
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_mvp_msgs__msg__PidGains(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: pid_y
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_mvp_msgs__msg__PidGains(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: pid_z
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_mvp_msgs__msg__PidGains(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: pid_roll
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_mvp_msgs__msg__PidGains(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: pid_pitch
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_mvp_msgs__msg__PidGains(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: pid_yaw
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_mvp_msgs__msg__PidGains(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: pid_u
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_mvp_msgs__msg__PidGains(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: pid_v
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_mvp_msgs__msg__PidGains(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: pid_w
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_mvp_msgs__msg__PidGains(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: pid_p
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_mvp_msgs__msg__PidGains(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: pid_q
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_mvp_msgs__msg__PidGains(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: pid_r
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_mvp_msgs__msg__PidGains(
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
    using DataType = mvp_msgs__msg__ControlMode;
    is_plain =
      (
      offsetof(DataType, pid_r) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _ControlMode__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_mvp_msgs__msg__ControlMode(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_ControlMode = {
  "mvp_msgs::msg",
  "ControlMode",
  _ControlMode__cdr_serialize,
  _ControlMode__cdr_deserialize,
  _ControlMode__get_serialized_size,
  _ControlMode__max_serialized_size
};

static rosidl_message_type_support_t _ControlMode__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_ControlMode,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, mvp_msgs, msg, ControlMode)() {
  return &_ControlMode__type_support;
}

#if defined(__cplusplus)
}
#endif
