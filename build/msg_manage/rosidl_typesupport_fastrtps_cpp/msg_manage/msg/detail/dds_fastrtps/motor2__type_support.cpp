// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from msg_manage:msg/Motor2.idl
// generated code does not contain a copyright notice
#include "msg_manage/msg/detail/motor2__rosidl_typesupport_fastrtps_cpp.hpp"
#include "msg_manage/msg/detail/motor2__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace msg_manage
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_msg_manage
cdr_serialize(
  const msg_manage::msg::Motor2 & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: speed_l
  cdr << ros_message.speed_l;
  // Member: speed_r
  cdr << ros_message.speed_r;
  // Member: fram_id
  cdr << ros_message.fram_id;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_msg_manage
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  msg_manage::msg::Motor2 & ros_message)
{
  // Member: speed_l
  cdr >> ros_message.speed_l;

  // Member: speed_r
  cdr >> ros_message.speed_r;

  // Member: fram_id
  cdr >> ros_message.fram_id;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_msg_manage
get_serialized_size(
  const msg_manage::msg::Motor2 & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: speed_l
  {
    size_t item_size = sizeof(ros_message.speed_l);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: speed_r
  {
    size_t item_size = sizeof(ros_message.speed_r);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: fram_id
  {
    size_t item_size = sizeof(ros_message.fram_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_msg_manage
max_serialized_size_Motor2(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: speed_l
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: speed_r
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: fram_id
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  return current_alignment - initial_alignment;
}

static bool _Motor2__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const msg_manage::msg::Motor2 *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _Motor2__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<msg_manage::msg::Motor2 *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _Motor2__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const msg_manage::msg::Motor2 *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _Motor2__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_Motor2(full_bounded, 0);
}

static message_type_support_callbacks_t _Motor2__callbacks = {
  "msg_manage::msg",
  "Motor2",
  _Motor2__cdr_serialize,
  _Motor2__cdr_deserialize,
  _Motor2__get_serialized_size,
  _Motor2__max_serialized_size
};

static rosidl_message_type_support_t _Motor2__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_Motor2__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace msg_manage

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_msg_manage
const rosidl_message_type_support_t *
get_message_type_support_handle<msg_manage::msg::Motor2>()
{
  return &msg_manage::msg::typesupport_fastrtps_cpp::_Motor2__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, msg_manage, msg, Motor2)() {
  return &msg_manage::msg::typesupport_fastrtps_cpp::_Motor2__handle;
}

#ifdef __cplusplus
}
#endif
