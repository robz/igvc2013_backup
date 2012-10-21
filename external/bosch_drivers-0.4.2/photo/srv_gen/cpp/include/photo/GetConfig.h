/* Auto-generated by genmsg_cpp for file /home/ras/IGVC2013/external/bosch_drivers-0.4.2/photo/srv/GetConfig.srv */
#ifndef PHOTO_SERVICE_GETCONFIG_H
#define PHOTO_SERVICE_GETCONFIG_H
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

#include "ros/service_traits.h"




namespace photo
{
template <class ContainerAllocator>
struct GetConfigRequest_ {
  typedef GetConfigRequest_<ContainerAllocator> Type;

  GetConfigRequest_()
  : param()
  {
  }

  GetConfigRequest_(const ContainerAllocator& _alloc)
  : param(_alloc)
  {
  }

  typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _param_type;
  std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  param;


  typedef boost::shared_ptr< ::photo::GetConfigRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::photo::GetConfigRequest_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct GetConfigRequest
typedef  ::photo::GetConfigRequest_<std::allocator<void> > GetConfigRequest;

typedef boost::shared_ptr< ::photo::GetConfigRequest> GetConfigRequestPtr;
typedef boost::shared_ptr< ::photo::GetConfigRequest const> GetConfigRequestConstPtr;


template <class ContainerAllocator>
struct GetConfigResponse_ {
  typedef GetConfigResponse_<ContainerAllocator> Type;

  GetConfigResponse_()
  : value()
  {
  }

  GetConfigResponse_(const ContainerAllocator& _alloc)
  : value(_alloc)
  {
  }

  typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _value_type;
  std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  value;


  typedef boost::shared_ptr< ::photo::GetConfigResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::photo::GetConfigResponse_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct GetConfigResponse
typedef  ::photo::GetConfigResponse_<std::allocator<void> > GetConfigResponse;

typedef boost::shared_ptr< ::photo::GetConfigResponse> GetConfigResponsePtr;
typedef boost::shared_ptr< ::photo::GetConfigResponse const> GetConfigResponseConstPtr;

struct GetConfig
{

typedef GetConfigRequest Request;
typedef GetConfigResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;
}; // struct GetConfig
} // namespace photo

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::photo::GetConfigRequest_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::photo::GetConfigRequest_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::photo::GetConfigRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "eb04b7504512676dca105ab8842899a4";
  }

  static const char* value(const  ::photo::GetConfigRequest_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0xeb04b7504512676dULL;
  static const uint64_t static_value2 = 0xca105ab8842899a4ULL;
};

template<class ContainerAllocator>
struct DataType< ::photo::GetConfigRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "photo/GetConfigRequest";
  }

  static const char* value(const  ::photo::GetConfigRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::photo::GetConfigRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "string param\n\
\n\
";
  }

  static const char* value(const  ::photo::GetConfigRequest_<ContainerAllocator> &) { return value(); } 
};

} // namespace message_traits
} // namespace ros


namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::photo::GetConfigResponse_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::photo::GetConfigResponse_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::photo::GetConfigResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "64e58419496c7248b4ef25731f88b8c3";
  }

  static const char* value(const  ::photo::GetConfigResponse_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0x64e58419496c7248ULL;
  static const uint64_t static_value2 = 0xb4ef25731f88b8c3ULL;
};

template<class ContainerAllocator>
struct DataType< ::photo::GetConfigResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "photo/GetConfigResponse";
  }

  static const char* value(const  ::photo::GetConfigResponse_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::photo::GetConfigResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "string value\n\
\n\
";
  }

  static const char* value(const  ::photo::GetConfigResponse_<ContainerAllocator> &) { return value(); } 
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::photo::GetConfigRequest_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.param);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct GetConfigRequest_
} // namespace serialization
} // namespace ros


namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::photo::GetConfigResponse_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.value);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct GetConfigResponse_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace service_traits
{
template<>
struct MD5Sum<photo::GetConfig> {
  static const char* value() 
  {
    return "2017f3298983627814c079c3b10ca05d";
  }

  static const char* value(const photo::GetConfig&) { return value(); } 
};

template<>
struct DataType<photo::GetConfig> {
  static const char* value() 
  {
    return "photo/GetConfig";
  }

  static const char* value(const photo::GetConfig&) { return value(); } 
};

template<class ContainerAllocator>
struct MD5Sum<photo::GetConfigRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "2017f3298983627814c079c3b10ca05d";
  }

  static const char* value(const photo::GetConfigRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct DataType<photo::GetConfigRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "photo/GetConfig";
  }

  static const char* value(const photo::GetConfigRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct MD5Sum<photo::GetConfigResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "2017f3298983627814c079c3b10ca05d";
  }

  static const char* value(const photo::GetConfigResponse_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct DataType<photo::GetConfigResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "photo/GetConfig";
  }

  static const char* value(const photo::GetConfigResponse_<ContainerAllocator> &) { return value(); } 
};

} // namespace service_traits
} // namespace ros

#endif // PHOTO_SERVICE_GETCONFIG_H

