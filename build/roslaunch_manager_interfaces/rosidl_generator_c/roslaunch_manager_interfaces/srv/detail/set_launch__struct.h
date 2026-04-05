// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from roslaunch_manager_interfaces:srv/SetLaunch.idl
// generated code does not contain a copyright notice

#ifndef ROSLAUNCH_MANAGER_INTERFACES__SRV__DETAIL__SET_LAUNCH__STRUCT_H_
#define ROSLAUNCH_MANAGER_INTERFACES__SRV__DETAIL__SET_LAUNCH__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'pkg'
// Member 'file'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/SetLaunch in the package roslaunch_manager_interfaces.
typedef struct roslaunch_manager_interfaces__srv__SetLaunch_Request
{
  rosidl_runtime_c__String pkg;
  rosidl_runtime_c__String file;
  bool set;
} roslaunch_manager_interfaces__srv__SetLaunch_Request;

// Struct for a sequence of roslaunch_manager_interfaces__srv__SetLaunch_Request.
typedef struct roslaunch_manager_interfaces__srv__SetLaunch_Request__Sequence
{
  roslaunch_manager_interfaces__srv__SetLaunch_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} roslaunch_manager_interfaces__srv__SetLaunch_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'message'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in srv/SetLaunch in the package roslaunch_manager_interfaces.
typedef struct roslaunch_manager_interfaces__srv__SetLaunch_Response
{
  /// indicate successful run of triggered service
  bool success;
  /// informational, e.g. for error messages
  rosidl_runtime_c__String message;
} roslaunch_manager_interfaces__srv__SetLaunch_Response;

// Struct for a sequence of roslaunch_manager_interfaces__srv__SetLaunch_Response.
typedef struct roslaunch_manager_interfaces__srv__SetLaunch_Response__Sequence
{
  roslaunch_manager_interfaces__srv__SetLaunch_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} roslaunch_manager_interfaces__srv__SetLaunch_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROSLAUNCH_MANAGER_INTERFACES__SRV__DETAIL__SET_LAUNCH__STRUCT_H_
