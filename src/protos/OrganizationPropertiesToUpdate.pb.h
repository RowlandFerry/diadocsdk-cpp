// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: OrganizationPropertiesToUpdate.proto

#ifndef PROTOBUF_OrganizationPropertiesToUpdate_2eproto__INCLUDED
#define PROTOBUF_OrganizationPropertiesToUpdate_2eproto__INCLUDED

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
#include "Address.pb.h"
// @@protoc_insertion_point(includes)

namespace Diadoc {
namespace Api {
namespace Proto {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_OrganizationPropertiesToUpdate_2eproto();
void protobuf_AssignDesc_OrganizationPropertiesToUpdate_2eproto();
void protobuf_ShutdownFile_OrganizationPropertiesToUpdate_2eproto();

class StringValue;
class OrganizationPropertiesToUpdate;
class HeadOrganizationPropertiesToUpdate;

// ===================================================================

class StringValue : public ::google::protobuf::Message {
 public:
  StringValue();
  virtual ~StringValue();

  StringValue(const StringValue& from);

  inline StringValue& operator=(const StringValue& from) {
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
  static const StringValue& default_instance();

  void Swap(StringValue* other);

  // implements Message ----------------------------------------------

  StringValue* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const StringValue& from);
  void MergeFrom(const StringValue& from);
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

  // optional string Value = 1;
  inline bool has_value() const;
  inline void clear_value();
  static const int kValueFieldNumber = 1;
  inline const ::std::string& value() const;
  inline void set_value(const ::std::string& value);
  inline void set_value(const char* value);
  inline void set_value(const char* value, size_t size);
  inline ::std::string* mutable_value();
  inline ::std::string* release_value();
  inline void set_allocated_value(::std::string* value);

  // @@protoc_insertion_point(class_scope:Diadoc.Api.Proto.StringValue)
 private:
  inline void set_has_value();
  inline void clear_has_value();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::std::string* value_;
  friend void  protobuf_AddDesc_OrganizationPropertiesToUpdate_2eproto();
  friend void protobuf_AssignDesc_OrganizationPropertiesToUpdate_2eproto();
  friend void protobuf_ShutdownFile_OrganizationPropertiesToUpdate_2eproto();

  void InitAsDefaultInstance();
  static StringValue* default_instance_;
};
// -------------------------------------------------------------------

class OrganizationPropertiesToUpdate : public ::google::protobuf::Message {
 public:
  OrganizationPropertiesToUpdate();
  virtual ~OrganizationPropertiesToUpdate();

  OrganizationPropertiesToUpdate(const OrganizationPropertiesToUpdate& from);

  inline OrganizationPropertiesToUpdate& operator=(const OrganizationPropertiesToUpdate& from) {
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
  static const OrganizationPropertiesToUpdate& default_instance();

  void Swap(OrganizationPropertiesToUpdate* other);

  // implements Message ----------------------------------------------

  OrganizationPropertiesToUpdate* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const OrganizationPropertiesToUpdate& from);
  void MergeFrom(const OrganizationPropertiesToUpdate& from);
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

  // required string OrgId = 1;
  inline bool has_orgid() const;
  inline void clear_orgid();
  static const int kOrgIdFieldNumber = 1;
  inline const ::std::string& orgid() const;
  inline void set_orgid(const ::std::string& value);
  inline void set_orgid(const char* value);
  inline void set_orgid(const char* value, size_t size);
  inline ::std::string* mutable_orgid();
  inline ::std::string* release_orgid();
  inline void set_allocated_orgid(::std::string* orgid);

  // optional .Diadoc.Api.Proto.StringValue Ogrn = 2;
  inline bool has_ogrn() const;
  inline void clear_ogrn();
  static const int kOgrnFieldNumber = 2;
  inline const ::Diadoc::Api::Proto::StringValue& ogrn() const;
  inline ::Diadoc::Api::Proto::StringValue* mutable_ogrn();
  inline ::Diadoc::Api::Proto::StringValue* release_ogrn();
  inline void set_allocated_ogrn(::Diadoc::Api::Proto::StringValue* ogrn);

  // optional .Diadoc.Api.Proto.StringValue IfnsCode = 3;
  inline bool has_ifnscode() const;
  inline void clear_ifnscode();
  static const int kIfnsCodeFieldNumber = 3;
  inline const ::Diadoc::Api::Proto::StringValue& ifnscode() const;
  inline ::Diadoc::Api::Proto::StringValue* mutable_ifnscode();
  inline ::Diadoc::Api::Proto::StringValue* release_ifnscode();
  inline void set_allocated_ifnscode(::Diadoc::Api::Proto::StringValue* ifnscode);

  // optional .Diadoc.Api.Proto.Address Address = 4;
  inline bool has_address() const;
  inline void clear_address();
  static const int kAddressFieldNumber = 4;
  inline const ::Diadoc::Api::Proto::Address& address() const;
  inline ::Diadoc::Api::Proto::Address* mutable_address();
  inline ::Diadoc::Api::Proto::Address* release_address();
  inline void set_allocated_address(::Diadoc::Api::Proto::Address* address);

  // optional .Diadoc.Api.Proto.HeadOrganizationPropertiesToUpdate HeadOrganizationProperties = 5;
  inline bool has_headorganizationproperties() const;
  inline void clear_headorganizationproperties();
  static const int kHeadOrganizationPropertiesFieldNumber = 5;
  inline const ::Diadoc::Api::Proto::HeadOrganizationPropertiesToUpdate& headorganizationproperties() const;
  inline ::Diadoc::Api::Proto::HeadOrganizationPropertiesToUpdate* mutable_headorganizationproperties();
  inline ::Diadoc::Api::Proto::HeadOrganizationPropertiesToUpdate* release_headorganizationproperties();
  inline void set_allocated_headorganizationproperties(::Diadoc::Api::Proto::HeadOrganizationPropertiesToUpdate* headorganizationproperties);

  // @@protoc_insertion_point(class_scope:Diadoc.Api.Proto.OrganizationPropertiesToUpdate)
 private:
  inline void set_has_orgid();
  inline void clear_has_orgid();
  inline void set_has_ogrn();
  inline void clear_has_ogrn();
  inline void set_has_ifnscode();
  inline void clear_has_ifnscode();
  inline void set_has_address();
  inline void clear_has_address();
  inline void set_has_headorganizationproperties();
  inline void clear_has_headorganizationproperties();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::std::string* orgid_;
  ::Diadoc::Api::Proto::StringValue* ogrn_;
  ::Diadoc::Api::Proto::StringValue* ifnscode_;
  ::Diadoc::Api::Proto::Address* address_;
  ::Diadoc::Api::Proto::HeadOrganizationPropertiesToUpdate* headorganizationproperties_;
  friend void  protobuf_AddDesc_OrganizationPropertiesToUpdate_2eproto();
  friend void protobuf_AssignDesc_OrganizationPropertiesToUpdate_2eproto();
  friend void protobuf_ShutdownFile_OrganizationPropertiesToUpdate_2eproto();

  void InitAsDefaultInstance();
  static OrganizationPropertiesToUpdate* default_instance_;
};
// -------------------------------------------------------------------

class HeadOrganizationPropertiesToUpdate : public ::google::protobuf::Message {
 public:
  HeadOrganizationPropertiesToUpdate();
  virtual ~HeadOrganizationPropertiesToUpdate();

  HeadOrganizationPropertiesToUpdate(const HeadOrganizationPropertiesToUpdate& from);

  inline HeadOrganizationPropertiesToUpdate& operator=(const HeadOrganizationPropertiesToUpdate& from) {
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
  static const HeadOrganizationPropertiesToUpdate& default_instance();

  void Swap(HeadOrganizationPropertiesToUpdate* other);

  // implements Message ----------------------------------------------

  HeadOrganizationPropertiesToUpdate* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const HeadOrganizationPropertiesToUpdate& from);
  void MergeFrom(const HeadOrganizationPropertiesToUpdate& from);
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

  // optional .Diadoc.Api.Proto.StringValue Kpp = 1;
  inline bool has_kpp() const;
  inline void clear_kpp();
  static const int kKppFieldNumber = 1;
  inline const ::Diadoc::Api::Proto::StringValue& kpp() const;
  inline ::Diadoc::Api::Proto::StringValue* mutable_kpp();
  inline ::Diadoc::Api::Proto::StringValue* release_kpp();
  inline void set_allocated_kpp(::Diadoc::Api::Proto::StringValue* kpp);

  // optional .Diadoc.Api.Proto.StringValue FullName = 2;
  inline bool has_fullname() const;
  inline void clear_fullname();
  static const int kFullNameFieldNumber = 2;
  inline const ::Diadoc::Api::Proto::StringValue& fullname() const;
  inline ::Diadoc::Api::Proto::StringValue* mutable_fullname();
  inline ::Diadoc::Api::Proto::StringValue* release_fullname();
  inline void set_allocated_fullname(::Diadoc::Api::Proto::StringValue* fullname);

  // optional .Diadoc.Api.Proto.Address Address = 3;
  inline bool has_address() const;
  inline void clear_address();
  static const int kAddressFieldNumber = 3;
  inline const ::Diadoc::Api::Proto::Address& address() const;
  inline ::Diadoc::Api::Proto::Address* mutable_address();
  inline ::Diadoc::Api::Proto::Address* release_address();
  inline void set_allocated_address(::Diadoc::Api::Proto::Address* address);

  // @@protoc_insertion_point(class_scope:Diadoc.Api.Proto.HeadOrganizationPropertiesToUpdate)
 private:
  inline void set_has_kpp();
  inline void clear_has_kpp();
  inline void set_has_fullname();
  inline void clear_has_fullname();
  inline void set_has_address();
  inline void clear_has_address();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::Diadoc::Api::Proto::StringValue* kpp_;
  ::Diadoc::Api::Proto::StringValue* fullname_;
  ::Diadoc::Api::Proto::Address* address_;
  friend void  protobuf_AddDesc_OrganizationPropertiesToUpdate_2eproto();
  friend void protobuf_AssignDesc_OrganizationPropertiesToUpdate_2eproto();
  friend void protobuf_ShutdownFile_OrganizationPropertiesToUpdate_2eproto();

  void InitAsDefaultInstance();
  static HeadOrganizationPropertiesToUpdate* default_instance_;
};
// ===================================================================


// ===================================================================

// StringValue

// optional string Value = 1;
inline bool StringValue::has_value() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void StringValue::set_has_value() {
  _has_bits_[0] |= 0x00000001u;
}
inline void StringValue::clear_has_value() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void StringValue::clear_value() {
  if (value_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    value_->clear();
  }
  clear_has_value();
}
inline const ::std::string& StringValue::value() const {
  // @@protoc_insertion_point(field_get:Diadoc.Api.Proto.StringValue.Value)
  return *value_;
}
inline void StringValue::set_value(const ::std::string& value) {
  set_has_value();
  if (value_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    value_ = new ::std::string;
  }
  value_->assign(value);
  // @@protoc_insertion_point(field_set:Diadoc.Api.Proto.StringValue.Value)
}
inline void StringValue::set_value(const char* value) {
  set_has_value();
  if (value_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    value_ = new ::std::string;
  }
  value_->assign(value);
  // @@protoc_insertion_point(field_set_char:Diadoc.Api.Proto.StringValue.Value)
}
inline void StringValue::set_value(const char* value, size_t size) {
  set_has_value();
  if (value_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    value_ = new ::std::string;
  }
  value_->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:Diadoc.Api.Proto.StringValue.Value)
}
inline ::std::string* StringValue::mutable_value() {
  set_has_value();
  if (value_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    value_ = new ::std::string;
  }
  // @@protoc_insertion_point(field_mutable:Diadoc.Api.Proto.StringValue.Value)
  return value_;
}
inline ::std::string* StringValue::release_value() {
  clear_has_value();
  if (value_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    return NULL;
  } else {
    ::std::string* temp = value_;
    value_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    return temp;
  }
}
inline void StringValue::set_allocated_value(::std::string* value) {
  if (value_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete value_;
  }
  if (value) {
    set_has_value();
    value_ = value;
  } else {
    clear_has_value();
    value_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }
  // @@protoc_insertion_point(field_set_allocated:Diadoc.Api.Proto.StringValue.Value)
}

// -------------------------------------------------------------------

// OrganizationPropertiesToUpdate

// required string OrgId = 1;
inline bool OrganizationPropertiesToUpdate::has_orgid() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void OrganizationPropertiesToUpdate::set_has_orgid() {
  _has_bits_[0] |= 0x00000001u;
}
inline void OrganizationPropertiesToUpdate::clear_has_orgid() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void OrganizationPropertiesToUpdate::clear_orgid() {
  if (orgid_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    orgid_->clear();
  }
  clear_has_orgid();
}
inline const ::std::string& OrganizationPropertiesToUpdate::orgid() const {
  // @@protoc_insertion_point(field_get:Diadoc.Api.Proto.OrganizationPropertiesToUpdate.OrgId)
  return *orgid_;
}
inline void OrganizationPropertiesToUpdate::set_orgid(const ::std::string& value) {
  set_has_orgid();
  if (orgid_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    orgid_ = new ::std::string;
  }
  orgid_->assign(value);
  // @@protoc_insertion_point(field_set:Diadoc.Api.Proto.OrganizationPropertiesToUpdate.OrgId)
}
inline void OrganizationPropertiesToUpdate::set_orgid(const char* value) {
  set_has_orgid();
  if (orgid_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    orgid_ = new ::std::string;
  }
  orgid_->assign(value);
  // @@protoc_insertion_point(field_set_char:Diadoc.Api.Proto.OrganizationPropertiesToUpdate.OrgId)
}
inline void OrganizationPropertiesToUpdate::set_orgid(const char* value, size_t size) {
  set_has_orgid();
  if (orgid_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    orgid_ = new ::std::string;
  }
  orgid_->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:Diadoc.Api.Proto.OrganizationPropertiesToUpdate.OrgId)
}
inline ::std::string* OrganizationPropertiesToUpdate::mutable_orgid() {
  set_has_orgid();
  if (orgid_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    orgid_ = new ::std::string;
  }
  // @@protoc_insertion_point(field_mutable:Diadoc.Api.Proto.OrganizationPropertiesToUpdate.OrgId)
  return orgid_;
}
inline ::std::string* OrganizationPropertiesToUpdate::release_orgid() {
  clear_has_orgid();
  if (orgid_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    return NULL;
  } else {
    ::std::string* temp = orgid_;
    orgid_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    return temp;
  }
}
inline void OrganizationPropertiesToUpdate::set_allocated_orgid(::std::string* orgid) {
  if (orgid_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete orgid_;
  }
  if (orgid) {
    set_has_orgid();
    orgid_ = orgid;
  } else {
    clear_has_orgid();
    orgid_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }
  // @@protoc_insertion_point(field_set_allocated:Diadoc.Api.Proto.OrganizationPropertiesToUpdate.OrgId)
}

// optional .Diadoc.Api.Proto.StringValue Ogrn = 2;
inline bool OrganizationPropertiesToUpdate::has_ogrn() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void OrganizationPropertiesToUpdate::set_has_ogrn() {
  _has_bits_[0] |= 0x00000002u;
}
inline void OrganizationPropertiesToUpdate::clear_has_ogrn() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void OrganizationPropertiesToUpdate::clear_ogrn() {
  if (ogrn_ != NULL) ogrn_->::Diadoc::Api::Proto::StringValue::Clear();
  clear_has_ogrn();
}
inline const ::Diadoc::Api::Proto::StringValue& OrganizationPropertiesToUpdate::ogrn() const {
  // @@protoc_insertion_point(field_get:Diadoc.Api.Proto.OrganizationPropertiesToUpdate.Ogrn)
  return ogrn_ != NULL ? *ogrn_ : *default_instance_->ogrn_;
}
inline ::Diadoc::Api::Proto::StringValue* OrganizationPropertiesToUpdate::mutable_ogrn() {
  set_has_ogrn();
  if (ogrn_ == NULL) ogrn_ = new ::Diadoc::Api::Proto::StringValue;
  // @@protoc_insertion_point(field_mutable:Diadoc.Api.Proto.OrganizationPropertiesToUpdate.Ogrn)
  return ogrn_;
}
inline ::Diadoc::Api::Proto::StringValue* OrganizationPropertiesToUpdate::release_ogrn() {
  clear_has_ogrn();
  ::Diadoc::Api::Proto::StringValue* temp = ogrn_;
  ogrn_ = NULL;
  return temp;
}
inline void OrganizationPropertiesToUpdate::set_allocated_ogrn(::Diadoc::Api::Proto::StringValue* ogrn) {
  delete ogrn_;
  ogrn_ = ogrn;
  if (ogrn) {
    set_has_ogrn();
  } else {
    clear_has_ogrn();
  }
  // @@protoc_insertion_point(field_set_allocated:Diadoc.Api.Proto.OrganizationPropertiesToUpdate.Ogrn)
}

// optional .Diadoc.Api.Proto.StringValue IfnsCode = 3;
inline bool OrganizationPropertiesToUpdate::has_ifnscode() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void OrganizationPropertiesToUpdate::set_has_ifnscode() {
  _has_bits_[0] |= 0x00000004u;
}
inline void OrganizationPropertiesToUpdate::clear_has_ifnscode() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void OrganizationPropertiesToUpdate::clear_ifnscode() {
  if (ifnscode_ != NULL) ifnscode_->::Diadoc::Api::Proto::StringValue::Clear();
  clear_has_ifnscode();
}
inline const ::Diadoc::Api::Proto::StringValue& OrganizationPropertiesToUpdate::ifnscode() const {
  // @@protoc_insertion_point(field_get:Diadoc.Api.Proto.OrganizationPropertiesToUpdate.IfnsCode)
  return ifnscode_ != NULL ? *ifnscode_ : *default_instance_->ifnscode_;
}
inline ::Diadoc::Api::Proto::StringValue* OrganizationPropertiesToUpdate::mutable_ifnscode() {
  set_has_ifnscode();
  if (ifnscode_ == NULL) ifnscode_ = new ::Diadoc::Api::Proto::StringValue;
  // @@protoc_insertion_point(field_mutable:Diadoc.Api.Proto.OrganizationPropertiesToUpdate.IfnsCode)
  return ifnscode_;
}
inline ::Diadoc::Api::Proto::StringValue* OrganizationPropertiesToUpdate::release_ifnscode() {
  clear_has_ifnscode();
  ::Diadoc::Api::Proto::StringValue* temp = ifnscode_;
  ifnscode_ = NULL;
  return temp;
}
inline void OrganizationPropertiesToUpdate::set_allocated_ifnscode(::Diadoc::Api::Proto::StringValue* ifnscode) {
  delete ifnscode_;
  ifnscode_ = ifnscode;
  if (ifnscode) {
    set_has_ifnscode();
  } else {
    clear_has_ifnscode();
  }
  // @@protoc_insertion_point(field_set_allocated:Diadoc.Api.Proto.OrganizationPropertiesToUpdate.IfnsCode)
}

// optional .Diadoc.Api.Proto.Address Address = 4;
inline bool OrganizationPropertiesToUpdate::has_address() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void OrganizationPropertiesToUpdate::set_has_address() {
  _has_bits_[0] |= 0x00000008u;
}
inline void OrganizationPropertiesToUpdate::clear_has_address() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void OrganizationPropertiesToUpdate::clear_address() {
  if (address_ != NULL) address_->::Diadoc::Api::Proto::Address::Clear();
  clear_has_address();
}
inline const ::Diadoc::Api::Proto::Address& OrganizationPropertiesToUpdate::address() const {
  // @@protoc_insertion_point(field_get:Diadoc.Api.Proto.OrganizationPropertiesToUpdate.Address)
  return address_ != NULL ? *address_ : *default_instance_->address_;
}
inline ::Diadoc::Api::Proto::Address* OrganizationPropertiesToUpdate::mutable_address() {
  set_has_address();
  if (address_ == NULL) address_ = new ::Diadoc::Api::Proto::Address;
  // @@protoc_insertion_point(field_mutable:Diadoc.Api.Proto.OrganizationPropertiesToUpdate.Address)
  return address_;
}
inline ::Diadoc::Api::Proto::Address* OrganizationPropertiesToUpdate::release_address() {
  clear_has_address();
  ::Diadoc::Api::Proto::Address* temp = address_;
  address_ = NULL;
  return temp;
}
inline void OrganizationPropertiesToUpdate::set_allocated_address(::Diadoc::Api::Proto::Address* address) {
  delete address_;
  address_ = address;
  if (address) {
    set_has_address();
  } else {
    clear_has_address();
  }
  // @@protoc_insertion_point(field_set_allocated:Diadoc.Api.Proto.OrganizationPropertiesToUpdate.Address)
}

// optional .Diadoc.Api.Proto.HeadOrganizationPropertiesToUpdate HeadOrganizationProperties = 5;
inline bool OrganizationPropertiesToUpdate::has_headorganizationproperties() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void OrganizationPropertiesToUpdate::set_has_headorganizationproperties() {
  _has_bits_[0] |= 0x00000010u;
}
inline void OrganizationPropertiesToUpdate::clear_has_headorganizationproperties() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void OrganizationPropertiesToUpdate::clear_headorganizationproperties() {
  if (headorganizationproperties_ != NULL) headorganizationproperties_->::Diadoc::Api::Proto::HeadOrganizationPropertiesToUpdate::Clear();
  clear_has_headorganizationproperties();
}
inline const ::Diadoc::Api::Proto::HeadOrganizationPropertiesToUpdate& OrganizationPropertiesToUpdate::headorganizationproperties() const {
  // @@protoc_insertion_point(field_get:Diadoc.Api.Proto.OrganizationPropertiesToUpdate.HeadOrganizationProperties)
  return headorganizationproperties_ != NULL ? *headorganizationproperties_ : *default_instance_->headorganizationproperties_;
}
inline ::Diadoc::Api::Proto::HeadOrganizationPropertiesToUpdate* OrganizationPropertiesToUpdate::mutable_headorganizationproperties() {
  set_has_headorganizationproperties();
  if (headorganizationproperties_ == NULL) headorganizationproperties_ = new ::Diadoc::Api::Proto::HeadOrganizationPropertiesToUpdate;
  // @@protoc_insertion_point(field_mutable:Diadoc.Api.Proto.OrganizationPropertiesToUpdate.HeadOrganizationProperties)
  return headorganizationproperties_;
}
inline ::Diadoc::Api::Proto::HeadOrganizationPropertiesToUpdate* OrganizationPropertiesToUpdate::release_headorganizationproperties() {
  clear_has_headorganizationproperties();
  ::Diadoc::Api::Proto::HeadOrganizationPropertiesToUpdate* temp = headorganizationproperties_;
  headorganizationproperties_ = NULL;
  return temp;
}
inline void OrganizationPropertiesToUpdate::set_allocated_headorganizationproperties(::Diadoc::Api::Proto::HeadOrganizationPropertiesToUpdate* headorganizationproperties) {
  delete headorganizationproperties_;
  headorganizationproperties_ = headorganizationproperties;
  if (headorganizationproperties) {
    set_has_headorganizationproperties();
  } else {
    clear_has_headorganizationproperties();
  }
  // @@protoc_insertion_point(field_set_allocated:Diadoc.Api.Proto.OrganizationPropertiesToUpdate.HeadOrganizationProperties)
}

// -------------------------------------------------------------------

// HeadOrganizationPropertiesToUpdate

// optional .Diadoc.Api.Proto.StringValue Kpp = 1;
inline bool HeadOrganizationPropertiesToUpdate::has_kpp() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void HeadOrganizationPropertiesToUpdate::set_has_kpp() {
  _has_bits_[0] |= 0x00000001u;
}
inline void HeadOrganizationPropertiesToUpdate::clear_has_kpp() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void HeadOrganizationPropertiesToUpdate::clear_kpp() {
  if (kpp_ != NULL) kpp_->::Diadoc::Api::Proto::StringValue::Clear();
  clear_has_kpp();
}
inline const ::Diadoc::Api::Proto::StringValue& HeadOrganizationPropertiesToUpdate::kpp() const {
  // @@protoc_insertion_point(field_get:Diadoc.Api.Proto.HeadOrganizationPropertiesToUpdate.Kpp)
  return kpp_ != NULL ? *kpp_ : *default_instance_->kpp_;
}
inline ::Diadoc::Api::Proto::StringValue* HeadOrganizationPropertiesToUpdate::mutable_kpp() {
  set_has_kpp();
  if (kpp_ == NULL) kpp_ = new ::Diadoc::Api::Proto::StringValue;
  // @@protoc_insertion_point(field_mutable:Diadoc.Api.Proto.HeadOrganizationPropertiesToUpdate.Kpp)
  return kpp_;
}
inline ::Diadoc::Api::Proto::StringValue* HeadOrganizationPropertiesToUpdate::release_kpp() {
  clear_has_kpp();
  ::Diadoc::Api::Proto::StringValue* temp = kpp_;
  kpp_ = NULL;
  return temp;
}
inline void HeadOrganizationPropertiesToUpdate::set_allocated_kpp(::Diadoc::Api::Proto::StringValue* kpp) {
  delete kpp_;
  kpp_ = kpp;
  if (kpp) {
    set_has_kpp();
  } else {
    clear_has_kpp();
  }
  // @@protoc_insertion_point(field_set_allocated:Diadoc.Api.Proto.HeadOrganizationPropertiesToUpdate.Kpp)
}

// optional .Diadoc.Api.Proto.StringValue FullName = 2;
inline bool HeadOrganizationPropertiesToUpdate::has_fullname() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void HeadOrganizationPropertiesToUpdate::set_has_fullname() {
  _has_bits_[0] |= 0x00000002u;
}
inline void HeadOrganizationPropertiesToUpdate::clear_has_fullname() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void HeadOrganizationPropertiesToUpdate::clear_fullname() {
  if (fullname_ != NULL) fullname_->::Diadoc::Api::Proto::StringValue::Clear();
  clear_has_fullname();
}
inline const ::Diadoc::Api::Proto::StringValue& HeadOrganizationPropertiesToUpdate::fullname() const {
  // @@protoc_insertion_point(field_get:Diadoc.Api.Proto.HeadOrganizationPropertiesToUpdate.FullName)
  return fullname_ != NULL ? *fullname_ : *default_instance_->fullname_;
}
inline ::Diadoc::Api::Proto::StringValue* HeadOrganizationPropertiesToUpdate::mutable_fullname() {
  set_has_fullname();
  if (fullname_ == NULL) fullname_ = new ::Diadoc::Api::Proto::StringValue;
  // @@protoc_insertion_point(field_mutable:Diadoc.Api.Proto.HeadOrganizationPropertiesToUpdate.FullName)
  return fullname_;
}
inline ::Diadoc::Api::Proto::StringValue* HeadOrganizationPropertiesToUpdate::release_fullname() {
  clear_has_fullname();
  ::Diadoc::Api::Proto::StringValue* temp = fullname_;
  fullname_ = NULL;
  return temp;
}
inline void HeadOrganizationPropertiesToUpdate::set_allocated_fullname(::Diadoc::Api::Proto::StringValue* fullname) {
  delete fullname_;
  fullname_ = fullname;
  if (fullname) {
    set_has_fullname();
  } else {
    clear_has_fullname();
  }
  // @@protoc_insertion_point(field_set_allocated:Diadoc.Api.Proto.HeadOrganizationPropertiesToUpdate.FullName)
}

// optional .Diadoc.Api.Proto.Address Address = 3;
inline bool HeadOrganizationPropertiesToUpdate::has_address() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void HeadOrganizationPropertiesToUpdate::set_has_address() {
  _has_bits_[0] |= 0x00000004u;
}
inline void HeadOrganizationPropertiesToUpdate::clear_has_address() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void HeadOrganizationPropertiesToUpdate::clear_address() {
  if (address_ != NULL) address_->::Diadoc::Api::Proto::Address::Clear();
  clear_has_address();
}
inline const ::Diadoc::Api::Proto::Address& HeadOrganizationPropertiesToUpdate::address() const {
  // @@protoc_insertion_point(field_get:Diadoc.Api.Proto.HeadOrganizationPropertiesToUpdate.Address)
  return address_ != NULL ? *address_ : *default_instance_->address_;
}
inline ::Diadoc::Api::Proto::Address* HeadOrganizationPropertiesToUpdate::mutable_address() {
  set_has_address();
  if (address_ == NULL) address_ = new ::Diadoc::Api::Proto::Address;
  // @@protoc_insertion_point(field_mutable:Diadoc.Api.Proto.HeadOrganizationPropertiesToUpdate.Address)
  return address_;
}
inline ::Diadoc::Api::Proto::Address* HeadOrganizationPropertiesToUpdate::release_address() {
  clear_has_address();
  ::Diadoc::Api::Proto::Address* temp = address_;
  address_ = NULL;
  return temp;
}
inline void HeadOrganizationPropertiesToUpdate::set_allocated_address(::Diadoc::Api::Proto::Address* address) {
  delete address_;
  address_ = address;
  if (address) {
    set_has_address();
  } else {
    clear_has_address();
  }
  // @@protoc_insertion_point(field_set_allocated:Diadoc.Api.Proto.HeadOrganizationPropertiesToUpdate.Address)
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

#endif  // PROTOBUF_OrganizationPropertiesToUpdate_2eproto__INCLUDED
