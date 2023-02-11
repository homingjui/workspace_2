// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from msg_manage:msg/Vehicle.idl
// generated code does not contain a copyright notice

#ifndef MSG_MANAGE__MSG__DETAIL__VEHICLE__STRUCT_HPP_
#define MSG_MANAGE__MSG__DETAIL__VEHICLE__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"
// Member 'position'
// Member 'speed'
// Member 'acceleration'
// Member 'vehicle_size'
#include "geometry_msgs/msg/detail/vector3__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__msg_manage__msg__Vehicle __attribute__((deprecated))
#else
# define DEPRECATED__msg_manage__msg__Vehicle __declspec(deprecated)
#endif

namespace msg_manage
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Vehicle_
{
  using Type = Vehicle_<ContainerAllocator>;

  explicit Vehicle_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    position(_init),
    speed(_init),
    acceleration(_init),
    vehicle_size(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->position_accuracy = 0.0;
      this->heading = 0.0;
      this->turn_angle = 0.0;
      this->turn_rate = 0.0;
      this->control_status = 0;
    }
  }

  explicit Vehicle_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    position(_alloc, _init),
    speed(_alloc, _init),
    acceleration(_alloc, _init),
    vehicle_size(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->position_accuracy = 0.0;
      this->heading = 0.0;
      this->turn_angle = 0.0;
      this->turn_rate = 0.0;
      this->control_status = 0;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _position_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _position_type position;
  using _position_accuracy_type =
    double;
  _position_accuracy_type position_accuracy;
  using _speed_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _speed_type speed;
  using _acceleration_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _acceleration_type acceleration;
  using _heading_type =
    double;
  _heading_type heading;
  using _turn_angle_type =
    double;
  _turn_angle_type turn_angle;
  using _turn_rate_type =
    double;
  _turn_rate_type turn_rate;
  using _control_status_type =
    uint8_t;
  _control_status_type control_status;
  using _vehicle_size_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _vehicle_size_type vehicle_size;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__position(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->position = _arg;
    return *this;
  }
  Type & set__position_accuracy(
    const double & _arg)
  {
    this->position_accuracy = _arg;
    return *this;
  }
  Type & set__speed(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->speed = _arg;
    return *this;
  }
  Type & set__acceleration(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->acceleration = _arg;
    return *this;
  }
  Type & set__heading(
    const double & _arg)
  {
    this->heading = _arg;
    return *this;
  }
  Type & set__turn_angle(
    const double & _arg)
  {
    this->turn_angle = _arg;
    return *this;
  }
  Type & set__turn_rate(
    const double & _arg)
  {
    this->turn_rate = _arg;
    return *this;
  }
  Type & set__control_status(
    const uint8_t & _arg)
  {
    this->control_status = _arg;
    return *this;
  }
  Type & set__vehicle_size(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->vehicle_size = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    msg_manage::msg::Vehicle_<ContainerAllocator> *;
  using ConstRawPtr =
    const msg_manage::msg::Vehicle_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<msg_manage::msg::Vehicle_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<msg_manage::msg::Vehicle_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      msg_manage::msg::Vehicle_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<msg_manage::msg::Vehicle_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      msg_manage::msg::Vehicle_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<msg_manage::msg::Vehicle_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<msg_manage::msg::Vehicle_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<msg_manage::msg::Vehicle_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__msg_manage__msg__Vehicle
    std::shared_ptr<msg_manage::msg::Vehicle_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__msg_manage__msg__Vehicle
    std::shared_ptr<msg_manage::msg::Vehicle_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Vehicle_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->position != other.position) {
      return false;
    }
    if (this->position_accuracy != other.position_accuracy) {
      return false;
    }
    if (this->speed != other.speed) {
      return false;
    }
    if (this->acceleration != other.acceleration) {
      return false;
    }
    if (this->heading != other.heading) {
      return false;
    }
    if (this->turn_angle != other.turn_angle) {
      return false;
    }
    if (this->turn_rate != other.turn_rate) {
      return false;
    }
    if (this->control_status != other.control_status) {
      return false;
    }
    if (this->vehicle_size != other.vehicle_size) {
      return false;
    }
    return true;
  }
  bool operator!=(const Vehicle_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Vehicle_

// alias to use template instance with default allocator
using Vehicle =
  msg_manage::msg::Vehicle_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace msg_manage

#endif  // MSG_MANAGE__MSG__DETAIL__VEHICLE__STRUCT_HPP_
