// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from msg_manage:srv/TwistSrv.idl
// generated code does not contain a copyright notice

#ifndef MSG_MANAGE__SRV__DETAIL__TWIST_SRV__BUILDER_HPP_
#define MSG_MANAGE__SRV__DETAIL__TWIST_SRV__BUILDER_HPP_

#include "msg_manage/srv/detail/twist_srv__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace msg_manage
{

namespace srv
{

namespace builder
{

class Init_TwistSrv_Request_angular
{
public:
  explicit Init_TwistSrv_Request_angular(::msg_manage::srv::TwistSrv_Request & msg)
  : msg_(msg)
  {}
  ::msg_manage::srv::TwistSrv_Request angular(::msg_manage::srv::TwistSrv_Request::_angular_type arg)
  {
    msg_.angular = std::move(arg);
    return std::move(msg_);
  }

private:
  ::msg_manage::srv::TwistSrv_Request msg_;
};

class Init_TwistSrv_Request_linear
{
public:
  Init_TwistSrv_Request_linear()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TwistSrv_Request_angular linear(::msg_manage::srv::TwistSrv_Request::_linear_type arg)
  {
    msg_.linear = std::move(arg);
    return Init_TwistSrv_Request_angular(msg_);
  }

private:
  ::msg_manage::srv::TwistSrv_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::msg_manage::srv::TwistSrv_Request>()
{
  return msg_manage::srv::builder::Init_TwistSrv_Request_linear();
}

}  // namespace msg_manage


namespace msg_manage
{

namespace srv
{

namespace builder
{

class Init_TwistSrv_Response_result
{
public:
  Init_TwistSrv_Response_result()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::msg_manage::srv::TwistSrv_Response result(::msg_manage::srv::TwistSrv_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::msg_manage::srv::TwistSrv_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::msg_manage::srv::TwistSrv_Response>()
{
  return msg_manage::srv::builder::Init_TwistSrv_Response_result();
}

}  // namespace msg_manage

#endif  // MSG_MANAGE__SRV__DETAIL__TWIST_SRV__BUILDER_HPP_
