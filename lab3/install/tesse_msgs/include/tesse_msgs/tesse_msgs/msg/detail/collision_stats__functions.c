// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from tesse_msgs:msg/CollisionStats.idl
// generated code does not contain a copyright notice
#include "tesse_msgs/msg/detail/collision_stats__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `object_name`
#include "rosidl_runtime_c/string_functions.h"

bool
tesse_msgs__msg__CollisionStats__init(tesse_msgs__msg__CollisionStats * msg)
{
  if (!msg) {
    return false;
  }
  // is_collision
  // object_name
  if (!rosidl_runtime_c__String__init(&msg->object_name)) {
    tesse_msgs__msg__CollisionStats__fini(msg);
    return false;
  }
  return true;
}

void
tesse_msgs__msg__CollisionStats__fini(tesse_msgs__msg__CollisionStats * msg)
{
  if (!msg) {
    return;
  }
  // is_collision
  // object_name
  rosidl_runtime_c__String__fini(&msg->object_name);
}

bool
tesse_msgs__msg__CollisionStats__are_equal(const tesse_msgs__msg__CollisionStats * lhs, const tesse_msgs__msg__CollisionStats * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // is_collision
  if (lhs->is_collision != rhs->is_collision) {
    return false;
  }
  // object_name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->object_name), &(rhs->object_name)))
  {
    return false;
  }
  return true;
}

bool
tesse_msgs__msg__CollisionStats__copy(
  const tesse_msgs__msg__CollisionStats * input,
  tesse_msgs__msg__CollisionStats * output)
{
  if (!input || !output) {
    return false;
  }
  // is_collision
  output->is_collision = input->is_collision;
  // object_name
  if (!rosidl_runtime_c__String__copy(
      &(input->object_name), &(output->object_name)))
  {
    return false;
  }
  return true;
}

tesse_msgs__msg__CollisionStats *
tesse_msgs__msg__CollisionStats__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tesse_msgs__msg__CollisionStats * msg = (tesse_msgs__msg__CollisionStats *)allocator.allocate(sizeof(tesse_msgs__msg__CollisionStats), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(tesse_msgs__msg__CollisionStats));
  bool success = tesse_msgs__msg__CollisionStats__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
tesse_msgs__msg__CollisionStats__destroy(tesse_msgs__msg__CollisionStats * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    tesse_msgs__msg__CollisionStats__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
tesse_msgs__msg__CollisionStats__Sequence__init(tesse_msgs__msg__CollisionStats__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tesse_msgs__msg__CollisionStats * data = NULL;

  if (size) {
    data = (tesse_msgs__msg__CollisionStats *)allocator.zero_allocate(size, sizeof(tesse_msgs__msg__CollisionStats), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = tesse_msgs__msg__CollisionStats__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        tesse_msgs__msg__CollisionStats__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
tesse_msgs__msg__CollisionStats__Sequence__fini(tesse_msgs__msg__CollisionStats__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      tesse_msgs__msg__CollisionStats__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

tesse_msgs__msg__CollisionStats__Sequence *
tesse_msgs__msg__CollisionStats__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tesse_msgs__msg__CollisionStats__Sequence * array = (tesse_msgs__msg__CollisionStats__Sequence *)allocator.allocate(sizeof(tesse_msgs__msg__CollisionStats__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = tesse_msgs__msg__CollisionStats__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
tesse_msgs__msg__CollisionStats__Sequence__destroy(tesse_msgs__msg__CollisionStats__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    tesse_msgs__msg__CollisionStats__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
tesse_msgs__msg__CollisionStats__Sequence__are_equal(const tesse_msgs__msg__CollisionStats__Sequence * lhs, const tesse_msgs__msg__CollisionStats__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!tesse_msgs__msg__CollisionStats__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
tesse_msgs__msg__CollisionStats__Sequence__copy(
  const tesse_msgs__msg__CollisionStats__Sequence * input,
  tesse_msgs__msg__CollisionStats__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(tesse_msgs__msg__CollisionStats);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    tesse_msgs__msg__CollisionStats * data =
      (tesse_msgs__msg__CollisionStats *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!tesse_msgs__msg__CollisionStats__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          tesse_msgs__msg__CollisionStats__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!tesse_msgs__msg__CollisionStats__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
