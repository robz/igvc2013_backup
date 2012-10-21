/* Auto-generated by genmsg_cpp for file /home/ras/IGVC2013/external/bosch_drivers-0.4.2/gumstix_memwrite_bma180/msg/writermsg.msg */
#ifndef GUMSTIX_MEMWRITE_BMA180_MESSAGE_WRITERMSG_H
#define GUMSTIX_MEMWRITE_BMA180_MESSAGE_WRITERMSG_H
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


namespace gumstix_memwrite_bma180
{
template <class ContainerAllocator>
struct writermsg_ {
  typedef writermsg_<ContainerAllocator> Type;

  writermsg_()
  : written(false)
  {
  }

  writermsg_(const ContainerAllocator& _alloc)
  : written(false)
  {
  }

  typedef uint8_t _written_type;
  uint8_t written;


  typedef boost::shared_ptr< ::gumstix_memwrite_bma180::writermsg_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::gumstix_memwrite_bma180::writermsg_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct writermsg
typedef  ::gumstix_memwrite_bma180::writermsg_<std::allocator<void> > writermsg;

typedef boost::shared_ptr< ::gumstix_memwrite_bma180::writermsg> writermsgPtr;
typedef boost::shared_ptr< ::gumstix_memwrite_bma180::writermsg const> writermsgConstPtr;


template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const  ::gumstix_memwrite_bma180::writermsg_<ContainerAllocator> & v)
{
  ros::message_operations::Printer< ::gumstix_memwrite_bma180::writermsg_<ContainerAllocator> >::stream(s, "", v);
  return s;}

} // namespace gumstix_memwrite_bma180

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::gumstix_memwrite_bma180::writermsg_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::gumstix_memwrite_bma180::writermsg_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::gumstix_memwrite_bma180::writermsg_<ContainerAllocator> > {
  static const char* value() 
  {
    return "b709114f9799cee160e24092334f8514";
  }

  static const char* value(const  ::gumstix_memwrite_bma180::writermsg_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0xb709114f9799cee1ULL;
  static const uint64_t static_value2 = 0x60e24092334f8514ULL;
};

template<class ContainerAllocator>
struct DataType< ::gumstix_memwrite_bma180::writermsg_<ContainerAllocator> > {
  static const char* value() 
  {
    return "gumstix_memwrite_bma180/writermsg";
  }

  static const char* value(const  ::gumstix_memwrite_bma180::writermsg_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::gumstix_memwrite_bma180::writermsg_<ContainerAllocator> > {
  static const char* value() 
  {
    return "bool written\n\
\n\
";
  }

  static const char* value(const  ::gumstix_memwrite_bma180::writermsg_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator> struct IsFixedSize< ::gumstix_memwrite_bma180::writermsg_<ContainerAllocator> > : public TrueType {};
} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::gumstix_memwrite_bma180::writermsg_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.written);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct writermsg_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::gumstix_memwrite_bma180::writermsg_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const  ::gumstix_memwrite_bma180::writermsg_<ContainerAllocator> & v) 
  {
    s << indent << "written: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.written);
  }
};


} // namespace message_operations
} // namespace ros

#endif // GUMSTIX_MEMWRITE_BMA180_MESSAGE_WRITERMSG_H

