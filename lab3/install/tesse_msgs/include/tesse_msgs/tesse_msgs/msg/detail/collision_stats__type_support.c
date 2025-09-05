// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from tesse_msgs:msg/CollisionStats.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "tesse_msgs/msg/detail/collision_stats__rosidl_typesupport_introspection_c.h"
#include "tesse_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "tesse_msgs/msg/detail/collision_stats__functions.h"
#include "tesse_msgs/msg/detail/collision_stats__struct.h"


// Include directives for member types
// Member `object_name`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void tesse_msgs__msg__CollisionStats__rosidl_typesupport_introspection_c__CollisionStats_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  tesse_msgs__msg__CollisionStats__init(message_memory);
}

void tesse_msgs__msg__CollisionStats__rosidl_typesupport_introspection_c__CollisionStats_fini_function(void * message_memory)
{
  tesse_msgs__msg__CollisionStats__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember tesse_msgs__msg__CollisionStats__rosidl_typesupport_introspection_c__CollisionStats_message_member_array[2] = {
  {
    "is_collision",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tesse_msgs__msg__CollisionStats, is_collision),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "object_name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tesse_msgs__msg__CollisionStats, object_name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers tesse_msgs__msg__CollisionStats__rosidl_typesupport_introspection_c__CollisionStats_message_members = {
  "tesse_msgs__msg",  // message namespace
  "CollisionStats",  // message name
  2,  // number of fields
  sizeof(tesse_msgs__msg__CollisionStats),
  tesse_msgs__msg__CollisionStats__rosidl_typesupport_introspection_c__CollisionStats_message_member_array,  // message members
  tesse_msgs__msg__CollisionStats__rosidl_typesupport_introspection_c__CollisionStats_init_function,  // function to initialize message memory (memory has to be allocated)
  tesse_msgs__msg__CollisionStats__rosidl_typesupport_introspection_c__CollisionStats_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t tesse_msgs__msg__CollisionStats__rosidl_typesupport_introspection_c__CollisionStats_message_type_support_handle = {
  0,
  &tesse_msgs__msg__CollisionStats__rosidl_typesupport_introspection_c__CollisionStats_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_tesse_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tesse_msgs, msg, CollisionStats)() {
  if (!tesse_msgs__msg__CollisionStats__rosidl_typesupport_introspection_c__CollisionStats_message_type_support_handle.typesupport_identifier) {
    tesse_msgs__msg__CollisionStats__rosidl_typesupport_introspection_c__CollisionStats_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &tesse_msgs__msg__CollisionStats__rosidl_typesupport_introspection_c__CollisionStats_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
