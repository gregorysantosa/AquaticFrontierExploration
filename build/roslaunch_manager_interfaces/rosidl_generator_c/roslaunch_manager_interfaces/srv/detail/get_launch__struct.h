// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from roslaunch_manager_interfaces:srv/GetLaunch.idl
// generated code does not contain a copyright notice

#ifndef ROSLAUNCH_MANAGER_INTERFACES__SRV__DETAIL__GET_LAUNCH__STRUCT_H_
#define ROSLAUNCH_MANAGER_INTERFACES__SRV__DETAIL__GET_LAUNCH__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/GetLaunch in the package roslaunch_manager_interfaces.
typedef struct roslaunch_manager_interfaces__srv__GetLaunch_Request
{
  uint8_t structure_needs_at_least_one_member;
} roslaunch_manager_interfaces__srv__GetLaunch_Request;

// Struct for a sequence of roslaunch_manager_interfaces__srv__GetLaunch_Request.
typedef struct roslaunch_manager_interfaces__srv__GetLaunch_Request__Sequence
{
  roslaunch_manager_interfaces__srv__GetLaunch_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} roslaunch_manager_interfaces__srv__GetLaunch_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'list'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/GetLaunch in the package roslaunch_manager_interfaces.
typedef struct roslaunch_manager_interfaces__srv__GetLaunch_Response
{
  /// list of messages
  rosidl_runtime_c__String__Sequence list;
} roslaunch_manager_interfaces__srv__GetLaunch_Response;

// Struct for a sequence of roslaunch_manager_interfaces__srv__GetLaunch_Response.
typedef struct roslaunch_manager_interfaces__srv__GetLaunch_Response__Sequence
{
  roslaunch_manager_interfaces__srv__GetLaunch_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} roslaunch_manager_interfaces__srv__GetLaunch_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROSLAUNCH_MANAGER_INTERFACES__SRV__DETAIL__GET_LAUNCH__STRUCT_H_
