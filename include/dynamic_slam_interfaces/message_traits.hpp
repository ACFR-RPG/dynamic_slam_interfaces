#pragma once

#include "dynamic_slam_interfaces/msg/object_odometry.hpp"
#include <message_filters/message_traits.h>
#include <type_traits>

namespace message_filters
{
namespace message_traits
{


template<>
struct HasHeader<dynamic_slam_interfaces::msg::ObjectOdometry> : public std::true_type {};


template<>
struct FrameId<dynamic_slam_interfaces::msg::ObjectOdometry> {
  using M = dynamic_slam_interfaces::msg::ObjectOdometry;
  static std::string * pointer(M& m) {return &m.odom.header.frame_id;}
  static std::string const * pointer(const M& m) {return &m.odom.header.frame_id;}
  static std::string value(const M& msg) { return msg.odom.header.frame_id; }
};

template<>
struct TimeStamp<dynamic_slam_interfaces::msg::ObjectOdometry> {
  static rclcpp::Time value(const dynamic_slam_interfaces::msg::ObjectOdometry& msg) {
    return rclcpp::Time(msg.odom.header.stamp);
  }
};


} //message_traits
} //message_filters