// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: Workflows/ReceiptOperatorConfirmationReceiptBehavior.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "Workflows/ReceiptOperatorConfirmationReceiptBehavior.pb.h"

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
namespace Workflows {
namespace ReceiptOperatorConfirmationReceiptBehavior {

namespace {

const ::google::protobuf::EnumDescriptor* ReceiptOperatorConfirmationReceiptBehavior_descriptor_ = NULL;

}  // namespace


void protobuf_AssignDesc_Workflows_2fReceiptOperatorConfirmationReceiptBehavior_2eproto() {
  protobuf_AddDesc_Workflows_2fReceiptOperatorConfirmationReceiptBehavior_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "Workflows/ReceiptOperatorConfirmationReceiptBehavior.proto");
  GOOGLE_CHECK(file != NULL);
  ReceiptOperatorConfirmationReceiptBehavior_descriptor_ = file->enum_type(0);
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_Workflows_2fReceiptOperatorConfirmationReceiptBehavior_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
}

}  // namespace

void protobuf_ShutdownFile_Workflows_2fReceiptOperatorConfirmationReceiptBehavior_2eproto() {
}

void protobuf_AddDesc_Workflows_2fReceiptOperatorConfirmationReceiptBehavior_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n:Workflows/ReceiptOperatorConfirmationR"
    "eceiptBehavior.proto\022EDiadoc.Api.Proto.W"
    "orkflows.ReceiptOperatorConfirmationRece"
    "iptBehavior*P\n*ReceiptOperatorConfirmati"
    "onReceiptBehavior\022\013\n\007Unknown\020\000\022\t\n\005Never\020"
    "\001\022\n\n\006Always\020\002", 213);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "Workflows/ReceiptOperatorConfirmationReceiptBehavior.proto", &protobuf_RegisterTypes);
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_Workflows_2fReceiptOperatorConfirmationReceiptBehavior_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_Workflows_2fReceiptOperatorConfirmationReceiptBehavior_2eproto {
  StaticDescriptorInitializer_Workflows_2fReceiptOperatorConfirmationReceiptBehavior_2eproto() {
    protobuf_AddDesc_Workflows_2fReceiptOperatorConfirmationReceiptBehavior_2eproto();
  }
} static_descriptor_initializer_Workflows_2fReceiptOperatorConfirmationReceiptBehavior_2eproto_;
const ::google::protobuf::EnumDescriptor* ReceiptOperatorConfirmationReceiptBehavior_descriptor() {
  protobuf_AssignDescriptorsOnce();
  return ReceiptOperatorConfirmationReceiptBehavior_descriptor_;
}
bool ReceiptOperatorConfirmationReceiptBehavior_IsValid(int value) {
  switch(value) {
    case 0:
    case 1:
    case 2:
      return true;
    default:
      return false;
  }
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace ReceiptOperatorConfirmationReceiptBehavior
}  // namespace Workflows
}  // namespace Proto
}  // namespace Api
}  // namespace Diadoc

// @@protoc_insertion_point(global_scope)
