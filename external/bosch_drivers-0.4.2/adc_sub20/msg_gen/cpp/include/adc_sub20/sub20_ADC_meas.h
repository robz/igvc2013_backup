/* Auto-generated by genmsg_cpp for file /home/ras/IGVC2013/external/bosch_drivers-0.4.2/adc_sub20/msg/sub20_ADC_meas.msg */
#ifndef ADC_SUB20_MESSAGE_SUB20_ADC_MEAS_H
#define ADC_SUB20_MESSAGE_SUB20_ADC_MEAS_H
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

namespace adc_sub20
{
template <class ContainerAllocator>
struct sub20_ADC_meas_ {
  typedef sub20_ADC_meas_<ContainerAllocator> Type;

  sub20_ADC_meas_()
  : header()
  , strIdSubDev()
  , uiRaw()
  , fVolts()
  {
  }

  sub20_ADC_meas_(const ContainerAllocator& _alloc)
  : header(_alloc)
  , strIdSubDev(_alloc)
  , uiRaw(_alloc)
  , fVolts(_alloc)
  {
  }

  typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
   ::std_msgs::Header_<ContainerAllocator>  header;

  typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _strIdSubDev_type;
  std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  strIdSubDev;

  typedef std::vector<uint16_t, typename ContainerAllocator::template rebind<uint16_t>::other >  _uiRaw_type;
  std::vector<uint16_t, typename ContainerAllocator::template rebind<uint16_t>::other >  uiRaw;

  typedef std::vector<double, typename ContainerAllocator::template rebind<double>::other >  _fVolts_type;
  std::vector<double, typename ContainerAllocator::template rebind<double>::other >  fVolts;


  typedef boost::shared_ptr< ::adc_sub20::sub20_ADC_meas_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::adc_sub20::sub20_ADC_meas_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct sub20_ADC_meas
typedef  ::adc_sub20::sub20_ADC_meas_<std::allocator<void> > sub20_ADC_meas;

typedef boost::shared_ptr< ::adc_sub20::sub20_ADC_meas> sub20_ADC_measPtr;
typedef boost::shared_ptr< ::adc_sub20::sub20_ADC_meas const> sub20_ADC_measConstPtr;


template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const  ::adc_sub20::sub20_ADC_meas_<ContainerAllocator> & v)
{
  ros::message_operations::Printer< ::adc_sub20::sub20_ADC_meas_<ContainerAllocator> >::stream(s, "", v);
  return s;}

} // namespace adc_sub20

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::adc_sub20::sub20_ADC_meas_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::adc_sub20::sub20_ADC_meas_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::adc_sub20::sub20_ADC_meas_<ContainerAllocator> > {
  static const char* value() 
  {
    return "e5a875ce6bb2d936bd7c1ae33b9699ad";
  }

  static const char* value(const  ::adc_sub20::sub20_ADC_meas_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0xe5a875ce6bb2d936ULL;
  static const uint64_t static_value2 = 0xbd7c1ae33b9699adULL;
};

template<class ContainerAllocator>
struct DataType< ::adc_sub20::sub20_ADC_meas_<ContainerAllocator> > {
  static const char* value() 
  {
    return "adc_sub20/sub20_ADC_meas";
  }

  static const char* value(const  ::adc_sub20::sub20_ADC_meas_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::adc_sub20::sub20_ADC_meas_<ContainerAllocator> > {
  static const char* value() 
  {
    return "Header header\n\
string strIdSubDev\n\
uint16[] uiRaw\n\
float64[] fVolts\n\
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

  static const char* value(const  ::adc_sub20::sub20_ADC_meas_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator> struct HasHeader< ::adc_sub20::sub20_ADC_meas_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct HasHeader< const ::adc_sub20::sub20_ADC_meas_<ContainerAllocator> > : public TrueType {};
} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::adc_sub20::sub20_ADC_meas_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.header);
    stream.next(m.strIdSubDev);
    stream.next(m.uiRaw);
    stream.next(m.fVolts);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct sub20_ADC_meas_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::adc_sub20::sub20_ADC_meas_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const  ::adc_sub20::sub20_ADC_meas_<ContainerAllocator> & v) 
  {
    s << indent << "header: ";
s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "strIdSubDev: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.strIdSubDev);
    s << indent << "uiRaw[]" << std::endl;
    for (size_t i = 0; i < v.uiRaw.size(); ++i)
    {
      s << indent << "  uiRaw[" << i << "]: ";
      Printer<uint16_t>::stream(s, indent + "  ", v.uiRaw[i]);
    }
    s << indent << "fVolts[]" << std::endl;
    for (size_t i = 0; i < v.fVolts.size(); ++i)
    {
      s << indent << "  fVolts[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.fVolts[i]);
    }
  }
};


} // namespace message_operations
} // namespace ros

#endif // ADC_SUB20_MESSAGE_SUB20_ADC_MEAS_H

