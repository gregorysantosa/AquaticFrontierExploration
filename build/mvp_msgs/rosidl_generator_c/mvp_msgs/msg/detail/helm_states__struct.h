// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mvp_msgs:msg/HelmStates.idl
// generated code does not contain a copyright notice

#ifndef MVP_MSGS__MSG__DETAIL__HELM_STATES__STRUCT_H_
#define MVP_MSGS__MSG__DETAIL__HELM_STATES__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'states'
#include "mvp_msgs/msg/detail/helm_state__struct.h"

/// Struct defined in msg/HelmStates in the package mvp_msgs.
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
typedef struct mvp_msgs__msg__HelmStates
{
  mvp_msgs__msg__HelmState__Sequence states;
} mvp_msgs__msg__HelmStates;

// Struct for a sequence of mvp_msgs__msg__HelmStates.
typedef struct mvp_msgs__msg__HelmStates__Sequence
{
  mvp_msgs__msg__HelmStates * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mvp_msgs__msg__HelmStates__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MVP_MSGS__MSG__DETAIL__HELM_STATES__STRUCT_H_
