// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from msg_manage:msg/Vehicle.idl
// generated code does not contain a copyright notice

#ifndef MSG_MANAGE__MSG__DETAIL__VEHICLE__BUILDER_HPP_
#define MSG_MANAGE__MSG__DETAIL__VEHICLE__BUILDER_HPP_

#include "msg_manage/msg/detail/vehicle__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace msg_manage
{

namespace msg
{

namespace builder
{

class Init_Vehicle_vehicle_size
{
public:
  explicit Init_Vehicle_vehicle_size(::msg_manage::msg::Vehicle & msg)
  : msg_(msg)
  {}
  ::msg_manage::msg::Vehicle vehicle_size(::msg_manage::msg::Vehicle::_vehicle_size_type arg)
  {
    msg_.vehicle_size = std::move(arg);
    return std::move(msg_);
  }

private:
  ::msg_manage::msg::Vehicle msg_;
};

class Init_Vehicle_control_status
{
public:
  explicit Init_Vehicle_control_status(::msg_manage::msg::Vehicle & msg)
  : msg_(msg)
  {}
  Init_Vehicle_vehicle_size control_status(::msg_manage::msg::Vehicle::_control_status_type arg)
  {
    msg_.control_status = std::move(arg);
    return Init_Vehicle_vehicle_size(msg_);
  }

private:
  ::msg_manage::msg::Vehicle msg_;
};

class Init_Vehicle_turn_rate
{
public:
  explicit Init_Vehicle_turn_rate(::msg_manage::msg::Vehicle & msg)
  : msg_(msg)
  {}
  Init_Vehicle_control_status turn_rate(::msg_manage::msg::Vehicle::_turn_rate_type arg)
  {
    msg_.turn_rate = std::move(arg);
    return Init_Vehicle_control_status(msg_);
  }

private:
  ::msg_manage::msg::Vehicle msg_;
};

class Init_Vehicle_turn_angle
{
public:
  explicit Init_Vehicle_turn_angle(::msg_manage::msg::Vehicle & msg)
  : msg_(msg)
  {}
  Init_Vehicle_turn_rate turn_angle(::msg_manage::msg::Vehicle::_turn_angle_type arg)
  {
    msg_.turn_angle = std::move(arg);
    return Init_Vehicle_turn_rate(msg_);
  }

private:
  ::msg_manage::msg::Vehicle msg_;
};

class Init_Vehicle_heading
{
public:
  explicit Init_Vehicle_heading(::msg_manage::msg::Vehicle & msg)
  : msg_(msg)
  {}
  Init_Vehicle_turn_angle heading(::msg_manage::msg::Vehicle::_heading_type arg)
  {
    msg_.heading = std::move(arg);
    return Init_Vehicle_turn_angle(msg_);
  }

private:
  ::msg_manage::msg::Vehicle msg_;
};

class Init_Vehicle_acceleration
{
public:
  explicit Init_Vehicle_acceleration(::msg_manage::msg::Vehicle & msg)
  : msg_(msg)
  {}
  Init_Vehicle_heading acceleration(::msg_manage::msg::Vehicle::_acceleration_type arg)
  {
    msg_.acceleration = std::move(arg);
    return Init_Vehicle_heading(msg_);
  }

private:
  ::msg_manage::msg::Vehicle msg_;
};

class Init_Vehicle_speed
{
public:
  explicit Init_Vehicle_speed(::msg_manage::msg::Vehicle & msg)
  : msg_(msg)
  {}
  Init_Vehicle_acceleration speed(::msg_manage::msg::Vehicle::_speed_type arg)
  {
    msg_.speed = std::move(arg);
    return Init_Vehicle_acceleration(msg_);
  }

private:
  ::msg_manage::msg::Vehicle msg_;
};

class Init_Vehicle_position_accuracy
{
public:
  explicit Init_Vehicle_position_accuracy(::msg_manage::msg::Vehicle & msg)
  : msg_(msg)
  {}
  Init_Vehicle_speed position_accuracy(::msg_manage::msg::Vehicle::_position_accuracy_type arg)
  {
    msg_.position_accuracy = std::move(arg);
    return Init_Vehicle_speed(msg_);
  }

private:
  ::msg_manage::msg::Vehicle msg_;
};

class Init_Vehicle_position
{
public:
  explicit Init_Vehicle_position(::msg_manage::msg::Vehicle & msg)
  : msg_(msg)
  {}
  Init_Vehicle_position_accuracy position(::msg_manage::msg::Vehicle::_position_type arg)
  {
    msg_.position = std::move(arg);
    return Init_Vehicle_position_accuracy(msg_);
  }

private:
  ::msg_manage::msg::Vehicle msg_;
};

class Init_Vehicle_header
{
public:
  Init_Vehicle_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Vehicle_position header(::msg_manage::msg::Vehicle::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_Vehicle_position(msg_);
  }

private:
  ::msg_manage::msg::Vehicle msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::msg_manage::msg::Vehicle>()
{
  return msg_manage::msg::builder::Init_Vehicle_header();
}

}  // namespace msg_manage

#endif  // MSG_MANAGE__MSG__DETAIL__VEHICLE__BUILDER_HPP_
