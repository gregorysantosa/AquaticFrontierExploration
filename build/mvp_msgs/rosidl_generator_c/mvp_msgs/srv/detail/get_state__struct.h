// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mvp_msgs:srv/GetState.idl
// generated code does not contain a copyright notice

#ifndef MVP_MSGS__SRV__DETAIL__GET_STATE__STRUCT_H_
#define MVP_MSGS__SRV__DETAIL__GET_STATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'name'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/GetState in the package mvp_msgs.
typedef struct mvp_msgs__srv__GetState_Request
{
  rosidl_runtime_c__String name;
} mvp_msgs__srv__GetState_Request;

// Struct for a sequence of mvp_msgs__srv__GetState_Request.
typedef struct mvp_msgs__srv__GetState_Request__Sequence
{
  mvp_msgs__srv__GetState_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mvp_msgs__srv__GetState_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'state'
#include "mvp_msgs/msg/detail/helm_state__struct.h"

/// Struct defined in srv/GetState in the package mvp_msgs.
typedef struct mvp_msgs__srv__GetState_Response
{
  mvp_msgs__msg__HelmState state;
} mvp_msgs__srv__GetState_Response;

// Struct for a sequence of mvp_msgs__srv__GetState_Response.
typedef struct mvp_msgs__srv__GetState_Response__Sequence
{
  mvp_msgs__srv__GetState_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mvp_msgs__srv__GetState_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MVP_MSGS__SRV__DETAIL__GET_STATE__STRUCT_H_
