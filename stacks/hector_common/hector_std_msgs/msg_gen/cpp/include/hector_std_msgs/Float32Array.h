/* Auto-generated by genmsg_cpp for file /home/futuhal57/ros/stacks/hector_common/hector_std_msgs/msg/Float32Array.msg */
#ifndef HECTOR_STD_MSGS_MESSAGE_FLOAT32ARRAY_H
#define HECTOR_STD_MSGS_MESSAGE_FLOAT32ARRAY_H
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

namespace hector_std_msgs
{
template <class ContainerAllocator>
struct Float32Array_ {
  typedef Float32Array_<ContainerAllocator> Type;

  Float32Array_()
  : header()
  , data()
  {
  }

  Float32Array_(const ContainerAllocator& _alloc)
  : header(_alloc)
  , data(_alloc)
  {
  }

  typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
   ::std_msgs::Header_<ContainerAllocator>  header;

  typedef std::vector<float, typename ContainerAllocator::template rebind<float>::other >  _data_type;
  std::vector<float, typename ContainerAllocator::template rebind<float>::other >  data;


  typedef boost::shared_ptr< ::hector_std_msgs::Float32Array_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::hector_std_msgs::Float32Array_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct Float32Array
typedef  ::hector_std_msgs::Float32Array_<std::allocator<void> > Float32Array;

typedef boost::shared_ptr< ::hector_std_msgs::Float32Array> Float32ArrayPtr;
typedef boost::shared_ptr< ::hector_std_msgs::Float32Array const> Float32ArrayConstPtr;


template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const  ::hector_std_msgs::Float32Array_<ContainerAllocator> & v)
{
  ros::message_operations::Printer< ::hector_std_msgs::Float32Array_<ContainerAllocator> >::stream(s, "", v);
  return s;}

} // namespace hector_std_msgs

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::hector_std_msgs::Float32Array_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::hector_std_msgs::Float32Array_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::hector_std_msgs::Float32Array_<ContainerAllocator> > {
  static const char* value() 
  {
    return "a120344537a3b099cc9ec9957d4619fc";
  }

  static const char* value(const  ::hector_std_msgs::Float32Array_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0xa120344537a3b099ULL;
  static const uint64_t static_value2 = 0xcc9ec9957d4619fcULL;
};

template<class ContainerAllocator>
struct DataType< ::hector_std_msgs::Float32Array_<ContainerAllocator> > {
  static const char* value() 
  {
    return "hector_std_msgs/Float32Array";
  }

  static const char* value(const  ::hector_std_msgs::Float32Array_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::hector_std_msgs::Float32Array_<ContainerAllocator> > {
  static const char* value() 
  {
    return "Header header\n\
float32[] data\n\
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

  static const char* value(const  ::hector_std_msgs::Float32Array_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator> struct HasHeader< ::hector_std_msgs::Float32Array_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct HasHeader< const ::hector_std_msgs::Float32Array_<ContainerAllocator> > : public TrueType {};
} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::hector_std_msgs::Float32Array_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.header);
    stream.next(m.data);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct Float32Array_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::hector_std_msgs::Float32Array_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const  ::hector_std_msgs::Float32Array_<ContainerAllocator> & v) 
  {
    s << indent << "header: ";
s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "data[]" << std::endl;
    for (size_t i = 0; i < v.data.size(); ++i)
    {
      s << indent << "  data[" << i << "]: ";
      Printer<float>::stream(s, indent + "  ", v.data[i]);
    }
  }
};


} // namespace message_operations
} // namespace ros

#endif // HECTOR_STD_MSGS_MESSAGE_FLOAT32ARRAY_H

