// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from tesse_msgs:srv/ObjectSpawnRequestService.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "tesse_msgs/srv/detail/object_spawn_request_service__rosidl_typesupport_introspection_c.h"
#include "tesse_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "tesse_msgs/srv/detail/object_spawn_request_service__functions.h"
#include "tesse_msgs/srv/detail/object_spawn_request_service__struct.h"


// Include directives for member types
// Member `pose`
#include "geometry_msgs/msg/pose.h"
// Member `pose`
#include "geometry_msgs/msg/detail/pose__rosidl_typesupport_introspection_c.h"
// Member `params`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void tesse_msgs__srv__ObjectSpawnRequestService_Request__rosidl_typesupport_introspection_c__ObjectSpawnRequestService_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  tesse_msgs__srv__ObjectSpawnRequestService_Request__init(message_memory);
}

void tesse_msgs__srv__ObjectSpawnRequestService_Request__rosidl_typesupport_introspection_c__ObjectSpawnRequestService_Request_fini_function(void * message_memory)
{
  tesse_msgs__srv__ObjectSpawnRequestService_Request__fini(message_memory);
}

size_t tesse_msgs__srv__ObjectSpawnRequestService_Request__rosidl_typesupport_introspection_c__size_function__ObjectSpawnRequestService_Request__params(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * tesse_msgs__srv__ObjectSpawnRequestService_Request__rosidl_typesupport_introspection_c__get_const_function__ObjectSpawnRequestService_Request__params(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * tesse_msgs__srv__ObjectSpawnRequestService_Request__rosidl_typesupport_introspection_c__get_function__ObjectSpawnRequestService_Request__params(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void tesse_msgs__srv__ObjectSpawnRequestService_Request__rosidl_typesupport_introspection_c__fetch_function__ObjectSpawnRequestService_Request__params(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    tesse_msgs__srv__ObjectSpawnRequestService_Request__rosidl_typesupport_introspection_c__get_const_function__ObjectSpawnRequestService_Request__params(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void tesse_msgs__srv__ObjectSpawnRequestService_Request__rosidl_typesupport_introspection_c__assign_function__ObjectSpawnRequestService_Request__params(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    tesse_msgs__srv__ObjectSpawnRequestService_Request__rosidl_typesupport_introspection_c__get_function__ObjectSpawnRequestService_Request__params(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool tesse_msgs__srv__ObjectSpawnRequestService_Request__rosidl_typesupport_introspection_c__resize_function__ObjectSpawnRequestService_Request__params(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember tesse_msgs__srv__ObjectSpawnRequestService_Request__rosidl_typesupport_introspection_c__ObjectSpawnRequestService_Request_message_member_array[3] = {
  {
    "id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tesse_msgs__srv__ObjectSpawnRequestService_Request, id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "pose",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tesse_msgs__srv__ObjectSpawnRequestService_Request, pose),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "params",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tesse_msgs__srv__ObjectSpawnRequestService_Request, params),  // bytes offset in struct
    NULL,  // default value
    tesse_msgs__srv__ObjectSpawnRequestService_Request__rosidl_typesupport_introspection_c__size_function__ObjectSpawnRequestService_Request__params,  // size() function pointer
    tesse_msgs__srv__ObjectSpawnRequestService_Request__rosidl_typesupport_introspection_c__get_const_function__ObjectSpawnRequestService_Request__params,  // get_const(index) function pointer
    tesse_msgs__srv__ObjectSpawnRequestService_Request__rosidl_typesupport_introspection_c__get_function__ObjectSpawnRequestService_Request__params,  // get(index) function pointer
    tesse_msgs__srv__ObjectSpawnRequestService_Request__rosidl_typesupport_introspection_c__fetch_function__ObjectSpawnRequestService_Request__params,  // fetch(index, &value) function pointer
    tesse_msgs__srv__ObjectSpawnRequestService_Request__rosidl_typesupport_introspection_c__assign_function__ObjectSpawnRequestService_Request__params,  // assign(index, value) function pointer
    tesse_msgs__srv__ObjectSpawnRequestService_Request__rosidl_typesupport_introspection_c__resize_function__ObjectSpawnRequestService_Request__params  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers tesse_msgs__srv__ObjectSpawnRequestService_Request__rosidl_typesupport_introspection_c__ObjectSpawnRequestService_Request_message_members = {
  "tesse_msgs__srv",  // message namespace
  "ObjectSpawnRequestService_Request",  // message name
  3,  // number of fields
  sizeof(tesse_msgs__srv__ObjectSpawnRequestService_Request),
  tesse_msgs__srv__ObjectSpawnRequestService_Request__rosidl_typesupport_introspection_c__ObjectSpawnRequestService_Request_message_member_array,  // message members
  tesse_msgs__srv__ObjectSpawnRequestService_Request__rosidl_typesupport_introspection_c__ObjectSpawnRequestService_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  tesse_msgs__srv__ObjectSpawnRequestService_Request__rosidl_typesupport_introspection_c__ObjectSpawnRequestService_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t tesse_msgs__srv__ObjectSpawnRequestService_Request__rosidl_typesupport_introspection_c__ObjectSpawnRequestService_Request_message_type_support_handle = {
  0,
  &tesse_msgs__srv__ObjectSpawnRequestService_Request__rosidl_typesupport_introspection_c__ObjectSpawnRequestService_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_tesse_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tesse_msgs, srv, ObjectSpawnRequestService_Request)() {
  tesse_msgs__srv__ObjectSpawnRequestService_Request__rosidl_typesupport_introspection_c__ObjectSpawnRequestService_Request_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Pose)();
  if (!tesse_msgs__srv__ObjectSpawnRequestService_Request__rosidl_typesupport_introspection_c__ObjectSpawnRequestService_Request_message_type_support_handle.typesupport_identifier) {
    tesse_msgs__srv__ObjectSpawnRequestService_Request__rosidl_typesupport_introspection_c__ObjectSpawnRequestService_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &tesse_msgs__srv__ObjectSpawnRequestService_Request__rosidl_typesupport_introspection_c__ObjectSpawnRequestService_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "tesse_msgs/srv/detail/object_spawn_request_service__rosidl_typesupport_introspection_c.h"
// already included above
// #include "tesse_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "tesse_msgs/srv/detail/object_spawn_request_service__functions.h"
// already included above
// #include "tesse_msgs/srv/detail/object_spawn_request_service__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void tesse_msgs__srv__ObjectSpawnRequestService_Response__rosidl_typesupport_introspection_c__ObjectSpawnRequestService_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  tesse_msgs__srv__ObjectSpawnRequestService_Response__init(message_memory);
}

void tesse_msgs__srv__ObjectSpawnRequestService_Response__rosidl_typesupport_introspection_c__ObjectSpawnRequestService_Response_fini_function(void * message_memory)
{
  tesse_msgs__srv__ObjectSpawnRequestService_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember tesse_msgs__srv__ObjectSpawnRequestService_Response__rosidl_typesupport_introspection_c__ObjectSpawnRequestService_Response_message_member_array[1] = {
  {
    "success",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tesse_msgs__srv__ObjectSpawnRequestService_Response, success),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers tesse_msgs__srv__ObjectSpawnRequestService_Response__rosidl_typesupport_introspection_c__ObjectSpawnRequestService_Response_message_members = {
  "tesse_msgs__srv",  // message namespace
  "ObjectSpawnRequestService_Response",  // message name
  1,  // number of fields
  sizeof(tesse_msgs__srv__ObjectSpawnRequestService_Response),
  tesse_msgs__srv__ObjectSpawnRequestService_Response__rosidl_typesupport_introspection_c__ObjectSpawnRequestService_Response_message_member_array,  // message members
  tesse_msgs__srv__ObjectSpawnRequestService_Response__rosidl_typesupport_introspection_c__ObjectSpawnRequestService_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  tesse_msgs__srv__ObjectSpawnRequestService_Response__rosidl_typesupport_introspection_c__ObjectSpawnRequestService_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t tesse_msgs__srv__ObjectSpawnRequestService_Response__rosidl_typesupport_introspection_c__ObjectSpawnRequestService_Response_message_type_support_handle = {
  0,
  &tesse_msgs__srv__ObjectSpawnRequestService_Response__rosidl_typesupport_introspection_c__ObjectSpawnRequestService_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_tesse_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tesse_msgs, srv, ObjectSpawnRequestService_Response)() {
  if (!tesse_msgs__srv__ObjectSpawnRequestService_Response__rosidl_typesupport_introspection_c__ObjectSpawnRequestService_Response_message_type_support_handle.typesupport_identifier) {
    tesse_msgs__srv__ObjectSpawnRequestService_Response__rosidl_typesupport_introspection_c__ObjectSpawnRequestService_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &tesse_msgs__srv__ObjectSpawnRequestService_Response__rosidl_typesupport_introspection_c__ObjectSpawnRequestService_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "tesse_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "tesse_msgs/srv/detail/object_spawn_request_service__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers tesse_msgs__srv__detail__object_spawn_request_service__rosidl_typesupport_introspection_c__ObjectSpawnRequestService_service_members = {
  "tesse_msgs__srv",  // service namespace
  "ObjectSpawnRequestService",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // tesse_msgs__srv__detail__object_spawn_request_service__rosidl_typesupport_introspection_c__ObjectSpawnRequestService_Request_message_type_support_handle,
  NULL  // response message
  // tesse_msgs__srv__detail__object_spawn_request_service__rosidl_typesupport_introspection_c__ObjectSpawnRequestService_Response_message_type_support_handle
};

static rosidl_service_type_support_t tesse_msgs__srv__detail__object_spawn_request_service__rosidl_typesupport_introspection_c__ObjectSpawnRequestService_service_type_support_handle = {
  0,
  &tesse_msgs__srv__detail__object_spawn_request_service__rosidl_typesupport_introspection_c__ObjectSpawnRequestService_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tesse_msgs, srv, ObjectSpawnRequestService_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tesse_msgs, srv, ObjectSpawnRequestService_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_tesse_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tesse_msgs, srv, ObjectSpawnRequestService)() {
  if (!tesse_msgs__srv__detail__object_spawn_request_service__rosidl_typesupport_introspection_c__ObjectSpawnRequestService_service_type_support_handle.typesupport_identifier) {
    tesse_msgs__srv__detail__object_spawn_request_service__rosidl_typesupport_introspection_c__ObjectSpawnRequestService_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)tesse_msgs__srv__detail__object_spawn_request_service__rosidl_typesupport_introspection_c__ObjectSpawnRequestService_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tesse_msgs, srv, ObjectSpawnRequestService_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tesse_msgs, srv, ObjectSpawnRequestService_Response)()->data;
  }

  return &tesse_msgs__srv__detail__object_spawn_request_service__rosidl_typesupport_introspection_c__ObjectSpawnRequestService_service_type_support_handle;
}
