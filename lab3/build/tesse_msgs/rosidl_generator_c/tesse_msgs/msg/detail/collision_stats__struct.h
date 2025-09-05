// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from tesse_msgs:msg/CollisionStats.idl
// generated code does not contain a copyright notice

#ifndef TESSE_MSGS__MSG__DETAIL__COLLISION_STATS__STRUCT_H_
#define TESSE_MSGS__MSG__DETAIL__COLLISION_STATS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'object_name'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/CollisionStats in the package tesse_msgs.
/**
  * Collision Status and Statistics Message
  * if `is_collision` is True, then `object_name` will represent the object
  *   with which the agent is colliding.
 */
typedef struct tesse_msgs__msg__CollisionStats
{
  /// Header header
  bool is_collision;
  rosidl_runtime_c__String object_name;
} tesse_msgs__msg__CollisionStats;

// Struct for a sequence of tesse_msgs__msg__CollisionStats.
typedef struct tesse_msgs__msg__CollisionStats__Sequence
{
  tesse_msgs__msg__CollisionStats * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tesse_msgs__msg__CollisionStats__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TESSE_MSGS__MSG__DETAIL__COLLISION_STATS__STRUCT_H_
