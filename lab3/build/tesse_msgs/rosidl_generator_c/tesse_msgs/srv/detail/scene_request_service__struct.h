// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from tesse_msgs:srv/SceneRequestService.idl
// generated code does not contain a copyright notice

#ifndef TESSE_MSGS__SRV__DETAIL__SCENE_REQUEST_SERVICE__STRUCT_H_
#define TESSE_MSGS__SRV__DETAIL__SCENE_REQUEST_SERVICE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/SceneRequestService in the package tesse_msgs.
typedef struct tesse_msgs__srv__SceneRequestService_Request
{
  /// Request fields
  /// integer id of scene request
  int8_t id;
} tesse_msgs__srv__SceneRequestService_Request;

// Struct for a sequence of tesse_msgs__srv__SceneRequestService_Request.
typedef struct tesse_msgs__srv__SceneRequestService_Request__Sequence
{
  tesse_msgs__srv__SceneRequestService_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tesse_msgs__srv__SceneRequestService_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/SceneRequestService in the package tesse_msgs.
typedef struct tesse_msgs__srv__SceneRequestService_Response
{
  /// Response fields
  /// true if scene change was completed without exception, false otw
  bool success;
} tesse_msgs__srv__SceneRequestService_Response;

// Struct for a sequence of tesse_msgs__srv__SceneRequestService_Response.
typedef struct tesse_msgs__srv__SceneRequestService_Response__Sequence
{
  tesse_msgs__srv__SceneRequestService_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tesse_msgs__srv__SceneRequestService_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TESSE_MSGS__SRV__DETAIL__SCENE_REQUEST_SERVICE__STRUCT_H_
