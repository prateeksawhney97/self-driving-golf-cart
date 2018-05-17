// Generated by gencpp from file object_detection/DetectionResult.msg
// DO NOT EDIT!


#ifndef OBJECT_DETECTION_MESSAGE_DETECTIONRESULT_H
#define OBJECT_DETECTION_MESSAGE_DETECTIONRESULT_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace object_detection
{
template <class ContainerAllocator>
struct DetectionResult_
{
  typedef DetectionResult_<ContainerAllocator> Type;

  DetectionResult_()
    : out_class()
    , out_score(0.0)
    , upper_left(0)
    , upper_right(0)
    , lower_left(0)
    , lower_right(0)  {
    }
  DetectionResult_(const ContainerAllocator& _alloc)
    : out_class(_alloc)
    , out_score(0.0)
    , upper_left(0)
    , upper_right(0)
    , lower_left(0)
    , lower_right(0)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _out_class_type;
  _out_class_type out_class;

   typedef float _out_score_type;
  _out_score_type out_score;

   typedef uint32_t _upper_left_type;
  _upper_left_type upper_left;

   typedef uint32_t _upper_right_type;
  _upper_right_type upper_right;

   typedef uint32_t _lower_left_type;
  _lower_left_type lower_left;

   typedef uint32_t _lower_right_type;
  _lower_right_type lower_right;





  typedef boost::shared_ptr< ::object_detection::DetectionResult_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::object_detection::DetectionResult_<ContainerAllocator> const> ConstPtr;

}; // struct DetectionResult_

typedef ::object_detection::DetectionResult_<std::allocator<void> > DetectionResult;

typedef boost::shared_ptr< ::object_detection::DetectionResult > DetectionResultPtr;
typedef boost::shared_ptr< ::object_detection::DetectionResult const> DetectionResultConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::object_detection::DetectionResult_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::object_detection::DetectionResult_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace object_detection

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'object_detection': ['/home/neil/Workspace/self-driving-golf-cart/src/detection/object_detection/msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::object_detection::DetectionResult_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::object_detection::DetectionResult_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::object_detection::DetectionResult_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::object_detection::DetectionResult_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::object_detection::DetectionResult_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::object_detection::DetectionResult_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::object_detection::DetectionResult_<ContainerAllocator> >
{
  static const char* value()
  {
    return "5fb792480f070cbc69af8da53d614697";
  }

  static const char* value(const ::object_detection::DetectionResult_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x5fb792480f070cbcULL;
  static const uint64_t static_value2 = 0x69af8da53d614697ULL;
};

template<class ContainerAllocator>
struct DataType< ::object_detection::DetectionResult_<ContainerAllocator> >
{
  static const char* value()
  {
    return "object_detection/DetectionResult";
  }

  static const char* value(const ::object_detection::DetectionResult_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::object_detection::DetectionResult_<ContainerAllocator> >
{
  static const char* value()
  {
    return "string out_class\n\
float32 out_score\n\
uint32 upper_left\n\
uint32 upper_right\n\
uint32 lower_left\n\
uint32 lower_right\n\
";
  }

  static const char* value(const ::object_detection::DetectionResult_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::object_detection::DetectionResult_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.out_class);
      stream.next(m.out_score);
      stream.next(m.upper_left);
      stream.next(m.upper_right);
      stream.next(m.lower_left);
      stream.next(m.lower_right);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct DetectionResult_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::object_detection::DetectionResult_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::object_detection::DetectionResult_<ContainerAllocator>& v)
  {
    s << indent << "out_class: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.out_class);
    s << indent << "out_score: ";
    Printer<float>::stream(s, indent + "  ", v.out_score);
    s << indent << "upper_left: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.upper_left);
    s << indent << "upper_right: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.upper_right);
    s << indent << "lower_left: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.lower_left);
    s << indent << "lower_right: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.lower_right);
  }
};

} // namespace message_operations
} // namespace ros

#endif // OBJECT_DETECTION_MESSAGE_DETECTIONRESULT_H
