// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from msg_manage:msg/Motor2.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "msg_manage/msg/detail/motor2__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace msg_manage
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void Motor2_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) msg_manage::msg::Motor2(_init);
}

void Motor2_fini_function(void * message_memory)
{
  auto typed_message = static_cast<msg_manage::msg::Motor2 *>(message_memory);
  typed_message->~Motor2();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember Motor2_message_member_array[3] = {
  {
    "speed_l",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(msg_manage::msg::Motor2, speed_l),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "speed_r",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(msg_manage::msg::Motor2, speed_r),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "fram_id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(msg_manage::msg::Motor2, fram_id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers Motor2_message_members = {
  "msg_manage::msg",  // message namespace
  "Motor2",  // message name
  3,  // number of fields
  sizeof(msg_manage::msg::Motor2),
  Motor2_message_member_array,  // message members
  Motor2_init_function,  // function to initialize message memory (memory has to be allocated)
  Motor2_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t Motor2_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &Motor2_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace msg_manage


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<msg_manage::msg::Motor2>()
{
  return &::msg_manage::msg::rosidl_typesupport_introspection_cpp::Motor2_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, msg_manage, msg, Motor2)() {
  return &::msg_manage::msg::rosidl_typesupport_introspection_cpp::Motor2_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
