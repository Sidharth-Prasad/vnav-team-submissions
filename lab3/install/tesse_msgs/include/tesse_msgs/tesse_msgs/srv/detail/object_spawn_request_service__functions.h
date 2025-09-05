// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from tesse_msgs:srv/ObjectSpawnRequestService.idl
// generated code does not contain a copyright notice

#ifndef TESSE_MSGS__SRV__DETAIL__OBJECT_SPAWN_REQUEST_SERVICE__FUNCTIONS_H_
#define TESSE_MSGS__SRV__DETAIL__OBJECT_SPAWN_REQUEST_SERVICE__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "tesse_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "tesse_msgs/srv/detail/object_spawn_request_service__struct.h"

/// Initialize srv/ObjectSpawnRequestService message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * tesse_msgs__srv__ObjectSpawnRequestService_Request
 * )) before or use
 * tesse_msgs__srv__ObjectSpawnRequestService_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_tesse_msgs
bool
tesse_msgs__srv__ObjectSpawnRequestService_Request__init(tesse_msgs__srv__ObjectSpawnRequestService_Request * msg);

/// Finalize srv/ObjectSpawnRequestService message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tesse_msgs
void
tesse_msgs__srv__ObjectSpawnRequestService_Request__fini(tesse_msgs__srv__ObjectSpawnRequestService_Request * msg);

/// Create srv/ObjectSpawnRequestService message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * tesse_msgs__srv__ObjectSpawnRequestService_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_tesse_msgs
tesse_msgs__srv__ObjectSpawnRequestService_Request *
tesse_msgs__srv__ObjectSpawnRequestService_Request__create();

/// Destroy srv/ObjectSpawnRequestService message.
/**
 * It calls
 * tesse_msgs__srv__ObjectSpawnRequestService_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tesse_msgs
void
tesse_msgs__srv__ObjectSpawnRequestService_Request__destroy(tesse_msgs__srv__ObjectSpawnRequestService_Request * msg);

/// Check for srv/ObjectSpawnRequestService message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_tesse_msgs
bool
tesse_msgs__srv__ObjectSpawnRequestService_Request__are_equal(const tesse_msgs__srv__ObjectSpawnRequestService_Request * lhs, const tesse_msgs__srv__ObjectSpawnRequestService_Request * rhs);

/// Copy a srv/ObjectSpawnRequestService message.
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
ROSIDL_GENERATOR_C_PUBLIC_tesse_msgs
bool
tesse_msgs__srv__ObjectSpawnRequestService_Request__copy(
  const tesse_msgs__srv__ObjectSpawnRequestService_Request * input,
  tesse_msgs__srv__ObjectSpawnRequestService_Request * output);

/// Initialize array of srv/ObjectSpawnRequestService messages.
/**
 * It allocates the memory for the number of elements and calls
 * tesse_msgs__srv__ObjectSpawnRequestService_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_tesse_msgs
bool
tesse_msgs__srv__ObjectSpawnRequestService_Request__Sequence__init(tesse_msgs__srv__ObjectSpawnRequestService_Request__Sequence * array, size_t size);

/// Finalize array of srv/ObjectSpawnRequestService messages.
/**
 * It calls
 * tesse_msgs__srv__ObjectSpawnRequestService_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tesse_msgs
void
tesse_msgs__srv__ObjectSpawnRequestService_Request__Sequence__fini(tesse_msgs__srv__ObjectSpawnRequestService_Request__Sequence * array);

/// Create array of srv/ObjectSpawnRequestService messages.
/**
 * It allocates the memory for the array and calls
 * tesse_msgs__srv__ObjectSpawnRequestService_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_tesse_msgs
tesse_msgs__srv__ObjectSpawnRequestService_Request__Sequence *
tesse_msgs__srv__ObjectSpawnRequestService_Request__Sequence__create(size_t size);

/// Destroy array of srv/ObjectSpawnRequestService messages.
/**
 * It calls
 * tesse_msgs__srv__ObjectSpawnRequestService_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tesse_msgs
void
tesse_msgs__srv__ObjectSpawnRequestService_Request__Sequence__destroy(tesse_msgs__srv__ObjectSpawnRequestService_Request__Sequence * array);

/// Check for srv/ObjectSpawnRequestService message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_tesse_msgs
bool
tesse_msgs__srv__ObjectSpawnRequestService_Request__Sequence__are_equal(const tesse_msgs__srv__ObjectSpawnRequestService_Request__Sequence * lhs, const tesse_msgs__srv__ObjectSpawnRequestService_Request__Sequence * rhs);

/// Copy an array of srv/ObjectSpawnRequestService messages.
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
ROSIDL_GENERATOR_C_PUBLIC_tesse_msgs
bool
tesse_msgs__srv__ObjectSpawnRequestService_Request__Sequence__copy(
  const tesse_msgs__srv__ObjectSpawnRequestService_Request__Sequence * input,
  tesse_msgs__srv__ObjectSpawnRequestService_Request__Sequence * output);

/// Initialize srv/ObjectSpawnRequestService message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * tesse_msgs__srv__ObjectSpawnRequestService_Response
 * )) before or use
 * tesse_msgs__srv__ObjectSpawnRequestService_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_tesse_msgs
bool
tesse_msgs__srv__ObjectSpawnRequestService_Response__init(tesse_msgs__srv__ObjectSpawnRequestService_Response * msg);

/// Finalize srv/ObjectSpawnRequestService message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tesse_msgs
void
tesse_msgs__srv__ObjectSpawnRequestService_Response__fini(tesse_msgs__srv__ObjectSpawnRequestService_Response * msg);

/// Create srv/ObjectSpawnRequestService message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * tesse_msgs__srv__ObjectSpawnRequestService_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_tesse_msgs
tesse_msgs__srv__ObjectSpawnRequestService_Response *
tesse_msgs__srv__ObjectSpawnRequestService_Response__create();

/// Destroy srv/ObjectSpawnRequestService message.
/**
 * It calls
 * tesse_msgs__srv__ObjectSpawnRequestService_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tesse_msgs
void
tesse_msgs__srv__ObjectSpawnRequestService_Response__destroy(tesse_msgs__srv__ObjectSpawnRequestService_Response * msg);

/// Check for srv/ObjectSpawnRequestService message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_tesse_msgs
bool
tesse_msgs__srv__ObjectSpawnRequestService_Response__are_equal(const tesse_msgs__srv__ObjectSpawnRequestService_Response * lhs, const tesse_msgs__srv__ObjectSpawnRequestService_Response * rhs);

/// Copy a srv/ObjectSpawnRequestService message.
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
ROSIDL_GENERATOR_C_PUBLIC_tesse_msgs
bool
tesse_msgs__srv__ObjectSpawnRequestService_Response__copy(
  const tesse_msgs__srv__ObjectSpawnRequestService_Response * input,
  tesse_msgs__srv__ObjectSpawnRequestService_Response * output);

/// Initialize array of srv/ObjectSpawnRequestService messages.
/**
 * It allocates the memory for the number of elements and calls
 * tesse_msgs__srv__ObjectSpawnRequestService_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_tesse_msgs
bool
tesse_msgs__srv__ObjectSpawnRequestService_Response__Sequence__init(tesse_msgs__srv__ObjectSpawnRequestService_Response__Sequence * array, size_t size);

/// Finalize array of srv/ObjectSpawnRequestService messages.
/**
 * It calls
 * tesse_msgs__srv__ObjectSpawnRequestService_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tesse_msgs
void
tesse_msgs__srv__ObjectSpawnRequestService_Response__Sequence__fini(tesse_msgs__srv__ObjectSpawnRequestService_Response__Sequence * array);

/// Create array of srv/ObjectSpawnRequestService messages.
/**
 * It allocates the memory for the array and calls
 * tesse_msgs__srv__ObjectSpawnRequestService_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_tesse_msgs
tesse_msgs__srv__ObjectSpawnRequestService_Response__Sequence *
tesse_msgs__srv__ObjectSpawnRequestService_Response__Sequence__create(size_t size);

/// Destroy array of srv/ObjectSpawnRequestService messages.
/**
 * It calls
 * tesse_msgs__srv__ObjectSpawnRequestService_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tesse_msgs
void
tesse_msgs__srv__ObjectSpawnRequestService_Response__Sequence__destroy(tesse_msgs__srv__ObjectSpawnRequestService_Response__Sequence * array);

/// Check for srv/ObjectSpawnRequestService message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_tesse_msgs
bool
tesse_msgs__srv__ObjectSpawnRequestService_Response__Sequence__are_equal(const tesse_msgs__srv__ObjectSpawnRequestService_Response__Sequence * lhs, const tesse_msgs__srv__ObjectSpawnRequestService_Response__Sequence * rhs);

/// Copy an array of srv/ObjectSpawnRequestService messages.
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
ROSIDL_GENERATOR_C_PUBLIC_tesse_msgs
bool
tesse_msgs__srv__ObjectSpawnRequestService_Response__Sequence__copy(
  const tesse_msgs__srv__ObjectSpawnRequestService_Response__Sequence * input,
  tesse_msgs__srv__ObjectSpawnRequestService_Response__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // TESSE_MSGS__SRV__DETAIL__OBJECT_SPAWN_REQUEST_SERVICE__FUNCTIONS_H_
