// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: DocumentId.proto

#ifndef PROTOBUF_DocumentId_2eproto__INCLUDED
#define PROTOBUF_DocumentId_2eproto__INCLUDED

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
// @@protoc_insertion_point(includes)

namespace Diadoc {
namespace Api {
namespace Proto {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_DocumentId_2eproto();
void protobuf_AssignDesc_DocumentId_2eproto();
void protobuf_ShutdownFile_DocumentId_2eproto();

class DocumentId;
class DocumentIdEx;

// ===================================================================

class DocumentId : public ::google::protobuf::Message {
 public:
  DocumentId();
  virtual ~DocumentId();

  DocumentId(const DocumentId& from);

  inline DocumentId& operator=(const DocumentId& from) {
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
  static const DocumentId& default_instance();

  void Swap(DocumentId* other);

  // implements Message ----------------------------------------------

  DocumentId* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const DocumentId& from);
  void MergeFrom(const DocumentId& from);
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

  // required string MessageId = 1;
  inline bool has_messageid() const;
  inline void clear_messageid();
  static const int kMessageIdFieldNumber = 1;
  inline const ::std::string& messageid() const;
  inline void set_messageid(const ::std::string& value);
  inline void set_messageid(const char* value);
  inline void set_messageid(const char* value, size_t size);
  inline ::std::string* mutable_messageid();
  inline ::std::string* release_messageid();
  inline void set_allocated_messageid(::std::string* messageid);

  // required string EntityId = 2;
  inline bool has_entityid() const;
  inline void clear_entityid();
  static const int kEntityIdFieldNumber = 2;
  inline const ::std::string& entityid() const;
  inline void set_entityid(const ::std::string& value);
  inline void set_entityid(const char* value);
  inline void set_entityid(const char* value, size_t size);
  inline ::std::string* mutable_entityid();
  inline ::std::string* release_entityid();
  inline void set_allocated_entityid(::std::string* entityid);

  // @@protoc_insertion_point(class_scope:Diadoc.Api.Proto.DocumentId)
 private:
  inline void set_has_messageid();
  inline void clear_has_messageid();
  inline void set_has_entityid();
  inline void clear_has_entityid();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::std::string* messageid_;
  ::std::string* entityid_;
  friend void  protobuf_AddDesc_DocumentId_2eproto();
  friend void protobuf_AssignDesc_DocumentId_2eproto();
  friend void protobuf_ShutdownFile_DocumentId_2eproto();

  void InitAsDefaultInstance();
  static DocumentId* default_instance_;
};
// -------------------------------------------------------------------

class DocumentIdEx : public ::google::protobuf::Message {
 public:
  DocumentIdEx();
  virtual ~DocumentIdEx();

  DocumentIdEx(const DocumentIdEx& from);

  inline DocumentIdEx& operator=(const DocumentIdEx& from) {
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
  static const DocumentIdEx& default_instance();

  void Swap(DocumentIdEx* other);

  // implements Message ----------------------------------------------

  DocumentIdEx* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const DocumentIdEx& from);
  void MergeFrom(const DocumentIdEx& from);
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

  // required string MessageId = 1;
  inline bool has_messageid() const;
  inline void clear_messageid();
  static const int kMessageIdFieldNumber = 1;
  inline const ::std::string& messageid() const;
  inline void set_messageid(const ::std::string& value);
  inline void set_messageid(const char* value);
  inline void set_messageid(const char* value, size_t size);
  inline ::std::string* mutable_messageid();
  inline ::std::string* release_messageid();
  inline void set_allocated_messageid(::std::string* messageid);

  // required string EntityId = 2;
  inline bool has_entityid() const;
  inline void clear_entityid();
  static const int kEntityIdFieldNumber = 2;
  inline const ::std::string& entityid() const;
  inline void set_entityid(const ::std::string& value);
  inline void set_entityid(const char* value);
  inline void set_entityid(const char* value, size_t size);
  inline ::std::string* mutable_entityid();
  inline ::std::string* release_entityid();
  inline void set_allocated_entityid(::std::string* entityid);

  // required string BoxId = 3;
  inline bool has_boxid() const;
  inline void clear_boxid();
  static const int kBoxIdFieldNumber = 3;
  inline const ::std::string& boxid() const;
  inline void set_boxid(const ::std::string& value);
  inline void set_boxid(const char* value);
  inline void set_boxid(const char* value, size_t size);
  inline ::std::string* mutable_boxid();
  inline ::std::string* release_boxid();
  inline void set_allocated_boxid(::std::string* boxid);

  // @@protoc_insertion_point(class_scope:Diadoc.Api.Proto.DocumentIdEx)
 private:
  inline void set_has_messageid();
  inline void clear_has_messageid();
  inline void set_has_entityid();
  inline void clear_has_entityid();
  inline void set_has_boxid();
  inline void clear_has_boxid();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::std::string* messageid_;
  ::std::string* entityid_;
  ::std::string* boxid_;
  friend void  protobuf_AddDesc_DocumentId_2eproto();
  friend void protobuf_AssignDesc_DocumentId_2eproto();
  friend void protobuf_ShutdownFile_DocumentId_2eproto();

  void InitAsDefaultInstance();
  static DocumentIdEx* default_instance_;
};
// ===================================================================


// ===================================================================

// DocumentId

// required string MessageId = 1;
inline bool DocumentId::has_messageid() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void DocumentId::set_has_messageid() {
  _has_bits_[0] |= 0x00000001u;
}
inline void DocumentId::clear_has_messageid() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void DocumentId::clear_messageid() {
  if (messageid_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    messageid_->clear();
  }
  clear_has_messageid();
}
inline const ::std::string& DocumentId::messageid() const {
  // @@protoc_insertion_point(field_get:Diadoc.Api.Proto.DocumentId.MessageId)
  return *messageid_;
}
inline void DocumentId::set_messageid(const ::std::string& value) {
  set_has_messageid();
  if (messageid_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    messageid_ = new ::std::string;
  }
  messageid_->assign(value);
  // @@protoc_insertion_point(field_set:Diadoc.Api.Proto.DocumentId.MessageId)
}
inline void DocumentId::set_messageid(const char* value) {
  set_has_messageid();
  if (messageid_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    messageid_ = new ::std::string;
  }
  messageid_->assign(value);
  // @@protoc_insertion_point(field_set_char:Diadoc.Api.Proto.DocumentId.MessageId)
}
inline void DocumentId::set_messageid(const char* value, size_t size) {
  set_has_messageid();
  if (messageid_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    messageid_ = new ::std::string;
  }
  messageid_->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:Diadoc.Api.Proto.DocumentId.MessageId)
}
inline ::std::string* DocumentId::mutable_messageid() {
  set_has_messageid();
  if (messageid_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    messageid_ = new ::std::string;
  }
  // @@protoc_insertion_point(field_mutable:Diadoc.Api.Proto.DocumentId.MessageId)
  return messageid_;
}
inline ::std::string* DocumentId::release_messageid() {
  clear_has_messageid();
  if (messageid_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    return NULL;
  } else {
    ::std::string* temp = messageid_;
    messageid_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    return temp;
  }
}
inline void DocumentId::set_allocated_messageid(::std::string* messageid) {
  if (messageid_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete messageid_;
  }
  if (messageid) {
    set_has_messageid();
    messageid_ = messageid;
  } else {
    clear_has_messageid();
    messageid_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }
  // @@protoc_insertion_point(field_set_allocated:Diadoc.Api.Proto.DocumentId.MessageId)
}

// required string EntityId = 2;
inline bool DocumentId::has_entityid() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void DocumentId::set_has_entityid() {
  _has_bits_[0] |= 0x00000002u;
}
inline void DocumentId::clear_has_entityid() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void DocumentId::clear_entityid() {
  if (entityid_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    entityid_->clear();
  }
  clear_has_entityid();
}
inline const ::std::string& DocumentId::entityid() const {
  // @@protoc_insertion_point(field_get:Diadoc.Api.Proto.DocumentId.EntityId)
  return *entityid_;
}
inline void DocumentId::set_entityid(const ::std::string& value) {
  set_has_entityid();
  if (entityid_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    entityid_ = new ::std::string;
  }
  entityid_->assign(value);
  // @@protoc_insertion_point(field_set:Diadoc.Api.Proto.DocumentId.EntityId)
}
inline void DocumentId::set_entityid(const char* value) {
  set_has_entityid();
  if (entityid_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    entityid_ = new ::std::string;
  }
  entityid_->assign(value);
  // @@protoc_insertion_point(field_set_char:Diadoc.Api.Proto.DocumentId.EntityId)
}
inline void DocumentId::set_entityid(const char* value, size_t size) {
  set_has_entityid();
  if (entityid_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    entityid_ = new ::std::string;
  }
  entityid_->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:Diadoc.Api.Proto.DocumentId.EntityId)
}
inline ::std::string* DocumentId::mutable_entityid() {
  set_has_entityid();
  if (entityid_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    entityid_ = new ::std::string;
  }
  // @@protoc_insertion_point(field_mutable:Diadoc.Api.Proto.DocumentId.EntityId)
  return entityid_;
}
inline ::std::string* DocumentId::release_entityid() {
  clear_has_entityid();
  if (entityid_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    return NULL;
  } else {
    ::std::string* temp = entityid_;
    entityid_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    return temp;
  }
}
inline void DocumentId::set_allocated_entityid(::std::string* entityid) {
  if (entityid_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete entityid_;
  }
  if (entityid) {
    set_has_entityid();
    entityid_ = entityid;
  } else {
    clear_has_entityid();
    entityid_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }
  // @@protoc_insertion_point(field_set_allocated:Diadoc.Api.Proto.DocumentId.EntityId)
}

// -------------------------------------------------------------------

// DocumentIdEx

// required string MessageId = 1;
inline bool DocumentIdEx::has_messageid() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void DocumentIdEx::set_has_messageid() {
  _has_bits_[0] |= 0x00000001u;
}
inline void DocumentIdEx::clear_has_messageid() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void DocumentIdEx::clear_messageid() {
  if (messageid_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    messageid_->clear();
  }
  clear_has_messageid();
}
inline const ::std::string& DocumentIdEx::messageid() const {
  // @@protoc_insertion_point(field_get:Diadoc.Api.Proto.DocumentIdEx.MessageId)
  return *messageid_;
}
inline void DocumentIdEx::set_messageid(const ::std::string& value) {
  set_has_messageid();
  if (messageid_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    messageid_ = new ::std::string;
  }
  messageid_->assign(value);
  // @@protoc_insertion_point(field_set:Diadoc.Api.Proto.DocumentIdEx.MessageId)
}
inline void DocumentIdEx::set_messageid(const char* value) {
  set_has_messageid();
  if (messageid_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    messageid_ = new ::std::string;
  }
  messageid_->assign(value);
  // @@protoc_insertion_point(field_set_char:Diadoc.Api.Proto.DocumentIdEx.MessageId)
}
inline void DocumentIdEx::set_messageid(const char* value, size_t size) {
  set_has_messageid();
  if (messageid_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    messageid_ = new ::std::string;
  }
  messageid_->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:Diadoc.Api.Proto.DocumentIdEx.MessageId)
}
inline ::std::string* DocumentIdEx::mutable_messageid() {
  set_has_messageid();
  if (messageid_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    messageid_ = new ::std::string;
  }
  // @@protoc_insertion_point(field_mutable:Diadoc.Api.Proto.DocumentIdEx.MessageId)
  return messageid_;
}
inline ::std::string* DocumentIdEx::release_messageid() {
  clear_has_messageid();
  if (messageid_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    return NULL;
  } else {
    ::std::string* temp = messageid_;
    messageid_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    return temp;
  }
}
inline void DocumentIdEx::set_allocated_messageid(::std::string* messageid) {
  if (messageid_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete messageid_;
  }
  if (messageid) {
    set_has_messageid();
    messageid_ = messageid;
  } else {
    clear_has_messageid();
    messageid_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }
  // @@protoc_insertion_point(field_set_allocated:Diadoc.Api.Proto.DocumentIdEx.MessageId)
}

// required string EntityId = 2;
inline bool DocumentIdEx::has_entityid() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void DocumentIdEx::set_has_entityid() {
  _has_bits_[0] |= 0x00000002u;
}
inline void DocumentIdEx::clear_has_entityid() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void DocumentIdEx::clear_entityid() {
  if (entityid_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    entityid_->clear();
  }
  clear_has_entityid();
}
inline const ::std::string& DocumentIdEx::entityid() const {
  // @@protoc_insertion_point(field_get:Diadoc.Api.Proto.DocumentIdEx.EntityId)
  return *entityid_;
}
inline void DocumentIdEx::set_entityid(const ::std::string& value) {
  set_has_entityid();
  if (entityid_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    entityid_ = new ::std::string;
  }
  entityid_->assign(value);
  // @@protoc_insertion_point(field_set:Diadoc.Api.Proto.DocumentIdEx.EntityId)
}
inline void DocumentIdEx::set_entityid(const char* value) {
  set_has_entityid();
  if (entityid_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    entityid_ = new ::std::string;
  }
  entityid_->assign(value);
  // @@protoc_insertion_point(field_set_char:Diadoc.Api.Proto.DocumentIdEx.EntityId)
}
inline void DocumentIdEx::set_entityid(const char* value, size_t size) {
  set_has_entityid();
  if (entityid_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    entityid_ = new ::std::string;
  }
  entityid_->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:Diadoc.Api.Proto.DocumentIdEx.EntityId)
}
inline ::std::string* DocumentIdEx::mutable_entityid() {
  set_has_entityid();
  if (entityid_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    entityid_ = new ::std::string;
  }
  // @@protoc_insertion_point(field_mutable:Diadoc.Api.Proto.DocumentIdEx.EntityId)
  return entityid_;
}
inline ::std::string* DocumentIdEx::release_entityid() {
  clear_has_entityid();
  if (entityid_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    return NULL;
  } else {
    ::std::string* temp = entityid_;
    entityid_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    return temp;
  }
}
inline void DocumentIdEx::set_allocated_entityid(::std::string* entityid) {
  if (entityid_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete entityid_;
  }
  if (entityid) {
    set_has_entityid();
    entityid_ = entityid;
  } else {
    clear_has_entityid();
    entityid_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }
  // @@protoc_insertion_point(field_set_allocated:Diadoc.Api.Proto.DocumentIdEx.EntityId)
}

// required string BoxId = 3;
inline bool DocumentIdEx::has_boxid() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void DocumentIdEx::set_has_boxid() {
  _has_bits_[0] |= 0x00000004u;
}
inline void DocumentIdEx::clear_has_boxid() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void DocumentIdEx::clear_boxid() {
  if (boxid_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    boxid_->clear();
  }
  clear_has_boxid();
}
inline const ::std::string& DocumentIdEx::boxid() const {
  // @@protoc_insertion_point(field_get:Diadoc.Api.Proto.DocumentIdEx.BoxId)
  return *boxid_;
}
inline void DocumentIdEx::set_boxid(const ::std::string& value) {
  set_has_boxid();
  if (boxid_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    boxid_ = new ::std::string;
  }
  boxid_->assign(value);
  // @@protoc_insertion_point(field_set:Diadoc.Api.Proto.DocumentIdEx.BoxId)
}
inline void DocumentIdEx::set_boxid(const char* value) {
  set_has_boxid();
  if (boxid_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    boxid_ = new ::std::string;
  }
  boxid_->assign(value);
  // @@protoc_insertion_point(field_set_char:Diadoc.Api.Proto.DocumentIdEx.BoxId)
}
inline void DocumentIdEx::set_boxid(const char* value, size_t size) {
  set_has_boxid();
  if (boxid_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    boxid_ = new ::std::string;
  }
  boxid_->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:Diadoc.Api.Proto.DocumentIdEx.BoxId)
}
inline ::std::string* DocumentIdEx::mutable_boxid() {
  set_has_boxid();
  if (boxid_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    boxid_ = new ::std::string;
  }
  // @@protoc_insertion_point(field_mutable:Diadoc.Api.Proto.DocumentIdEx.BoxId)
  return boxid_;
}
inline ::std::string* DocumentIdEx::release_boxid() {
  clear_has_boxid();
  if (boxid_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    return NULL;
  } else {
    ::std::string* temp = boxid_;
    boxid_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    return temp;
  }
}
inline void DocumentIdEx::set_allocated_boxid(::std::string* boxid) {
  if (boxid_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete boxid_;
  }
  if (boxid) {
    set_has_boxid();
    boxid_ = boxid;
  } else {
    clear_has_boxid();
    boxid_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }
  // @@protoc_insertion_point(field_set_allocated:Diadoc.Api.Proto.DocumentIdEx.BoxId)
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

#endif  // PROTOBUF_DocumentId_2eproto__INCLUDED
