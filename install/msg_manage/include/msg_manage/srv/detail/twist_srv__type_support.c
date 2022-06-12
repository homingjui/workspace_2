// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from msg_manage:srv/TwistSrv.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "msg_manage/srv/detail/twist_srv__rosidl_typesupport_introspection_c.h"
#include "msg_manage/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "msg_manage/srv/detail/twist_srv__functions.h"
#include "msg_manage/srv/detail/twist_srv__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void TwistSrv_Request__rosidl_typesupport_introspection_c__TwistSrv_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  msg_manage__srv__TwistSrv_Request__init(message_memory);
}

void TwistSrv_Request__rosidl_typesupport_introspection_c__TwistSrv_Request_fini_function(void * message_memory)
{
  msg_manage__srv__TwistSrv_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember TwistSrv_Request__rosidl_typesupport_introspection_c__TwistSrv_Request_message_member_array[2] = {
  {
    "linear",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(msg_manage__srv__TwistSrv_Request, linear),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "angular",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(msg_manage__srv__TwistSrv_Request, angular),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers TwistSrv_Request__rosidl_typesupport_introspection_c__TwistSrv_Request_message_members = {
  "msg_manage__srv",  // message namespace
  "TwistSrv_Request",  // message name
  2,  // number of fields
  sizeof(msg_manage__srv__TwistSrv_Request),
  TwistSrv_Request__rosidl_typesupport_introspection_c__TwistSrv_Request_message_member_array,  // message members
  TwistSrv_Request__rosidl_typesupport_introspection_c__TwistSrv_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  TwistSrv_Request__rosidl_typesupport_introspection_c__TwistSrv_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t TwistSrv_Request__rosidl_typesupport_introspection_c__TwistSrv_Request_message_type_support_handle = {
  0,
  &TwistSrv_Request__rosidl_typesupport_introspection_c__TwistSrv_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_msg_manage
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, msg_manage, srv, TwistSrv_Request)() {
  if (!TwistSrv_Request__rosidl_typesupport_introspection_c__TwistSrv_Request_message_type_support_handle.typesupport_identifier) {
    TwistSrv_Request__rosidl_typesupport_introspection_c__TwistSrv_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &TwistSrv_Request__rosidl_typesupport_introspection_c__TwistSrv_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "msg_manage/srv/detail/twist_srv__rosidl_typesupport_introspection_c.h"
// already included above
// #include "msg_manage/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "msg_manage/srv/detail/twist_srv__functions.h"
// already included above
// #include "msg_manage/srv/detail/twist_srv__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void TwistSrv_Response__rosidl_typesupport_introspection_c__TwistSrv_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  msg_manage__srv__TwistSrv_Response__init(message_memory);
}

void TwistSrv_Response__rosidl_typesupport_introspection_c__TwistSrv_Response_fini_function(void * message_memory)
{
  msg_manage__srv__TwistSrv_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember TwistSrv_Response__rosidl_typesupport_introspection_c__TwistSrv_Response_message_member_array[1] = {
  {
    "result",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(msg_manage__srv__TwistSrv_Response, result),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers TwistSrv_Response__rosidl_typesupport_introspection_c__TwistSrv_Response_message_members = {
  "msg_manage__srv",  // message namespace
  "TwistSrv_Response",  // message name
  1,  // number of fields
  sizeof(msg_manage__srv__TwistSrv_Response),
  TwistSrv_Response__rosidl_typesupport_introspection_c__TwistSrv_Response_message_member_array,  // message members
  TwistSrv_Response__rosidl_typesupport_introspection_c__TwistSrv_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  TwistSrv_Response__rosidl_typesupport_introspection_c__TwistSrv_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t TwistSrv_Response__rosidl_typesupport_introspection_c__TwistSrv_Response_message_type_support_handle = {
  0,
  &TwistSrv_Response__rosidl_typesupport_introspection_c__TwistSrv_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_msg_manage
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, msg_manage, srv, TwistSrv_Response)() {
  if (!TwistSrv_Response__rosidl_typesupport_introspection_c__TwistSrv_Response_message_type_support_handle.typesupport_identifier) {
    TwistSrv_Response__rosidl_typesupport_introspection_c__TwistSrv_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &TwistSrv_Response__rosidl_typesupport_introspection_c__TwistSrv_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "msg_manage/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "msg_manage/srv/detail/twist_srv__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers msg_manage__srv__detail__twist_srv__rosidl_typesupport_introspection_c__TwistSrv_service_members = {
  "msg_manage__srv",  // service namespace
  "TwistSrv",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // msg_manage__srv__detail__twist_srv__rosidl_typesupport_introspection_c__TwistSrv_Request_message_type_support_handle,
  NULL  // response message
  // msg_manage__srv__detail__twist_srv__rosidl_typesupport_introspection_c__TwistSrv_Response_message_type_support_handle
};

static rosidl_service_type_support_t msg_manage__srv__detail__twist_srv__rosidl_typesupport_introspection_c__TwistSrv_service_type_support_handle = {
  0,
  &msg_manage__srv__detail__twist_srv__rosidl_typesupport_introspection_c__TwistSrv_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, msg_manage, srv, TwistSrv_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, msg_manage, srv, TwistSrv_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_msg_manage
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, msg_manage, srv, TwistSrv)() {
  if (!msg_manage__srv__detail__twist_srv__rosidl_typesupport_introspection_c__TwistSrv_service_type_support_handle.typesupport_identifier) {
    msg_manage__srv__detail__twist_srv__rosidl_typesupport_introspection_c__TwistSrv_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)msg_manage__srv__detail__twist_srv__rosidl_typesupport_introspection_c__TwistSrv_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, msg_manage, srv, TwistSrv_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, msg_manage, srv, TwistSrv_Response)()->data;
  }

  return &msg_manage__srv__detail__twist_srv__rosidl_typesupport_introspection_c__TwistSrv_service_type_support_handle;
}
