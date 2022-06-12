// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from msg_manage:msg/Motor2.idl
// generated code does not contain a copyright notice

#ifndef MSG_MANAGE__MSG__DETAIL__MOTOR2__BUILDER_HPP_
#define MSG_MANAGE__MSG__DETAIL__MOTOR2__BUILDER_HPP_

#include "msg_manage/msg/detail/motor2__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace msg_manage
{

namespace msg
{

namespace builder
{

class Init_Motor2_fram_id
{
public:
  explicit Init_Motor2_fram_id(::msg_manage::msg::Motor2 & msg)
  : msg_(msg)
  {}
  ::msg_manage::msg::Motor2 fram_id(::msg_manage::msg::Motor2::_fram_id_type arg)
  {
    msg_.fram_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::msg_manage::msg::Motor2 msg_;
};

class Init_Motor2_speed_r
{
public:
  explicit Init_Motor2_speed_r(::msg_manage::msg::Motor2 & msg)
  : msg_(msg)
  {}
  Init_Motor2_fram_id speed_r(::msg_manage::msg::Motor2::_speed_r_type arg)
  {
    msg_.speed_r = std::move(arg);
    return Init_Motor2_fram_id(msg_);
  }

private:
  ::msg_manage::msg::Motor2 msg_;
};

class Init_Motor2_speed_l
{
public:
  Init_Motor2_speed_l()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Motor2_speed_r speed_l(::msg_manage::msg::Motor2::_speed_l_type arg)
  {
    msg_.speed_l = std::move(arg);
    return Init_Motor2_speed_r(msg_);
  }

private:
  ::msg_manage::msg::Motor2 msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::msg_manage::msg::Motor2>()
{
  return msg_manage::msg::builder::Init_Motor2_speed_l();
}

}  // namespace msg_manage

#endif  // MSG_MANAGE__MSG__DETAIL__MOTOR2__BUILDER_HPP_
