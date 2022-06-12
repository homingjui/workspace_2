// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from msg_manage:srv/TwistSrv.idl
// generated code does not contain a copyright notice

#ifndef MSG_MANAGE__SRV__DETAIL__TWIST_SRV__TRAITS_HPP_
#define MSG_MANAGE__SRV__DETAIL__TWIST_SRV__TRAITS_HPP_

#include "msg_manage/srv/detail/twist_srv__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<msg_manage::srv::TwistSrv_Request>()
{
  return "msg_manage::srv::TwistSrv_Request";
}

template<>
inline const char * name<msg_manage::srv::TwistSrv_Request>()
{
  return "msg_manage/srv/TwistSrv_Request";
}

template<>
struct has_fixed_size<msg_manage::srv::TwistSrv_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<msg_manage::srv::TwistSrv_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<msg_manage::srv::TwistSrv_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<msg_manage::srv::TwistSrv_Response>()
{
  return "msg_manage::srv::TwistSrv_Response";
}

template<>
inline const char * name<msg_manage::srv::TwistSrv_Response>()
{
  return "msg_manage/srv/TwistSrv_Response";
}

template<>
struct has_fixed_size<msg_manage::srv::TwistSrv_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<msg_manage::srv::TwistSrv_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<msg_manage::srv::TwistSrv_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<msg_manage::srv::TwistSrv>()
{
  return "msg_manage::srv::TwistSrv";
}

template<>
inline const char * name<msg_manage::srv::TwistSrv>()
{
  return "msg_manage/srv/TwistSrv";
}

template<>
struct has_fixed_size<msg_manage::srv::TwistSrv>
  : std::integral_constant<
    bool,
    has_fixed_size<msg_manage::srv::TwistSrv_Request>::value &&
    has_fixed_size<msg_manage::srv::TwistSrv_Response>::value
  >
{
};

template<>
struct has_bounded_size<msg_manage::srv::TwistSrv>
  : std::integral_constant<
    bool,
    has_bounded_size<msg_manage::srv::TwistSrv_Request>::value &&
    has_bounded_size<msg_manage::srv::TwistSrv_Response>::value
  >
{
};

template<>
struct is_service<msg_manage::srv::TwistSrv>
  : std::true_type
{
};

template<>
struct is_service_request<msg_manage::srv::TwistSrv_Request>
  : std::true_type
{
};

template<>
struct is_service_response<msg_manage::srv::TwistSrv_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // MSG_MANAGE__SRV__DETAIL__TWIST_SRV__TRAITS_HPP_
