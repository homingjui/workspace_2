// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from msg_manage:msg/Motor2.idl
// generated code does not contain a copyright notice

#ifndef MSG_MANAGE__MSG__DETAIL__MOTOR2__TRAITS_HPP_
#define MSG_MANAGE__MSG__DETAIL__MOTOR2__TRAITS_HPP_

#include "msg_manage/msg/detail/motor2__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<msg_manage::msg::Motor2>()
{
  return "msg_manage::msg::Motor2";
}

template<>
inline const char * name<msg_manage::msg::Motor2>()
{
  return "msg_manage/msg/Motor2";
}

template<>
struct has_fixed_size<msg_manage::msg::Motor2>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<msg_manage::msg::Motor2>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<msg_manage::msg::Motor2>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MSG_MANAGE__MSG__DETAIL__MOTOR2__TRAITS_HPP_
