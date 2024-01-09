// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: Documents/Types/DocumentTypeDescription.proto

#ifndef PROTOBUF_Documents_2fTypes_2fDocumentTypeDescription_2eproto__INCLUDED
#define PROTOBUF_Documents_2fTypes_2fDocumentTypeDescription_2eproto__INCLUDED

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
#include "Invoicing/ExtendedSigner.pb.h"
// @@protoc_insertion_point(includes)

namespace Diadoc {
namespace Api {
namespace Proto {
namespace Documents {
namespace Types {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_Documents_2fTypes_2fDocumentTypeDescription_2eproto();
void protobuf_AssignDesc_Documents_2fTypes_2fDocumentTypeDescription_2eproto();
void protobuf_ShutdownFile_Documents_2fTypes_2fDocumentTypeDescription_2eproto();

class DetectedDocumentType;
class DetectDocumentTypesResponse;

// ===================================================================

class DetectedDocumentType : public ::google::protobuf::Message {
 public:
  DetectedDocumentType();
  virtual ~DetectedDocumentType();

  DetectedDocumentType(const DetectedDocumentType& from);

  inline DetectedDocumentType& operator=(const DetectedDocumentType& from) {
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
  static const DetectedDocumentType& default_instance();

  void Swap(DetectedDocumentType* other);

  // implements Message ----------------------------------------------

  DetectedDocumentType* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const DetectedDocumentType& from);
  void MergeFrom(const DetectedDocumentType& from);
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

  // required string TypeNamedId = 1;
  inline bool has_typenamedid() const;
  inline void clear_typenamedid();
  static const int kTypeNamedIdFieldNumber = 1;
  inline const ::std::string& typenamedid() const;
  inline void set_typenamedid(const ::std::string& value);
  inline void set_typenamedid(const char* value);
  inline void set_typenamedid(const char* value, size_t size);
  inline ::std::string* mutable_typenamedid();
  inline ::std::string* release_typenamedid();
  inline void set_allocated_typenamedid(::std::string* typenamedid);

  // required string Function = 2;
  inline bool has_function() const;
  inline void clear_function();
  static const int kFunctionFieldNumber = 2;
  inline const ::std::string& function() const;
  inline void set_function(const ::std::string& value);
  inline void set_function(const char* value);
  inline void set_function(const char* value, size_t size);
  inline ::std::string* mutable_function();
  inline ::std::string* release_function();
  inline void set_allocated_function(::std::string* function);

  // required string Version = 3;
  inline bool has_version() const;
  inline void clear_version();
  static const int kVersionFieldNumber = 3;
  inline const ::std::string& version() const;
  inline void set_version(const ::std::string& value);
  inline void set_version(const char* value);
  inline void set_version(const char* value, size_t size);
  inline ::std::string* mutable_version();
  inline ::std::string* release_version();
  inline void set_allocated_version(::std::string* version);

  // @@protoc_insertion_point(class_scope:Diadoc.Api.Proto.Documents.Types.DetectedDocumentType)
 private:
  inline void set_has_typenamedid();
  inline void clear_has_typenamedid();
  inline void set_has_function();
  inline void clear_has_function();
  inline void set_has_version();
  inline void clear_has_version();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::std::string* typenamedid_;
  ::std::string* function_;
  ::std::string* version_;
  friend void  protobuf_AddDesc_Documents_2fTypes_2fDocumentTypeDescription_2eproto();
  friend void protobuf_AssignDesc_Documents_2fTypes_2fDocumentTypeDescription_2eproto();
  friend void protobuf_ShutdownFile_Documents_2fTypes_2fDocumentTypeDescription_2eproto();

  void InitAsDefaultInstance();
  static DetectedDocumentType* default_instance_;
};
// -------------------------------------------------------------------

class DetectDocumentTypesResponse : public ::google::protobuf::Message {
 public:
  DetectDocumentTypesResponse();
  virtual ~DetectDocumentTypesResponse();

  DetectDocumentTypesResponse(const DetectDocumentTypesResponse& from);

  inline DetectDocumentTypesResponse& operator=(const DetectDocumentTypesResponse& from) {
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
  static const DetectDocumentTypesResponse& default_instance();

  void Swap(DetectDocumentTypesResponse* other);

  // implements Message ----------------------------------------------

  DetectDocumentTypesResponse* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const DetectDocumentTypesResponse& from);
  void MergeFrom(const DetectDocumentTypesResponse& from);
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

  // repeated .Diadoc.Api.Proto.Documents.Types.DetectedDocumentType DocumentTypes = 1;
  inline int documenttypes_size() const;
  inline void clear_documenttypes();
  static const int kDocumentTypesFieldNumber = 1;
  inline const ::Diadoc::Api::Proto::Documents::Types::DetectedDocumentType& documenttypes(int index) const;
  inline ::Diadoc::Api::Proto::Documents::Types::DetectedDocumentType* mutable_documenttypes(int index);
  inline ::Diadoc::Api::Proto::Documents::Types::DetectedDocumentType* add_documenttypes();
  inline const ::google::protobuf::RepeatedPtrField< ::Diadoc::Api::Proto::Documents::Types::DetectedDocumentType >&
      documenttypes() const;
  inline ::google::protobuf::RepeatedPtrField< ::Diadoc::Api::Proto::Documents::Types::DetectedDocumentType >*
      mutable_documenttypes();

  // @@protoc_insertion_point(class_scope:Diadoc.Api.Proto.Documents.Types.DetectDocumentTypesResponse)
 private:

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::google::protobuf::RepeatedPtrField< ::Diadoc::Api::Proto::Documents::Types::DetectedDocumentType > documenttypes_;
  friend void  protobuf_AddDesc_Documents_2fTypes_2fDocumentTypeDescription_2eproto();
  friend void protobuf_AssignDesc_Documents_2fTypes_2fDocumentTypeDescription_2eproto();
  friend void protobuf_ShutdownFile_Documents_2fTypes_2fDocumentTypeDescription_2eproto();

  void InitAsDefaultInstance();
  static DetectDocumentTypesResponse* default_instance_;
};
// ===================================================================


// ===================================================================

// DetectedDocumentType

// required string TypeNamedId = 1;
inline bool DetectedDocumentType::has_typenamedid() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void DetectedDocumentType::set_has_typenamedid() {
  _has_bits_[0] |= 0x00000001u;
}
inline void DetectedDocumentType::clear_has_typenamedid() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void DetectedDocumentType::clear_typenamedid() {
  if (typenamedid_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    typenamedid_->clear();
  }
  clear_has_typenamedid();
}
inline const ::std::string& DetectedDocumentType::typenamedid() const {
  // @@protoc_insertion_point(field_get:Diadoc.Api.Proto.Documents.Types.DetectedDocumentType.TypeNamedId)
  return *typenamedid_;
}
inline void DetectedDocumentType::set_typenamedid(const ::std::string& value) {
  set_has_typenamedid();
  if (typenamedid_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    typenamedid_ = new ::std::string;
  }
  typenamedid_->assign(value);
  // @@protoc_insertion_point(field_set:Diadoc.Api.Proto.Documents.Types.DetectedDocumentType.TypeNamedId)
}
inline void DetectedDocumentType::set_typenamedid(const char* value) {
  set_has_typenamedid();
  if (typenamedid_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    typenamedid_ = new ::std::string;
  }
  typenamedid_->assign(value);
  // @@protoc_insertion_point(field_set_char:Diadoc.Api.Proto.Documents.Types.DetectedDocumentType.TypeNamedId)
}
inline void DetectedDocumentType::set_typenamedid(const char* value, size_t size) {
  set_has_typenamedid();
  if (typenamedid_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    typenamedid_ = new ::std::string;
  }
  typenamedid_->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:Diadoc.Api.Proto.Documents.Types.DetectedDocumentType.TypeNamedId)
}
inline ::std::string* DetectedDocumentType::mutable_typenamedid() {
  set_has_typenamedid();
  if (typenamedid_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    typenamedid_ = new ::std::string;
  }
  // @@protoc_insertion_point(field_mutable:Diadoc.Api.Proto.Documents.Types.DetectedDocumentType.TypeNamedId)
  return typenamedid_;
}
inline ::std::string* DetectedDocumentType::release_typenamedid() {
  clear_has_typenamedid();
  if (typenamedid_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    return NULL;
  } else {
    ::std::string* temp = typenamedid_;
    typenamedid_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    return temp;
  }
}
inline void DetectedDocumentType::set_allocated_typenamedid(::std::string* typenamedid) {
  if (typenamedid_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete typenamedid_;
  }
  if (typenamedid) {
    set_has_typenamedid();
    typenamedid_ = typenamedid;
  } else {
    clear_has_typenamedid();
    typenamedid_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }
  // @@protoc_insertion_point(field_set_allocated:Diadoc.Api.Proto.Documents.Types.DetectedDocumentType.TypeNamedId)
}

// required string Function = 2;
inline bool DetectedDocumentType::has_function() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void DetectedDocumentType::set_has_function() {
  _has_bits_[0] |= 0x00000002u;
}
inline void DetectedDocumentType::clear_has_function() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void DetectedDocumentType::clear_function() {
  if (function_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    function_->clear();
  }
  clear_has_function();
}
inline const ::std::string& DetectedDocumentType::function() const {
  // @@protoc_insertion_point(field_get:Diadoc.Api.Proto.Documents.Types.DetectedDocumentType.Function)
  return *function_;
}
inline void DetectedDocumentType::set_function(const ::std::string& value) {
  set_has_function();
  if (function_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    function_ = new ::std::string;
  }
  function_->assign(value);
  // @@protoc_insertion_point(field_set:Diadoc.Api.Proto.Documents.Types.DetectedDocumentType.Function)
}
inline void DetectedDocumentType::set_function(const char* value) {
  set_has_function();
  if (function_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    function_ = new ::std::string;
  }
  function_->assign(value);
  // @@protoc_insertion_point(field_set_char:Diadoc.Api.Proto.Documents.Types.DetectedDocumentType.Function)
}
inline void DetectedDocumentType::set_function(const char* value, size_t size) {
  set_has_function();
  if (function_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    function_ = new ::std::string;
  }
  function_->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:Diadoc.Api.Proto.Documents.Types.DetectedDocumentType.Function)
}
inline ::std::string* DetectedDocumentType::mutable_function() {
  set_has_function();
  if (function_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    function_ = new ::std::string;
  }
  // @@protoc_insertion_point(field_mutable:Diadoc.Api.Proto.Documents.Types.DetectedDocumentType.Function)
  return function_;
}
inline ::std::string* DetectedDocumentType::release_function() {
  clear_has_function();
  if (function_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    return NULL;
  } else {
    ::std::string* temp = function_;
    function_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    return temp;
  }
}
inline void DetectedDocumentType::set_allocated_function(::std::string* function) {
  if (function_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete function_;
  }
  if (function) {
    set_has_function();
    function_ = function;
  } else {
    clear_has_function();
    function_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }
  // @@protoc_insertion_point(field_set_allocated:Diadoc.Api.Proto.Documents.Types.DetectedDocumentType.Function)
}

// required string Version = 3;
inline bool DetectedDocumentType::has_version() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void DetectedDocumentType::set_has_version() {
  _has_bits_[0] |= 0x00000004u;
}
inline void DetectedDocumentType::clear_has_version() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void DetectedDocumentType::clear_version() {
  if (version_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    version_->clear();
  }
  clear_has_version();
}
inline const ::std::string& DetectedDocumentType::version() const {
  // @@protoc_insertion_point(field_get:Diadoc.Api.Proto.Documents.Types.DetectedDocumentType.Version)
  return *version_;
}
inline void DetectedDocumentType::set_version(const ::std::string& value) {
  set_has_version();
  if (version_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    version_ = new ::std::string;
  }
  version_->assign(value);
  // @@protoc_insertion_point(field_set:Diadoc.Api.Proto.Documents.Types.DetectedDocumentType.Version)
}
inline void DetectedDocumentType::set_version(const char* value) {
  set_has_version();
  if (version_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    version_ = new ::std::string;
  }
  version_->assign(value);
  // @@protoc_insertion_point(field_set_char:Diadoc.Api.Proto.Documents.Types.DetectedDocumentType.Version)
}
inline void DetectedDocumentType::set_version(const char* value, size_t size) {
  set_has_version();
  if (version_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    version_ = new ::std::string;
  }
  version_->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:Diadoc.Api.Proto.Documents.Types.DetectedDocumentType.Version)
}
inline ::std::string* DetectedDocumentType::mutable_version() {
  set_has_version();
  if (version_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    version_ = new ::std::string;
  }
  // @@protoc_insertion_point(field_mutable:Diadoc.Api.Proto.Documents.Types.DetectedDocumentType.Version)
  return version_;
}
inline ::std::string* DetectedDocumentType::release_version() {
  clear_has_version();
  if (version_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    return NULL;
  } else {
    ::std::string* temp = version_;
    version_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    return temp;
  }
}
inline void DetectedDocumentType::set_allocated_version(::std::string* version) {
  if (version_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete version_;
  }
  if (version) {
    set_has_version();
    version_ = version;
  } else {
    clear_has_version();
    version_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }
  // @@protoc_insertion_point(field_set_allocated:Diadoc.Api.Proto.Documents.Types.DetectedDocumentType.Version)
}

// -------------------------------------------------------------------

// DetectDocumentTypesResponse

// repeated .Diadoc.Api.Proto.Documents.Types.DetectedDocumentType DocumentTypes = 1;
inline int DetectDocumentTypesResponse::documenttypes_size() const {
  return documenttypes_.size();
}
inline void DetectDocumentTypesResponse::clear_documenttypes() {
  documenttypes_.Clear();
}
inline const ::Diadoc::Api::Proto::Documents::Types::DetectedDocumentType& DetectDocumentTypesResponse::documenttypes(int index) const {
  // @@protoc_insertion_point(field_get:Diadoc.Api.Proto.Documents.Types.DetectDocumentTypesResponse.DocumentTypes)
  return documenttypes_.Get(index);
}
inline ::Diadoc::Api::Proto::Documents::Types::DetectedDocumentType* DetectDocumentTypesResponse::mutable_documenttypes(int index) {
  // @@protoc_insertion_point(field_mutable:Diadoc.Api.Proto.Documents.Types.DetectDocumentTypesResponse.DocumentTypes)
  return documenttypes_.Mutable(index);
}
inline ::Diadoc::Api::Proto::Documents::Types::DetectedDocumentType* DetectDocumentTypesResponse::add_documenttypes() {
  // @@protoc_insertion_point(field_add:Diadoc.Api.Proto.Documents.Types.DetectDocumentTypesResponse.DocumentTypes)
  return documenttypes_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::Diadoc::Api::Proto::Documents::Types::DetectedDocumentType >&
DetectDocumentTypesResponse::documenttypes() const {
  // @@protoc_insertion_point(field_list:Diadoc.Api.Proto.Documents.Types.DetectDocumentTypesResponse.DocumentTypes)
  return documenttypes_;
}
inline ::google::protobuf::RepeatedPtrField< ::Diadoc::Api::Proto::Documents::Types::DetectedDocumentType >*
DetectDocumentTypesResponse::mutable_documenttypes() {
  // @@protoc_insertion_point(field_mutable_list:Diadoc.Api.Proto.Documents.Types.DetectDocumentTypesResponse.DocumentTypes)
  return &documenttypes_;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace Types
}  // namespace Documents
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

#endif  // PROTOBUF_Documents_2fTypes_2fDocumentTypeDescription_2eproto__INCLUDED