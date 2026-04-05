// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mvp_msgs:srv/ChangeState.idl
// generated code does not contain a copyright notice

#ifndef MVP_MSGS__SRV__DETAIL__CHANGE_STATE__STRUCT_H_
#define MVP_MSGS__SRV__DETAIL__CHANGE_STATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'state'
// Member 'caller'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/ChangeState in the package mvp_msgs.
typedef struct mvp_msgs__srv__ChangeState_Request
{
  rosidl_runtime_c__String state;
  rosidl_runtime_c__String caller;
} mvp_msgs__srv__ChangeState_Request;

// Struct for a sequence of mvp_msgs__srv__ChangeState_Request.
typedef struct mvp_msgs__srv__ChangeState_Request__Sequence
{
  mvp_msgs__srv__ChangeState_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mvp_msgs__srv__ChangeState_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'state'
#include "mvp_msgs/msg/detail/helm_state__struct.h"

/// Struct defined in srv/ChangeState in the package mvp_msgs.
typedef struct mvp_msgs__srv__ChangeState_Response
{
  bool status;
  mvp_msgs__msg__HelmState state;
} mvp_msgs__srv__ChangeState_Response;

// Struct for a sequence of mvp_msgs__srv__ChangeState_Response.
typedef struct mvp_msgs__srv__ChangeState_Response__Sequence
{
  mvp_msgs__srv__ChangeState_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mvp_msgs__srv__ChangeState_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MVP_MSGS__SRV__DETAIL__CHANGE_STATE__STRUCT_H_
