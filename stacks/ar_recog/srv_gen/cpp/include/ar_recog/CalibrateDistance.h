/* Auto-generated by genmsg_cpp for file /home/futuhal57/ros/stacks/ar_recog/srv/CalibrateDistance.srv */
#ifndef AR_RECOG_SERVICE_CALIBRATEDISTANCE_H
#define AR_RECOG_SERVICE_CALIBRATEDISTANCE_H
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




namespace ar_recog
{
template <class ContainerAllocator>
struct CalibrateDistanceRequest_ {
  typedef CalibrateDistanceRequest_<ContainerAllocator> Type;

  CalibrateDistanceRequest_()
  : dist(0)
  {
  }

  CalibrateDistanceRequest_(const ContainerAllocator& _alloc)
  : dist(0)
  {
  }

  typedef int32_t _dist_type;
  int32_t dist;


  typedef boost::shared_ptr< ::ar_recog::CalibrateDistanceRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::ar_recog::CalibrateDistanceRequest_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct CalibrateDistanceRequest
typedef  ::ar_recog::CalibrateDistanceRequest_<std::allocator<void> > CalibrateDistanceRequest;

typedef boost::shared_ptr< ::ar_recog::CalibrateDistanceRequest> CalibrateDistanceRequestPtr;
typedef boost::shared_ptr< ::ar_recog::CalibrateDistanceRequest const> CalibrateDistanceRequestConstPtr;


template <class ContainerAllocator>
struct CalibrateDistanceResponse_ {
  typedef CalibrateDistanceResponse_<ContainerAllocator> Type;

  CalibrateDistanceResponse_()
  : aov(0.0)
  {
  }

  CalibrateDistanceResponse_(const ContainerAllocator& _alloc)
  : aov(0.0)
  {
  }

  typedef double _aov_type;
  double aov;


  typedef boost::shared_ptr< ::ar_recog::CalibrateDistanceResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::ar_recog::CalibrateDistanceResponse_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct CalibrateDistanceResponse
typedef  ::ar_recog::CalibrateDistanceResponse_<std::allocator<void> > CalibrateDistanceResponse;

typedef boost::shared_ptr< ::ar_recog::CalibrateDistanceResponse> CalibrateDistanceResponsePtr;
typedef boost::shared_ptr< ::ar_recog::CalibrateDistanceResponse const> CalibrateDistanceResponseConstPtr;

struct CalibrateDistance
{

typedef CalibrateDistanceRequest Request;
typedef CalibrateDistanceResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;
}; // struct CalibrateDistance
} // namespace ar_recog

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::ar_recog::CalibrateDistanceRequest_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::ar_recog::CalibrateDistanceRequest_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::ar_recog::CalibrateDistanceRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "e2c1055fbb10edc20f225fe99e18b131";
  }

  static const char* value(const  ::ar_recog::CalibrateDistanceRequest_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0xe2c1055fbb10edc2ULL;
  static const uint64_t static_value2 = 0x0f225fe99e18b131ULL;
};

template<class ContainerAllocator>
struct DataType< ::ar_recog::CalibrateDistanceRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "ar_recog/CalibrateDistanceRequest";
  }

  static const char* value(const  ::ar_recog::CalibrateDistanceRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::ar_recog::CalibrateDistanceRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "int32 dist\n\
\n\
";
  }

  static const char* value(const  ::ar_recog::CalibrateDistanceRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator> struct IsFixedSize< ::ar_recog::CalibrateDistanceRequest_<ContainerAllocator> > : public TrueType {};
} // namespace message_traits
} // namespace ros


namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::ar_recog::CalibrateDistanceResponse_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::ar_recog::CalibrateDistanceResponse_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::ar_recog::CalibrateDistanceResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "18a96d7cdd9686621c8186905b79ee25";
  }

  static const char* value(const  ::ar_recog::CalibrateDistanceResponse_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0x18a96d7cdd968662ULL;
  static const uint64_t static_value2 = 0x1c8186905b79ee25ULL;
};

template<class ContainerAllocator>
struct DataType< ::ar_recog::CalibrateDistanceResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "ar_recog/CalibrateDistanceResponse";
  }

  static const char* value(const  ::ar_recog::CalibrateDistanceResponse_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::ar_recog::CalibrateDistanceResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "float64 aov\n\
\n\
";
  }

  static const char* value(const  ::ar_recog::CalibrateDistanceResponse_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator> struct IsFixedSize< ::ar_recog::CalibrateDistanceResponse_<ContainerAllocator> > : public TrueType {};
} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::ar_recog::CalibrateDistanceRequest_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.dist);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct CalibrateDistanceRequest_
} // namespace serialization
} // namespace ros


namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::ar_recog::CalibrateDistanceResponse_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.aov);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct CalibrateDistanceResponse_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace service_traits
{
template<>
struct MD5Sum<ar_recog::CalibrateDistance> {
  static const char* value() 
  {
    return "b825ddadc18a94e1aff9d418f4e6cfee";
  }

  static const char* value(const ar_recog::CalibrateDistance&) { return value(); } 
};

template<>
struct DataType<ar_recog::CalibrateDistance> {
  static const char* value() 
  {
    return "ar_recog/CalibrateDistance";
  }

  static const char* value(const ar_recog::CalibrateDistance&) { return value(); } 
};

template<class ContainerAllocator>
struct MD5Sum<ar_recog::CalibrateDistanceRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "b825ddadc18a94e1aff9d418f4e6cfee";
  }

  static const char* value(const ar_recog::CalibrateDistanceRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct DataType<ar_recog::CalibrateDistanceRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "ar_recog/CalibrateDistance";
  }

  static const char* value(const ar_recog::CalibrateDistanceRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct MD5Sum<ar_recog::CalibrateDistanceResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "b825ddadc18a94e1aff9d418f4e6cfee";
  }

  static const char* value(const ar_recog::CalibrateDistanceResponse_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct DataType<ar_recog::CalibrateDistanceResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "ar_recog/CalibrateDistance";
  }

  static const char* value(const ar_recog::CalibrateDistanceResponse_<ContainerAllocator> &) { return value(); } 
};

} // namespace service_traits
} // namespace ros

#endif // AR_RECOG_SERVICE_CALIBRATEDISTANCE_H

