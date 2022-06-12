// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from msg_manage:msg/Motor2.idl
// generated code does not contain a copyright notice

#ifndef MSG_MANAGE__MSG__DETAIL__MOTOR2__FUNCTIONS_H_
#define MSG_MANAGE__MSG__DETAIL__MOTOR2__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "msg_manage/msg/rosidl_generator_c__visibility_control.h"

#include "msg_manage/msg/detail/motor2__struct.h"

/// Initialize msg/Motor2 message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * msg_manage__msg__Motor2
 * )) before or use
 * msg_manage__msg__Motor2__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_msg_manage
bool
msg_manage__msg__Motor2__init(msg_manage__msg__Motor2 * msg);

/// Finalize msg/Motor2 message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_msg_manage
void
msg_manage__msg__Motor2__fini(msg_manage__msg__Motor2 * msg);

/// Create msg/Motor2 message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * msg_manage__msg__Motor2__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_msg_manage
msg_manage__msg__Motor2 *
msg_manage__msg__Motor2__create();

/// Destroy msg/Motor2 message.
/**
 * It calls
 * msg_manage__msg__Motor2__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_msg_manage
void
msg_manage__msg__Motor2__destroy(msg_manage__msg__Motor2 * msg);


/// Initialize array of msg/Motor2 messages.
/**
 * It allocates the memory for the number of elements and calls
 * msg_manage__msg__Motor2__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_msg_manage
bool
msg_manage__msg__Motor2__Sequence__init(msg_manage__msg__Motor2__Sequence * array, size_t size);

/// Finalize array of msg/Motor2 messages.
/**
 * It calls
 * msg_manage__msg__Motor2__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_msg_manage
void
msg_manage__msg__Motor2__Sequence__fini(msg_manage__msg__Motor2__Sequence * array);

/// Create array of msg/Motor2 messages.
/**
 * It allocates the memory for the array and calls
 * msg_manage__msg__Motor2__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_msg_manage
msg_manage__msg__Motor2__Sequence *
msg_manage__msg__Motor2__Sequence__create(size_t size);

/// Destroy array of msg/Motor2 messages.
/**
 * It calls
 * msg_manage__msg__Motor2__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_msg_manage
void
msg_manage__msg__Motor2__Sequence__destroy(msg_manage__msg__Motor2__Sequence * array);

#ifdef __cplusplus
}
#endif

#endif  // MSG_MANAGE__MSG__DETAIL__MOTOR2__FUNCTIONS_H_
