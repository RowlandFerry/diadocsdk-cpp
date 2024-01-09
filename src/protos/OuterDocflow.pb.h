// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: OuterDocflow.proto

#ifndef PROTOBUF_OuterDocflow_2eproto__INCLUDED
#define PROTOBUF_OuterDocflow_2eproto__INCLUDED

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
#include "OuterDocflowStatus.pb.h"
// @@protoc_insertion_point(includes)

namespace Diadoc {
namespace Api {
namespace Proto {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_OuterDocflow_2eproto();
void protobuf_AssignDesc_OuterDocflow_2eproto();
void protobuf_ShutdownFile_OuterDocflow_2eproto();

class OuterDocflowInfo;

// ===================================================================

class OuterDocflowInfo : public ::google::protobuf::Message {
 public:
  OuterDocflowInfo();
  virtual ~OuterDocflowInfo();

  OuterDocflowInfo(const OuterDocflowInfo& from);

  inline OuterDocflowInfo& operator=(const OuterDocflowInfo& from) {
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
  static const OuterDocflowInfo& default_instance();

  void Swap(OuterDocflowInfo* other);

  // implements Message ----------------------------------------------

  OuterDocflowInfo* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const OuterDocflowInfo& from);
  void MergeFrom(const OuterDocflowInfo& from);
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

  // required string DocflowNamedId = 1;
  inline bool has_docflownamedid() const;
  inline void clear_docflownamedid();
  static const int kDocflowNamedIdFieldNumber = 1;
  inline const ::std::string& docflownamedid() const;
  inline void set_docflownamedid(const ::std::string& value);
  inline void set_docflownamedid(const char* value);
  inline void set_docflownamedid(const char* value, size_t size);
  inline ::std::string* mutable_docflownamedid();
  inline ::std::string* release_docflownamedid();
  inline void set_allocated_docflownamedid(::std::string* docflownamedid);

  // required string DocflowFriendlyName = 2;
  inline bool has_docflowfriendlyname() const;
  inline void clear_docflowfriendlyname();
  static const int kDocflowFriendlyNameFieldNumber = 2;
  inline const ::std::string& docflowfriendlyname() const;
  inline void set_docflowfriendlyname(const ::std::string& value);
  inline void set_docflowfriendlyname(const char* value);
  inline void set_docflowfriendlyname(const char* value, size_t size);
  inline ::std::string* mutable_docflowfriendlyname();
  inline ::std::string* release_docflowfriendlyname();
  inline void set_allocated_docflowfriendlyname(::std::string* docflowfriendlyname);

  // required .Diadoc.Api.Proto.Status Status = 3;
  inline bool has_status() const;
  inline void clear_status();
  static const int kStatusFieldNumber = 3;
  inline const ::Diadoc::Api::Proto::Status& status() const;
  inline ::Diadoc::Api::Proto::Status* mutable_status();
  inline ::Diadoc::Api::Proto::Status* release_status();
  inline void set_allocated_status(::Diadoc::Api::Proto::Status* status);

  // @@protoc_insertion_point(class_scope:Diadoc.Api.Proto.OuterDocflowInfo)
 private:
  inline void set_has_docflownamedid();
  inline void clear_has_docflownamedid();
  inline void set_has_docflowfriendlyname();
  inline void clear_has_docflowfriendlyname();
  inline void set_has_status();
  inline void clear_has_status();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::std::string* docflownamedid_;
  ::std::string* docflowfriendlyname_;
  ::Diadoc::Api::Proto::Status* status_;
  friend void  protobuf_AddDesc_OuterDocflow_2eproto();
  friend void protobuf_AssignDesc_OuterDocflow_2eproto();
  friend void protobuf_ShutdownFile_OuterDocflow_2eproto();

  void InitAsDefaultInstance();
  static OuterDocflowInfo* default_instance_;
};
// ===================================================================


// ===================================================================

// OuterDocflowInfo

// required string DocflowNamedId = 1;
inline bool OuterDocflowInfo::has_docflownamedid() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void OuterDocflowInfo::set_has_docflownamedid() {
  _has_bits_[0] |= 0x00000001u;
}
inline void OuterDocflowInfo::clear_has_docflownamedid() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void OuterDocflowInfo::clear_docflownamedid() {
  if (docflownamedid_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    docflownamedid_->clear();
  }
  clear_has_docflownamedid();
}
inline const ::std::string& OuterDocflowInfo::docflownamedid() const {
  // @@protoc_insertion_point(field_get:Diadoc.Api.Proto.OuterDocflowInfo.DocflowNamedId)
  return *docflownamedid_;
}
inline void OuterDocflowInfo::set_docflownamedid(const ::std::string& value) {
  set_has_docflownamedid();
  if (docflownamedid_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    docflownamedid_ = new ::std::string;
  }
  docflownamedid_->assign(value);
  // @@protoc_insertion_point(field_set:Diadoc.Api.Proto.OuterDocflowInfo.DocflowNamedId)
}
inline void OuterDocflowInfo::set_docflownamedid(const char* value) {
  set_has_docflownamedid();
  if (docflownamedid_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    docflownamedid_ = new ::std::string;
  }
  docflownamedid_->assign(value);
  // @@protoc_insertion_point(field_set_char:Diadoc.Api.Proto.OuterDocflowInfo.DocflowNamedId)
}
inline void OuterDocflowInfo::set_docflownamedid(const char* value, size_t size) {
  set_has_docflownamedid();
  if (docflownamedid_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    docflownamedid_ = new ::std::string;
  }
  docflownamedid_->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:Diadoc.Api.Proto.OuterDocflowInfo.DocflowNamedId)
}
inline ::std::string* OuterDocflowInfo::mutable_docflownamedid() {
  set_has_docflownamedid();
  if (docflownamedid_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    docflownamedid_ = new ::std::string;
  }
  // @@protoc_insertion_point(field_mutable:Diadoc.Api.Proto.OuterDocflowInfo.DocflowNamedId)
  return docflownamedid_;
}
inline ::std::string* OuterDocflowInfo::release_docflownamedid() {
  clear_has_docflownamedid();
  if (docflownamedid_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    return NULL;
  } else {
    ::std::string* temp = docflownamedid_;
    docflownamedid_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    return temp;
  }
}
inline void OuterDocflowInfo::set_allocated_docflownamedid(::std::string* docflownamedid) {
  if (docflownamedid_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete docflownamedid_;
  }
  if (docflownamedid) {
    set_has_docflownamedid();
    docflownamedid_ = docflownamedid;
  } else {
    clear_has_docflownamedid();
    docflownamedid_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }
  // @@protoc_insertion_point(field_set_allocated:Diadoc.Api.Proto.OuterDocflowInfo.DocflowNamedId)
}

// required string DocflowFriendlyName = 2;
inline bool OuterDocflowInfo::has_docflowfriendlyname() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void OuterDocflowInfo::set_has_docflowfriendlyname() {
  _has_bits_[0] |= 0x00000002u;
}
inline void OuterDocflowInfo::clear_has_docflowfriendlyname() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void OuterDocflowInfo::clear_docflowfriendlyname() {
  if (docflowfriendlyname_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    docflowfriendlyname_->clear();
  }
  clear_has_docflowfriendlyname();
}
inline const ::std::string& OuterDocflowInfo::docflowfriendlyname() const {
  // @@protoc_insertion_point(field_get:Diadoc.Api.Proto.OuterDocflowInfo.DocflowFriendlyName)
  return *docflowfriendlyname_;
}
inline void OuterDocflowInfo::set_docflowfriendlyname(const ::std::string& value) {
  set_has_docflowfriendlyname();
  if (docflowfriendlyname_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    docflowfriendlyname_ = new ::std::string;
  }
  docflowfriendlyname_->assign(value);
  // @@protoc_insertion_point(field_set:Diadoc.Api.Proto.OuterDocflowInfo.DocflowFriendlyName)
}
inline void OuterDocflowInfo::set_docflowfriendlyname(const char* value) {
  set_has_docflowfriendlyname();
  if (docflowfriendlyname_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    docflowfriendlyname_ = new ::std::string;
  }
  docflowfriendlyname_->assign(value);
  // @@protoc_insertion_point(field_set_char:Diadoc.Api.Proto.OuterDocflowInfo.DocflowFriendlyName)
}
inline void OuterDocflowInfo::set_docflowfriendlyname(const char* value, size_t size) {
  set_has_docflowfriendlyname();
  if (docflowfriendlyname_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    docflowfriendlyname_ = new ::std::string;
  }
  docflowfriendlyname_->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:Diadoc.Api.Proto.OuterDocflowInfo.DocflowFriendlyName)
}
inline ::std::string* OuterDocflowInfo::mutable_docflowfriendlyname() {
  set_has_docflowfriendlyname();
  if (docflowfriendlyname_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    docflowfriendlyname_ = new ::std::string;
  }
  // @@protoc_insertion_point(field_mutable:Diadoc.Api.Proto.OuterDocflowInfo.DocflowFriendlyName)
  return docflowfriendlyname_;
}
inline ::std::string* OuterDocflowInfo::release_docflowfriendlyname() {
  clear_has_docflowfriendlyname();
  if (docflowfriendlyname_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    return NULL;
  } else {
    ::std::string* temp = docflowfriendlyname_;
    docflowfriendlyname_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    return temp;
  }
}
inline void OuterDocflowInfo::set_allocated_docflowfriendlyname(::std::string* docflowfriendlyname) {
  if (docflowfriendlyname_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete docflowfriendlyname_;
  }
  if (docflowfriendlyname) {
    set_has_docflowfriendlyname();
    docflowfriendlyname_ = docflowfriendlyname;
  } else {
    clear_has_docflowfriendlyname();
    docflowfriendlyname_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }
  // @@protoc_insertion_point(field_set_allocated:Diadoc.Api.Proto.OuterDocflowInfo.DocflowFriendlyName)
}

// required .Diadoc.Api.Proto.Status Status = 3;
inline bool OuterDocflowInfo::has_status() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void OuterDocflowInfo::set_has_status() {
  _has_bits_[0] |= 0x00000004u;
}
inline void OuterDocflowInfo::clear_has_status() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void OuterDocflowInfo::clear_status() {
  if (status_ != NULL) status_->::Diadoc::Api::Proto::Status::Clear();
  clear_has_status();
}
inline const ::Diadoc::Api::Proto::Status& OuterDocflowInfo::status() const {
  // @@protoc_insertion_point(field_get:Diadoc.Api.Proto.OuterDocflowInfo.Status)
  return status_ != NULL ? *status_ : *default_instance_->status_;
}
inline ::Diadoc::Api::Proto::Status* OuterDocflowInfo::mutable_status() {
  set_has_status();
  if (status_ == NULL) status_ = new ::Diadoc::Api::Proto::Status;
  // @@protoc_insertion_point(field_mutable:Diadoc.Api.Proto.OuterDocflowInfo.Status)
  return status_;
}
inline ::Diadoc::Api::Proto::Status* OuterDocflowInfo::release_status() {
  clear_has_status();
  ::Diadoc::Api::Proto::Status* temp = status_;
  status_ = NULL;
  return temp;
}
inline void OuterDocflowInfo::set_allocated_status(::Diadoc::Api::Proto::Status* status) {
  delete status_;
  status_ = status;
  if (status) {
    set_has_status();
  } else {
    clear_has_status();
  }
  // @@protoc_insertion_point(field_set_allocated:Diadoc.Api.Proto.OuterDocflowInfo.Status)
}


// @@protoc_insertion_point(namespace_scope)

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

#endif  // PROTOBUF_OuterDocflow_2eproto__INCLUDED
