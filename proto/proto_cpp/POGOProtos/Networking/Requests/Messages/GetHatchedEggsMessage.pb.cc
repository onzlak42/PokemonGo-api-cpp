// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: POGOProtos/Networking/Requests/Messages/GetHatchedEggsMessage.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "POGOProtos/Networking/Requests/Messages/GetHatchedEggsMessage.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace POGOProtos {
namespace Networking {
namespace Requests {
namespace Messages {

namespace {

const ::google::protobuf::Descriptor* GetHatchedEggsMessage_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  GetHatchedEggsMessage_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_POGOProtos_2fNetworking_2fRequests_2fMessages_2fGetHatchedEggsMessage_2eproto() GOOGLE_ATTRIBUTE_COLD;
void protobuf_AssignDesc_POGOProtos_2fNetworking_2fRequests_2fMessages_2fGetHatchedEggsMessage_2eproto() {
  protobuf_AddDesc_POGOProtos_2fNetworking_2fRequests_2fMessages_2fGetHatchedEggsMessage_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "POGOProtos/Networking/Requests/Messages/GetHatchedEggsMessage.proto");
  GOOGLE_CHECK(file != NULL);
  GetHatchedEggsMessage_descriptor_ = file->message_type(0);
  static const int GetHatchedEggsMessage_offsets_[1] = {
  };
  GetHatchedEggsMessage_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      GetHatchedEggsMessage_descriptor_,
      GetHatchedEggsMessage::default_instance_,
      GetHatchedEggsMessage_offsets_,
      -1,
      -1,
      -1,
      sizeof(GetHatchedEggsMessage),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(GetHatchedEggsMessage, _internal_metadata_),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(GetHatchedEggsMessage, _is_default_instance_));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_POGOProtos_2fNetworking_2fRequests_2fMessages_2fGetHatchedEggsMessage_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      GetHatchedEggsMessage_descriptor_, &GetHatchedEggsMessage::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_POGOProtos_2fNetworking_2fRequests_2fMessages_2fGetHatchedEggsMessage_2eproto() {
  delete GetHatchedEggsMessage::default_instance_;
  delete GetHatchedEggsMessage_reflection_;
}

void protobuf_AddDesc_POGOProtos_2fNetworking_2fRequests_2fMessages_2fGetHatchedEggsMessage_2eproto() GOOGLE_ATTRIBUTE_COLD;
void protobuf_AddDesc_POGOProtos_2fNetworking_2fRequests_2fMessages_2fGetHatchedEggsMessage_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\nCPOGOProtos/Networking/Requests/Message"
    "s/GetHatchedEggsMessage.proto\022\'POGOProto"
    "s.Networking.Requests.Messages\"\027\n\025GetHat"
    "chedEggsMessageb\006proto3", 143);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "POGOProtos/Networking/Requests/Messages/GetHatchedEggsMessage.proto", &protobuf_RegisterTypes);
  GetHatchedEggsMessage::default_instance_ = new GetHatchedEggsMessage();
  GetHatchedEggsMessage::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_POGOProtos_2fNetworking_2fRequests_2fMessages_2fGetHatchedEggsMessage_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_POGOProtos_2fNetworking_2fRequests_2fMessages_2fGetHatchedEggsMessage_2eproto {
  StaticDescriptorInitializer_POGOProtos_2fNetworking_2fRequests_2fMessages_2fGetHatchedEggsMessage_2eproto() {
    protobuf_AddDesc_POGOProtos_2fNetworking_2fRequests_2fMessages_2fGetHatchedEggsMessage_2eproto();
  }
} static_descriptor_initializer_POGOProtos_2fNetworking_2fRequests_2fMessages_2fGetHatchedEggsMessage_2eproto_;

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

GetHatchedEggsMessage::GetHatchedEggsMessage()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:POGOProtos.Networking.Requests.Messages.GetHatchedEggsMessage)
}

void GetHatchedEggsMessage::InitAsDefaultInstance() {
  _is_default_instance_ = true;
}

GetHatchedEggsMessage::GetHatchedEggsMessage(const GetHatchedEggsMessage& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:POGOProtos.Networking.Requests.Messages.GetHatchedEggsMessage)
}

void GetHatchedEggsMessage::SharedCtor() {
    _is_default_instance_ = false;
  _cached_size_ = 0;
}

GetHatchedEggsMessage::~GetHatchedEggsMessage() {
  // @@protoc_insertion_point(destructor:POGOProtos.Networking.Requests.Messages.GetHatchedEggsMessage)
  SharedDtor();
}

void GetHatchedEggsMessage::SharedDtor() {
  if (this != default_instance_) {
  }
}

void GetHatchedEggsMessage::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* GetHatchedEggsMessage::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return GetHatchedEggsMessage_descriptor_;
}

const GetHatchedEggsMessage& GetHatchedEggsMessage::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_POGOProtos_2fNetworking_2fRequests_2fMessages_2fGetHatchedEggsMessage_2eproto();
  return *default_instance_;
}

GetHatchedEggsMessage* GetHatchedEggsMessage::default_instance_ = NULL;

GetHatchedEggsMessage* GetHatchedEggsMessage::New(::google::protobuf::Arena* arena) const {
  GetHatchedEggsMessage* n = new GetHatchedEggsMessage;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void GetHatchedEggsMessage::Clear() {
// @@protoc_insertion_point(message_clear_start:POGOProtos.Networking.Requests.Messages.GetHatchedEggsMessage)
}

bool GetHatchedEggsMessage::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:POGOProtos.Networking.Requests.Messages.GetHatchedEggsMessage)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
  handle_unusual:
    if (tag == 0 ||
        ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
        ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
      goto success;
    }
    DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));
  }
success:
  // @@protoc_insertion_point(parse_success:POGOProtos.Networking.Requests.Messages.GetHatchedEggsMessage)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:POGOProtos.Networking.Requests.Messages.GetHatchedEggsMessage)
  return false;
#undef DO_
}

void GetHatchedEggsMessage::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:POGOProtos.Networking.Requests.Messages.GetHatchedEggsMessage)
  // @@protoc_insertion_point(serialize_end:POGOProtos.Networking.Requests.Messages.GetHatchedEggsMessage)
}

::google::protobuf::uint8* GetHatchedEggsMessage::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:POGOProtos.Networking.Requests.Messages.GetHatchedEggsMessage)
  // @@protoc_insertion_point(serialize_to_array_end:POGOProtos.Networking.Requests.Messages.GetHatchedEggsMessage)
  return target;
}

int GetHatchedEggsMessage::ByteSize() const {
// @@protoc_insertion_point(message_byte_size_start:POGOProtos.Networking.Requests.Messages.GetHatchedEggsMessage)
  int total_size = 0;

  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void GetHatchedEggsMessage::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:POGOProtos.Networking.Requests.Messages.GetHatchedEggsMessage)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  const GetHatchedEggsMessage* source = 
      ::google::protobuf::internal::DynamicCastToGenerated<const GetHatchedEggsMessage>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:POGOProtos.Networking.Requests.Messages.GetHatchedEggsMessage)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:POGOProtos.Networking.Requests.Messages.GetHatchedEggsMessage)
    MergeFrom(*source);
  }
}

void GetHatchedEggsMessage::MergeFrom(const GetHatchedEggsMessage& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:POGOProtos.Networking.Requests.Messages.GetHatchedEggsMessage)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
}

void GetHatchedEggsMessage::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:POGOProtos.Networking.Requests.Messages.GetHatchedEggsMessage)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void GetHatchedEggsMessage::CopyFrom(const GetHatchedEggsMessage& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:POGOProtos.Networking.Requests.Messages.GetHatchedEggsMessage)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool GetHatchedEggsMessage::IsInitialized() const {

  return true;
}

void GetHatchedEggsMessage::Swap(GetHatchedEggsMessage* other) {
  if (other == this) return;
  InternalSwap(other);
}
void GetHatchedEggsMessage::InternalSwap(GetHatchedEggsMessage* other) {
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata GetHatchedEggsMessage::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = GetHatchedEggsMessage_descriptor_;
  metadata.reflection = GetHatchedEggsMessage_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// GetHatchedEggsMessage

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace Messages
}  // namespace Requests
}  // namespace Networking
}  // namespace POGOProtos

// @@protoc_insertion_point(global_scope)
