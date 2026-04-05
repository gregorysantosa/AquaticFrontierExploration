// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mvp_msgs:msg/HelmState.idl
// generated code does not contain a copyright notice

#ifndef MVP_MSGS__MSG__DETAIL__HELM_STATE__STRUCT_H_
#define MVP_MSGS__MSG__DETAIL__HELM_STATE__STRUCT_H_

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
// Member 'mode'
// Member 'transitions'
// Member 'exit_state'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/HelmState in the package mvp_msgs.
/**
  * This file is part of MVP-Mission program.
  *
  * MVP-Mission is free software: you can redistribute it and/or modify
  * it under the terms of the GNU General Public License as published by
  * the Free Software Foundation, either version 3 of the License, or
  * (at your option) any later version.
  *
  * MVP-Mission is distributed in the hope that it will be useful,
  * but WITHOUT ANY WARRANTY; without even the implied warranty of
  * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  * GNU General Public License for more details.
  *
  * You should have received a copy of the GNU General Public License
  * along with MVP-Mission.  If not, see <https://www.gnu.org/licenses/>.
  *
  * Author: Emir Cem Gezer
  * Email: emircem@uri.edu;emircem.gezer@gmail.com
  * Year: 2022
  *
  * Copyright (C) 2022 Smart Ocean Systems Laboratory
 */
typedef struct mvp_msgs__msg__HelmState
{
  rosidl_runtime_c__String name;
  rosidl_runtime_c__String mode;
  rosidl_runtime_c__String__Sequence transitions;
  double max_duration;
  rosidl_runtime_c__String exit_state;
} mvp_msgs__msg__HelmState;

// Struct for a sequence of mvp_msgs__msg__HelmState.
typedef struct mvp_msgs__msg__HelmState__Sequence
{
  mvp_msgs__msg__HelmState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mvp_msgs__msg__HelmState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MVP_MSGS__MSG__DETAIL__HELM_STATE__STRUCT_H_
