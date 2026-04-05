// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from roslaunch_manager_interfaces:srv/SetLaunch.idl
// generated code does not contain a copyright notice

#ifndef ROSLAUNCH_MANAGER_INTERFACES__SRV__DETAIL__SET_LAUNCH__FUNCTIONS_H_
#define ROSLAUNCH_MANAGER_INTERFACES__SRV__DETAIL__SET_LAUNCH__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "roslaunch_manager_interfaces/msg/rosidl_generator_c__visibility_control.h"

#include "roslaunch_manager_interfaces/srv/detail/set_launch__struct.h"

/// Initialize srv/SetLaunch message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * roslaunch_manager_interfaces__srv__SetLaunch_Request
 * )) before or use
 * roslaunch_manager_interfaces__srv__SetLaunch_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_roslaunch_manager_interfaces
bool
roslaunch_manager_interfaces__srv__SetLaunch_Request__init(roslaunch_manager_interfaces__srv__SetLaunch_Request * msg);

/// Finalize srv/SetLaunch message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_roslaunch_manager_interfaces
void
roslaunch_manager_interfaces__srv__SetLaunch_Request__fini(roslaunch_manager_interfaces__srv__SetLaunch_Request * msg);

/// Create srv/SetLaunch message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * roslaunch_manager_interfaces__srv__SetLaunch_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_roslaunch_manager_interfaces
roslaunch_manager_interfaces__srv__SetLaunch_Request *
roslaunch_manager_interfaces__srv__SetLaunch_Request__create();

/// Destroy srv/SetLaunch message.
/**
 * It calls
 * roslaunch_manager_interfaces__srv__SetLaunch_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_roslaunch_manager_interfaces
void
roslaunch_manager_interfaces__srv__SetLaunch_Request__destroy(roslaunch_manager_interfaces__srv__SetLaunch_Request * msg);

/// Check for srv/SetLaunch message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_roslaunch_manager_interfaces
bool
roslaunch_manager_interfaces__srv__SetLaunch_Request__are_equal(const roslaunch_manager_interfaces__srv__SetLaunch_Request * lhs, const roslaunch_manager_interfaces__srv__SetLaunch_Request * rhs);

/// Copy a srv/SetLaunch message.
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
ROSIDL_GENERATOR_C_PUBLIC_roslaunch_manager_interfaces
bool
roslaunch_manager_interfaces__srv__SetLaunch_Request__copy(
  const roslaunch_manager_interfaces__srv__SetLaunch_Request * input,
  roslaunch_manager_interfaces__srv__SetLaunch_Request * output);

/// Initialize array of srv/SetLaunch messages.
/**
 * It allocates the memory for the number of elements and calls
 * roslaunch_manager_interfaces__srv__SetLaunch_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_roslaunch_manager_interfaces
bool
roslaunch_manager_interfaces__srv__SetLaunch_Request__Sequence__init(roslaunch_manager_interfaces__srv__SetLaunch_Request__Sequence * array, size_t size);

/// Finalize array of srv/SetLaunch messages.
/**
 * It calls
 * roslaunch_manager_interfaces__srv__SetLaunch_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_roslaunch_manager_interfaces
void
roslaunch_manager_interfaces__srv__SetLaunch_Request__Sequence__fini(roslaunch_manager_interfaces__srv__SetLaunch_Request__Sequence * array);

/// Create array of srv/SetLaunch messages.
/**
 * It allocates the memory for the array and calls
 * roslaunch_manager_interfaces__srv__SetLaunch_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_roslaunch_manager_interfaces
roslaunch_manager_interfaces__srv__SetLaunch_Request__Sequence *
roslaunch_manager_interfaces__srv__SetLaunch_Request__Sequence__create(size_t size);

/// Destroy array of srv/SetLaunch messages.
/**
 * It calls
 * roslaunch_manager_interfaces__srv__SetLaunch_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_roslaunch_manager_interfaces
void
roslaunch_manager_interfaces__srv__SetLaunch_Request__Sequence__destroy(roslaunch_manager_interfaces__srv__SetLaunch_Request__Sequence * array);

/// Check for srv/SetLaunch message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_roslaunch_manager_interfaces
bool
roslaunch_manager_interfaces__srv__SetLaunch_Request__Sequence__are_equal(const roslaunch_manager_interfaces__srv__SetLaunch_Request__Sequence * lhs, const roslaunch_manager_interfaces__srv__SetLaunch_Request__Sequence * rhs);

/// Copy an array of srv/SetLaunch messages.
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
ROSIDL_GENERATOR_C_PUBLIC_roslaunch_manager_interfaces
bool
roslaunch_manager_interfaces__srv__SetLaunch_Request__Sequence__copy(
  const roslaunch_manager_interfaces__srv__SetLaunch_Request__Sequence * input,
  roslaunch_manager_interfaces__srv__SetLaunch_Request__Sequence * output);

/// Initialize srv/SetLaunch message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * roslaunch_manager_interfaces__srv__SetLaunch_Response
 * )) before or use
 * roslaunch_manager_interfaces__srv__SetLaunch_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_roslaunch_manager_interfaces
bool
roslaunch_manager_interfaces__srv__SetLaunch_Response__init(roslaunch_manager_interfaces__srv__SetLaunch_Response * msg);

/// Finalize srv/SetLaunch message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_roslaunch_manager_interfaces
void
roslaunch_manager_interfaces__srv__SetLaunch_Response__fini(roslaunch_manager_interfaces__srv__SetLaunch_Response * msg);

/// Create srv/SetLaunch message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * roslaunch_manager_interfaces__srv__SetLaunch_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_roslaunch_manager_interfaces
roslaunch_manager_interfaces__srv__SetLaunch_Response *
roslaunch_manager_interfaces__srv__SetLaunch_Response__create();

/// Destroy srv/SetLaunch message.
/**
 * It calls
 * roslaunch_manager_interfaces__srv__SetLaunch_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_roslaunch_manager_interfaces
void
roslaunch_manager_interfaces__srv__SetLaunch_Response__destroy(roslaunch_manager_interfaces__srv__SetLaunch_Response * msg);

/// Check for srv/SetLaunch message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_roslaunch_manager_interfaces
bool
roslaunch_manager_interfaces__srv__SetLaunch_Response__are_equal(const roslaunch_manager_interfaces__srv__SetLaunch_Response * lhs, const roslaunch_manager_interfaces__srv__SetLaunch_Response * rhs);

/// Copy a srv/SetLaunch message.
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
ROSIDL_GENERATOR_C_PUBLIC_roslaunch_manager_interfaces
bool
roslaunch_manager_interfaces__srv__SetLaunch_Response__copy(
  const roslaunch_manager_interfaces__srv__SetLaunch_Response * input,
  roslaunch_manager_interfaces__srv__SetLaunch_Response * output);

/// Initialize array of srv/SetLaunch messages.
/**
 * It allocates the memory for the number of elements and calls
 * roslaunch_manager_interfaces__srv__SetLaunch_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_roslaunch_manager_interfaces
bool
roslaunch_manager_interfaces__srv__SetLaunch_Response__Sequence__init(roslaunch_manager_interfaces__srv__SetLaunch_Response__Sequence * array, size_t size);

/// Finalize array of srv/SetLaunch messages.
/**
 * It calls
 * roslaunch_manager_interfaces__srv__SetLaunch_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_roslaunch_manager_interfaces
void
roslaunch_manager_interfaces__srv__SetLaunch_Response__Sequence__fini(roslaunch_manager_interfaces__srv__SetLaunch_Response__Sequence * array);

/// Create array of srv/SetLaunch messages.
/**
 * It allocates the memory for the array and calls
 * roslaunch_manager_interfaces__srv__SetLaunch_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_roslaunch_manager_interfaces
roslaunch_manager_interfaces__srv__SetLaunch_Response__Sequence *
roslaunch_manager_interfaces__srv__SetLaunch_Response__Sequence__create(size_t size);

/// Destroy array of srv/SetLaunch messages.
/**
 * It calls
 * roslaunch_manager_interfaces__srv__SetLaunch_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_roslaunch_manager_interfaces
void
roslaunch_manager_interfaces__srv__SetLaunch_Response__Sequence__destroy(roslaunch_manager_interfaces__srv__SetLaunch_Response__Sequence * array);

/// Check for srv/SetLaunch message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_roslaunch_manager_interfaces
bool
roslaunch_manager_interfaces__srv__SetLaunch_Response__Sequence__are_equal(const roslaunch_manager_interfaces__srv__SetLaunch_Response__Sequence * lhs, const roslaunch_manager_interfaces__srv__SetLaunch_Response__Sequence * rhs);

/// Copy an array of srv/SetLaunch messages.
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
ROSIDL_GENERATOR_C_PUBLIC_roslaunch_manager_interfaces
bool
roslaunch_manager_interfaces__srv__SetLaunch_Response__Sequence__copy(
  const roslaunch_manager_interfaces__srv__SetLaunch_Response__Sequence * input,
  roslaunch_manager_interfaces__srv__SetLaunch_Response__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // ROSLAUNCH_MANAGER_INTERFACES__SRV__DETAIL__SET_LAUNCH__FUNCTIONS_H_
