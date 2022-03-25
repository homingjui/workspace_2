// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from msg_manage:action/Testaction.idl
// generated code does not contain a copyright notice

#ifndef MSG_MANAGE__ACTION__DETAIL__TESTACTION__STRUCT_H_
#define MSG_MANAGE__ACTION__DETAIL__TESTACTION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in action/Testaction in the package msg_manage.
typedef struct msg_manage__action__Testaction_Goal
{
  int32_t order;
} msg_manage__action__Testaction_Goal;

// Struct for a sequence of msg_manage__action__Testaction_Goal.
typedef struct msg_manage__action__Testaction_Goal__Sequence
{
  msg_manage__action__Testaction_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} msg_manage__action__Testaction_Goal__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'sequence'
#include "rosidl_runtime_c/primitives_sequence.h"

// Struct defined in action/Testaction in the package msg_manage.
typedef struct msg_manage__action__Testaction_Result
{
  rosidl_runtime_c__int32__Sequence sequence;
} msg_manage__action__Testaction_Result;

// Struct for a sequence of msg_manage__action__Testaction_Result.
typedef struct msg_manage__action__Testaction_Result__Sequence
{
  msg_manage__action__Testaction_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} msg_manage__action__Testaction_Result__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'partial_sequence'
// already included above
// #include "rosidl_runtime_c/primitives_sequence.h"

// Struct defined in action/Testaction in the package msg_manage.
typedef struct msg_manage__action__Testaction_Feedback
{
  rosidl_runtime_c__int32__Sequence partial_sequence;
} msg_manage__action__Testaction_Feedback;

// Struct for a sequence of msg_manage__action__Testaction_Feedback.
typedef struct msg_manage__action__Testaction_Feedback__Sequence
{
  msg_manage__action__Testaction_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} msg_manage__action__Testaction_Feedback__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "msg_manage/action/detail/testaction__struct.h"

// Struct defined in action/Testaction in the package msg_manage.
typedef struct msg_manage__action__Testaction_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  msg_manage__action__Testaction_Goal goal;
} msg_manage__action__Testaction_SendGoal_Request;

// Struct for a sequence of msg_manage__action__Testaction_SendGoal_Request.
typedef struct msg_manage__action__Testaction_SendGoal_Request__Sequence
{
  msg_manage__action__Testaction_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} msg_manage__action__Testaction_SendGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

// Struct defined in action/Testaction in the package msg_manage.
typedef struct msg_manage__action__Testaction_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} msg_manage__action__Testaction_SendGoal_Response;

// Struct for a sequence of msg_manage__action__Testaction_SendGoal_Response.
typedef struct msg_manage__action__Testaction_SendGoal_Response__Sequence
{
  msg_manage__action__Testaction_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} msg_manage__action__Testaction_SendGoal_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

// Struct defined in action/Testaction in the package msg_manage.
typedef struct msg_manage__action__Testaction_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} msg_manage__action__Testaction_GetResult_Request;

// Struct for a sequence of msg_manage__action__Testaction_GetResult_Request.
typedef struct msg_manage__action__Testaction_GetResult_Request__Sequence
{
  msg_manage__action__Testaction_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} msg_manage__action__Testaction_GetResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "msg_manage/action/detail/testaction__struct.h"

// Struct defined in action/Testaction in the package msg_manage.
typedef struct msg_manage__action__Testaction_GetResult_Response
{
  int8_t status;
  msg_manage__action__Testaction_Result result;
} msg_manage__action__Testaction_GetResult_Response;

// Struct for a sequence of msg_manage__action__Testaction_GetResult_Response.
typedef struct msg_manage__action__Testaction_GetResult_Response__Sequence
{
  msg_manage__action__Testaction_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} msg_manage__action__Testaction_GetResult_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "msg_manage/action/detail/testaction__struct.h"

// Struct defined in action/Testaction in the package msg_manage.
typedef struct msg_manage__action__Testaction_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  msg_manage__action__Testaction_Feedback feedback;
} msg_manage__action__Testaction_FeedbackMessage;

// Struct for a sequence of msg_manage__action__Testaction_FeedbackMessage.
typedef struct msg_manage__action__Testaction_FeedbackMessage__Sequence
{
  msg_manage__action__Testaction_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} msg_manage__action__Testaction_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MSG_MANAGE__ACTION__DETAIL__TESTACTION__STRUCT_H_
