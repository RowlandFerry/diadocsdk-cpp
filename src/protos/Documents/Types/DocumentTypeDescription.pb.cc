// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: Documents/Types/DocumentTypeDescription.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "Documents/Types/DocumentTypeDescription.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace Diadoc {
namespace Api {
namespace Proto {
namespace Documents {
namespace Types {

namespace {

const ::google::protobuf::Descriptor* DetectedDocumentType_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  DetectedDocumentType_reflection_ = NULL;
const ::google::protobuf::Descriptor* DetectDocumentTypesResponse_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  DetectDocumentTypesResponse_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_Documents_2fTypes_2fDocumentTypeDescription_2eproto() {
  protobuf_AddDesc_Documents_2fTypes_2fDocumentTypeDescription_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "Documents/Types/DocumentTypeDescription.proto");
  GOOGLE_CHECK(file != NULL);
  DetectedDocumentType_descriptor_ = file->message_type(0);
  static const int DetectedDocumentType_offsets_[3] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(DetectedDocumentType, typenamedid_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(DetectedDocumentType, function_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(DetectedDocumentType, version_),
  };
  DetectedDocumentType_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      DetectedDocumentType_descriptor_,
      DetectedDocumentType::default_instance_,
      DetectedDocumentType_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(DetectedDocumentType, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(DetectedDocumentType, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(DetectedDocumentType));
  DetectDocumentTypesResponse_descriptor_ = file->message_type(1);
  static const int DetectDocumentTypesResponse_offsets_[1] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(DetectDocumentTypesResponse, documenttypes_),
  };
  DetectDocumentTypesResponse_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      DetectDocumentTypesResponse_descriptor_,
      DetectDocumentTypesResponse::default_instance_,
      DetectDocumentTypesResponse_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(DetectDocumentTypesResponse, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(DetectDocumentTypesResponse, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(DetectDocumentTypesResponse));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_Documents_2fTypes_2fDocumentTypeDescription_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    DetectedDocumentType_descriptor_, &DetectedDocumentType::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    DetectDocumentTypesResponse_descriptor_, &DetectDocumentTypesResponse::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_Documents_2fTypes_2fDocumentTypeDescription_2eproto() {
  delete DetectedDocumentType::default_instance_;
  delete DetectedDocumentType_reflection_;
  delete DetectDocumentTypesResponse::default_instance_;
  delete DetectDocumentTypesResponse_reflection_;
}

void protobuf_AddDesc_Documents_2fTypes_2fDocumentTypeDescription_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::Diadoc::Api::Proto::Invoicing::Signers::protobuf_AddDesc_Invoicing_2fExtendedSigner_2eproto();
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n-Documents/Types/DocumentTypeDescriptio"
    "n.proto\022 Diadoc.Api.Proto.Documents.Type"
    "s\032\036Invoicing/ExtendedSigner.proto\"N\n\024Det"
    "ectedDocumentType\022\023\n\013TypeNamedId\030\001 \002(\t\022\020"
    "\n\010Function\030\002 \002(\t\022\017\n\007Version\030\003 \002(\t\"l\n\033Det"
    "ectDocumentTypesResponse\022M\n\rDocumentType"
    "s\030\001 \003(\01326.Diadoc.Api.Proto.Documents.Typ"
    "es.DetectedDocumentType", 303);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "Documents/Types/DocumentTypeDescription.proto", &protobuf_RegisterTypes);
  DetectedDocumentType::default_instance_ = new DetectedDocumentType();
  DetectDocumentTypesResponse::default_instance_ = new DetectDocumentTypesResponse();
  DetectedDocumentType::default_instance_->InitAsDefaultInstance();
  DetectDocumentTypesResponse::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_Documents_2fTypes_2fDocumentTypeDescription_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_Documents_2fTypes_2fDocumentTypeDescription_2eproto {
  StaticDescriptorInitializer_Documents_2fTypes_2fDocumentTypeDescription_2eproto() {
    protobuf_AddDesc_Documents_2fTypes_2fDocumentTypeDescription_2eproto();
  }
} static_descriptor_initializer_Documents_2fTypes_2fDocumentTypeDescription_2eproto_;

// ===================================================================

#ifndef _MSC_VER
const int DetectedDocumentType::kTypeNamedIdFieldNumber;
const int DetectedDocumentType::kFunctionFieldNumber;
const int DetectedDocumentType::kVersionFieldNumber;
#endif  // !_MSC_VER

DetectedDocumentType::DetectedDocumentType()
  : ::google::protobuf::Message() {
  SharedCtor();
  // @@protoc_insertion_point(constructor:Diadoc.Api.Proto.Documents.Types.DetectedDocumentType)
}

void DetectedDocumentType::InitAsDefaultInstance() {
}

DetectedDocumentType::DetectedDocumentType(const DetectedDocumentType& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:Diadoc.Api.Proto.Documents.Types.DetectedDocumentType)
}

void DetectedDocumentType::SharedCtor() {
  ::google::protobuf::internal::GetEmptyString();
  _cached_size_ = 0;
  typenamedid_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  function_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  version_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

DetectedDocumentType::~DetectedDocumentType() {
  // @@protoc_insertion_point(destructor:Diadoc.Api.Proto.Documents.Types.DetectedDocumentType)
  SharedDtor();
}

void DetectedDocumentType::SharedDtor() {
  if (typenamedid_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete typenamedid_;
  }
  if (function_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete function_;
  }
  if (version_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete version_;
  }
  if (this != default_instance_) {
  }
}

void DetectedDocumentType::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* DetectedDocumentType::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return DetectedDocumentType_descriptor_;
}

const DetectedDocumentType& DetectedDocumentType::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_Documents_2fTypes_2fDocumentTypeDescription_2eproto();
  return *default_instance_;
}

DetectedDocumentType* DetectedDocumentType::default_instance_ = NULL;

DetectedDocumentType* DetectedDocumentType::New() const {
  return new DetectedDocumentType;
}

void DetectedDocumentType::Clear() {
  if (_has_bits_[0 / 32] & 7) {
    if (has_typenamedid()) {
      if (typenamedid_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
        typenamedid_->clear();
      }
    }
    if (has_function()) {
      if (function_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
        function_->clear();
      }
    }
    if (has_version()) {
      if (version_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
        version_->clear();
      }
    }
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool DetectedDocumentType::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:Diadoc.Api.Proto.Documents.Types.DetectedDocumentType)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required string TypeNamedId = 1;
      case 1: {
        if (tag == 10) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_typenamedid()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
            this->typenamedid().data(), this->typenamedid().length(),
            ::google::protobuf::internal::WireFormat::PARSE,
            "typenamedid");
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(18)) goto parse_Function;
        break;
      }

      // required string Function = 2;
      case 2: {
        if (tag == 18) {
         parse_Function:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_function()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
            this->function().data(), this->function().length(),
            ::google::protobuf::internal::WireFormat::PARSE,
            "function");
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(26)) goto parse_Version;
        break;
      }

      // required string Version = 3;
      case 3: {
        if (tag == 26) {
         parse_Version:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_version()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
            this->version().data(), this->version().length(),
            ::google::protobuf::internal::WireFormat::PARSE,
            "version");
        } else {
          goto handle_unusual;
        }
        if (input->ExpectAtEnd()) goto success;
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:Diadoc.Api.Proto.Documents.Types.DetectedDocumentType)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:Diadoc.Api.Proto.Documents.Types.DetectedDocumentType)
  return false;
#undef DO_
}

void DetectedDocumentType::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:Diadoc.Api.Proto.Documents.Types.DetectedDocumentType)
  // required string TypeNamedId = 1;
  if (has_typenamedid()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->typenamedid().data(), this->typenamedid().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "typenamedid");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->typenamedid(), output);
  }

  // required string Function = 2;
  if (has_function()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->function().data(), this->function().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "function");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      2, this->function(), output);
  }

  // required string Version = 3;
  if (has_version()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->version().data(), this->version().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "version");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      3, this->version(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:Diadoc.Api.Proto.Documents.Types.DetectedDocumentType)
}

::google::protobuf::uint8* DetectedDocumentType::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:Diadoc.Api.Proto.Documents.Types.DetectedDocumentType)
  // required string TypeNamedId = 1;
  if (has_typenamedid()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->typenamedid().data(), this->typenamedid().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "typenamedid");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->typenamedid(), target);
  }

  // required string Function = 2;
  if (has_function()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->function().data(), this->function().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "function");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        2, this->function(), target);
  }

  // required string Version = 3;
  if (has_version()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->version().data(), this->version().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "version");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        3, this->version(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:Diadoc.Api.Proto.Documents.Types.DetectedDocumentType)
  return target;
}

int DetectedDocumentType::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required string TypeNamedId = 1;
    if (has_typenamedid()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->typenamedid());
    }

    // required string Function = 2;
    if (has_function()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->function());
    }

    // required string Version = 3;
    if (has_version()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->version());
    }

  }
  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void DetectedDocumentType::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const DetectedDocumentType* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const DetectedDocumentType*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void DetectedDocumentType::MergeFrom(const DetectedDocumentType& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_typenamedid()) {
      set_typenamedid(from.typenamedid());
    }
    if (from.has_function()) {
      set_function(from.function());
    }
    if (from.has_version()) {
      set_version(from.version());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void DetectedDocumentType::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void DetectedDocumentType::CopyFrom(const DetectedDocumentType& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool DetectedDocumentType::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000007) != 0x00000007) return false;

  return true;
}

void DetectedDocumentType::Swap(DetectedDocumentType* other) {
  if (other != this) {
    std::swap(typenamedid_, other->typenamedid_);
    std::swap(function_, other->function_);
    std::swap(version_, other->version_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata DetectedDocumentType::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = DetectedDocumentType_descriptor_;
  metadata.reflection = DetectedDocumentType_reflection_;
  return metadata;
}


// ===================================================================

#ifndef _MSC_VER
const int DetectDocumentTypesResponse::kDocumentTypesFieldNumber;
#endif  // !_MSC_VER

DetectDocumentTypesResponse::DetectDocumentTypesResponse()
  : ::google::protobuf::Message() {
  SharedCtor();
  // @@protoc_insertion_point(constructor:Diadoc.Api.Proto.Documents.Types.DetectDocumentTypesResponse)
}

void DetectDocumentTypesResponse::InitAsDefaultInstance() {
}

DetectDocumentTypesResponse::DetectDocumentTypesResponse(const DetectDocumentTypesResponse& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:Diadoc.Api.Proto.Documents.Types.DetectDocumentTypesResponse)
}

void DetectDocumentTypesResponse::SharedCtor() {
  _cached_size_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

DetectDocumentTypesResponse::~DetectDocumentTypesResponse() {
  // @@protoc_insertion_point(destructor:Diadoc.Api.Proto.Documents.Types.DetectDocumentTypesResponse)
  SharedDtor();
}

void DetectDocumentTypesResponse::SharedDtor() {
  if (this != default_instance_) {
  }
}

void DetectDocumentTypesResponse::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* DetectDocumentTypesResponse::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return DetectDocumentTypesResponse_descriptor_;
}

const DetectDocumentTypesResponse& DetectDocumentTypesResponse::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_Documents_2fTypes_2fDocumentTypeDescription_2eproto();
  return *default_instance_;
}

DetectDocumentTypesResponse* DetectDocumentTypesResponse::default_instance_ = NULL;

DetectDocumentTypesResponse* DetectDocumentTypesResponse::New() const {
  return new DetectDocumentTypesResponse;
}

void DetectDocumentTypesResponse::Clear() {
  documenttypes_.Clear();
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool DetectDocumentTypesResponse::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:Diadoc.Api.Proto.Documents.Types.DetectDocumentTypesResponse)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // repeated .Diadoc.Api.Proto.Documents.Types.DetectedDocumentType DocumentTypes = 1;
      case 1: {
        if (tag == 10) {
         parse_DocumentTypes:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
                input, add_documenttypes()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(10)) goto parse_DocumentTypes;
        if (input->ExpectAtEnd()) goto success;
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:Diadoc.Api.Proto.Documents.Types.DetectDocumentTypesResponse)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:Diadoc.Api.Proto.Documents.Types.DetectDocumentTypesResponse)
  return false;
#undef DO_
}

void DetectDocumentTypesResponse::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:Diadoc.Api.Proto.Documents.Types.DetectDocumentTypesResponse)
  // repeated .Diadoc.Api.Proto.Documents.Types.DetectedDocumentType DocumentTypes = 1;
  for (int i = 0; i < this->documenttypes_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      1, this->documenttypes(i), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:Diadoc.Api.Proto.Documents.Types.DetectDocumentTypesResponse)
}

::google::protobuf::uint8* DetectDocumentTypesResponse::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:Diadoc.Api.Proto.Documents.Types.DetectDocumentTypesResponse)
  // repeated .Diadoc.Api.Proto.Documents.Types.DetectedDocumentType DocumentTypes = 1;
  for (int i = 0; i < this->documenttypes_size(); i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteMessageNoVirtualToArray(
        1, this->documenttypes(i), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:Diadoc.Api.Proto.Documents.Types.DetectDocumentTypesResponse)
  return target;
}

int DetectDocumentTypesResponse::ByteSize() const {
  int total_size = 0;

  // repeated .Diadoc.Api.Proto.Documents.Types.DetectedDocumentType DocumentTypes = 1;
  total_size += 1 * this->documenttypes_size();
  for (int i = 0; i < this->documenttypes_size(); i++) {
    total_size +=
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        this->documenttypes(i));
  }

  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void DetectDocumentTypesResponse::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const DetectDocumentTypesResponse* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const DetectDocumentTypesResponse*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void DetectDocumentTypesResponse::MergeFrom(const DetectDocumentTypesResponse& from) {
  GOOGLE_CHECK_NE(&from, this);
  documenttypes_.MergeFrom(from.documenttypes_);
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void DetectDocumentTypesResponse::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void DetectDocumentTypesResponse::CopyFrom(const DetectDocumentTypesResponse& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool DetectDocumentTypesResponse::IsInitialized() const {

  if (!::google::protobuf::internal::AllAreInitialized(this->documenttypes())) return false;
  return true;
}

void DetectDocumentTypesResponse::Swap(DetectDocumentTypesResponse* other) {
  if (other != this) {
    documenttypes_.Swap(&other->documenttypes_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata DetectDocumentTypesResponse::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = DetectDocumentTypesResponse_descriptor_;
  metadata.reflection = DetectDocumentTypesResponse_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace Types
}  // namespace Documents
}  // namespace Proto
}  // namespace Api
}  // namespace Diadoc

// @@protoc_insertion_point(global_scope)