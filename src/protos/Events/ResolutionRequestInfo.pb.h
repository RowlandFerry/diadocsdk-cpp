// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: Events/ResolutionRequestInfo.proto

#ifndef PROTOBUF_Events_2fResolutionRequestInfo_2eproto__INCLUDED
#define PROTOBUF_Events_2fResolutionRequestInfo_2eproto__INCLUDED

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
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/unknown_field_set.h>
#include "ResolutionAction.pb.h"
#include "ResolutionTarget.pb.h"
#include "ResolutionRequestType.pb.h"
// @@protoc_insertion_point(includes)

namespace Diadoc {
namespace Api {
namespace Proto {
namespace Events {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_Events_2fResolutionRequestInfo_2eproto();
void protobuf_AssignDesc_Events_2fResolutionRequestInfo_2eproto();
void protobuf_ShutdownFile_Events_2fResolutionRequestInfo_2eproto();

class ResolutionRequestInfo;

// ===================================================================

class ResolutionRequestInfo : public ::google::protobuf::Message {
 public:
  ResolutionRequestInfo();
  virtual ~ResolutionRequestInfo();

  ResolutionRequestInfo(const ResolutionRequestInfo& from);

  inline ResolutionRequestInfo& operator=(const ResolutionRequestInfo& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const ResolutionRequestInfo& default_instance();

  void Swap(ResolutionRequestInfo* other);

  // implements Message ----------------------------------------------

  ResolutionRequestInfo* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const ResolutionRequestInfo& from);
  void MergeFrom(const ResolutionRequestInfo& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:
  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional .Diadoc.Api.Proto.ResolutionRequestType RequestType = 1 [default = UnknownResolutionRequestType];
  inline bool has_requesttype() const;
  inline void clear_requesttype();
  static const int kRequestTypeFieldNumber = 1;
  inline ::Diadoc::Api::Proto::ResolutionRequestType requesttype() const;
  inline void set_requesttype(::Diadoc::Api::Proto::ResolutionRequestType value);

  // required string Author = 2;
  inline bool has_author() const;
  inline void clear_author();
  static const int kAuthorFieldNumber = 2;
  inline const ::std::string& author() const;
  inline void set_author(const ::std::string& value);
  inline void set_author(const char* value);
  inline void set_author(const char* value, size_t size);
  inline ::std::string* mutable_author();
  inline ::std::string* release_author();
  inline void set_allocated_author(::std::string* author);

  // optional .Diadoc.Api.Proto.ResolutionTarget Target = 3;
  inline bool has_target() const;
  inline void clear_target();
  static const int kTargetFieldNumber = 3;
  inline const ::Diadoc::Api::Proto::ResolutionTarget& target() const;
  inline ::Diadoc::Api::Proto::ResolutionTarget* mutable_target();
  inline ::Diadoc::Api::Proto::ResolutionTarget* release_target();
  inline void set_allocated_target(::Diadoc::Api::Proto::ResolutionTarget* target);

  // optional string ResolvedWith = 4;
  inline bool has_resolvedwith() const;
  inline void clear_resolvedwith();
  static const int kResolvedWithFieldNumber = 4;
  inline const ::std::string& resolvedwith() const;
  inline void set_resolvedwith(const ::std::string& value);
  inline void set_resolvedwith(const char* value);
  inline void set_resolvedwith(const char* value, size_t size);
  inline ::std::string* mutable_resolvedwith();
  inline ::std::string* release_resolvedwith();
  inline void set_allocated_resolvedwith(::std::string* resolvedwith);

  // repeated .Diadoc.Api.Proto.ResolutionAction Actions = 5;
  inline int actions_size() const;
  inline void clear_actions();
  static const int kActionsFieldNumber = 5;
  inline ::Diadoc::Api::Proto::ResolutionAction actions(int index) const;
  inline void set_actions(int index, ::Diadoc::Api::Proto::ResolutionAction value);
  inline void add_actions(::Diadoc::Api::Proto::ResolutionAction value);
  inline const ::google::protobuf::RepeatedField<int>& actions() const;
  inline ::google::protobuf::RepeatedField<int>* mutable_actions();

  // @@protoc_insertion_point(class_scope:Diadoc.Api.Proto.Events.ResolutionRequestInfo)
 private:
  inline void set_has_requesttype();
  inline void clear_has_requesttype();
  inline void set_has_author();
  inline void clear_has_author();
  inline void set_has_target();
  inline void clear_has_target();
  inline void set_has_resolvedwith();
  inline void clear_has_resolvedwith();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::std::string* author_;
  ::Diadoc::Api::Proto::ResolutionTarget* target_;
  ::std::string* resolvedwith_;
  ::google::protobuf::RepeatedField<int> actions_;
  int requesttype_;
  friend void  protobuf_AddDesc_Events_2fResolutionRequestInfo_2eproto();
  friend void protobuf_AssignDesc_Events_2fResolutionRequestInfo_2eproto();
  friend void protobuf_ShutdownFile_Events_2fResolutionRequestInfo_2eproto();

  void InitAsDefaultInstance();
  static ResolutionRequestInfo* default_instance_;
};
// ===================================================================


// ===================================================================

// ResolutionRequestInfo

// optional .Diadoc.Api.Proto.ResolutionRequestType RequestType = 1 [default = UnknownResolutionRequestType];
inline bool ResolutionRequestInfo::has_requesttype() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void ResolutionRequestInfo::set_has_requesttype() {
  _has_bits_[0] |= 0x00000001u;
}
inline void ResolutionRequestInfo::clear_has_requesttype() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void ResolutionRequestInfo::clear_requesttype() {
  requesttype_ = -1;
  clear_has_requesttype();
}
inline ::Diadoc::Api::Proto::ResolutionRequestType ResolutionRequestInfo::requesttype() const {
  // @@protoc_insertion_point(field_get:Diadoc.Api.Proto.Events.ResolutionRequestInfo.RequestType)
  return static_cast< ::Diadoc::Api::Proto::ResolutionRequestType >(requesttype_);
}
inline void ResolutionRequestInfo::set_requesttype(::Diadoc::Api::Proto::ResolutionRequestType value) {
  assert(::Diadoc::Api::Proto::ResolutionRequestType_IsValid(value));
  set_has_requesttype();
  requesttype_ = value;
  // @@protoc_insertion_point(field_set:Diadoc.Api.Proto.Events.ResolutionRequestInfo.RequestType)
}

// required string Author = 2;
inline bool ResolutionRequestInfo::has_author() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void ResolutionRequestInfo::set_has_author() {
  _has_bits_[0] |= 0x00000002u;
}
inline void ResolutionRequestInfo::clear_has_author() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void ResolutionRequestInfo::clear_author() {
  if (author_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    author_->clear();
  }
  clear_has_author();
}
inline const ::std::string& ResolutionRequestInfo::author() const {
  // @@protoc_insertion_point(field_get:Diadoc.Api.Proto.Events.ResolutionRequestInfo.Author)
  return *author_;
}
inline void ResolutionRequestInfo::set_author(const ::std::string& value) {
  set_has_author();
  if (author_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    author_ = new ::std::string;
  }
  author_->assign(value);
  // @@protoc_insertion_point(field_set:Diadoc.Api.Proto.Events.ResolutionRequestInfo.Author)
}
inline void ResolutionRequestInfo::set_author(const char* value) {
  set_has_author();
  if (author_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    author_ = new ::std::string;
  }
  author_->assign(value);
  // @@protoc_insertion_point(field_set_char:Diadoc.Api.Proto.Events.ResolutionRequestInfo.Author)
}
inline void ResolutionRequestInfo::set_author(const char* value, size_t size) {
  set_has_author();
  if (author_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    author_ = new ::std::string;
  }
  author_->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:Diadoc.Api.Proto.Events.ResolutionRequestInfo.Author)
}
inline ::std::string* ResolutionRequestInfo::mutable_author() {
  set_has_author();
  if (author_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    author_ = new ::std::string;
  }
  // @@protoc_insertion_point(field_mutable:Diadoc.Api.Proto.Events.ResolutionRequestInfo.Author)
  return author_;
}
inline ::std::string* ResolutionRequestInfo::release_author() {
  clear_has_author();
  if (author_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    return NULL;
  } else {
    ::std::string* temp = author_;
    author_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    return temp;
  }
}
inline void ResolutionRequestInfo::set_allocated_author(::std::string* author) {
  if (author_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete author_;
  }
  if (author) {
    set_has_author();
    author_ = author;
  } else {
    clear_has_author();
    author_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }
  // @@protoc_insertion_point(field_set_allocated:Diadoc.Api.Proto.Events.ResolutionRequestInfo.Author)
}

// optional .Diadoc.Api.Proto.ResolutionTarget Target = 3;
inline bool ResolutionRequestInfo::has_target() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void ResolutionRequestInfo::set_has_target() {
  _has_bits_[0] |= 0x00000004u;
}
inline void ResolutionRequestInfo::clear_has_target() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void ResolutionRequestInfo::clear_target() {
  if (target_ != NULL) target_->::Diadoc::Api::Proto::ResolutionTarget::Clear();
  clear_has_target();
}
inline const ::Diadoc::Api::Proto::ResolutionTarget& ResolutionRequestInfo::target() const {
  // @@protoc_insertion_point(field_get:Diadoc.Api.Proto.Events.ResolutionRequestInfo.Target)
  return target_ != NULL ? *target_ : *default_instance_->target_;
}
inline ::Diadoc::Api::Proto::ResolutionTarget* ResolutionRequestInfo::mutable_target() {
  set_has_target();
  if (target_ == NULL) target_ = new ::Diadoc::Api::Proto::ResolutionTarget;
  // @@protoc_insertion_point(field_mutable:Diadoc.Api.Proto.Events.ResolutionRequestInfo.Target)
  return target_;
}
inline ::Diadoc::Api::Proto::ResolutionTarget* ResolutionRequestInfo::release_target() {
  clear_has_target();
  ::Diadoc::Api::Proto::ResolutionTarget* temp = target_;
  target_ = NULL;
  return temp;
}
inline void ResolutionRequestInfo::set_allocated_target(::Diadoc::Api::Proto::ResolutionTarget* target) {
  delete target_;
  target_ = target;
  if (target) {
    set_has_target();
  } else {
    clear_has_target();
  }
  // @@protoc_insertion_point(field_set_allocated:Diadoc.Api.Proto.Events.ResolutionRequestInfo.Target)
}

// optional string ResolvedWith = 4;
inline bool ResolutionRequestInfo::has_resolvedwith() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void ResolutionRequestInfo::set_has_resolvedwith() {
  _has_bits_[0] |= 0x00000008u;
}
inline void ResolutionRequestInfo::clear_has_resolvedwith() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void ResolutionRequestInfo::clear_resolvedwith() {
  if (resolvedwith_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    resolvedwith_->clear();
  }
  clear_has_resolvedwith();
}
inline const ::std::string& ResolutionRequestInfo::resolvedwith() const {
  // @@protoc_insertion_point(field_get:Diadoc.Api.Proto.Events.ResolutionRequestInfo.ResolvedWith)
  return *resolvedwith_;
}
inline void ResolutionRequestInfo::set_resolvedwith(const ::std::string& value) {
  set_has_resolvedwith();
  if (resolvedwith_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    resolvedwith_ = new ::std::string;
  }
  resolvedwith_->assign(value);
  // @@protoc_insertion_point(field_set:Diadoc.Api.Proto.Events.ResolutionRequestInfo.ResolvedWith)
}
inline void ResolutionRequestInfo::set_resolvedwith(const char* value) {
  set_has_resolvedwith();
  if (resolvedwith_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    resolvedwith_ = new ::std::string;
  }
  resolvedwith_->assign(value);
  // @@protoc_insertion_point(field_set_char:Diadoc.Api.Proto.Events.ResolutionRequestInfo.ResolvedWith)
}
inline void ResolutionRequestInfo::set_resolvedwith(const char* value, size_t size) {
  set_has_resolvedwith();
  if (resolvedwith_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    resolvedwith_ = new ::std::string;
  }
  resolvedwith_->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:Diadoc.Api.Proto.Events.ResolutionRequestInfo.ResolvedWith)
}
inline ::std::string* ResolutionRequestInfo::mutable_resolvedwith() {
  set_has_resolvedwith();
  if (resolvedwith_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    resolvedwith_ = new ::std::string;
  }
  // @@protoc_insertion_point(field_mutable:Diadoc.Api.Proto.Events.ResolutionRequestInfo.ResolvedWith)
  return resolvedwith_;
}
inline ::std::string* ResolutionRequestInfo::release_resolvedwith() {
  clear_has_resolvedwith();
  if (resolvedwith_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    return NULL;
  } else {
    ::std::string* temp = resolvedwith_;
    resolvedwith_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    return temp;
  }
}
inline void ResolutionRequestInfo::set_allocated_resolvedwith(::std::string* resolvedwith) {
  if (resolvedwith_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete resolvedwith_;
  }
  if (resolvedwith) {
    set_has_resolvedwith();
    resolvedwith_ = resolvedwith;
  } else {
    clear_has_resolvedwith();
    resolvedwith_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }
  // @@protoc_insertion_point(field_set_allocated:Diadoc.Api.Proto.Events.ResolutionRequestInfo.ResolvedWith)
}

// repeated .Diadoc.Api.Proto.ResolutionAction Actions = 5;
inline int ResolutionRequestInfo::actions_size() const {
  return actions_.size();
}
inline void ResolutionRequestInfo::clear_actions() {
  actions_.Clear();
}
inline ::Diadoc::Api::Proto::ResolutionAction ResolutionRequestInfo::actions(int index) const {
  // @@protoc_insertion_point(field_get:Diadoc.Api.Proto.Events.ResolutionRequestInfo.Actions)
  return static_cast< ::Diadoc::Api::Proto::ResolutionAction >(actions_.Get(index));
}
inline void ResolutionRequestInfo::set_actions(int index, ::Diadoc::Api::Proto::ResolutionAction value) {
  assert(::Diadoc::Api::Proto::ResolutionAction_IsValid(value));
  actions_.Set(index, value);
  // @@protoc_insertion_point(field_set:Diadoc.Api.Proto.Events.ResolutionRequestInfo.Actions)
}
inline void ResolutionRequestInfo::add_actions(::Diadoc::Api::Proto::ResolutionAction value) {
  assert(::Diadoc::Api::Proto::ResolutionAction_IsValid(value));
  actions_.Add(value);
  // @@protoc_insertion_point(field_add:Diadoc.Api.Proto.Events.ResolutionRequestInfo.Actions)
}
inline const ::google::protobuf::RepeatedField<int>&
ResolutionRequestInfo::actions() const {
  // @@protoc_insertion_point(field_list:Diadoc.Api.Proto.Events.ResolutionRequestInfo.Actions)
  return actions_;
}
inline ::google::protobuf::RepeatedField<int>*
ResolutionRequestInfo::mutable_actions() {
  // @@protoc_insertion_point(field_mutable_list:Diadoc.Api.Proto.Events.ResolutionRequestInfo.Actions)
  return &actions_;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace Events
}  // namespace Proto
}  // namespace Api
}  // namespace Diadoc

#ifndef SWIG
namespace google {
namespace protobuf {


}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_Events_2fResolutionRequestInfo_2eproto__INCLUDED