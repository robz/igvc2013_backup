/* Auto-generated by genmsg_cpp for file /home/ras/IGVC2013/external/joystick_drivers-1.8.0/wiimote/msg/TimedSwitch.msg */
#ifndef WIIMOTE_MESSAGE_TIMEDSWITCH_H
#define WIIMOTE_MESSAGE_TIMEDSWITCH_H
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


namespace wiimote
{
template <class ContainerAllocator>
struct TimedSwitch_ {
  typedef TimedSwitch_<ContainerAllocator> Type;

  TimedSwitch_()
  : switch_mode(0)
  , num_cycles(0)
  , pulse_pattern()
  {
  }

  TimedSwitch_(const ContainerAllocator& _alloc)
  : switch_mode(0)
  , num_cycles(0)
  , pulse_pattern(_alloc)
  {
  }

  typedef int8_t _switch_mode_type;
  int8_t switch_mode;

  typedef int32_t _num_cycles_type;
  int32_t num_cycles;

  typedef std::vector<float, typename ContainerAllocator::template rebind<float>::other >  _pulse_pattern_type;
  std::vector<float, typename ContainerAllocator::template rebind<float>::other >  pulse_pattern;

  enum { ON = 1 };
  enum { OFF = 0 };
  enum { NO_CHANGE = -2 };
  enum { REPEAT = -1 };
  enum { FOREVER = -1 };

  typedef boost::shared_ptr< ::wiimote::TimedSwitch_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::wiimote::TimedSwitch_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct TimedSwitch
typedef  ::wiimote::TimedSwitch_<std::allocator<void> > TimedSwitch;

typedef boost::shared_ptr< ::wiimote::TimedSwitch> TimedSwitchPtr;
typedef boost::shared_ptr< ::wiimote::TimedSwitch const> TimedSwitchConstPtr;


template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const  ::wiimote::TimedSwitch_<ContainerAllocator> & v)
{
  ros::message_operations::Printer< ::wiimote::TimedSwitch_<ContainerAllocator> >::stream(s, "", v);
  return s;}

} // namespace wiimote

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::wiimote::TimedSwitch_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::wiimote::TimedSwitch_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::wiimote::TimedSwitch_<ContainerAllocator> > {
  static const char* value() 
  {
    return "e4c8d9327409cef6066fa6c368032c1e";
  }

  static const char* value(const  ::wiimote::TimedSwitch_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0xe4c8d9327409cef6ULL;
  static const uint64_t static_value2 = 0x066fa6c368032c1eULL;
};

template<class ContainerAllocator>
struct DataType< ::wiimote::TimedSwitch_<ContainerAllocator> > {
  static const char* value() 
  {
    return "wiimote/TimedSwitch";
  }

  static const char* value(const  ::wiimote::TimedSwitch_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::wiimote::TimedSwitch_<ContainerAllocator> > {
  static const char* value() 
  {
    return "# TimedSwitch allows sender to:\n\
#    o turn a switch on,\n\
#    o turn a switch off, and\n\
#    o repeat an on/off pattern forever or for a\n\
#          given number of times.\n\
# Fields (refer to definitions of constants in the definition body):\n\
#     o switch_mode:\n\
#         ON: turn on  (num_cycles and pulse_pattern fields are ignored)\n\
#        OFF: turn off (num_cycles and pulse_pattern fields are ignored)\n\
#  NO_CHANGE: leave LED in its current state\n\
#     REPEAT: repeat an on/off pattern for as long\n\
#             as is indicated in the num_cycles field. The\n\
#             pattern is defined in the pulse_pattern field.\n\
#\n\
#     o num_cycles:\n\
#          n>=0: run the pattern that is defined in pulse_pattern\n\
#                n times.\n\
#          n==FOREVER: run the pattern that is defined in pulse_pattern\n\
#                       until a new TimedSwitch message is sent.              \n\
#\n\
#     o pulse_pattern:\n\
#          A series of time durations in fractions of a second. The\n\
#          first number is the duration for having the switch on.\n\
#          The second number is the duration for which the switch\n\
#          is off. The third is an 'on' period again, etc.\n\
#          A pattern is terminated with the end of the array.\n\
#           \n\
#          Example: [1,1] specifies an on-off sequence of 1 second.               \n\
\n\
int8 ON        =  1\n\
int8 OFF       =  0\n\
int8 NO_CHANGE = -2\n\
int8 REPEAT    = -1\n\
int8 FOREVER   = -1\n\
\n\
int8 switch_mode\n\
int32 num_cycles\n\
float32[] pulse_pattern\n\
\n\
";
  }

  static const char* value(const  ::wiimote::TimedSwitch_<ContainerAllocator> &) { return value(); } 
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::wiimote::TimedSwitch_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.switch_mode);
    stream.next(m.num_cycles);
    stream.next(m.pulse_pattern);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct TimedSwitch_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::wiimote::TimedSwitch_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const  ::wiimote::TimedSwitch_<ContainerAllocator> & v) 
  {
    s << indent << "switch_mode: ";
    Printer<int8_t>::stream(s, indent + "  ", v.switch_mode);
    s << indent << "num_cycles: ";
    Printer<int32_t>::stream(s, indent + "  ", v.num_cycles);
    s << indent << "pulse_pattern[]" << std::endl;
    for (size_t i = 0; i < v.pulse_pattern.size(); ++i)
    {
      s << indent << "  pulse_pattern[" << i << "]: ";
      Printer<float>::stream(s, indent + "  ", v.pulse_pattern[i]);
    }
  }
};


} // namespace message_operations
} // namespace ros

#endif // WIIMOTE_MESSAGE_TIMEDSWITCH_H

