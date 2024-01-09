// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: Users/UserToUpdate.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "Users/UserToUpdate.pb.h"

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
namespace Users {

namespace {

const ::google::protobuf::Descriptor* UserToUpdate_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  UserToUpdate_reflection_ = NULL;
const ::google::protobuf::Descriptor* UserLoginPatch_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  UserLoginPatch_reflection_ = NULL;
const ::google::protobuf::Descriptor* UserFullNamePatch_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  UserFullNamePatch_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_Users_2fUserToUpdate_2eproto() {
  protobuf_AddDesc_Users_2fUserToUpdate_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "Users/UserToUpdate.proto");
  GOOGLE_CHECK(file != NULL);
  UserToUpdate_descriptor_ = file->message_type(0);
  static const int UserToUpdate_offsets_[2] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(UserToUpdate, login_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(UserToUpdate, fullname_),
  };
  UserToUpdate_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      UserToUpdate_descriptor_,
      UserToUpdate::default_instance_,
      UserToUpdate_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(UserToUpdate, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(UserToUpdate, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(UserToUpdate));
  UserLoginPatch_descriptor_ = file->message_type(1);
  static const int UserLoginPatch_offsets_[1] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(UserLoginPatch, login_),
  };
  UserLoginPatch_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      UserLoginPatch_descriptor_,
      UserLoginPatch::default_instance_,
      UserLoginPatch_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(UserLoginPatch, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(UserLoginPatch, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(UserLoginPatch));
  UserFullNamePatch_descriptor_ = file->message_type(2);
  static const int UserFullNamePatch_offsets_[1] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(UserFullNamePatch, fullname_),
  };
  UserFullNamePatch_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      UserFullNamePatch_descriptor_,
      UserFullNamePatch::default_instance_,
      UserFullNamePatch_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(UserFullNamePatch, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(UserFullNamePatch, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(UserFullNamePatch));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_Users_2fUserToUpdate_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    UserToUpdate_descriptor_, &UserToUpdate::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    UserLoginPatch_descriptor_, &UserLoginPatch::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    UserFullNamePatch_descriptor_, &UserFullNamePatch::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_Users_2fUserToUpdate_2eproto() {
  delete UserToUpdate::default_instance_;
  delete UserToUpdate_reflection_;
  delete UserLoginPatch::default_instance_;
  delete UserLoginPatch_reflection_;
  delete UserFullNamePatch::default_instance_;
  delete UserFullNamePatch_reflection_;
}

void protobuf_AddDesc_Users_2fUserToUpdate_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::Diadoc::Api::Proto::protobuf_AddDesc_User_2eproto();
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\030Users/UserToUpdate.proto\022\026Diadoc.Api.P"
    "roto.Users\032\nUser.proto\"\202\001\n\014UserToUpdate\022"
    "5\n\005Login\030\001 \001(\0132&.Diadoc.Api.Proto.Users."
    "UserLoginPatch\022;\n\010FullName\030\002 \001(\0132).Diado"
    "c.Api.Proto.Users.UserFullNamePatch\"\037\n\016U"
    "serLoginPatch\022\r\n\005Login\030\001 \001(\t\"A\n\021UserFull"
    "NamePatch\022,\n\010FullName\030\001 \001(\0132\032.Diadoc.Api"
    ".Proto.FullName", 295);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "Users/UserToUpdate.proto", &protobuf_RegisterTypes);
  UserToUpdate::default_instance_ = new UserToUpdate();
  UserLoginPatch::default_instance_ = new UserLoginPatch();
  UserFullNamePatch::default_instance_ = new UserFullNamePatch();
  UserToUpdate::default_instance_->InitAsDefaultInstance();
  UserLoginPatch::default_instance_->InitAsDefaultInstance();
  UserFullNamePatch::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_Users_2fUserToUpdate_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_Users_2fUserToUpdate_2eproto {
  StaticDescriptorInitializer_Users_2fUserToUpdate_2eproto() {
    protobuf_AddDesc_Users_2fUserToUpdate_2eproto();
  }
} static_descriptor_initializer_Users_2fUserToUpdate_2eproto_;

// ===================================================================

#ifndef _MSC_VER
const int UserToUpdate::kLoginFieldNumber;
const int UserToUpdate::kFullNameFieldNumber;
#endif  // !_MSC_VER

UserToUpdate::UserToUpdate()
  : ::google::protobuf::Message() {
  SharedCtor();
  // @@protoc_insertion_point(constructor:Diadoc.Api.Proto.Users.UserToUpdate)
}

void UserToUpdate::InitAsDefaultInstance() {
  login_ = const_cast< ::Diadoc::Api::Proto::Users::UserLoginPatch*>(&::Diadoc::Api::Proto::Users::UserLoginPatch::default_instance());
  fullname_ = const_cast< ::Diadoc::Api::Proto::Users::UserFullNamePatch*>(&::Diadoc::Api::Proto::Users::UserFullNamePatch::default_instance());
}

UserToUpdate::UserToUpdate(const UserToUpdate& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:Diadoc.Api.Proto.Users.UserToUpdate)
}

void UserToUpdate::SharedCtor() {
  _cached_size_ = 0;
  login_ = NULL;
  fullname_ = NULL;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

UserToUpdate::~UserToUpdate() {
  // @@protoc_insertion_point(destructor:Diadoc.Api.Proto.Users.UserToUpdate)
  SharedDtor();
}

void UserToUpdate::SharedDtor() {
  if (this != default_instance_) {
    delete login_;
    delete fullname_;
  }
}

void UserToUpdate::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* UserToUpdate::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return UserToUpdate_descriptor_;
}

const UserToUpdate& UserToUpdate::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_Users_2fUserToUpdate_2eproto();
  return *default_instance_;
}

UserToUpdate* UserToUpdate::default_instance_ = NULL;

UserToUpdate* UserToUpdate::New() const {
  return new UserToUpdate;
}

void UserToUpdate::Clear() {
  if (_has_bits_[0 / 32] & 3) {
    if (has_login()) {
      if (login_ != NULL) login_->::Diadoc::Api::Proto::Users::UserLoginPatch::Clear();
    }
    if (has_fullname()) {
      if (fullname_ != NULL) fullname_->::Diadoc::Api::Proto::Users::UserFullNamePatch::Clear();
    }
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool UserToUpdate::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:Diadoc.Api.Proto.Users.UserToUpdate)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional .Diadoc.Api.Proto.Users.UserLoginPatch Login = 1;
      case 1: {
        if (tag == 10) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_login()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(18)) goto parse_FullName;
        break;
      }

      // optional .Diadoc.Api.Proto.Users.UserFullNamePatch FullName = 2;
      case 2: {
        if (tag == 18) {
         parse_FullName:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_fullname()));
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
  // @@protoc_insertion_point(parse_success:Diadoc.Api.Proto.Users.UserToUpdate)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:Diadoc.Api.Proto.Users.UserToUpdate)
  return false;
#undef DO_
}

void UserToUpdate::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:Diadoc.Api.Proto.Users.UserToUpdate)
  // optional .Diadoc.Api.Proto.Users.UserLoginPatch Login = 1;
  if (has_login()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      1, this->login(), output);
  }

  // optional .Diadoc.Api.Proto.Users.UserFullNamePatch FullName = 2;
  if (has_fullname()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      2, this->fullname(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:Diadoc.Api.Proto.Users.UserToUpdate)
}

::google::protobuf::uint8* UserToUpdate::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:Diadoc.Api.Proto.Users.UserToUpdate)
  // optional .Diadoc.Api.Proto.Users.UserLoginPatch Login = 1;
  if (has_login()) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteMessageNoVirtualToArray(
        1, this->login(), target);
  }

  // optional .Diadoc.Api.Proto.Users.UserFullNamePatch FullName = 2;
  if (has_fullname()) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteMessageNoVirtualToArray(
        2, this->fullname(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:Diadoc.Api.Proto.Users.UserToUpdate)
  return target;
}

int UserToUpdate::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // optional .Diadoc.Api.Proto.Users.UserLoginPatch Login = 1;
    if (has_login()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          this->login());
    }

    // optional .Diadoc.Api.Proto.Users.UserFullNamePatch FullName = 2;
    if (has_fullname()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          this->fullname());
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

void UserToUpdate::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const UserToUpdate* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const UserToUpdate*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void UserToUpdate::MergeFrom(const UserToUpdate& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_login()) {
      mutable_login()->::Diadoc::Api::Proto::Users::UserLoginPatch::MergeFrom(from.login());
    }
    if (from.has_fullname()) {
      mutable_fullname()->::Diadoc::Api::Proto::Users::UserFullNamePatch::MergeFrom(from.fullname());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void UserToUpdate::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void UserToUpdate::CopyFrom(const UserToUpdate& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool UserToUpdate::IsInitialized() const {

  if (has_fullname()) {
    if (!this->fullname().IsInitialized()) return false;
  }
  return true;
}

void UserToUpdate::Swap(UserToUpdate* other) {
  if (other != this) {
    std::swap(login_, other->login_);
    std::swap(fullname_, other->fullname_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata UserToUpdate::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = UserToUpdate_descriptor_;
  metadata.reflection = UserToUpdate_reflection_;
  return metadata;
}


// ===================================================================

#ifndef _MSC_VER
const int UserLoginPatch::kLoginFieldNumber;
#endif  // !_MSC_VER

UserLoginPatch::UserLoginPatch()
  : ::google::protobuf::Message() {
  SharedCtor();
  // @@protoc_insertion_point(constructor:Diadoc.Api.Proto.Users.UserLoginPatch)
}

void UserLoginPatch::InitAsDefaultInstance() {
}

UserLoginPatch::UserLoginPatch(const UserLoginPatch& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:Diadoc.Api.Proto.Users.UserLoginPatch)
}

void UserLoginPatch::SharedCtor() {
  ::google::protobuf::internal::GetEmptyString();
  _cached_size_ = 0;
  login_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

UserLoginPatch::~UserLoginPatch() {
  // @@protoc_insertion_point(destructor:Diadoc.Api.Proto.Users.UserLoginPatch)
  SharedDtor();
}

void UserLoginPatch::SharedDtor() {
  if (login_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete login_;
  }
  if (this != default_instance_) {
  }
}

void UserLoginPatch::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* UserLoginPatch::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return UserLoginPatch_descriptor_;
}

const UserLoginPatch& UserLoginPatch::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_Users_2fUserToUpdate_2eproto();
  return *default_instance_;
}

UserLoginPatch* UserLoginPatch::default_instance_ = NULL;

UserLoginPatch* UserLoginPatch::New() const {
  return new UserLoginPatch;
}

void UserLoginPatch::Clear() {
  if (has_login()) {
    if (login_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
      login_->clear();
    }
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool UserLoginPatch::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:Diadoc.Api.Proto.Users.UserLoginPatch)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional string Login = 1;
      case 1: {
        if (tag == 10) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_login()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
            this->login().data(), this->login().length(),
            ::google::protobuf::internal::WireFormat::PARSE,
            "login");
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
  // @@protoc_insertion_point(parse_success:Diadoc.Api.Proto.Users.UserLoginPatch)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:Diadoc.Api.Proto.Users.UserLoginPatch)
  return false;
#undef DO_
}

void UserLoginPatch::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:Diadoc.Api.Proto.Users.UserLoginPatch)
  // optional string Login = 1;
  if (has_login()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->login().data(), this->login().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "login");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->login(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:Diadoc.Api.Proto.Users.UserLoginPatch)
}

::google::protobuf::uint8* UserLoginPatch::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:Diadoc.Api.Proto.Users.UserLoginPatch)
  // optional string Login = 1;
  if (has_login()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->login().data(), this->login().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "login");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->login(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:Diadoc.Api.Proto.Users.UserLoginPatch)
  return target;
}

int UserLoginPatch::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // optional string Login = 1;
    if (has_login()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->login());
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

void UserLoginPatch::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const UserLoginPatch* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const UserLoginPatch*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void UserLoginPatch::MergeFrom(const UserLoginPatch& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_login()) {
      set_login(from.login());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void UserLoginPatch::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void UserLoginPatch::CopyFrom(const UserLoginPatch& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool UserLoginPatch::IsInitialized() const {

  return true;
}

void UserLoginPatch::Swap(UserLoginPatch* other) {
  if (other != this) {
    std::swap(login_, other->login_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata UserLoginPatch::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = UserLoginPatch_descriptor_;
  metadata.reflection = UserLoginPatch_reflection_;
  return metadata;
}


// ===================================================================

#ifndef _MSC_VER
const int UserFullNamePatch::kFullNameFieldNumber;
#endif  // !_MSC_VER

UserFullNamePatch::UserFullNamePatch()
  : ::google::protobuf::Message() {
  SharedCtor();
  // @@protoc_insertion_point(constructor:Diadoc.Api.Proto.Users.UserFullNamePatch)
}

void UserFullNamePatch::InitAsDefaultInstance() {
  fullname_ = const_cast< ::Diadoc::Api::Proto::FullName*>(&::Diadoc::Api::Proto::FullName::default_instance());
}

UserFullNamePatch::UserFullNamePatch(const UserFullNamePatch& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:Diadoc.Api.Proto.Users.UserFullNamePatch)
}

void UserFullNamePatch::SharedCtor() {
  _cached_size_ = 0;
  fullname_ = NULL;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

UserFullNamePatch::~UserFullNamePatch() {
  // @@protoc_insertion_point(destructor:Diadoc.Api.Proto.Users.UserFullNamePatch)
  SharedDtor();
}

void UserFullNamePatch::SharedDtor() {
  if (this != default_instance_) {
    delete fullname_;
  }
}

void UserFullNamePatch::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* UserFullNamePatch::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return UserFullNamePatch_descriptor_;
}

const UserFullNamePatch& UserFullNamePatch::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_Users_2fUserToUpdate_2eproto();
  return *default_instance_;
}

UserFullNamePatch* UserFullNamePatch::default_instance_ = NULL;

UserFullNamePatch* UserFullNamePatch::New() const {
  return new UserFullNamePatch;
}

void UserFullNamePatch::Clear() {
  if (has_fullname()) {
    if (fullname_ != NULL) fullname_->::Diadoc::Api::Proto::FullName::Clear();
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool UserFullNamePatch::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:Diadoc.Api.Proto.Users.UserFullNamePatch)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional .Diadoc.Api.Proto.FullName FullName = 1;
      case 1: {
        if (tag == 10) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_fullname()));
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
  // @@protoc_insertion_point(parse_success:Diadoc.Api.Proto.Users.UserFullNamePatch)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:Diadoc.Api.Proto.Users.UserFullNamePatch)
  return false;
#undef DO_
}

void UserFullNamePatch::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:Diadoc.Api.Proto.Users.UserFullNamePatch)
  // optional .Diadoc.Api.Proto.FullName FullName = 1;
  if (has_fullname()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      1, this->fullname(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:Diadoc.Api.Proto.Users.UserFullNamePatch)
}

::google::protobuf::uint8* UserFullNamePatch::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:Diadoc.Api.Proto.Users.UserFullNamePatch)
  // optional .Diadoc.Api.Proto.FullName FullName = 1;
  if (has_fullname()) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteMessageNoVirtualToArray(
        1, this->fullname(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:Diadoc.Api.Proto.Users.UserFullNamePatch)
  return target;
}

int UserFullNamePatch::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // optional .Diadoc.Api.Proto.FullName FullName = 1;
    if (has_fullname()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          this->fullname());
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

void UserFullNamePatch::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const UserFullNamePatch* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const UserFullNamePatch*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void UserFullNamePatch::MergeFrom(const UserFullNamePatch& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_fullname()) {
      mutable_fullname()->::Diadoc::Api::Proto::FullName::MergeFrom(from.fullname());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void UserFullNamePatch::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void UserFullNamePatch::CopyFrom(const UserFullNamePatch& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool UserFullNamePatch::IsInitialized() const {

  if (has_fullname()) {
    if (!this->fullname().IsInitialized()) return false;
  }
  return true;
}

void UserFullNamePatch::Swap(UserFullNamePatch* other) {
  if (other != this) {
    std::swap(fullname_, other->fullname_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata UserFullNamePatch::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = UserFullNamePatch_descriptor_;
  metadata.reflection = UserFullNamePatch_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace Users
}  // namespace Proto
}  // namespace Api
}  // namespace Diadoc

// @@protoc_insertion_point(global_scope)