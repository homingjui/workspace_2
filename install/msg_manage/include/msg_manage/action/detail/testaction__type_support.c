// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from msg_manage:action/Testaction.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "msg_manage/action/detail/testaction__rosidl_typesupport_introspection_c.h"
#include "msg_manage/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "msg_manage/action/detail/testaction__functions.h"
#include "msg_manage/action/detail/testaction__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void Testaction_Goal__rosidl_typesupport_introspection_c__Testaction_Goal_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  msg_manage__action__Testaction_Goal__init(message_memory);
}

void Testaction_Goal__rosidl_typesupport_introspection_c__Testaction_Goal_fini_function(void * message_memory)
{
  msg_manage__action__Testaction_Goal__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember Testaction_Goal__rosidl_typesupport_introspection_c__Testaction_Goal_message_member_array[1] = {
  {
    "order",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(msg_manage__action__Testaction_Goal, order),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Testaction_Goal__rosidl_typesupport_introspection_c__Testaction_Goal_message_members = {
  "msg_manage__action",  // message namespace
  "Testaction_Goal",  // message name
  1,  // number of fields
  sizeof(msg_manage__action__Testaction_Goal),
  Testaction_Goal__rosidl_typesupport_introspection_c__Testaction_Goal_message_member_array,  // message members
  Testaction_Goal__rosidl_typesupport_introspection_c__Testaction_Goal_init_function,  // function to initialize message memory (memory has to be allocated)
  Testaction_Goal__rosidl_typesupport_introspection_c__Testaction_Goal_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Testaction_Goal__rosidl_typesupport_introspection_c__Testaction_Goal_message_type_support_handle = {
  0,
  &Testaction_Goal__rosidl_typesupport_introspection_c__Testaction_Goal_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_msg_manage
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, msg_manage, action, Testaction_Goal)() {
  if (!Testaction_Goal__rosidl_typesupport_introspection_c__Testaction_Goal_message_type_support_handle.typesupport_identifier) {
    Testaction_Goal__rosidl_typesupport_introspection_c__Testaction_Goal_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Testaction_Goal__rosidl_typesupport_introspection_c__Testaction_Goal_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "msg_manage/action/detail/testaction__rosidl_typesupport_introspection_c.h"
// already included above
// #include "msg_manage/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "msg_manage/action/detail/testaction__functions.h"
// already included above
// #include "msg_manage/action/detail/testaction__struct.h"


// Include directives for member types
// Member `sequence`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void Testaction_Result__rosidl_typesupport_introspection_c__Testaction_Result_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  msg_manage__action__Testaction_Result__init(message_memory);
}

void Testaction_Result__rosidl_typesupport_introspection_c__Testaction_Result_fini_function(void * message_memory)
{
  msg_manage__action__Testaction_Result__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember Testaction_Result__rosidl_typesupport_introspection_c__Testaction_Result_message_member_array[1] = {
  {
    "sequence",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(msg_manage__action__Testaction_Result, sequence),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Testaction_Result__rosidl_typesupport_introspection_c__Testaction_Result_message_members = {
  "msg_manage__action",  // message namespace
  "Testaction_Result",  // message name
  1,  // number of fields
  sizeof(msg_manage__action__Testaction_Result),
  Testaction_Result__rosidl_typesupport_introspection_c__Testaction_Result_message_member_array,  // message members
  Testaction_Result__rosidl_typesupport_introspection_c__Testaction_Result_init_function,  // function to initialize message memory (memory has to be allocated)
  Testaction_Result__rosidl_typesupport_introspection_c__Testaction_Result_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Testaction_Result__rosidl_typesupport_introspection_c__Testaction_Result_message_type_support_handle = {
  0,
  &Testaction_Result__rosidl_typesupport_introspection_c__Testaction_Result_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_msg_manage
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, msg_manage, action, Testaction_Result)() {
  if (!Testaction_Result__rosidl_typesupport_introspection_c__Testaction_Result_message_type_support_handle.typesupport_identifier) {
    Testaction_Result__rosidl_typesupport_introspection_c__Testaction_Result_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Testaction_Result__rosidl_typesupport_introspection_c__Testaction_Result_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "msg_manage/action/detail/testaction__rosidl_typesupport_introspection_c.h"
// already included above
// #include "msg_manage/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "msg_manage/action/detail/testaction__functions.h"
// already included above
// #include "msg_manage/action/detail/testaction__struct.h"


// Include directives for member types
// Member `partial_sequence`
// already included above
// #include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void Testaction_Feedback__rosidl_typesupport_introspection_c__Testaction_Feedback_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  msg_manage__action__Testaction_Feedback__init(message_memory);
}

void Testaction_Feedback__rosidl_typesupport_introspection_c__Testaction_Feedback_fini_function(void * message_memory)
{
  msg_manage__action__Testaction_Feedback__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember Testaction_Feedback__rosidl_typesupport_introspection_c__Testaction_Feedback_message_member_array[1] = {
  {
    "partial_sequence",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(msg_manage__action__Testaction_Feedback, partial_sequence),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Testaction_Feedback__rosidl_typesupport_introspection_c__Testaction_Feedback_message_members = {
  "msg_manage__action",  // message namespace
  "Testaction_Feedback",  // message name
  1,  // number of fields
  sizeof(msg_manage__action__Testaction_Feedback),
  Testaction_Feedback__rosidl_typesupport_introspection_c__Testaction_Feedback_message_member_array,  // message members
  Testaction_Feedback__rosidl_typesupport_introspection_c__Testaction_Feedback_init_function,  // function to initialize message memory (memory has to be allocated)
  Testaction_Feedback__rosidl_typesupport_introspection_c__Testaction_Feedback_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Testaction_Feedback__rosidl_typesupport_introspection_c__Testaction_Feedback_message_type_support_handle = {
  0,
  &Testaction_Feedback__rosidl_typesupport_introspection_c__Testaction_Feedback_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_msg_manage
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, msg_manage, action, Testaction_Feedback)() {
  if (!Testaction_Feedback__rosidl_typesupport_introspection_c__Testaction_Feedback_message_type_support_handle.typesupport_identifier) {
    Testaction_Feedback__rosidl_typesupport_introspection_c__Testaction_Feedback_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Testaction_Feedback__rosidl_typesupport_introspection_c__Testaction_Feedback_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "msg_manage/action/detail/testaction__rosidl_typesupport_introspection_c.h"
// already included above
// #include "msg_manage/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "msg_manage/action/detail/testaction__functions.h"
// already included above
// #include "msg_manage/action/detail/testaction__struct.h"


// Include directives for member types
// Member `goal_id`
#include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
#include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"
// Member `goal`
#include "msg_manage/action/testaction.h"
// Member `goal`
// already included above
// #include "msg_manage/action/detail/testaction__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void Testaction_SendGoal_Request__rosidl_typesupport_introspection_c__Testaction_SendGoal_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  msg_manage__action__Testaction_SendGoal_Request__init(message_memory);
}

void Testaction_SendGoal_Request__rosidl_typesupport_introspection_c__Testaction_SendGoal_Request_fini_function(void * message_memory)
{
  msg_manage__action__Testaction_SendGoal_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember Testaction_SendGoal_Request__rosidl_typesupport_introspection_c__Testaction_SendGoal_Request_message_member_array[2] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(msg_manage__action__Testaction_SendGoal_Request, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "goal",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(msg_manage__action__Testaction_SendGoal_Request, goal),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Testaction_SendGoal_Request__rosidl_typesupport_introspection_c__Testaction_SendGoal_Request_message_members = {
  "msg_manage__action",  // message namespace
  "Testaction_SendGoal_Request",  // message name
  2,  // number of fields
  sizeof(msg_manage__action__Testaction_SendGoal_Request),
  Testaction_SendGoal_Request__rosidl_typesupport_introspection_c__Testaction_SendGoal_Request_message_member_array,  // message members
  Testaction_SendGoal_Request__rosidl_typesupport_introspection_c__Testaction_SendGoal_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  Testaction_SendGoal_Request__rosidl_typesupport_introspection_c__Testaction_SendGoal_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Testaction_SendGoal_Request__rosidl_typesupport_introspection_c__Testaction_SendGoal_Request_message_type_support_handle = {
  0,
  &Testaction_SendGoal_Request__rosidl_typesupport_introspection_c__Testaction_SendGoal_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_msg_manage
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, msg_manage, action, Testaction_SendGoal_Request)() {
  Testaction_SendGoal_Request__rosidl_typesupport_introspection_c__Testaction_SendGoal_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  Testaction_SendGoal_Request__rosidl_typesupport_introspection_c__Testaction_SendGoal_Request_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, msg_manage, action, Testaction_Goal)();
  if (!Testaction_SendGoal_Request__rosidl_typesupport_introspection_c__Testaction_SendGoal_Request_message_type_support_handle.typesupport_identifier) {
    Testaction_SendGoal_Request__rosidl_typesupport_introspection_c__Testaction_SendGoal_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Testaction_SendGoal_Request__rosidl_typesupport_introspection_c__Testaction_SendGoal_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "msg_manage/action/detail/testaction__rosidl_typesupport_introspection_c.h"
// already included above
// #include "msg_manage/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "msg_manage/action/detail/testaction__functions.h"
// already included above
// #include "msg_manage/action/detail/testaction__struct.h"


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/time.h"
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void Testaction_SendGoal_Response__rosidl_typesupport_introspection_c__Testaction_SendGoal_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  msg_manage__action__Testaction_SendGoal_Response__init(message_memory);
}

void Testaction_SendGoal_Response__rosidl_typesupport_introspection_c__Testaction_SendGoal_Response_fini_function(void * message_memory)
{
  msg_manage__action__Testaction_SendGoal_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember Testaction_SendGoal_Response__rosidl_typesupport_introspection_c__Testaction_SendGoal_Response_message_member_array[2] = {
  {
    "accepted",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(msg_manage__action__Testaction_SendGoal_Response, accepted),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "stamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(msg_manage__action__Testaction_SendGoal_Response, stamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Testaction_SendGoal_Response__rosidl_typesupport_introspection_c__Testaction_SendGoal_Response_message_members = {
  "msg_manage__action",  // message namespace
  "Testaction_SendGoal_Response",  // message name
  2,  // number of fields
  sizeof(msg_manage__action__Testaction_SendGoal_Response),
  Testaction_SendGoal_Response__rosidl_typesupport_introspection_c__Testaction_SendGoal_Response_message_member_array,  // message members
  Testaction_SendGoal_Response__rosidl_typesupport_introspection_c__Testaction_SendGoal_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  Testaction_SendGoal_Response__rosidl_typesupport_introspection_c__Testaction_SendGoal_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Testaction_SendGoal_Response__rosidl_typesupport_introspection_c__Testaction_SendGoal_Response_message_type_support_handle = {
  0,
  &Testaction_SendGoal_Response__rosidl_typesupport_introspection_c__Testaction_SendGoal_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_msg_manage
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, msg_manage, action, Testaction_SendGoal_Response)() {
  Testaction_SendGoal_Response__rosidl_typesupport_introspection_c__Testaction_SendGoal_Response_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Time)();
  if (!Testaction_SendGoal_Response__rosidl_typesupport_introspection_c__Testaction_SendGoal_Response_message_type_support_handle.typesupport_identifier) {
    Testaction_SendGoal_Response__rosidl_typesupport_introspection_c__Testaction_SendGoal_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Testaction_SendGoal_Response__rosidl_typesupport_introspection_c__Testaction_SendGoal_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "msg_manage/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "msg_manage/action/detail/testaction__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers msg_manage__action__detail__testaction__rosidl_typesupport_introspection_c__Testaction_SendGoal_service_members = {
  "msg_manage__action",  // service namespace
  "Testaction_SendGoal",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // msg_manage__action__detail__testaction__rosidl_typesupport_introspection_c__Testaction_SendGoal_Request_message_type_support_handle,
  NULL  // response message
  // msg_manage__action__detail__testaction__rosidl_typesupport_introspection_c__Testaction_SendGoal_Response_message_type_support_handle
};

static rosidl_service_type_support_t msg_manage__action__detail__testaction__rosidl_typesupport_introspection_c__Testaction_SendGoal_service_type_support_handle = {
  0,
  &msg_manage__action__detail__testaction__rosidl_typesupport_introspection_c__Testaction_SendGoal_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, msg_manage, action, Testaction_SendGoal_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, msg_manage, action, Testaction_SendGoal_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_msg_manage
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, msg_manage, action, Testaction_SendGoal)() {
  if (!msg_manage__action__detail__testaction__rosidl_typesupport_introspection_c__Testaction_SendGoal_service_type_support_handle.typesupport_identifier) {
    msg_manage__action__detail__testaction__rosidl_typesupport_introspection_c__Testaction_SendGoal_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)msg_manage__action__detail__testaction__rosidl_typesupport_introspection_c__Testaction_SendGoal_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, msg_manage, action, Testaction_SendGoal_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, msg_manage, action, Testaction_SendGoal_Response)()->data;
  }

  return &msg_manage__action__detail__testaction__rosidl_typesupport_introspection_c__Testaction_SendGoal_service_type_support_handle;
}

// already included above
// #include <stddef.h>
// already included above
// #include "msg_manage/action/detail/testaction__rosidl_typesupport_introspection_c.h"
// already included above
// #include "msg_manage/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "msg_manage/action/detail/testaction__functions.h"
// already included above
// #include "msg_manage/action/detail/testaction__struct.h"


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void Testaction_GetResult_Request__rosidl_typesupport_introspection_c__Testaction_GetResult_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  msg_manage__action__Testaction_GetResult_Request__init(message_memory);
}

void Testaction_GetResult_Request__rosidl_typesupport_introspection_c__Testaction_GetResult_Request_fini_function(void * message_memory)
{
  msg_manage__action__Testaction_GetResult_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember Testaction_GetResult_Request__rosidl_typesupport_introspection_c__Testaction_GetResult_Request_message_member_array[1] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(msg_manage__action__Testaction_GetResult_Request, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Testaction_GetResult_Request__rosidl_typesupport_introspection_c__Testaction_GetResult_Request_message_members = {
  "msg_manage__action",  // message namespace
  "Testaction_GetResult_Request",  // message name
  1,  // number of fields
  sizeof(msg_manage__action__Testaction_GetResult_Request),
  Testaction_GetResult_Request__rosidl_typesupport_introspection_c__Testaction_GetResult_Request_message_member_array,  // message members
  Testaction_GetResult_Request__rosidl_typesupport_introspection_c__Testaction_GetResult_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  Testaction_GetResult_Request__rosidl_typesupport_introspection_c__Testaction_GetResult_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Testaction_GetResult_Request__rosidl_typesupport_introspection_c__Testaction_GetResult_Request_message_type_support_handle = {
  0,
  &Testaction_GetResult_Request__rosidl_typesupport_introspection_c__Testaction_GetResult_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_msg_manage
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, msg_manage, action, Testaction_GetResult_Request)() {
  Testaction_GetResult_Request__rosidl_typesupport_introspection_c__Testaction_GetResult_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  if (!Testaction_GetResult_Request__rosidl_typesupport_introspection_c__Testaction_GetResult_Request_message_type_support_handle.typesupport_identifier) {
    Testaction_GetResult_Request__rosidl_typesupport_introspection_c__Testaction_GetResult_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Testaction_GetResult_Request__rosidl_typesupport_introspection_c__Testaction_GetResult_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "msg_manage/action/detail/testaction__rosidl_typesupport_introspection_c.h"
// already included above
// #include "msg_manage/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "msg_manage/action/detail/testaction__functions.h"
// already included above
// #include "msg_manage/action/detail/testaction__struct.h"


// Include directives for member types
// Member `result`
// already included above
// #include "msg_manage/action/testaction.h"
// Member `result`
// already included above
// #include "msg_manage/action/detail/testaction__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void Testaction_GetResult_Response__rosidl_typesupport_introspection_c__Testaction_GetResult_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  msg_manage__action__Testaction_GetResult_Response__init(message_memory);
}

void Testaction_GetResult_Response__rosidl_typesupport_introspection_c__Testaction_GetResult_Response_fini_function(void * message_memory)
{
  msg_manage__action__Testaction_GetResult_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember Testaction_GetResult_Response__rosidl_typesupport_introspection_c__Testaction_GetResult_Response_message_member_array[2] = {
  {
    "status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(msg_manage__action__Testaction_GetResult_Response, status),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "result",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(msg_manage__action__Testaction_GetResult_Response, result),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Testaction_GetResult_Response__rosidl_typesupport_introspection_c__Testaction_GetResult_Response_message_members = {
  "msg_manage__action",  // message namespace
  "Testaction_GetResult_Response",  // message name
  2,  // number of fields
  sizeof(msg_manage__action__Testaction_GetResult_Response),
  Testaction_GetResult_Response__rosidl_typesupport_introspection_c__Testaction_GetResult_Response_message_member_array,  // message members
  Testaction_GetResult_Response__rosidl_typesupport_introspection_c__Testaction_GetResult_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  Testaction_GetResult_Response__rosidl_typesupport_introspection_c__Testaction_GetResult_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Testaction_GetResult_Response__rosidl_typesupport_introspection_c__Testaction_GetResult_Response_message_type_support_handle = {
  0,
  &Testaction_GetResult_Response__rosidl_typesupport_introspection_c__Testaction_GetResult_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_msg_manage
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, msg_manage, action, Testaction_GetResult_Response)() {
  Testaction_GetResult_Response__rosidl_typesupport_introspection_c__Testaction_GetResult_Response_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, msg_manage, action, Testaction_Result)();
  if (!Testaction_GetResult_Response__rosidl_typesupport_introspection_c__Testaction_GetResult_Response_message_type_support_handle.typesupport_identifier) {
    Testaction_GetResult_Response__rosidl_typesupport_introspection_c__Testaction_GetResult_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Testaction_GetResult_Response__rosidl_typesupport_introspection_c__Testaction_GetResult_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "msg_manage/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "msg_manage/action/detail/testaction__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers msg_manage__action__detail__testaction__rosidl_typesupport_introspection_c__Testaction_GetResult_service_members = {
  "msg_manage__action",  // service namespace
  "Testaction_GetResult",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // msg_manage__action__detail__testaction__rosidl_typesupport_introspection_c__Testaction_GetResult_Request_message_type_support_handle,
  NULL  // response message
  // msg_manage__action__detail__testaction__rosidl_typesupport_introspection_c__Testaction_GetResult_Response_message_type_support_handle
};

static rosidl_service_type_support_t msg_manage__action__detail__testaction__rosidl_typesupport_introspection_c__Testaction_GetResult_service_type_support_handle = {
  0,
  &msg_manage__action__detail__testaction__rosidl_typesupport_introspection_c__Testaction_GetResult_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, msg_manage, action, Testaction_GetResult_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, msg_manage, action, Testaction_GetResult_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_msg_manage
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, msg_manage, action, Testaction_GetResult)() {
  if (!msg_manage__action__detail__testaction__rosidl_typesupport_introspection_c__Testaction_GetResult_service_type_support_handle.typesupport_identifier) {
    msg_manage__action__detail__testaction__rosidl_typesupport_introspection_c__Testaction_GetResult_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)msg_manage__action__detail__testaction__rosidl_typesupport_introspection_c__Testaction_GetResult_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, msg_manage, action, Testaction_GetResult_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, msg_manage, action, Testaction_GetResult_Response)()->data;
  }

  return &msg_manage__action__detail__testaction__rosidl_typesupport_introspection_c__Testaction_GetResult_service_type_support_handle;
}

// already included above
// #include <stddef.h>
// already included above
// #include "msg_manage/action/detail/testaction__rosidl_typesupport_introspection_c.h"
// already included above
// #include "msg_manage/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "msg_manage/action/detail/testaction__functions.h"
// already included above
// #include "msg_manage/action/detail/testaction__struct.h"


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"
// Member `feedback`
// already included above
// #include "msg_manage/action/testaction.h"
// Member `feedback`
// already included above
// #include "msg_manage/action/detail/testaction__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void Testaction_FeedbackMessage__rosidl_typesupport_introspection_c__Testaction_FeedbackMessage_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  msg_manage__action__Testaction_FeedbackMessage__init(message_memory);
}

void Testaction_FeedbackMessage__rosidl_typesupport_introspection_c__Testaction_FeedbackMessage_fini_function(void * message_memory)
{
  msg_manage__action__Testaction_FeedbackMessage__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember Testaction_FeedbackMessage__rosidl_typesupport_introspection_c__Testaction_FeedbackMessage_message_member_array[2] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(msg_manage__action__Testaction_FeedbackMessage, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "feedback",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(msg_manage__action__Testaction_FeedbackMessage, feedback),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Testaction_FeedbackMessage__rosidl_typesupport_introspection_c__Testaction_FeedbackMessage_message_members = {
  "msg_manage__action",  // message namespace
  "Testaction_FeedbackMessage",  // message name
  2,  // number of fields
  sizeof(msg_manage__action__Testaction_FeedbackMessage),
  Testaction_FeedbackMessage__rosidl_typesupport_introspection_c__Testaction_FeedbackMessage_message_member_array,  // message members
  Testaction_FeedbackMessage__rosidl_typesupport_introspection_c__Testaction_FeedbackMessage_init_function,  // function to initialize message memory (memory has to be allocated)
  Testaction_FeedbackMessage__rosidl_typesupport_introspection_c__Testaction_FeedbackMessage_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Testaction_FeedbackMessage__rosidl_typesupport_introspection_c__Testaction_FeedbackMessage_message_type_support_handle = {
  0,
  &Testaction_FeedbackMessage__rosidl_typesupport_introspection_c__Testaction_FeedbackMessage_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_msg_manage
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, msg_manage, action, Testaction_FeedbackMessage)() {
  Testaction_FeedbackMessage__rosidl_typesupport_introspection_c__Testaction_FeedbackMessage_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  Testaction_FeedbackMessage__rosidl_typesupport_introspection_c__Testaction_FeedbackMessage_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, msg_manage, action, Testaction_Feedback)();
  if (!Testaction_FeedbackMessage__rosidl_typesupport_introspection_c__Testaction_FeedbackMessage_message_type_support_handle.typesupport_identifier) {
    Testaction_FeedbackMessage__rosidl_typesupport_introspection_c__Testaction_FeedbackMessage_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Testaction_FeedbackMessage__rosidl_typesupport_introspection_c__Testaction_FeedbackMessage_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
