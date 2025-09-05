// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from tesse_msgs:msg/CollisionStats.idl
// generated code does not contain a copyright notice
#include "tesse_msgs/msg/detail/collision_stats__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "tesse_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "tesse_msgs/msg/detail/collision_stats__struct.h"
#include "tesse_msgs/msg/detail/collision_stats__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "rosidl_runtime_c/string.h"  // object_name
#include "rosidl_runtime_c/string_functions.h"  // object_name

// forward declare type support functions


using _CollisionStats__ros_msg_type = tesse_msgs__msg__CollisionStats;

static bool _CollisionStats__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _CollisionStats__ros_msg_type * ros_message = static_cast<const _CollisionStats__ros_msg_type *>(untyped_ros_message);
  // Field name: is_collision
  {
    cdr << (ros_message->is_collision ? true : false);
  }

  // Field name: object_name
  {
    const rosidl_runtime_c__String * str = &ros_message->object_name;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  return true;
}

static bool _CollisionStats__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _CollisionStats__ros_msg_type * ros_message = static_cast<_CollisionStats__ros_msg_type *>(untyped_ros_message);
  // Field name: is_collision
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->is_collision = tmp ? true : false;
  }

  // Field name: object_name
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->object_name.data) {
      rosidl_runtime_c__String__init(&ros_message->object_name);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->object_name,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'object_name'\n");
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_tesse_msgs
size_t get_serialized_size_tesse_msgs__msg__CollisionStats(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _CollisionStats__ros_msg_type * ros_message = static_cast<const _CollisionStats__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name is_collision
  {
    size_t item_size = sizeof(ros_message->is_collision);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name object_name
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->object_name.size + 1);

  return current_alignment - initial_alignment;
}

static uint32_t _CollisionStats__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_tesse_msgs__msg__CollisionStats(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_tesse_msgs
size_t max_serialized_size_tesse_msgs__msg__CollisionStats(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: is_collision
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: object_name
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = tesse_msgs__msg__CollisionStats;
    is_plain =
      (
      offsetof(DataType, object_name) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _CollisionStats__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_tesse_msgs__msg__CollisionStats(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_CollisionStats = {
  "tesse_msgs::msg",
  "CollisionStats",
  _CollisionStats__cdr_serialize,
  _CollisionStats__cdr_deserialize,
  _CollisionStats__get_serialized_size,
  _CollisionStats__max_serialized_size
};

static rosidl_message_type_support_t _CollisionStats__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_CollisionStats,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, tesse_msgs, msg, CollisionStats)() {
  return &_CollisionStats__type_support;
}

#if defined(__cplusplus)
}
#endif
