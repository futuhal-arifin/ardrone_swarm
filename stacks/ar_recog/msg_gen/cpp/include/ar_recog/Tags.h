/* Auto-generated by genmsg_cpp for file /home/futuhal57/ros/stacks/ar_recog/msg/Tags.msg */
#ifndef AR_RECOG_MESSAGE_TAGS_H
#define AR_RECOG_MESSAGE_TAGS_H
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
#include "ar_recog/Tag.h"

namespace ar_recog
{
template <class ContainerAllocator>
struct Tags_ {
  typedef Tags_<ContainerAllocator> Type;

  Tags_()
  : header()
  , image_width(0)
  , image_height(0)
  , angle_of_view(0.0)
  , tag_count(0)
  , tags()
  {
  }

  Tags_(const ContainerAllocator& _alloc)
  : header(_alloc)
  , image_width(0)
  , image_height(0)
  , angle_of_view(0.0)
  , tag_count(0)
  , tags(_alloc)
  {
  }

  typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
   ::std_msgs::Header_<ContainerAllocator>  header;

  typedef uint32_t _image_width_type;
  uint32_t image_width;

  typedef uint32_t _image_height_type;
  uint32_t image_height;

  typedef double _angle_of_view_type;
  double angle_of_view;

  typedef uint32_t _tag_count_type;
  uint32_t tag_count;

  typedef std::vector< ::ar_recog::Tag_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::ar_recog::Tag_<ContainerAllocator> >::other >  _tags_type;
  std::vector< ::ar_recog::Tag_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::ar_recog::Tag_<ContainerAllocator> >::other >  tags;


  typedef boost::shared_ptr< ::ar_recog::Tags_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::ar_recog::Tags_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct Tags
typedef  ::ar_recog::Tags_<std::allocator<void> > Tags;

typedef boost::shared_ptr< ::ar_recog::Tags> TagsPtr;
typedef boost::shared_ptr< ::ar_recog::Tags const> TagsConstPtr;


template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const  ::ar_recog::Tags_<ContainerAllocator> & v)
{
  ros::message_operations::Printer< ::ar_recog::Tags_<ContainerAllocator> >::stream(s, "", v);
  return s;}

} // namespace ar_recog

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::ar_recog::Tags_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::ar_recog::Tags_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::ar_recog::Tags_<ContainerAllocator> > {
  static const char* value() 
  {
    return "9fd9ccebe014b769dcb84bc4557ac837";
  }

  static const char* value(const  ::ar_recog::Tags_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0x9fd9ccebe014b769ULL;
  static const uint64_t static_value2 = 0xdcb84bc4557ac837ULL;
};

template<class ContainerAllocator>
struct DataType< ::ar_recog::Tags_<ContainerAllocator> > {
  static const char* value() 
  {
    return "ar_recog/Tags";
  }

  static const char* value(const  ::ar_recog::Tags_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::ar_recog::Tags_<ContainerAllocator> > {
  static const char* value() 
  {
    return "Header header\n\
uint32 image_width\n\
uint32 image_height\n\
float64 angle_of_view\n\
uint32 tag_count\n\
Tag[] tags\n\
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
MSG: ar_recog/Tag\n\
# All screen measurements are in pixels, all spatial measurements are in meters.\n\
# Angles in radians.\n\
uint32 id\n\
# This is a rating of confidence in the tag pattern identification 0 < cf < 1.\n\
float64 cf\n\
uint32 x\n\
uint32 y\n\
# The 'diameter' is the square root of the tag's actual area, as estimated by \n\
# the AR software.  You can use it to check the cf confidence.\n\
float64 diameter\n\
# This is the estimated distance from viewer to the center of the tag.\n\
float64 distance\n\
float64 xRot \n\
float64 yRot \n\
float64 zRot\n\
float64 xMetric\n\
float64 yMetric\n\
float64 zMetric\n\
# Screen coordinates of the four corners.\n\
float64[8] cwCorners\n\
# FOR TESTING ONLY\n\
# Uncommenting this and uncommenting the similarly-marked lines in \n\
# ar_recog.cpp will put the ARToolkit rotation matrix into the Tag message,\n\
# which can be useful for debugging and testing.\n\
# float64[3] c3\n\
# float64[3] t0\n\
# float64[3] t1\n\
# float64[3] t2\n\
\n\
";
  }

  static const char* value(const  ::ar_recog::Tags_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator> struct HasHeader< ::ar_recog::Tags_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct HasHeader< const ::ar_recog::Tags_<ContainerAllocator> > : public TrueType {};
} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::ar_recog::Tags_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.header);
    stream.next(m.image_width);
    stream.next(m.image_height);
    stream.next(m.angle_of_view);
    stream.next(m.tag_count);
    stream.next(m.tags);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct Tags_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::ar_recog::Tags_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const  ::ar_recog::Tags_<ContainerAllocator> & v) 
  {
    s << indent << "header: ";
s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "image_width: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.image_width);
    s << indent << "image_height: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.image_height);
    s << indent << "angle_of_view: ";
    Printer<double>::stream(s, indent + "  ", v.angle_of_view);
    s << indent << "tag_count: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.tag_count);
    s << indent << "tags[]" << std::endl;
    for (size_t i = 0; i < v.tags.size(); ++i)
    {
      s << indent << "  tags[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::ar_recog::Tag_<ContainerAllocator> >::stream(s, indent + "    ", v.tags[i]);
    }
  }
};


} // namespace message_operations
} // namespace ros

#endif // AR_RECOG_MESSAGE_TAGS_H

