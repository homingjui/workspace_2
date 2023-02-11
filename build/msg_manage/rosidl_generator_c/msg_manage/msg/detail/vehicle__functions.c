// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from msg_manage:msg/Vehicle.idl
// generated code does not contain a copyright notice
#include "msg_manage/msg/detail/vehicle__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `position`
// Member `speed`
// Member `acceleration`
// Member `vehicle_size`
#include "geometry_msgs/msg/detail/vector3__functions.h"

bool
msg_manage__msg__Vehicle__init(msg_manage__msg__Vehicle * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    msg_manage__msg__Vehicle__fini(msg);
    return false;
  }
  // position
  if (!geometry_msgs__msg__Vector3__init(&msg->position)) {
    msg_manage__msg__Vehicle__fini(msg);
    return false;
  }
  // position_accuracy
  // speed
  if (!geometry_msgs__msg__Vector3__init(&msg->speed)) {
    msg_manage__msg__Vehicle__fini(msg);
    return false;
  }
  // acceleration
  if (!geometry_msgs__msg__Vector3__init(&msg->acceleration)) {
    msg_manage__msg__Vehicle__fini(msg);
    return false;
  }
  // heading
  // turn_angle
  // turn_rate
  // control_status
  // vehicle_size
  if (!geometry_msgs__msg__Vector3__init(&msg->vehicle_size)) {
    msg_manage__msg__Vehicle__fini(msg);
    return false;
  }
  return true;
}

void
msg_manage__msg__Vehicle__fini(msg_manage__msg__Vehicle * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // position
  geometry_msgs__msg__Vector3__fini(&msg->position);
  // position_accuracy
  // speed
  geometry_msgs__msg__Vector3__fini(&msg->speed);
  // acceleration
  geometry_msgs__msg__Vector3__fini(&msg->acceleration);
  // heading
  // turn_angle
  // turn_rate
  // control_status
  // vehicle_size
  geometry_msgs__msg__Vector3__fini(&msg->vehicle_size);
}

msg_manage__msg__Vehicle *
msg_manage__msg__Vehicle__create()
{
  msg_manage__msg__Vehicle * msg = (msg_manage__msg__Vehicle *)malloc(sizeof(msg_manage__msg__Vehicle));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(msg_manage__msg__Vehicle));
  bool success = msg_manage__msg__Vehicle__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
msg_manage__msg__Vehicle__destroy(msg_manage__msg__Vehicle * msg)
{
  if (msg) {
    msg_manage__msg__Vehicle__fini(msg);
  }
  free(msg);
}


bool
msg_manage__msg__Vehicle__Sequence__init(msg_manage__msg__Vehicle__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  msg_manage__msg__Vehicle * data = NULL;
  if (size) {
    data = (msg_manage__msg__Vehicle *)calloc(size, sizeof(msg_manage__msg__Vehicle));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = msg_manage__msg__Vehicle__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        msg_manage__msg__Vehicle__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
msg_manage__msg__Vehicle__Sequence__fini(msg_manage__msg__Vehicle__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      msg_manage__msg__Vehicle__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

msg_manage__msg__Vehicle__Sequence *
msg_manage__msg__Vehicle__Sequence__create(size_t size)
{
  msg_manage__msg__Vehicle__Sequence * array = (msg_manage__msg__Vehicle__Sequence *)malloc(sizeof(msg_manage__msg__Vehicle__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = msg_manage__msg__Vehicle__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
msg_manage__msg__Vehicle__Sequence__destroy(msg_manage__msg__Vehicle__Sequence * array)
{
  if (array) {
    msg_manage__msg__Vehicle__Sequence__fini(array);
  }
  free(array);
}
