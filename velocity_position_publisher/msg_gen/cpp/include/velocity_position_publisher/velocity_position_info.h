/* Auto-generated by genmsg_cpp for file /home/ras/ros/ros-pkg/IGVC2013/velocity_position_publisher/msg/velocity_position_info.msg */
#ifndef VELOCITY_POSITION_PUBLISHER_MESSAGE_VELOCITY_POSITION_INFO_H
#define VELOCITY_POSITION_PUBLISHER_MESSAGE_VELOCITY_POSITION_INFO_H
#include <string>
#include <vector>
#include <map>
#include <ostream>
#include "ros/serialization.h"
#include "ros/builtin_message_traits.h"
#include "ros/message_operations.h"
#include "ros/time.h"

#include "ros/macros.h"

#include "ros/assert.h"

#include "std_msgs/Header.h"
#include "geometry_msgs/Vector3.h"
#include "geometry_msgs/Vector3.h"
#include "geometry_msgs/Point.h"

namespace velocity_position_publisher
{
template <class ContainerAllocator>
struct velocity_position_info_ {
  typedef velocity_position_info_<ContainerAllocator> Type;

  velocity_position_info_()
  : header()
  , acceleration()
  , velocity()
  , position()
  , roll(0.0)
  , pitch(0.0)
  , yaw(0.0)
  {
  }

  velocity_position_info_(const ContainerAllocator& _alloc)
  : header(_alloc)
  , acceleration(_alloc)
  , velocity(_alloc)
  , position(_alloc)
  , roll(0.0)
  , pitch(0.0)
  , yaw(0.0)
  {
  }

  typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
   ::std_msgs::Header_<ContainerAllocator>  header;

  typedef  ::geometry_msgs::Vector3_<ContainerAllocator>  _acceleration_type;
   ::geometry_msgs::Vector3_<ContainerAllocator>  acceleration;

  typedef  ::geometry_msgs::Vector3_<ContainerAllocator>  _velocity_type;
   ::geometry_msgs::Vector3_<ContainerAllocator>  velocity;

  typedef  ::geometry_msgs::Point_<ContainerAllocator>  _position_type;
   ::geometry_msgs::Point_<ContainerAllocator>  position;

  typedef double _roll_type;
  double roll;

  typedef double _pitch_type;
  double pitch;

  typedef double _yaw_type;
  double yaw;


  typedef boost::shared_ptr< ::velocity_position_publisher::velocity_position_info_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::velocity_position_publisher::velocity_position_info_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct velocity_position_info
typedef  ::velocity_position_publisher::velocity_position_info_<std::allocator<void> > velocity_position_info;

typedef boost::shared_ptr< ::velocity_position_publisher::velocity_position_info> velocity_position_infoPtr;
typedef boost::shared_ptr< ::velocity_position_publisher::velocity_position_info const> velocity_position_infoConstPtr;


template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const  ::velocity_position_publisher::velocity_position_info_<ContainerAllocator> & v)
{
  ros::message_operations::Printer< ::velocity_position_publisher::velocity_position_info_<ContainerAllocator> >::stream(s, "", v);
  return s;}

} // namespace velocity_position_publisher

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::velocity_position_publisher::velocity_position_info_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::velocity_position_publisher::velocity_position_info_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::velocity_position_publisher::velocity_position_info_<ContainerAllocator> > {
  static const char* value() 
  {
    return "40de7a18c0b405e9956ca23db0e22d87";
  }

  static const char* value(const  ::velocity_position_publisher::velocity_position_info_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0x40de7a18c0b405e9ULL;
  static const uint64_t static_value2 = 0x956ca23db0e22d87ULL;
};

template<class ContainerAllocator>
struct DataType< ::velocity_position_publisher::velocity_position_info_<ContainerAllocator> > {
  static const char* value() 
  {
    return "velocity_position_publisher/velocity_position_info";
  }

  static const char* value(const  ::velocity_position_publisher::velocity_position_info_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::velocity_position_publisher::velocity_position_info_<ContainerAllocator> > {
  static const char* value() 
  {
    return "Header header\n\
\n\
#accleration as a vector3\n\
geometry_msgs/Vector3 acceleration\n\
\n\
#velocity as a vector3\n\
geometry_msgs/Vector3 velocity\n\
\n\
#Current esimated position\n\
geometry_msgs/Point position\n\
\n\
#roll pitch yaw\n\
float64 roll\n\
float64 pitch\n\
float64 yaw\n\
\n\
================================================================================\n\
MSG: std_msgs/Header\n\
# Standard metadata for higher-level stamped data types.\n\
# This is generally used to communicate timestamped data \n\
# in a particular coordinate frame.\n\
# \n\
# sequence ID: consecutively increasing ID \n\
uint32 seq\n\
#Two-integer timestamp that is expressed as:\n\
# * stamp.secs: seconds (stamp_secs) since epoch\n\
# * stamp.nsecs: nanoseconds since stamp_secs\n\
# time-handling sugar is provided by the client library\n\
time stamp\n\
#Frame this data is associated with\n\
# 0: no frame\n\
# 1: global frame\n\
string frame_id\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Vector3\n\
# This represents a vector in free space. \n\
\n\
float64 x\n\
float64 y\n\
float64 z\n\
================================================================================\n\
MSG: geometry_msgs/Point\n\
# This contains the position of a point in free space\n\
float64 x\n\
float64 y\n\
float64 z\n\
\n\
";
  }

  static const char* value(const  ::velocity_position_publisher::velocity_position_info_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator> struct HasHeader< ::velocity_position_publisher::velocity_position_info_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct HasHeader< const ::velocity_position_publisher::velocity_position_info_<ContainerAllocator> > : public TrueType {};
} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::velocity_position_publisher::velocity_position_info_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.header);
    stream.next(m.acceleration);
    stream.next(m.velocity);
    stream.next(m.position);
    stream.next(m.roll);
    stream.next(m.pitch);
    stream.next(m.yaw);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct velocity_position_info_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::velocity_position_publisher::velocity_position_info_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const  ::velocity_position_publisher::velocity_position_info_<ContainerAllocator> & v) 
  {
    s << indent << "header: ";
s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "acceleration: ";
s << std::endl;
    Printer< ::geometry_msgs::Vector3_<ContainerAllocator> >::stream(s, indent + "  ", v.acceleration);
    s << indent << "velocity: ";
s << std::endl;
    Printer< ::geometry_msgs::Vector3_<ContainerAllocator> >::stream(s, indent + "  ", v.velocity);
    s << indent << "position: ";
s << std::endl;
    Printer< ::geometry_msgs::Point_<ContainerAllocator> >::stream(s, indent + "  ", v.position);
    s << indent << "roll: ";
    Printer<double>::stream(s, indent + "  ", v.roll);
    s << indent << "pitch: ";
    Printer<double>::stream(s, indent + "  ", v.pitch);
    s << indent << "yaw: ";
    Printer<double>::stream(s, indent + "  ", v.yaw);
  }
};


} // namespace message_operations
} // namespace ros

#endif // VELOCITY_POSITION_PUBLISHER_MESSAGE_VELOCITY_POSITION_INFO_H

