// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from msg_manage:msg/Num.idl
// generated code does not contain a copyright notice

#ifndef MSG_MANAGE__MSG__DETAIL__NUM__BUILDER_HPP_
#define MSG_MANAGE__MSG__DETAIL__NUM__BUILDER_HPP_

#include "msg_manage/msg/detail/num__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace msg_manage
{

namespace msg
{

namespace builder
{

class Init_Num_num
{
public:
  Init_Num_num()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::msg_manage::msg::Num num(::msg_manage::msg::Num::_num_type arg)
  {
    msg_.num = std::move(arg);
    return std::move(msg_);
  }

private:
  ::msg_manage::msg::Num msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::msg_manage::msg::Num>()
{
  return msg_manage::msg::builder::Init_Num_num();
}

}  // namespace msg_manage

#endif  // MSG_MANAGE__MSG__DETAIL__NUM__BUILDER_HPP_
