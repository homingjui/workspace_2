// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from msg_manage:msg/Motor2.idl
// generated code does not contain a copyright notice

#ifndef MSG_MANAGE__MSG__DETAIL__MOTOR2__STRUCT_H_
#define MSG_MANAGE__MSG__DETAIL__MOTOR2__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/Motor2 in the package msg_manage.
typedef struct msg_manage__msg__Motor2
{
  float speed_l;
  float speed_r;
  uint16_t fram_id;
} msg_manage__msg__Motor2;

// Struct for a sequence of msg_manage__msg__Motor2.
typedef struct msg_manage__msg__Motor2__Sequence
{
  msg_manage__msg__Motor2 * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} msg_manage__msg__Motor2__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MSG_MANAGE__MSG__DETAIL__MOTOR2__STRUCT_H_
