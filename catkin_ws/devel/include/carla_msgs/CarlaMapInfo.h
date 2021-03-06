// Generated by gencpp from file carla_msgs/CarlaMapInfo.msg
// DO NOT EDIT!


#ifndef CARLA_MSGS_MESSAGE_CARLAMAPINFO_H
#define CARLA_MSGS_MESSAGE_CARLAMAPINFO_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>

namespace carla_msgs
{
template <class ContainerAllocator>
struct CarlaMapInfo_
{
  typedef CarlaMapInfo_<ContainerAllocator> Type;

  CarlaMapInfo_()
    : header()
    , map_name()
    , opendrive()  {
    }
  CarlaMapInfo_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , map_name(_alloc)
    , opendrive(_alloc)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _map_name_type;
  _map_name_type map_name;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _opendrive_type;
  _opendrive_type opendrive;





  typedef boost::shared_ptr< ::carla_msgs::CarlaMapInfo_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::carla_msgs::CarlaMapInfo_<ContainerAllocator> const> ConstPtr;

}; // struct CarlaMapInfo_

typedef ::carla_msgs::CarlaMapInfo_<std::allocator<void> > CarlaMapInfo;

typedef boost::shared_ptr< ::carla_msgs::CarlaMapInfo > CarlaMapInfoPtr;
typedef boost::shared_ptr< ::carla_msgs::CarlaMapInfo const> CarlaMapInfoConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::carla_msgs::CarlaMapInfo_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::carla_msgs::CarlaMapInfo_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace carla_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': True}
// {'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg'], 'carla_msgs': ['/home/lukas/carla/carla-apollo/catkin_ws/src/carla_msgs/msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::carla_msgs::CarlaMapInfo_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::carla_msgs::CarlaMapInfo_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::carla_msgs::CarlaMapInfo_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::carla_msgs::CarlaMapInfo_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::carla_msgs::CarlaMapInfo_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::carla_msgs::CarlaMapInfo_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::carla_msgs::CarlaMapInfo_<ContainerAllocator> >
{
  static const char* value()
  {
    return "13896e12d449662e7a6dbaeb31ad882a";
  }

  static const char* value(const ::carla_msgs::CarlaMapInfo_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x13896e12d449662eULL;
  static const uint64_t static_value2 = 0x7a6dbaeb31ad882aULL;
};

template<class ContainerAllocator>
struct DataType< ::carla_msgs::CarlaMapInfo_<ContainerAllocator> >
{
  static const char* value()
  {
    return "carla_msgs/CarlaMapInfo";
  }

  static const char* value(const ::carla_msgs::CarlaMapInfo_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::carla_msgs::CarlaMapInfo_<ContainerAllocator> >
{
  static const char* value()
  {
    return "#\n\
# Copyright (c) 2018-2019 Intel Coporation.\n\
#\n\
# This work is licensed under the terms of the MIT license.\n\
# For a copy, see <https://opensource.org/licenses/MIT>.\n\
#\n\
# This represents a vehicle control message sent to CARLA simulator\n\
\n\
Header header\n\
\n\
string map_name\n\
string opendrive\n\
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
# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n\
# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n\
# time-handling sugar is provided by the client library\n\
time stamp\n\
#Frame this data is associated with\n\
# 0: no frame\n\
# 1: global frame\n\
string frame_id\n\
";
  }

  static const char* value(const ::carla_msgs::CarlaMapInfo_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::carla_msgs::CarlaMapInfo_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.map_name);
      stream.next(m.opendrive);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct CarlaMapInfo_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::carla_msgs::CarlaMapInfo_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::carla_msgs::CarlaMapInfo_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "map_name: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.map_name);
    s << indent << "opendrive: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.opendrive);
  }
};

} // namespace message_operations
} // namespace ros

#endif // CARLA_MSGS_MESSAGE_CARLAMAPINFO_H
