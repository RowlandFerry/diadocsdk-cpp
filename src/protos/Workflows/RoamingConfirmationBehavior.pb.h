// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: Workflows/RoamingConfirmationBehavior.proto

#ifndef PROTOBUF_Workflows_2fRoamingConfirmationBehavior_2eproto__INCLUDED
#define PROTOBUF_Workflows_2fRoamingConfirmationBehavior_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2006000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2006001 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/generated_enum_reflection.h>
// @@protoc_insertion_point(includes)

namespace Diadoc {
namespace Api {
namespace Proto {
namespace Workflows {
namespace RoamingConfirmationBehavior {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_Workflows_2fRoamingConfirmationBehavior_2eproto();
void protobuf_AssignDesc_Workflows_2fRoamingConfirmationBehavior_2eproto();
void protobuf_ShutdownFile_Workflows_2fRoamingConfirmationBehavior_2eproto();


enum RoamingConfirmationBehavior {
  Unknown = 0,
  Never = 1,
  Always = 2
};
bool RoamingConfirmationBehavior_IsValid(int value);
const RoamingConfirmationBehavior RoamingConfirmationBehavior_MIN = Unknown;
const RoamingConfirmationBehavior RoamingConfirmationBehavior_MAX = Always;
const int RoamingConfirmationBehavior_ARRAYSIZE = RoamingConfirmationBehavior_MAX + 1;

const ::google::protobuf::EnumDescriptor* RoamingConfirmationBehavior_descriptor();
inline const ::std::string& RoamingConfirmationBehavior_Name(RoamingConfirmationBehavior value) {
  return ::google::protobuf::internal::NameOfEnum(
    RoamingConfirmationBehavior_descriptor(), value);
}
inline bool RoamingConfirmationBehavior_Parse(
    const ::std::string& name, RoamingConfirmationBehavior* value) {
  return ::google::protobuf::internal::ParseNamedEnum<RoamingConfirmationBehavior>(
    RoamingConfirmationBehavior_descriptor(), name, value);
}
// ===================================================================


// ===================================================================


// ===================================================================


// @@protoc_insertion_point(namespace_scope)

}  // namespace RoamingConfirmationBehavior
}  // namespace Workflows
}  // namespace Proto
}  // namespace Api
}  // namespace Diadoc

#ifndef SWIG
namespace google {
namespace protobuf {

template <> struct is_proto_enum< ::Diadoc::Api::Proto::Workflows::RoamingConfirmationBehavior::RoamingConfirmationBehavior> : ::google::protobuf::internal::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::Diadoc::Api::Proto::Workflows::RoamingConfirmationBehavior::RoamingConfirmationBehavior>() {
  return ::Diadoc::Api::Proto::Workflows::RoamingConfirmationBehavior::RoamingConfirmationBehavior_descriptor();
}

}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_Workflows_2fRoamingConfirmationBehavior_2eproto__INCLUDED
