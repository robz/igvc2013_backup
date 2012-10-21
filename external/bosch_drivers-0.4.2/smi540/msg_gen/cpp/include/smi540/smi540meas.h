/* Auto-generated by genmsg_cpp for file /home/ras/IGVC2013/external/bosch_drivers-0.4.2/smi540/msg/smi540meas.msg */
#ifndef SMI540_MESSAGE_SMI540MEAS_H
#define SMI540_MESSAGE_SMI540MEAS_H
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

namespace smi540
{
template <class ContainerAllocator>
struct smi540meas_ {
  typedef smi540meas_<ContainerAllocator> Type;

  smi540meas_()
  : header()
  , strIdSubDev()
  , iChipSelect()
  , fAcclX()
  , fAcclY()
  , fRateZ()
  {
  }

  smi540meas_(const ContainerAllocator& _alloc)
  : header(_alloc)
  , strIdSubDev(_alloc)
  , iChipSelect(_alloc)
  , fAcclX(_alloc)
  , fAcclY(_alloc)
  , fRateZ(_alloc)
  {
  }

  typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
   ::std_msgs::Header_<ContainerAllocator>  header;

  typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _strIdSubDev_type;
  std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  strIdSubDev;

  typedef std::vector<int16_t, typename ContainerAllocator::template rebind<int16_t>::other >  _iChipSelect_type;
  std::vector<int16_t, typename ContainerAllocator::template rebind<int16_t>::other >  iChipSelect;

  typedef std::vector<double, typename ContainerAllocator::template rebind<double>::other >  _fAcclX_type;
  std::vector<double, typename ContainerAllocator::template rebind<double>::other >  fAcclX;

  typedef std::vector<double, typename ContainerAllocator::template rebind<double>::other >  _fAcclY_type;
  std::vector<double, typename ContainerAllocator::template rebind<double>::other >  fAcclY;

  typedef std::vector<double, typename ContainerAllocator::template rebind<double>::other >  _fRateZ_type;
  std::vector<double, typename ContainerAllocator::template rebind<double>::other >  fRateZ;


  typedef boost::shared_ptr< ::smi540::smi540meas_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::smi540::smi540meas_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct smi540meas
typedef  ::smi540::smi540meas_<std::allocator<void> > smi540meas;

typedef boost::shared_ptr< ::smi540::smi540meas> smi540measPtr;
typedef boost::shared_ptr< ::smi540::smi540meas const> smi540measConstPtr;


template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const  ::smi540::smi540meas_<ContainerAllocator> & v)
{
  ros::message_operations::Printer< ::smi540::smi540meas_<ContainerAllocator> >::stream(s, "", v);
  return s;}

} // namespace smi540

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::smi540::smi540meas_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::smi540::smi540meas_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::smi540::smi540meas_<ContainerAllocator> > {
  static const char* value() 
  {
    return "0dbe54f84ea8052406fa280d1c1f5801";
  }

  static const char* value(const  ::smi540::smi540meas_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0x0dbe54f84ea80524ULL;
  static const uint64_t static_value2 = 0x06fa280d1c1f5801ULL;
};

template<class ContainerAllocator>
struct DataType< ::smi540::smi540meas_<ContainerAllocator> > {
  static const char* value() 
  {
    return "smi540/smi540meas";
  }

  static const char* value(const  ::smi540::smi540meas_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::smi540::smi540meas_<ContainerAllocator> > {
  static const char* value() 
  {
    return "Header header\n\
string strIdSubDev\n\
int16[] iChipSelect\n\
float64[] fAcclX\n\
float64[] fAcclY\n\
float64[] fRateZ\n\
\n\
\n\
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
";
  }

  static const char* value(const  ::smi540::smi540meas_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator> struct HasHeader< ::smi540::smi540meas_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct HasHeader< const ::smi540::smi540meas_<ContainerAllocator> > : public TrueType {};
} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::smi540::smi540meas_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.header);
    stream.next(m.strIdSubDev);
    stream.next(m.iChipSelect);
    stream.next(m.fAcclX);
    stream.next(m.fAcclY);
    stream.next(m.fRateZ);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct smi540meas_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::smi540::smi540meas_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const  ::smi540::smi540meas_<ContainerAllocator> & v) 
  {
    s << indent << "header: ";
s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "strIdSubDev: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.strIdSubDev);
    s << indent << "iChipSelect[]" << std::endl;
    for (size_t i = 0; i < v.iChipSelect.size(); ++i)
    {
      s << indent << "  iChipSelect[" << i << "]: ";
      Printer<int16_t>::stream(s, indent + "  ", v.iChipSelect[i]);
    }
    s << indent << "fAcclX[]" << std::endl;
    for (size_t i = 0; i < v.fAcclX.size(); ++i)
    {
      s << indent << "  fAcclX[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.fAcclX[i]);
    }
    s << indent << "fAcclY[]" << std::endl;
    for (size_t i = 0; i < v.fAcclY.size(); ++i)
    {
      s << indent << "  fAcclY[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.fAcclY[i]);
    }
    s << indent << "fRateZ[]" << std::endl;
    for (size_t i = 0; i < v.fRateZ.size(); ++i)
    {
      s << indent << "  fRateZ[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.fRateZ[i]);
    }
  }
};


} // namespace message_operations
} // namespace ros

#endif // SMI540_MESSAGE_SMI540MEAS_H

