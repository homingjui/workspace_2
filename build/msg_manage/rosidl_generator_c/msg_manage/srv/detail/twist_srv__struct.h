// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from msg_manage:srv/TwistSrv.idl
// generated code does not contain a copyright notice

#ifndef MSG_MANAGE__SRV__DETAIL__TWIST_SRV__STRUCT_H_
#define MSG_MANAGE__SRV__DETAIL__TWIST_SRV__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in srv/TwistSrv in the package msg_manage.
typedef struct msg_manage__srv__TwistSrv_Request
{
  double linear;
  double angular;
} msg_manage__srv__TwistSrv_Request;

// Struct for a sequence of msg_manage__srv__TwistSrv_Request.
typedef struct msg_manage__srv__TwistSrv_Request__Sequence
{
  msg_manage__srv__TwistSrv_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} msg_manage__srv__TwistSrv_Request__Sequence;


// Constants defined in the message

// Struct defined in srv/TwistSrv in the package msg_manage.
typedef struct msg_manage__srv__TwistSrv_Response
{
  bool result;
} msg_manage__srv__TwistSrv_Response;

// Struct for a sequence of msg_manage__srv__TwistSrv_Response.
typedef struct msg_manage__srv__TwistSrv_Response__Sequence
{
  msg_manage__srv__TwistSrv_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} msg_manage__srv__TwistSrv_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MSG_MANAGE__SRV__DETAIL__TWIST_SRV__STRUCT_H_
