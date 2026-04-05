// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mvp_msgs:msg/ControlMode.idl
// generated code does not contain a copyright notice

#ifndef MVP_MSGS__MSG__DETAIL__CONTROL_MODE__STRUCT_H_
#define MVP_MSGS__MSG__DETAIL__CONTROL_MODE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'DOF_X'.
enum
{
  mvp_msgs__msg__ControlMode__DOF_X = 0l
};

/// Constant 'DOF_Y'.
enum
{
  mvp_msgs__msg__ControlMode__DOF_Y = 1l
};

/// Constant 'DOF_Z'.
enum
{
  mvp_msgs__msg__ControlMode__DOF_Z = 2l
};

/// Constant 'DOF_ROLL'.
enum
{
  mvp_msgs__msg__ControlMode__DOF_ROLL = 3l
};

/// Constant 'DOF_PITCH'.
enum
{
  mvp_msgs__msg__ControlMode__DOF_PITCH = 4l
};

/// Constant 'DOF_YAW'.
enum
{
  mvp_msgs__msg__ControlMode__DOF_YAW = 5l
};

/// Constant 'DOF_U'.
enum
{
  mvp_msgs__msg__ControlMode__DOF_U = 6l
};

/// Constant 'DOF_V'.
enum
{
  mvp_msgs__msg__ControlMode__DOF_V = 7l
};

/// Constant 'DOF_W'.
enum
{
  mvp_msgs__msg__ControlMode__DOF_W = 8l
};

/// Constant 'DOF_P'.
enum
{
  mvp_msgs__msg__ControlMode__DOF_P = 9l
};

/// Constant 'DOF_Q'.
enum
{
  mvp_msgs__msg__ControlMode__DOF_Q = 10l
};

/// Constant 'DOF_R'.
enum
{
  mvp_msgs__msg__ControlMode__DOF_R = 11l
};

// Include directives for member types
// Member 'name'
#include "rosidl_runtime_c/string.h"
// Member 'dofs'
#include "rosidl_runtime_c/primitives_sequence.h"
// Member 'pid_x'
// Member 'pid_y'
// Member 'pid_z'
// Member 'pid_roll'
// Member 'pid_pitch'
// Member 'pid_yaw'
// Member 'pid_u'
// Member 'pid_v'
// Member 'pid_w'
// Member 'pid_p'
// Member 'pid_q'
// Member 'pid_r'
#include "mvp_msgs/msg/detail/pid_gains__struct.h"

/// Struct defined in msg/ControlMode in the package mvp_msgs.
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
typedef struct mvp_msgs__msg__ControlMode
{
  rosidl_runtime_c__String name;
  rosidl_runtime_c__int32__Sequence dofs;
  mvp_msgs__msg__PidGains pid_x;
  mvp_msgs__msg__PidGains pid_y;
  mvp_msgs__msg__PidGains pid_z;
  mvp_msgs__msg__PidGains pid_roll;
  mvp_msgs__msg__PidGains pid_pitch;
  mvp_msgs__msg__PidGains pid_yaw;
  mvp_msgs__msg__PidGains pid_u;
  mvp_msgs__msg__PidGains pid_v;
  mvp_msgs__msg__PidGains pid_w;
  mvp_msgs__msg__PidGains pid_p;
  mvp_msgs__msg__PidGains pid_q;
  mvp_msgs__msg__PidGains pid_r;
} mvp_msgs__msg__ControlMode;

// Struct for a sequence of mvp_msgs__msg__ControlMode.
typedef struct mvp_msgs__msg__ControlMode__Sequence
{
  mvp_msgs__msg__ControlMode * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mvp_msgs__msg__ControlMode__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MVP_MSGS__MSG__DETAIL__CONTROL_MODE__STRUCT_H_
