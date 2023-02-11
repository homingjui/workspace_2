// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from msg_manage:msg/Vehicle.idl
// generated code does not contain a copyright notice

#ifndef MSG_MANAGE__MSG__DETAIL__VEHICLE__TRAITS_HPP_
#define MSG_MANAGE__MSG__DETAIL__VEHICLE__TRAITS_HPP_

#include "msg_manage/msg/detail/vehicle__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'position'
// Member 'speed'
// Member 'acceleration'
// Member 'vehicle_size'
#include "geometry_msgs/msg/detail/vector3__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<msg_manage::msg::Vehicle>()
{
  return "msg_manage::msg::Vehicle";
}

template<>
inline const char * name<msg_manage::msg::Vehicle>()
{
  return "msg_manage/msg/Vehicle";
}

template<>
struct has_fixed_size<msg_manage::msg::Vehicle>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::Vector3>::value && has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<msg_manage::msg::Vehicle>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::Vector3>::value && has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<msg_manage::msg::Vehicle>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MSG_MANAGE__MSG__DETAIL__VEHICLE__TRAITS_HPP_
