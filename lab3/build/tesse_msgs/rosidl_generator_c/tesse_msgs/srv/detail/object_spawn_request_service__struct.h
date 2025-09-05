// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from tesse_msgs:srv/ObjectSpawnRequestService.idl
// generated code does not contain a copyright notice

#ifndef TESSE_MSGS__SRV__DETAIL__OBJECT_SPAWN_REQUEST_SERVICE__STRUCT_H_
#define TESSE_MSGS__SRV__DETAIL__OBJECT_SPAWN_REQUEST_SERVICE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'pose'
#include "geometry_msgs/msg/detail/pose__struct.h"
// Member 'params'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in srv/ObjectSpawnRequestService in the package tesse_msgs.
typedef struct tesse_msgs__srv__ObjectSpawnRequestService_Request
{
  /// Request fields
  /// integer id of object class
  int8_t id;
  geometry_msgs__msg__Pose pose;
  rosidl_runtime_c__double__Sequence params;
} tesse_msgs__srv__ObjectSpawnRequestService_Request;

// Struct for a sequence of tesse_msgs__srv__ObjectSpawnRequestService_Request.
typedef struct tesse_msgs__srv__ObjectSpawnRequestService_Request__Sequence
{
  tesse_msgs__srv__ObjectSpawnRequestService_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tesse_msgs__srv__ObjectSpawnRequestService_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/ObjectSpawnRequestService in the package tesse_msgs.
typedef struct tesse_msgs__srv__ObjectSpawnRequestService_Response
{
  /// Response fields
  /// true if object spawns without exception, false otw
  bool success;
} tesse_msgs__srv__ObjectSpawnRequestService_Response;

// Struct for a sequence of tesse_msgs__srv__ObjectSpawnRequestService_Response.
typedef struct tesse_msgs__srv__ObjectSpawnRequestService_Response__Sequence
{
  tesse_msgs__srv__ObjectSpawnRequestService_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tesse_msgs__srv__ObjectSpawnRequestService_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TESSE_MSGS__SRV__DETAIL__OBJECT_SPAWN_REQUEST_SERVICE__STRUCT_H_
