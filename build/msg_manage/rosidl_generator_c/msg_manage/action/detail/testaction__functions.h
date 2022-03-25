// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from msg_manage:action/Testaction.idl
// generated code does not contain a copyright notice

#ifndef MSG_MANAGE__ACTION__DETAIL__TESTACTION__FUNCTIONS_H_
#define MSG_MANAGE__ACTION__DETAIL__TESTACTION__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "msg_manage/msg/rosidl_generator_c__visibility_control.h"

#include "msg_manage/action/detail/testaction__struct.h"

/// Initialize action/Testaction message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * msg_manage__action__Testaction_Goal
 * )) before or use
 * msg_manage__action__Testaction_Goal__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_msg_manage
bool
msg_manage__action__Testaction_Goal__init(msg_manage__action__Testaction_Goal * msg);

/// Finalize action/Testaction message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_msg_manage
void
msg_manage__action__Testaction_Goal__fini(msg_manage__action__Testaction_Goal * msg);

/// Create action/Testaction message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * msg_manage__action__Testaction_Goal__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_msg_manage
msg_manage__action__Testaction_Goal *
msg_manage__action__Testaction_Goal__create();

/// Destroy action/Testaction message.
/**
 * It calls
 * msg_manage__action__Testaction_Goal__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_msg_manage
void
msg_manage__action__Testaction_Goal__destroy(msg_manage__action__Testaction_Goal * msg);


/// Initialize array of action/Testaction messages.
/**
 * It allocates the memory for the number of elements and calls
 * msg_manage__action__Testaction_Goal__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_msg_manage
bool
msg_manage__action__Testaction_Goal__Sequence__init(msg_manage__action__Testaction_Goal__Sequence * array, size_t size);

/// Finalize array of action/Testaction messages.
/**
 * It calls
 * msg_manage__action__Testaction_Goal__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_msg_manage
void
msg_manage__action__Testaction_Goal__Sequence__fini(msg_manage__action__Testaction_Goal__Sequence * array);

/// Create array of action/Testaction messages.
/**
 * It allocates the memory for the array and calls
 * msg_manage__action__Testaction_Goal__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_msg_manage
msg_manage__action__Testaction_Goal__Sequence *
msg_manage__action__Testaction_Goal__Sequence__create(size_t size);

/// Destroy array of action/Testaction messages.
/**
 * It calls
 * msg_manage__action__Testaction_Goal__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_msg_manage
void
msg_manage__action__Testaction_Goal__Sequence__destroy(msg_manage__action__Testaction_Goal__Sequence * array);

/// Initialize action/Testaction message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * msg_manage__action__Testaction_Result
 * )) before or use
 * msg_manage__action__Testaction_Result__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_msg_manage
bool
msg_manage__action__Testaction_Result__init(msg_manage__action__Testaction_Result * msg);

/// Finalize action/Testaction message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_msg_manage
void
msg_manage__action__Testaction_Result__fini(msg_manage__action__Testaction_Result * msg);

/// Create action/Testaction message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * msg_manage__action__Testaction_Result__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_msg_manage
msg_manage__action__Testaction_Result *
msg_manage__action__Testaction_Result__create();

/// Destroy action/Testaction message.
/**
 * It calls
 * msg_manage__action__Testaction_Result__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_msg_manage
void
msg_manage__action__Testaction_Result__destroy(msg_manage__action__Testaction_Result * msg);


/// Initialize array of action/Testaction messages.
/**
 * It allocates the memory for the number of elements and calls
 * msg_manage__action__Testaction_Result__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_msg_manage
bool
msg_manage__action__Testaction_Result__Sequence__init(msg_manage__action__Testaction_Result__Sequence * array, size_t size);

/// Finalize array of action/Testaction messages.
/**
 * It calls
 * msg_manage__action__Testaction_Result__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_msg_manage
void
msg_manage__action__Testaction_Result__Sequence__fini(msg_manage__action__Testaction_Result__Sequence * array);

/// Create array of action/Testaction messages.
/**
 * It allocates the memory for the array and calls
 * msg_manage__action__Testaction_Result__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_msg_manage
msg_manage__action__Testaction_Result__Sequence *
msg_manage__action__Testaction_Result__Sequence__create(size_t size);

/// Destroy array of action/Testaction messages.
/**
 * It calls
 * msg_manage__action__Testaction_Result__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_msg_manage
void
msg_manage__action__Testaction_Result__Sequence__destroy(msg_manage__action__Testaction_Result__Sequence * array);

/// Initialize action/Testaction message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * msg_manage__action__Testaction_Feedback
 * )) before or use
 * msg_manage__action__Testaction_Feedback__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_msg_manage
bool
msg_manage__action__Testaction_Feedback__init(msg_manage__action__Testaction_Feedback * msg);

/// Finalize action/Testaction message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_msg_manage
void
msg_manage__action__Testaction_Feedback__fini(msg_manage__action__Testaction_Feedback * msg);

/// Create action/Testaction message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * msg_manage__action__Testaction_Feedback__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_msg_manage
msg_manage__action__Testaction_Feedback *
msg_manage__action__Testaction_Feedback__create();

/// Destroy action/Testaction message.
/**
 * It calls
 * msg_manage__action__Testaction_Feedback__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_msg_manage
void
msg_manage__action__Testaction_Feedback__destroy(msg_manage__action__Testaction_Feedback * msg);


/// Initialize array of action/Testaction messages.
/**
 * It allocates the memory for the number of elements and calls
 * msg_manage__action__Testaction_Feedback__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_msg_manage
bool
msg_manage__action__Testaction_Feedback__Sequence__init(msg_manage__action__Testaction_Feedback__Sequence * array, size_t size);

/// Finalize array of action/Testaction messages.
/**
 * It calls
 * msg_manage__action__Testaction_Feedback__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_msg_manage
void
msg_manage__action__Testaction_Feedback__Sequence__fini(msg_manage__action__Testaction_Feedback__Sequence * array);

/// Create array of action/Testaction messages.
/**
 * It allocates the memory for the array and calls
 * msg_manage__action__Testaction_Feedback__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_msg_manage
msg_manage__action__Testaction_Feedback__Sequence *
msg_manage__action__Testaction_Feedback__Sequence__create(size_t size);

/// Destroy array of action/Testaction messages.
/**
 * It calls
 * msg_manage__action__Testaction_Feedback__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_msg_manage
void
msg_manage__action__Testaction_Feedback__Sequence__destroy(msg_manage__action__Testaction_Feedback__Sequence * array);

/// Initialize action/Testaction message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * msg_manage__action__Testaction_SendGoal_Request
 * )) before or use
 * msg_manage__action__Testaction_SendGoal_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_msg_manage
bool
msg_manage__action__Testaction_SendGoal_Request__init(msg_manage__action__Testaction_SendGoal_Request * msg);

/// Finalize action/Testaction message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_msg_manage
void
msg_manage__action__Testaction_SendGoal_Request__fini(msg_manage__action__Testaction_SendGoal_Request * msg);

/// Create action/Testaction message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * msg_manage__action__Testaction_SendGoal_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_msg_manage
msg_manage__action__Testaction_SendGoal_Request *
msg_manage__action__Testaction_SendGoal_Request__create();

/// Destroy action/Testaction message.
/**
 * It calls
 * msg_manage__action__Testaction_SendGoal_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_msg_manage
void
msg_manage__action__Testaction_SendGoal_Request__destroy(msg_manage__action__Testaction_SendGoal_Request * msg);


/// Initialize array of action/Testaction messages.
/**
 * It allocates the memory for the number of elements and calls
 * msg_manage__action__Testaction_SendGoal_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_msg_manage
bool
msg_manage__action__Testaction_SendGoal_Request__Sequence__init(msg_manage__action__Testaction_SendGoal_Request__Sequence * array, size_t size);

/// Finalize array of action/Testaction messages.
/**
 * It calls
 * msg_manage__action__Testaction_SendGoal_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_msg_manage
void
msg_manage__action__Testaction_SendGoal_Request__Sequence__fini(msg_manage__action__Testaction_SendGoal_Request__Sequence * array);

/// Create array of action/Testaction messages.
/**
 * It allocates the memory for the array and calls
 * msg_manage__action__Testaction_SendGoal_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_msg_manage
msg_manage__action__Testaction_SendGoal_Request__Sequence *
msg_manage__action__Testaction_SendGoal_Request__Sequence__create(size_t size);

/// Destroy array of action/Testaction messages.
/**
 * It calls
 * msg_manage__action__Testaction_SendGoal_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_msg_manage
void
msg_manage__action__Testaction_SendGoal_Request__Sequence__destroy(msg_manage__action__Testaction_SendGoal_Request__Sequence * array);

/// Initialize action/Testaction message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * msg_manage__action__Testaction_SendGoal_Response
 * )) before or use
 * msg_manage__action__Testaction_SendGoal_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_msg_manage
bool
msg_manage__action__Testaction_SendGoal_Response__init(msg_manage__action__Testaction_SendGoal_Response * msg);

/// Finalize action/Testaction message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_msg_manage
void
msg_manage__action__Testaction_SendGoal_Response__fini(msg_manage__action__Testaction_SendGoal_Response * msg);

/// Create action/Testaction message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * msg_manage__action__Testaction_SendGoal_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_msg_manage
msg_manage__action__Testaction_SendGoal_Response *
msg_manage__action__Testaction_SendGoal_Response__create();

/// Destroy action/Testaction message.
/**
 * It calls
 * msg_manage__action__Testaction_SendGoal_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_msg_manage
void
msg_manage__action__Testaction_SendGoal_Response__destroy(msg_manage__action__Testaction_SendGoal_Response * msg);


/// Initialize array of action/Testaction messages.
/**
 * It allocates the memory for the number of elements and calls
 * msg_manage__action__Testaction_SendGoal_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_msg_manage
bool
msg_manage__action__Testaction_SendGoal_Response__Sequence__init(msg_manage__action__Testaction_SendGoal_Response__Sequence * array, size_t size);

/// Finalize array of action/Testaction messages.
/**
 * It calls
 * msg_manage__action__Testaction_SendGoal_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_msg_manage
void
msg_manage__action__Testaction_SendGoal_Response__Sequence__fini(msg_manage__action__Testaction_SendGoal_Response__Sequence * array);

/// Create array of action/Testaction messages.
/**
 * It allocates the memory for the array and calls
 * msg_manage__action__Testaction_SendGoal_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_msg_manage
msg_manage__action__Testaction_SendGoal_Response__Sequence *
msg_manage__action__Testaction_SendGoal_Response__Sequence__create(size_t size);

/// Destroy array of action/Testaction messages.
/**
 * It calls
 * msg_manage__action__Testaction_SendGoal_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_msg_manage
void
msg_manage__action__Testaction_SendGoal_Response__Sequence__destroy(msg_manage__action__Testaction_SendGoal_Response__Sequence * array);

/// Initialize action/Testaction message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * msg_manage__action__Testaction_GetResult_Request
 * )) before or use
 * msg_manage__action__Testaction_GetResult_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_msg_manage
bool
msg_manage__action__Testaction_GetResult_Request__init(msg_manage__action__Testaction_GetResult_Request * msg);

/// Finalize action/Testaction message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_msg_manage
void
msg_manage__action__Testaction_GetResult_Request__fini(msg_manage__action__Testaction_GetResult_Request * msg);

/// Create action/Testaction message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * msg_manage__action__Testaction_GetResult_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_msg_manage
msg_manage__action__Testaction_GetResult_Request *
msg_manage__action__Testaction_GetResult_Request__create();

/// Destroy action/Testaction message.
/**
 * It calls
 * msg_manage__action__Testaction_GetResult_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_msg_manage
void
msg_manage__action__Testaction_GetResult_Request__destroy(msg_manage__action__Testaction_GetResult_Request * msg);


/// Initialize array of action/Testaction messages.
/**
 * It allocates the memory for the number of elements and calls
 * msg_manage__action__Testaction_GetResult_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_msg_manage
bool
msg_manage__action__Testaction_GetResult_Request__Sequence__init(msg_manage__action__Testaction_GetResult_Request__Sequence * array, size_t size);

/// Finalize array of action/Testaction messages.
/**
 * It calls
 * msg_manage__action__Testaction_GetResult_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_msg_manage
void
msg_manage__action__Testaction_GetResult_Request__Sequence__fini(msg_manage__action__Testaction_GetResult_Request__Sequence * array);

/// Create array of action/Testaction messages.
/**
 * It allocates the memory for the array and calls
 * msg_manage__action__Testaction_GetResult_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_msg_manage
msg_manage__action__Testaction_GetResult_Request__Sequence *
msg_manage__action__Testaction_GetResult_Request__Sequence__create(size_t size);

/// Destroy array of action/Testaction messages.
/**
 * It calls
 * msg_manage__action__Testaction_GetResult_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_msg_manage
void
msg_manage__action__Testaction_GetResult_Request__Sequence__destroy(msg_manage__action__Testaction_GetResult_Request__Sequence * array);

/// Initialize action/Testaction message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * msg_manage__action__Testaction_GetResult_Response
 * )) before or use
 * msg_manage__action__Testaction_GetResult_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_msg_manage
bool
msg_manage__action__Testaction_GetResult_Response__init(msg_manage__action__Testaction_GetResult_Response * msg);

/// Finalize action/Testaction message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_msg_manage
void
msg_manage__action__Testaction_GetResult_Response__fini(msg_manage__action__Testaction_GetResult_Response * msg);

/// Create action/Testaction message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * msg_manage__action__Testaction_GetResult_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_msg_manage
msg_manage__action__Testaction_GetResult_Response *
msg_manage__action__Testaction_GetResult_Response__create();

/// Destroy action/Testaction message.
/**
 * It calls
 * msg_manage__action__Testaction_GetResult_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_msg_manage
void
msg_manage__action__Testaction_GetResult_Response__destroy(msg_manage__action__Testaction_GetResult_Response * msg);


/// Initialize array of action/Testaction messages.
/**
 * It allocates the memory for the number of elements and calls
 * msg_manage__action__Testaction_GetResult_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_msg_manage
bool
msg_manage__action__Testaction_GetResult_Response__Sequence__init(msg_manage__action__Testaction_GetResult_Response__Sequence * array, size_t size);

/// Finalize array of action/Testaction messages.
/**
 * It calls
 * msg_manage__action__Testaction_GetResult_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_msg_manage
void
msg_manage__action__Testaction_GetResult_Response__Sequence__fini(msg_manage__action__Testaction_GetResult_Response__Sequence * array);

/// Create array of action/Testaction messages.
/**
 * It allocates the memory for the array and calls
 * msg_manage__action__Testaction_GetResult_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_msg_manage
msg_manage__action__Testaction_GetResult_Response__Sequence *
msg_manage__action__Testaction_GetResult_Response__Sequence__create(size_t size);

/// Destroy array of action/Testaction messages.
/**
 * It calls
 * msg_manage__action__Testaction_GetResult_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_msg_manage
void
msg_manage__action__Testaction_GetResult_Response__Sequence__destroy(msg_manage__action__Testaction_GetResult_Response__Sequence * array);

/// Initialize action/Testaction message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * msg_manage__action__Testaction_FeedbackMessage
 * )) before or use
 * msg_manage__action__Testaction_FeedbackMessage__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_msg_manage
bool
msg_manage__action__Testaction_FeedbackMessage__init(msg_manage__action__Testaction_FeedbackMessage * msg);

/// Finalize action/Testaction message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_msg_manage
void
msg_manage__action__Testaction_FeedbackMessage__fini(msg_manage__action__Testaction_FeedbackMessage * msg);

/// Create action/Testaction message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * msg_manage__action__Testaction_FeedbackMessage__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_msg_manage
msg_manage__action__Testaction_FeedbackMessage *
msg_manage__action__Testaction_FeedbackMessage__create();

/// Destroy action/Testaction message.
/**
 * It calls
 * msg_manage__action__Testaction_FeedbackMessage__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_msg_manage
void
msg_manage__action__Testaction_FeedbackMessage__destroy(msg_manage__action__Testaction_FeedbackMessage * msg);


/// Initialize array of action/Testaction messages.
/**
 * It allocates the memory for the number of elements and calls
 * msg_manage__action__Testaction_FeedbackMessage__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_msg_manage
bool
msg_manage__action__Testaction_FeedbackMessage__Sequence__init(msg_manage__action__Testaction_FeedbackMessage__Sequence * array, size_t size);

/// Finalize array of action/Testaction messages.
/**
 * It calls
 * msg_manage__action__Testaction_FeedbackMessage__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_msg_manage
void
msg_manage__action__Testaction_FeedbackMessage__Sequence__fini(msg_manage__action__Testaction_FeedbackMessage__Sequence * array);

/// Create array of action/Testaction messages.
/**
 * It allocates the memory for the array and calls
 * msg_manage__action__Testaction_FeedbackMessage__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_msg_manage
msg_manage__action__Testaction_FeedbackMessage__Sequence *
msg_manage__action__Testaction_FeedbackMessage__Sequence__create(size_t size);

/// Destroy array of action/Testaction messages.
/**
 * It calls
 * msg_manage__action__Testaction_FeedbackMessage__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_msg_manage
void
msg_manage__action__Testaction_FeedbackMessage__Sequence__destroy(msg_manage__action__Testaction_FeedbackMessage__Sequence * array);

#ifdef __cplusplus
}
#endif

#endif  // MSG_MANAGE__ACTION__DETAIL__TESTACTION__FUNCTIONS_H_
