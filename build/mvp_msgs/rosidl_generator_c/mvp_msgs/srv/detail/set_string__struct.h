// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mvp_msgs:srv/SetString.idl
// generated code does not contain a copyright notice

#ifndef MVP_MSGS__SRV__DETAIL__SET_STRING__STRUCT_H_
#define MVP_MSGS__SRV__DETAIL__SET_STRING__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'data'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/SetString in the package mvp_msgs.
typedef struct mvp_msgs__srv__SetString_Request
{
  /// e.g. a helm state
  rosidl_runtime_c__String data;
} mvp_msgs__srv__SetString_Request;

// Struct for a sequence of mvp_msgs__srv__SetString_Request.
typedef struct mvp_msgs__srv__SetString_Request__Sequence
{
  mvp_msgs__srv__SetString_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mvp_msgs__srv__SetString_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'message'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in srv/SetString in the package mvp_msgs.
typedef struct mvp_msgs__srv__SetString_Response
{
  /// indicate successful run of triggered service
  bool success;
  /// informational, e.g. for error messages
  rosidl_runtime_c__String message;
} mvp_msgs__srv__SetString_Response;

// Struct for a sequence of mvp_msgs__srv__SetString_Response.
typedef struct mvp_msgs__srv__SetString_Response__Sequence
{
  mvp_msgs__srv__SetString_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mvp_msgs__srv__SetString_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MVP_MSGS__SRV__DETAIL__SET_STRING__STRUCT_H_
