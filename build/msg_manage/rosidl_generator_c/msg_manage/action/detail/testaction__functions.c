// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from msg_manage:action/Testaction.idl
// generated code does not contain a copyright notice
#include "msg_manage/action/detail/testaction__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


bool
msg_manage__action__Testaction_Goal__init(msg_manage__action__Testaction_Goal * msg)
{
  if (!msg) {
    return false;
  }
  // order
  return true;
}

void
msg_manage__action__Testaction_Goal__fini(msg_manage__action__Testaction_Goal * msg)
{
  if (!msg) {
    return;
  }
  // order
}

msg_manage__action__Testaction_Goal *
msg_manage__action__Testaction_Goal__create()
{
  msg_manage__action__Testaction_Goal * msg = (msg_manage__action__Testaction_Goal *)malloc(sizeof(msg_manage__action__Testaction_Goal));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(msg_manage__action__Testaction_Goal));
  bool success = msg_manage__action__Testaction_Goal__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
msg_manage__action__Testaction_Goal__destroy(msg_manage__action__Testaction_Goal * msg)
{
  if (msg) {
    msg_manage__action__Testaction_Goal__fini(msg);
  }
  free(msg);
}


bool
msg_manage__action__Testaction_Goal__Sequence__init(msg_manage__action__Testaction_Goal__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  msg_manage__action__Testaction_Goal * data = NULL;
  if (size) {
    data = (msg_manage__action__Testaction_Goal *)calloc(size, sizeof(msg_manage__action__Testaction_Goal));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = msg_manage__action__Testaction_Goal__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        msg_manage__action__Testaction_Goal__fini(&data[i - 1]);
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
msg_manage__action__Testaction_Goal__Sequence__fini(msg_manage__action__Testaction_Goal__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      msg_manage__action__Testaction_Goal__fini(&array->data[i]);
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

msg_manage__action__Testaction_Goal__Sequence *
msg_manage__action__Testaction_Goal__Sequence__create(size_t size)
{
  msg_manage__action__Testaction_Goal__Sequence * array = (msg_manage__action__Testaction_Goal__Sequence *)malloc(sizeof(msg_manage__action__Testaction_Goal__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = msg_manage__action__Testaction_Goal__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
msg_manage__action__Testaction_Goal__Sequence__destroy(msg_manage__action__Testaction_Goal__Sequence * array)
{
  if (array) {
    msg_manage__action__Testaction_Goal__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `sequence`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
msg_manage__action__Testaction_Result__init(msg_manage__action__Testaction_Result * msg)
{
  if (!msg) {
    return false;
  }
  // sequence
  if (!rosidl_runtime_c__int32__Sequence__init(&msg->sequence, 0)) {
    msg_manage__action__Testaction_Result__fini(msg);
    return false;
  }
  return true;
}

void
msg_manage__action__Testaction_Result__fini(msg_manage__action__Testaction_Result * msg)
{
  if (!msg) {
    return;
  }
  // sequence
  rosidl_runtime_c__int32__Sequence__fini(&msg->sequence);
}

msg_manage__action__Testaction_Result *
msg_manage__action__Testaction_Result__create()
{
  msg_manage__action__Testaction_Result * msg = (msg_manage__action__Testaction_Result *)malloc(sizeof(msg_manage__action__Testaction_Result));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(msg_manage__action__Testaction_Result));
  bool success = msg_manage__action__Testaction_Result__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
msg_manage__action__Testaction_Result__destroy(msg_manage__action__Testaction_Result * msg)
{
  if (msg) {
    msg_manage__action__Testaction_Result__fini(msg);
  }
  free(msg);
}


bool
msg_manage__action__Testaction_Result__Sequence__init(msg_manage__action__Testaction_Result__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  msg_manage__action__Testaction_Result * data = NULL;
  if (size) {
    data = (msg_manage__action__Testaction_Result *)calloc(size, sizeof(msg_manage__action__Testaction_Result));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = msg_manage__action__Testaction_Result__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        msg_manage__action__Testaction_Result__fini(&data[i - 1]);
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
msg_manage__action__Testaction_Result__Sequence__fini(msg_manage__action__Testaction_Result__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      msg_manage__action__Testaction_Result__fini(&array->data[i]);
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

msg_manage__action__Testaction_Result__Sequence *
msg_manage__action__Testaction_Result__Sequence__create(size_t size)
{
  msg_manage__action__Testaction_Result__Sequence * array = (msg_manage__action__Testaction_Result__Sequence *)malloc(sizeof(msg_manage__action__Testaction_Result__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = msg_manage__action__Testaction_Result__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
msg_manage__action__Testaction_Result__Sequence__destroy(msg_manage__action__Testaction_Result__Sequence * array)
{
  if (array) {
    msg_manage__action__Testaction_Result__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `partial_sequence`
// already included above
// #include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
msg_manage__action__Testaction_Feedback__init(msg_manage__action__Testaction_Feedback * msg)
{
  if (!msg) {
    return false;
  }
  // partial_sequence
  if (!rosidl_runtime_c__int32__Sequence__init(&msg->partial_sequence, 0)) {
    msg_manage__action__Testaction_Feedback__fini(msg);
    return false;
  }
  return true;
}

void
msg_manage__action__Testaction_Feedback__fini(msg_manage__action__Testaction_Feedback * msg)
{
  if (!msg) {
    return;
  }
  // partial_sequence
  rosidl_runtime_c__int32__Sequence__fini(&msg->partial_sequence);
}

msg_manage__action__Testaction_Feedback *
msg_manage__action__Testaction_Feedback__create()
{
  msg_manage__action__Testaction_Feedback * msg = (msg_manage__action__Testaction_Feedback *)malloc(sizeof(msg_manage__action__Testaction_Feedback));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(msg_manage__action__Testaction_Feedback));
  bool success = msg_manage__action__Testaction_Feedback__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
msg_manage__action__Testaction_Feedback__destroy(msg_manage__action__Testaction_Feedback * msg)
{
  if (msg) {
    msg_manage__action__Testaction_Feedback__fini(msg);
  }
  free(msg);
}


bool
msg_manage__action__Testaction_Feedback__Sequence__init(msg_manage__action__Testaction_Feedback__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  msg_manage__action__Testaction_Feedback * data = NULL;
  if (size) {
    data = (msg_manage__action__Testaction_Feedback *)calloc(size, sizeof(msg_manage__action__Testaction_Feedback));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = msg_manage__action__Testaction_Feedback__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        msg_manage__action__Testaction_Feedback__fini(&data[i - 1]);
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
msg_manage__action__Testaction_Feedback__Sequence__fini(msg_manage__action__Testaction_Feedback__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      msg_manage__action__Testaction_Feedback__fini(&array->data[i]);
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

msg_manage__action__Testaction_Feedback__Sequence *
msg_manage__action__Testaction_Feedback__Sequence__create(size_t size)
{
  msg_manage__action__Testaction_Feedback__Sequence * array = (msg_manage__action__Testaction_Feedback__Sequence *)malloc(sizeof(msg_manage__action__Testaction_Feedback__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = msg_manage__action__Testaction_Feedback__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
msg_manage__action__Testaction_Feedback__Sequence__destroy(msg_manage__action__Testaction_Feedback__Sequence * array)
{
  if (array) {
    msg_manage__action__Testaction_Feedback__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `goal_id`
#include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `goal`
// already included above
// #include "msg_manage/action/detail/testaction__functions.h"

bool
msg_manage__action__Testaction_SendGoal_Request__init(msg_manage__action__Testaction_SendGoal_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    msg_manage__action__Testaction_SendGoal_Request__fini(msg);
    return false;
  }
  // goal
  if (!msg_manage__action__Testaction_Goal__init(&msg->goal)) {
    msg_manage__action__Testaction_SendGoal_Request__fini(msg);
    return false;
  }
  return true;
}

void
msg_manage__action__Testaction_SendGoal_Request__fini(msg_manage__action__Testaction_SendGoal_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // goal
  msg_manage__action__Testaction_Goal__fini(&msg->goal);
}

msg_manage__action__Testaction_SendGoal_Request *
msg_manage__action__Testaction_SendGoal_Request__create()
{
  msg_manage__action__Testaction_SendGoal_Request * msg = (msg_manage__action__Testaction_SendGoal_Request *)malloc(sizeof(msg_manage__action__Testaction_SendGoal_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(msg_manage__action__Testaction_SendGoal_Request));
  bool success = msg_manage__action__Testaction_SendGoal_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
msg_manage__action__Testaction_SendGoal_Request__destroy(msg_manage__action__Testaction_SendGoal_Request * msg)
{
  if (msg) {
    msg_manage__action__Testaction_SendGoal_Request__fini(msg);
  }
  free(msg);
}


bool
msg_manage__action__Testaction_SendGoal_Request__Sequence__init(msg_manage__action__Testaction_SendGoal_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  msg_manage__action__Testaction_SendGoal_Request * data = NULL;
  if (size) {
    data = (msg_manage__action__Testaction_SendGoal_Request *)calloc(size, sizeof(msg_manage__action__Testaction_SendGoal_Request));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = msg_manage__action__Testaction_SendGoal_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        msg_manage__action__Testaction_SendGoal_Request__fini(&data[i - 1]);
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
msg_manage__action__Testaction_SendGoal_Request__Sequence__fini(msg_manage__action__Testaction_SendGoal_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      msg_manage__action__Testaction_SendGoal_Request__fini(&array->data[i]);
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

msg_manage__action__Testaction_SendGoal_Request__Sequence *
msg_manage__action__Testaction_SendGoal_Request__Sequence__create(size_t size)
{
  msg_manage__action__Testaction_SendGoal_Request__Sequence * array = (msg_manage__action__Testaction_SendGoal_Request__Sequence *)malloc(sizeof(msg_manage__action__Testaction_SendGoal_Request__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = msg_manage__action__Testaction_SendGoal_Request__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
msg_manage__action__Testaction_SendGoal_Request__Sequence__destroy(msg_manage__action__Testaction_SendGoal_Request__Sequence * array)
{
  if (array) {
    msg_manage__action__Testaction_SendGoal_Request__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__functions.h"

bool
msg_manage__action__Testaction_SendGoal_Response__init(msg_manage__action__Testaction_SendGoal_Response * msg)
{
  if (!msg) {
    return false;
  }
  // accepted
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    msg_manage__action__Testaction_SendGoal_Response__fini(msg);
    return false;
  }
  return true;
}

void
msg_manage__action__Testaction_SendGoal_Response__fini(msg_manage__action__Testaction_SendGoal_Response * msg)
{
  if (!msg) {
    return;
  }
  // accepted
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
}

msg_manage__action__Testaction_SendGoal_Response *
msg_manage__action__Testaction_SendGoal_Response__create()
{
  msg_manage__action__Testaction_SendGoal_Response * msg = (msg_manage__action__Testaction_SendGoal_Response *)malloc(sizeof(msg_manage__action__Testaction_SendGoal_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(msg_manage__action__Testaction_SendGoal_Response));
  bool success = msg_manage__action__Testaction_SendGoal_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
msg_manage__action__Testaction_SendGoal_Response__destroy(msg_manage__action__Testaction_SendGoal_Response * msg)
{
  if (msg) {
    msg_manage__action__Testaction_SendGoal_Response__fini(msg);
  }
  free(msg);
}


bool
msg_manage__action__Testaction_SendGoal_Response__Sequence__init(msg_manage__action__Testaction_SendGoal_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  msg_manage__action__Testaction_SendGoal_Response * data = NULL;
  if (size) {
    data = (msg_manage__action__Testaction_SendGoal_Response *)calloc(size, sizeof(msg_manage__action__Testaction_SendGoal_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = msg_manage__action__Testaction_SendGoal_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        msg_manage__action__Testaction_SendGoal_Response__fini(&data[i - 1]);
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
msg_manage__action__Testaction_SendGoal_Response__Sequence__fini(msg_manage__action__Testaction_SendGoal_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      msg_manage__action__Testaction_SendGoal_Response__fini(&array->data[i]);
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

msg_manage__action__Testaction_SendGoal_Response__Sequence *
msg_manage__action__Testaction_SendGoal_Response__Sequence__create(size_t size)
{
  msg_manage__action__Testaction_SendGoal_Response__Sequence * array = (msg_manage__action__Testaction_SendGoal_Response__Sequence *)malloc(sizeof(msg_manage__action__Testaction_SendGoal_Response__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = msg_manage__action__Testaction_SendGoal_Response__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
msg_manage__action__Testaction_SendGoal_Response__Sequence__destroy(msg_manage__action__Testaction_SendGoal_Response__Sequence * array)
{
  if (array) {
    msg_manage__action__Testaction_SendGoal_Response__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"

bool
msg_manage__action__Testaction_GetResult_Request__init(msg_manage__action__Testaction_GetResult_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    msg_manage__action__Testaction_GetResult_Request__fini(msg);
    return false;
  }
  return true;
}

void
msg_manage__action__Testaction_GetResult_Request__fini(msg_manage__action__Testaction_GetResult_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
}

msg_manage__action__Testaction_GetResult_Request *
msg_manage__action__Testaction_GetResult_Request__create()
{
  msg_manage__action__Testaction_GetResult_Request * msg = (msg_manage__action__Testaction_GetResult_Request *)malloc(sizeof(msg_manage__action__Testaction_GetResult_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(msg_manage__action__Testaction_GetResult_Request));
  bool success = msg_manage__action__Testaction_GetResult_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
msg_manage__action__Testaction_GetResult_Request__destroy(msg_manage__action__Testaction_GetResult_Request * msg)
{
  if (msg) {
    msg_manage__action__Testaction_GetResult_Request__fini(msg);
  }
  free(msg);
}


bool
msg_manage__action__Testaction_GetResult_Request__Sequence__init(msg_manage__action__Testaction_GetResult_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  msg_manage__action__Testaction_GetResult_Request * data = NULL;
  if (size) {
    data = (msg_manage__action__Testaction_GetResult_Request *)calloc(size, sizeof(msg_manage__action__Testaction_GetResult_Request));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = msg_manage__action__Testaction_GetResult_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        msg_manage__action__Testaction_GetResult_Request__fini(&data[i - 1]);
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
msg_manage__action__Testaction_GetResult_Request__Sequence__fini(msg_manage__action__Testaction_GetResult_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      msg_manage__action__Testaction_GetResult_Request__fini(&array->data[i]);
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

msg_manage__action__Testaction_GetResult_Request__Sequence *
msg_manage__action__Testaction_GetResult_Request__Sequence__create(size_t size)
{
  msg_manage__action__Testaction_GetResult_Request__Sequence * array = (msg_manage__action__Testaction_GetResult_Request__Sequence *)malloc(sizeof(msg_manage__action__Testaction_GetResult_Request__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = msg_manage__action__Testaction_GetResult_Request__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
msg_manage__action__Testaction_GetResult_Request__Sequence__destroy(msg_manage__action__Testaction_GetResult_Request__Sequence * array)
{
  if (array) {
    msg_manage__action__Testaction_GetResult_Request__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `result`
// already included above
// #include "msg_manage/action/detail/testaction__functions.h"

bool
msg_manage__action__Testaction_GetResult_Response__init(msg_manage__action__Testaction_GetResult_Response * msg)
{
  if (!msg) {
    return false;
  }
  // status
  // result
  if (!msg_manage__action__Testaction_Result__init(&msg->result)) {
    msg_manage__action__Testaction_GetResult_Response__fini(msg);
    return false;
  }
  return true;
}

void
msg_manage__action__Testaction_GetResult_Response__fini(msg_manage__action__Testaction_GetResult_Response * msg)
{
  if (!msg) {
    return;
  }
  // status
  // result
  msg_manage__action__Testaction_Result__fini(&msg->result);
}

msg_manage__action__Testaction_GetResult_Response *
msg_manage__action__Testaction_GetResult_Response__create()
{
  msg_manage__action__Testaction_GetResult_Response * msg = (msg_manage__action__Testaction_GetResult_Response *)malloc(sizeof(msg_manage__action__Testaction_GetResult_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(msg_manage__action__Testaction_GetResult_Response));
  bool success = msg_manage__action__Testaction_GetResult_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
msg_manage__action__Testaction_GetResult_Response__destroy(msg_manage__action__Testaction_GetResult_Response * msg)
{
  if (msg) {
    msg_manage__action__Testaction_GetResult_Response__fini(msg);
  }
  free(msg);
}


bool
msg_manage__action__Testaction_GetResult_Response__Sequence__init(msg_manage__action__Testaction_GetResult_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  msg_manage__action__Testaction_GetResult_Response * data = NULL;
  if (size) {
    data = (msg_manage__action__Testaction_GetResult_Response *)calloc(size, sizeof(msg_manage__action__Testaction_GetResult_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = msg_manage__action__Testaction_GetResult_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        msg_manage__action__Testaction_GetResult_Response__fini(&data[i - 1]);
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
msg_manage__action__Testaction_GetResult_Response__Sequence__fini(msg_manage__action__Testaction_GetResult_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      msg_manage__action__Testaction_GetResult_Response__fini(&array->data[i]);
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

msg_manage__action__Testaction_GetResult_Response__Sequence *
msg_manage__action__Testaction_GetResult_Response__Sequence__create(size_t size)
{
  msg_manage__action__Testaction_GetResult_Response__Sequence * array = (msg_manage__action__Testaction_GetResult_Response__Sequence *)malloc(sizeof(msg_manage__action__Testaction_GetResult_Response__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = msg_manage__action__Testaction_GetResult_Response__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
msg_manage__action__Testaction_GetResult_Response__Sequence__destroy(msg_manage__action__Testaction_GetResult_Response__Sequence * array)
{
  if (array) {
    msg_manage__action__Testaction_GetResult_Response__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `feedback`
// already included above
// #include "msg_manage/action/detail/testaction__functions.h"

bool
msg_manage__action__Testaction_FeedbackMessage__init(msg_manage__action__Testaction_FeedbackMessage * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    msg_manage__action__Testaction_FeedbackMessage__fini(msg);
    return false;
  }
  // feedback
  if (!msg_manage__action__Testaction_Feedback__init(&msg->feedback)) {
    msg_manage__action__Testaction_FeedbackMessage__fini(msg);
    return false;
  }
  return true;
}

void
msg_manage__action__Testaction_FeedbackMessage__fini(msg_manage__action__Testaction_FeedbackMessage * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // feedback
  msg_manage__action__Testaction_Feedback__fini(&msg->feedback);
}

msg_manage__action__Testaction_FeedbackMessage *
msg_manage__action__Testaction_FeedbackMessage__create()
{
  msg_manage__action__Testaction_FeedbackMessage * msg = (msg_manage__action__Testaction_FeedbackMessage *)malloc(sizeof(msg_manage__action__Testaction_FeedbackMessage));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(msg_manage__action__Testaction_FeedbackMessage));
  bool success = msg_manage__action__Testaction_FeedbackMessage__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
msg_manage__action__Testaction_FeedbackMessage__destroy(msg_manage__action__Testaction_FeedbackMessage * msg)
{
  if (msg) {
    msg_manage__action__Testaction_FeedbackMessage__fini(msg);
  }
  free(msg);
}


bool
msg_manage__action__Testaction_FeedbackMessage__Sequence__init(msg_manage__action__Testaction_FeedbackMessage__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  msg_manage__action__Testaction_FeedbackMessage * data = NULL;
  if (size) {
    data = (msg_manage__action__Testaction_FeedbackMessage *)calloc(size, sizeof(msg_manage__action__Testaction_FeedbackMessage));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = msg_manage__action__Testaction_FeedbackMessage__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        msg_manage__action__Testaction_FeedbackMessage__fini(&data[i - 1]);
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
msg_manage__action__Testaction_FeedbackMessage__Sequence__fini(msg_manage__action__Testaction_FeedbackMessage__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      msg_manage__action__Testaction_FeedbackMessage__fini(&array->data[i]);
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

msg_manage__action__Testaction_FeedbackMessage__Sequence *
msg_manage__action__Testaction_FeedbackMessage__Sequence__create(size_t size)
{
  msg_manage__action__Testaction_FeedbackMessage__Sequence * array = (msg_manage__action__Testaction_FeedbackMessage__Sequence *)malloc(sizeof(msg_manage__action__Testaction_FeedbackMessage__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = msg_manage__action__Testaction_FeedbackMessage__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
msg_manage__action__Testaction_FeedbackMessage__Sequence__destroy(msg_manage__action__Testaction_FeedbackMessage__Sequence * array)
{
  if (array) {
    msg_manage__action__Testaction_FeedbackMessage__Sequence__fini(array);
  }
  free(array);
}
