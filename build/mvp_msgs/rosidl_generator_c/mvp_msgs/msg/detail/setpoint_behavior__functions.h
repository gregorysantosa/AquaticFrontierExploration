// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from mvp_msgs:msg/SetpointBehavior.idl
// generated code does not contain a copyright notice

#ifndef MVP_MSGS__MSG__DETAIL__SETPOINT_BEHAVIOR__FUNCTIONS_H_
#define MVP_MSGS__MSG__DETAIL__SETPOINT_BEHAVIOR__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "mvp_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "mvp_msgs/msg/detail/setpoint_behavior__struct.h"

/// Initialize msg/SetpointBehavior message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * mvp_msgs__msg__SetpointBehavior
 * )) before or use
 * mvp_msgs__msg__SetpointBehavior__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_mvp_msgs
bool
mvp_msgs__msg__SetpointBehavior__init(mvp_msgs__msg__SetpointBehavior * msg);

/// Finalize msg/SetpointBehavior message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_mvp_msgs
void
mvp_msgs__msg__SetpointBehavior__fini(mvp_msgs__msg__SetpointBehavior * msg);

/// Create msg/SetpointBehavior message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * mvp_msgs__msg__SetpointBehavior__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_mvp_msgs
mvp_msgs__msg__SetpointBehavior *
mvp_msgs__msg__SetpointBehavior__create();

/// Destroy msg/SetpointBehavior message.
/**
 * It calls
 * mvp_msgs__msg__SetpointBehavior__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_mvp_msgs
void
mvp_msgs__msg__SetpointBehavior__destroy(mvp_msgs__msg__SetpointBehavior * msg);

/// Check for msg/SetpointBehavior message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_mvp_msgs
bool
mvp_msgs__msg__SetpointBehavior__are_equal(const mvp_msgs__msg__SetpointBehavior * lhs, const mvp_msgs__msg__SetpointBehavior * rhs);

/// Copy a msg/SetpointBehavior message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_mvp_msgs
bool
mvp_msgs__msg__SetpointBehavior__copy(
  const mvp_msgs__msg__SetpointBehavior * input,
  mvp_msgs__msg__SetpointBehavior * output);

/// Initialize array of msg/SetpointBehavior messages.
/**
 * It allocates the memory for the number of elements and calls
 * mvp_msgs__msg__SetpointBehavior__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_mvp_msgs
bool
mvp_msgs__msg__SetpointBehavior__Sequence__init(mvp_msgs__msg__SetpointBehavior__Sequence * array, size_t size);

/// Finalize array of msg/SetpointBehavior messages.
/**
 * It calls
 * mvp_msgs__msg__SetpointBehavior__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_mvp_msgs
void
mvp_msgs__msg__SetpointBehavior__Sequence__fini(mvp_msgs__msg__SetpointBehavior__Sequence * array);

/// Create array of msg/SetpointBehavior messages.
/**
 * It allocates the memory for the array and calls
 * mvp_msgs__msg__SetpointBehavior__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_mvp_msgs
mvp_msgs__msg__SetpointBehavior__Sequence *
mvp_msgs__msg__SetpointBehavior__Sequence__create(size_t size);

/// Destroy array of msg/SetpointBehavior messages.
/**
 * It calls
 * mvp_msgs__msg__SetpointBehavior__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_mvp_msgs
void
mvp_msgs__msg__SetpointBehavior__Sequence__destroy(mvp_msgs__msg__SetpointBehavior__Sequence * array);

/// Check for msg/SetpointBehavior message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_mvp_msgs
bool
mvp_msgs__msg__SetpointBehavior__Sequence__are_equal(const mvp_msgs__msg__SetpointBehavior__Sequence * lhs, const mvp_msgs__msg__SetpointBehavior__Sequence * rhs);

/// Copy an array of msg/SetpointBehavior messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_mvp_msgs
bool
mvp_msgs__msg__SetpointBehavior__Sequence__copy(
  const mvp_msgs__msg__SetpointBehavior__Sequence * input,
  mvp_msgs__msg__SetpointBehavior__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // MVP_MSGS__MSG__DETAIL__SETPOINT_BEHAVIOR__FUNCTIONS_H_
