// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from msg_manage:msg/Motor2.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "msg_manage/msg/detail/motor2__rosidl_typesupport_introspection_c.h"
#include "msg_manage/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "msg_manage/msg/detail/motor2__functions.h"
#include "msg_manage/msg/detail/motor2__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void Motor2__rosidl_typesupport_introspection_c__Motor2_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  msg_manage__msg__Motor2__init(message_memory);
}

void Motor2__rosidl_typesupport_introspection_c__Motor2_fini_function(void * message_memory)
{
  msg_manage__msg__Motor2__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember Motor2__rosidl_typesupport_introspection_c__Motor2_message_member_array[3] = {
  {
    "speed_l",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(msg_manage__msg__Motor2, speed_l),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "speed_r",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(msg_manage__msg__Motor2, speed_r),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "fram_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(msg_manage__msg__Motor2, fram_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Motor2__rosidl_typesupport_introspection_c__Motor2_message_members = {
  "msg_manage__msg",  // message namespace
  "Motor2",  // message name
  3,  // number of fields
  sizeof(msg_manage__msg__Motor2),
  Motor2__rosidl_typesupport_introspection_c__Motor2_message_member_array,  // message members
  Motor2__rosidl_typesupport_introspection_c__Motor2_init_function,  // function to initialize message memory (memory has to be allocated)
  Motor2__rosidl_typesupport_introspection_c__Motor2_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Motor2__rosidl_typesupport_introspection_c__Motor2_message_type_support_handle = {
  0,
  &Motor2__rosidl_typesupport_introspection_c__Motor2_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_msg_manage
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, msg_manage, msg, Motor2)() {
  if (!Motor2__rosidl_typesupport_introspection_c__Motor2_message_type_support_handle.typesupport_identifier) {
    Motor2__rosidl_typesupport_introspection_c__Motor2_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Motor2__rosidl_typesupport_introspection_c__Motor2_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
