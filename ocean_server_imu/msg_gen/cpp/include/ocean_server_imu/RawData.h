/* Auto-generated by genmsg_cpp for file /home/ras/IGVC2013/ocean_server_imu/msg/RawData.msg */
#ifndef OCEAN_SERVER_IMU_MESSAGE_RAWDATA_H
#define OCEAN_SERVER_IMU_MESSAGE_RAWDATA_H
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
#include "geometry_msgs/Vector3.h"

namespace ocean_server_imu
{
template <class ContainerAllocator>
struct RawData_ {
  typedef RawData_<ContainerAllocator> Type;

  RawData_()
  : header()
  , yaw(0.0)
  , pitch(0.0)
  , roll(0.0)
  , temperature(0.0)
  , depth(0.0)
  , magnetic_vector_length(0.0)
  , magnetic()
  , acceleration_vector_length(0.0)
  , acceleration()
  , gyroscope_vector_length(0.0)
  , gyroscope()
  {
  }

  RawData_(const ContainerAllocator& _alloc)
  : header(_alloc)
  , yaw(0.0)
  , pitch(0.0)
  , roll(0.0)
  , temperature(0.0)
  , depth(0.0)
  , magnetic_vector_length(0.0)
  , magnetic(_alloc)
  , acceleration_vector_length(0.0)
  , acceleration(_alloc)
  , gyroscope_vector_length(0.0)
  , gyroscope(_alloc)
  {
  }

  typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
   ::std_msgs::Header_<ContainerAllocator>  header;

  typedef double _yaw_type;
  double yaw;

  typedef double _pitch_type;
  double pitch;

  typedef double _roll_type;
  double roll;

  typedef double _temperature_type;
  double temperature;

  typedef double _depth_type;
  double depth;

  typedef double _magnetic_vector_length_type;
  double magnetic_vector_length;

  typedef  ::geometry_msgs::Vector3_<ContainerAllocator>  _magnetic_type;
   ::geometry_msgs::Vector3_<ContainerAllocator>  magnetic;

  typedef double _acceleration_vector_length_type;
  double acceleration_vector_length;

  typedef  ::geometry_msgs::Vector3_<ContainerAllocator>  _acceleration_type;
   ::geometry_msgs::Vector3_<ContainerAllocator>  acceleration;

  typedef double _gyroscope_vector_length_type;
  double gyroscope_vector_length;

  typedef  ::geometry_msgs::Vector3_<ContainerAllocator>  _gyroscope_type;
   ::geometry_msgs::Vector3_<ContainerAllocator>  gyroscope;


  typedef boost::shared_ptr< ::ocean_server_imu::RawData_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::ocean_server_imu::RawData_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct RawData
typedef  ::ocean_server_imu::RawData_<std::allocator<void> > RawData;

typedef boost::shared_ptr< ::ocean_server_imu::RawData> RawDataPtr;
typedef boost::shared_ptr< ::ocean_server_imu::RawData const> RawDataConstPtr;


template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const  ::ocean_server_imu::RawData_<ContainerAllocator> & v)
{
  ros::message_operations::Printer< ::ocean_server_imu::RawData_<ContainerAllocator> >::stream(s, "", v);
  return s;}

} // namespace ocean_server_imu

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::ocean_server_imu::RawData_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::ocean_server_imu::RawData_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::ocean_server_imu::RawData_<ContainerAllocator> > {
  static const char* value() 
  {
    return "7d50e97be88e5cabe4ddd0a28a2e340f";
  }

  static const char* value(const  ::ocean_server_imu::RawData_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0x7d50e97be88e5cabULL;
  static const uint64_t static_value2 = 0xe4ddd0a28a2e340fULL;
};

template<class ContainerAllocator>
struct DataType< ::ocean_server_imu::RawData_<ContainerAllocator> > {
  static const char* value() 
  {
    return "ocean_server_imu/RawData";
  }

  static const char* value(const  ::ocean_server_imu::RawData_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::ocean_server_imu::RawData_<ContainerAllocator> > {
  static const char* value() 
  {
    return "Header header\n\
\n\
float64 yaw\n\
float64 pitch\n\
float64 roll\n\
\n\
float64 temperature\n\
float64 depth\n\
\n\
float64 magnetic_vector_length\n\
geometry_msgs/Vector3 magnetic\n\
\n\
float64 acceleration_vector_length\n\
geometry_msgs/Vector3 acceleration\n\
\n\
float64 gyroscope_vector_length\n\
geometry_msgs/Vector3 gyroscope\n\
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
";
  }

  static const char* value(const  ::ocean_server_imu::RawData_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator> struct HasHeader< ::ocean_server_imu::RawData_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct HasHeader< const ::ocean_server_imu::RawData_<ContainerAllocator> > : public TrueType {};
} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::ocean_server_imu::RawData_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.header);
    stream.next(m.yaw);
    stream.next(m.pitch);
    stream.next(m.roll);
    stream.next(m.temperature);
    stream.next(m.depth);
    stream.next(m.magnetic_vector_length);
    stream.next(m.magnetic);
    stream.next(m.acceleration_vector_length);
    stream.next(m.acceleration);
    stream.next(m.gyroscope_vector_length);
    stream.next(m.gyroscope);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct RawData_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::ocean_server_imu::RawData_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const  ::ocean_server_imu::RawData_<ContainerAllocator> & v) 
  {
    s << indent << "header: ";
s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "yaw: ";
    Printer<double>::stream(s, indent + "  ", v.yaw);
    s << indent << "pitch: ";
    Printer<double>::stream(s, indent + "  ", v.pitch);
    s << indent << "roll: ";
    Printer<double>::stream(s, indent + "  ", v.roll);
    s << indent << "temperature: ";
    Printer<double>::stream(s, indent + "  ", v.temperature);
    s << indent << "depth: ";
    Printer<double>::stream(s, indent + "  ", v.depth);
    s << indent << "magnetic_vector_length: ";
    Printer<double>::stream(s, indent + "  ", v.magnetic_vector_length);
    s << indent << "magnetic: ";
s << std::endl;
    Printer< ::geometry_msgs::Vector3_<ContainerAllocator> >::stream(s, indent + "  ", v.magnetic);
    s << indent << "acceleration_vector_length: ";
    Printer<double>::stream(s, indent + "  ", v.acceleration_vector_length);
    s << indent << "acceleration: ";
s << std::endl;
    Printer< ::geometry_msgs::Vector3_<ContainerAllocator> >::stream(s, indent + "  ", v.acceleration);
    s << indent << "gyroscope_vector_length: ";
    Printer<double>::stream(s, indent + "  ", v.gyroscope_vector_length);
    s << indent << "gyroscope: ";
s << std::endl;
    Printer< ::geometry_msgs::Vector3_<ContainerAllocator> >::stream(s, indent + "  ", v.gyroscope);
  }
};


} // namespace message_operations
} // namespace ros

#endif // OCEAN_SERVER_IMU_MESSAGE_RAWDATA_H
