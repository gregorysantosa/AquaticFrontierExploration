// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mvp_msgs:srv/GetStates.idl
// generated code does not contain a copyright notice

#ifndef MVP_MSGS__SRV__DETAIL__GET_STATES__STRUCT_H_
#define MVP_MSGS__SRV__DETAIL__GET_STATES__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/GetStates in the package mvp_msgs.
typedef struct mvp_msgs__srv__GetStates_Request
{
  uint8_t structure_needs_at_least_one_member;
} mvp_msgs__srv__GetStates_Request;

// Struct for a sequence of mvp_msgs__srv__GetStates_Request.
typedef struct mvp_msgs__srv__GetStates_Request__Sequence
{
  mvp_msgs__srv__GetStates_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mvp_msgs__srv__GetStates_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'states'
#include "mvp_msgs/msg/detail/helm_state__struct.h"

/// Struct defined in srv/GetStates in the package mvp_msgs.
typedef struct mvp_msgs__srv__GetStates_Response
{
  mvp_msgs__msg__HelmState__Sequence states;
} mvp_msgs__srv__GetStates_Response;

// Struct for a sequence of mvp_msgs__srv__GetStates_Response.
typedef struct mvp_msgs__srv__GetStates_Response__Sequence
{
  mvp_msgs__srv__GetStates_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mvp_msgs__srv__GetStates_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MVP_MSGS__SRV__DETAIL__GET_STATES__STRUCT_H_
