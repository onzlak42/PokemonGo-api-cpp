// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: POGOProtos/Networking/Requests/Messages/CheckCodenameAvailableMessage.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "POGOProtos/Networking/Requests/Messages/CheckCodenameAvailableMessage.pb.h"

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

const ::google::protobuf::Descriptor* CheckCodenameAvailableMessage_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  CheckCodenameAvailableMessage_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_POGOProtos_2fNetworking_2fRequests_2fMessages_2fCheckCodenameAvailableMessage_2eproto() GOOGLE_ATTRIBUTE_COLD;
void protobuf_AssignDesc_POGOProtos_2fNetworking_2fRequests_2fMessages_2fCheckCodenameAvailableMessage_2eproto() {
  protobuf_AddDesc_POGOProtos_2fNetworking_2fRequests_2fMessages_2fCheckCodenameAvailableMessage_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "POGOProtos/Networking/Requests/Messages/CheckCodenameAvailableMessage.proto");
  GOOGLE_CHECK(file != NULL);
  CheckCodenameAvailableMessage_descriptor_ = file->message_type(0);
  static const int CheckCodenameAvailableMessage_offsets_[1] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CheckCodenameAvailableMessage, codename_),
  };
  CheckCodenameAvailableMessage_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      CheckCodenameAvailableMessage_descriptor_,
      CheckCodenameAvailableMessage::default_instance_,
      CheckCodenameAvailableMessage_offsets_,
      -1,
      -1,
      -1,
      sizeof(CheckCodenameAvailableMessage),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CheckCodenameAvailableMessage, _internal_metadata_),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CheckCodenameAvailableMessage, _is_default_instance_));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_POGOProtos_2fNetworking_2fRequests_2fMessages_2fCheckCodenameAvailableMessage_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      CheckCodenameAvailableMessage_descriptor_, &CheckCodenameAvailableMessage::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_POGOProtos_2fNetworking_2fRequests_2fMessages_2fCheckCodenameAvailableMessage_2eproto() {
  delete CheckCodenameAvailableMessage::default_instance_;
  delete CheckCodenameAvailableMessage_reflection_;
}

void protobuf_AddDesc_POGOProtos_2fNetworking_2fRequests_2fMessages_2fCheckCodenameAvailableMessage_2eproto() GOOGLE_ATTRIBUTE_COLD;
void protobuf_AddDesc_POGOProtos_2fNetworking_2fRequests_2fMessages_2fCheckCodenameAvailableMessage_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\nKPOGOProtos/Networking/Requests/Message"
    "s/CheckCodenameAvailableMessage.proto\022\'P"
    "OGOProtos.Networking.Requests.Messages\"1"
    "\n\035CheckCodenameAvailableMessage\022\020\n\010coden"
    "ame\030\001 \001(\tb\006proto3", 177);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "POGOProtos/Networking/Requests/Messages/CheckCodenameAvailableMessage.proto", &protobuf_RegisterTypes);
  CheckCodenameAvailableMessage::default_instance_ = new CheckCodenameAvailableMessage();
  CheckCodenameAvailableMessage::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_POGOProtos_2fNetworking_2fRequests_2fMessages_2fCheckCodenameAvailableMessage_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_POGOProtos_2fNetworking_2fRequests_2fMessages_2fCheckCodenameAvailableMessage_2eproto {
  StaticDescriptorInitializer_POGOProtos_2fNetworking_2fRequests_2fMessages_2fCheckCodenameAvailableMessage_2eproto() {
    protobuf_AddDesc_POGOProtos_2fNetworking_2fRequests_2fMessages_2fCheckCodenameAvailableMessage_2eproto();
  }
} static_descriptor_initializer_POGOProtos_2fNetworking_2fRequests_2fMessages_2fCheckCodenameAvailableMessage_2eproto_;

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int CheckCodenameAvailableMessage::kCodenameFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

CheckCodenameAvailableMessage::CheckCodenameAvailableMessage()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:POGOProtos.Networking.Requests.Messages.CheckCodenameAvailableMessage)
}

void CheckCodenameAvailableMessage::InitAsDefaultInstance() {
  _is_default_instance_ = true;
}

CheckCodenameAvailableMessage::CheckCodenameAvailableMessage(const CheckCodenameAvailableMessage& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:POGOProtos.Networking.Requests.Messages.CheckCodenameAvailableMessage)
}

void CheckCodenameAvailableMessage::SharedCtor() {
    _is_default_instance_ = false;
  ::google::protobuf::internal::GetEmptyString();
  _cached_size_ = 0;
  codename_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

CheckCodenameAvailableMessage::~CheckCodenameAvailableMessage() {
  // @@protoc_insertion_point(destructor:POGOProtos.Networking.Requests.Messages.CheckCodenameAvailableMessage)
  SharedDtor();
}

void CheckCodenameAvailableMessage::SharedDtor() {
  codename_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (this != default_instance_) {
  }
}

void CheckCodenameAvailableMessage::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* CheckCodenameAvailableMessage::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return CheckCodenameAvailableMessage_descriptor_;
}

const CheckCodenameAvailableMessage& CheckCodenameAvailableMessage::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_POGOProtos_2fNetworking_2fRequests_2fMessages_2fCheckCodenameAvailableMessage_2eproto();
  return *default_instance_;
}

CheckCodenameAvailableMessage* CheckCodenameAvailableMessage::default_instance_ = NULL;

CheckCodenameAvailableMessage* CheckCodenameAvailableMessage::New(::google::protobuf::Arena* arena) const {
  CheckCodenameAvailableMessage* n = new CheckCodenameAvailableMessage;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void CheckCodenameAvailableMessage::Clear() {
// @@protoc_insertion_point(message_clear_start:POGOProtos.Networking.Requests.Messages.CheckCodenameAvailableMessage)
  codename_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

bool CheckCodenameAvailableMessage::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:POGOProtos.Networking.Requests.Messages.CheckCodenameAvailableMessage)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional string codename = 1;
      case 1: {
        if (tag == 10) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_codename()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->codename().data(), this->codename().length(),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "POGOProtos.Networking.Requests.Messages.CheckCodenameAvailableMessage.codename"));
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
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:POGOProtos.Networking.Requests.Messages.CheckCodenameAvailableMessage)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:POGOProtos.Networking.Requests.Messages.CheckCodenameAvailableMessage)
  return false;
#undef DO_
}

void CheckCodenameAvailableMessage::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:POGOProtos.Networking.Requests.Messages.CheckCodenameAvailableMessage)
  // optional string codename = 1;
  if (this->codename().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->codename().data(), this->codename().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "POGOProtos.Networking.Requests.Messages.CheckCodenameAvailableMessage.codename");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->codename(), output);
  }

  // @@protoc_insertion_point(serialize_end:POGOProtos.Networking.Requests.Messages.CheckCodenameAvailableMessage)
}

::google::protobuf::uint8* CheckCodenameAvailableMessage::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:POGOProtos.Networking.Requests.Messages.CheckCodenameAvailableMessage)
  // optional string codename = 1;
  if (this->codename().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->codename().data(), this->codename().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "POGOProtos.Networking.Requests.Messages.CheckCodenameAvailableMessage.codename");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->codename(), target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:POGOProtos.Networking.Requests.Messages.CheckCodenameAvailableMessage)
  return target;
}

int CheckCodenameAvailableMessage::ByteSize() const {
// @@protoc_insertion_point(message_byte_size_start:POGOProtos.Networking.Requests.Messages.CheckCodenameAvailableMessage)
  int total_size = 0;

  // optional string codename = 1;
  if (this->codename().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->codename());
  }

  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void CheckCodenameAvailableMessage::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:POGOProtos.Networking.Requests.Messages.CheckCodenameAvailableMessage)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  const CheckCodenameAvailableMessage* source = 
      ::google::protobuf::internal::DynamicCastToGenerated<const CheckCodenameAvailableMessage>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:POGOProtos.Networking.Requests.Messages.CheckCodenameAvailableMessage)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:POGOProtos.Networking.Requests.Messages.CheckCodenameAvailableMessage)
    MergeFrom(*source);
  }
}

void CheckCodenameAvailableMessage::MergeFrom(const CheckCodenameAvailableMessage& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:POGOProtos.Networking.Requests.Messages.CheckCodenameAvailableMessage)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  if (from.codename().size() > 0) {

    codename_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.codename_);
  }
}

void CheckCodenameAvailableMessage::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:POGOProtos.Networking.Requests.Messages.CheckCodenameAvailableMessage)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void CheckCodenameAvailableMessage::CopyFrom(const CheckCodenameAvailableMessage& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:POGOProtos.Networking.Requests.Messages.CheckCodenameAvailableMessage)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool CheckCodenameAvailableMessage::IsInitialized() const {

  return true;
}

void CheckCodenameAvailableMessage::Swap(CheckCodenameAvailableMessage* other) {
  if (other == this) return;
  InternalSwap(other);
}
void CheckCodenameAvailableMessage::InternalSwap(CheckCodenameAvailableMessage* other) {
  codename_.Swap(&other->codename_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata CheckCodenameAvailableMessage::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = CheckCodenameAvailableMessage_descriptor_;
  metadata.reflection = CheckCodenameAvailableMessage_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// CheckCodenameAvailableMessage

// optional string codename = 1;
void CheckCodenameAvailableMessage::clear_codename() {
  codename_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 const ::std::string& CheckCodenameAvailableMessage::codename() const {
  // @@protoc_insertion_point(field_get:POGOProtos.Networking.Requests.Messages.CheckCodenameAvailableMessage.codename)
  return codename_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void CheckCodenameAvailableMessage::set_codename(const ::std::string& value) {
  
  codename_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:POGOProtos.Networking.Requests.Messages.CheckCodenameAvailableMessage.codename)
}
 void CheckCodenameAvailableMessage::set_codename(const char* value) {
  
  codename_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:POGOProtos.Networking.Requests.Messages.CheckCodenameAvailableMessage.codename)
}
 void CheckCodenameAvailableMessage::set_codename(const char* value, size_t size) {
  
  codename_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:POGOProtos.Networking.Requests.Messages.CheckCodenameAvailableMessage.codename)
}
 ::std::string* CheckCodenameAvailableMessage::mutable_codename() {
  
  // @@protoc_insertion_point(field_mutable:POGOProtos.Networking.Requests.Messages.CheckCodenameAvailableMessage.codename)
  return codename_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 ::std::string* CheckCodenameAvailableMessage::release_codename() {
  // @@protoc_insertion_point(field_release:POGOProtos.Networking.Requests.Messages.CheckCodenameAvailableMessage.codename)
  
  return codename_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void CheckCodenameAvailableMessage::set_allocated_codename(::std::string* codename) {
  if (codename != NULL) {
    
  } else {
    
  }
  codename_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), codename);
  // @@protoc_insertion_point(field_set_allocated:POGOProtos.Networking.Requests.Messages.CheckCodenameAvailableMessage.codename)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace Messages
}  // namespace Requests
}  // namespace Networking
}  // namespace POGOProtos

// @@protoc_insertion_point(global_scope)