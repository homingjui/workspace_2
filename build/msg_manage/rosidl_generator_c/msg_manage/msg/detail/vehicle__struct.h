// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from msg_manage:msg/Vehicle.idl
// generated code does not contain a copyright notice

#ifndef MSG_MANAGE__MSG__DETAIL__VEHICLE__STRUCT_H_
#define MSG_MANAGE__MSG__DETAIL__VEHICLE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'position'
// Member 'speed'
// Member 'acceleration'
// Member 'vehicle_size'
#include "geometry_msgs/msg/detail/vector3__struct.h"

// Struct defined in msg/Vehicle in the package msg_manage.
typedef struct msg_manage__msg__Vehicle
{
  std_msgs__msg__Header header;
  geometry_msgs__msg__Vector3 position;
  double position_accuracy;
  geometry_msgs__msg__Vector3 speed;
  geometry_msgs__msg__Vector3 acceleration;
  double heading;
  double turn_angle;
  double turn_rate;
  uint8_t control_status;
  geometry_msgs__msg__Vector3 vehicle_size;
} msg_manage__msg__Vehicle;

// Struct for a sequence of msg_manage__msg__Vehicle.
typedef struct msg_manage__msg__Vehicle__Sequence
{
  msg_manage__msg__Vehicle * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} msg_manage__msg__Vehicle__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MSG_MANAGE__MSG__DETAIL__VEHICLE__STRUCT_H_
