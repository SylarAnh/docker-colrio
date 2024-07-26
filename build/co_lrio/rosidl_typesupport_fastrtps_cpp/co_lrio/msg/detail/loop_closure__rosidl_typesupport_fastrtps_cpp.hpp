// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from co_lrio:msg/LoopClosure.idl
// generated code does not contain a copyright notice

#ifndef CO_LRIO__MSG__DETAIL__LOOP_CLOSURE__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define CO_LRIO__MSG__DETAIL__LOOP_CLOSURE__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "co_lrio/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "co_lrio/msg/detail/loop_closure__struct.hpp"

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

#include "fastcdr/Cdr.h"

namespace co_lrio
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_co_lrio
cdr_serialize(
  const co_lrio::msg::LoopClosure & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_co_lrio
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  co_lrio::msg::LoopClosure & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_co_lrio
get_serialized_size(
  const co_lrio::msg::LoopClosure & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_co_lrio
max_serialized_size_LoopClosure(
  bool & full_bounded,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace co_lrio

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_co_lrio
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, co_lrio, msg, LoopClosure)();

#ifdef __cplusplus
}
#endif

#endif  // CO_LRIO__MSG__DETAIL__LOOP_CLOSURE__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
