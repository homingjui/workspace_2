// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from msg_manage:srv/TwistSrv.idl
// generated code does not contain a copyright notice
#include "msg_manage/srv/detail/twist_srv__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

bool
msg_manage__srv__TwistSrv_Request__init(msg_manage__srv__TwistSrv_Request * msg)
{
  if (!msg) {
    return false;
  }
  // linear
  // angular
  return true;
}

void
msg_manage__srv__TwistSrv_Request__fini(msg_manage__srv__TwistSrv_Request * msg)
{
  if (!msg) {
    return;
  }
  // linear
  // angular
}

msg_manage__srv__TwistSrv_Request *
msg_manage__srv__TwistSrv_Request__create()
{
  msg_manage__srv__TwistSrv_Request * msg = (msg_manage__srv__TwistSrv_Request *)malloc(sizeof(msg_manage__srv__TwistSrv_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(msg_manage__srv__TwistSrv_Request));
  bool success = msg_manage__srv__TwistSrv_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
msg_manage__srv__TwistSrv_Request__destroy(msg_manage__srv__TwistSrv_Request * msg)
{
  if (msg) {
    msg_manage__srv__TwistSrv_Request__fini(msg);
  }
  free(msg);
}


bool
msg_manage__srv__TwistSrv_Request__Sequence__init(msg_manage__srv__TwistSrv_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  msg_manage__srv__TwistSrv_Request * data = NULL;
  if (size) {
    data = (msg_manage__srv__TwistSrv_Request *)calloc(size, sizeof(msg_manage__srv__TwistSrv_Request));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = msg_manage__srv__TwistSrv_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        msg_manage__srv__TwistSrv_Request__fini(&data[i - 1]);
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
msg_manage__srv__TwistSrv_Request__Sequence__fini(msg_manage__srv__TwistSrv_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      msg_manage__srv__TwistSrv_Request__fini(&array->data[i]);
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

msg_manage__srv__TwistSrv_Request__Sequence *
msg_manage__srv__TwistSrv_Request__Sequence__create(size_t size)
{
  msg_manage__srv__TwistSrv_Request__Sequence * array = (msg_manage__srv__TwistSrv_Request__Sequence *)malloc(sizeof(msg_manage__srv__TwistSrv_Request__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = msg_manage__srv__TwistSrv_Request__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
msg_manage__srv__TwistSrv_Request__Sequence__destroy(msg_manage__srv__TwistSrv_Request__Sequence * array)
{
  if (array) {
    msg_manage__srv__TwistSrv_Request__Sequence__fini(array);
  }
  free(array);
}


bool
msg_manage__srv__TwistSrv_Response__init(msg_manage__srv__TwistSrv_Response * msg)
{
  if (!msg) {
    return false;
  }
  // result
  return true;
}

void
msg_manage__srv__TwistSrv_Response__fini(msg_manage__srv__TwistSrv_Response * msg)
{
  if (!msg) {
    return;
  }
  // result
}

msg_manage__srv__TwistSrv_Response *
msg_manage__srv__TwistSrv_Response__create()
{
  msg_manage__srv__TwistSrv_Response * msg = (msg_manage__srv__TwistSrv_Response *)malloc(sizeof(msg_manage__srv__TwistSrv_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(msg_manage__srv__TwistSrv_Response));
  bool success = msg_manage__srv__TwistSrv_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
msg_manage__srv__TwistSrv_Response__destroy(msg_manage__srv__TwistSrv_Response * msg)
{
  if (msg) {
    msg_manage__srv__TwistSrv_Response__fini(msg);
  }
  free(msg);
}


bool
msg_manage__srv__TwistSrv_Response__Sequence__init(msg_manage__srv__TwistSrv_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  msg_manage__srv__TwistSrv_Response * data = NULL;
  if (size) {
    data = (msg_manage__srv__TwistSrv_Response *)calloc(size, sizeof(msg_manage__srv__TwistSrv_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = msg_manage__srv__TwistSrv_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        msg_manage__srv__TwistSrv_Response__fini(&data[i - 1]);
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
msg_manage__srv__TwistSrv_Response__Sequence__fini(msg_manage__srv__TwistSrv_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      msg_manage__srv__TwistSrv_Response__fini(&array->data[i]);
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

msg_manage__srv__TwistSrv_Response__Sequence *
msg_manage__srv__TwistSrv_Response__Sequence__create(size_t size)
{
  msg_manage__srv__TwistSrv_Response__Sequence * array = (msg_manage__srv__TwistSrv_Response__Sequence *)malloc(sizeof(msg_manage__srv__TwistSrv_Response__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = msg_manage__srv__TwistSrv_Response__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
msg_manage__srv__TwistSrv_Response__Sequence__destroy(msg_manage__srv__TwistSrv_Response__Sequence * array)
{
  if (array) {
    msg_manage__srv__TwistSrv_Response__Sequence__fini(array);
  }
  free(array);
}
