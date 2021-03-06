// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: POGOProtos/Networking/Requests/Messages/MarkTutorialCompleteMessage.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "POGOProtos/Networking/Requests/Messages/MarkTutorialCompleteMessage.pb.h"

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

const ::google::protobuf::Descriptor* MarkTutorialCompleteMessage_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  MarkTutorialCompleteMessage_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_POGOProtos_2fNetworking_2fRequests_2fMessages_2fMarkTutorialCompleteMessage_2eproto() GOOGLE_ATTRIBUTE_COLD;
void protobuf_AssignDesc_POGOProtos_2fNetworking_2fRequests_2fMessages_2fMarkTutorialCompleteMessage_2eproto() {
  protobuf_AddDesc_POGOProtos_2fNetworking_2fRequests_2fMessages_2fMarkTutorialCompleteMessage_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "POGOProtos/Networking/Requests/Messages/MarkTutorialCompleteMessage.proto");
  GOOGLE_CHECK(file != NULL);
  MarkTutorialCompleteMessage_descriptor_ = file->message_type(0);
  static const int MarkTutorialCompleteMessage_offsets_[3] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MarkTutorialCompleteMessage, tutorials_completed_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MarkTutorialCompleteMessage, send_marketing_emails_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MarkTutorialCompleteMessage, send_push_notifications_),
  };
  MarkTutorialCompleteMessage_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      MarkTutorialCompleteMessage_descriptor_,
      MarkTutorialCompleteMessage::default_instance_,
      MarkTutorialCompleteMessage_offsets_,
      -1,
      -1,
      -1,
      sizeof(MarkTutorialCompleteMessage),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MarkTutorialCompleteMessage, _internal_metadata_),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MarkTutorialCompleteMessage, _is_default_instance_));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_POGOProtos_2fNetworking_2fRequests_2fMessages_2fMarkTutorialCompleteMessage_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      MarkTutorialCompleteMessage_descriptor_, &MarkTutorialCompleteMessage::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_POGOProtos_2fNetworking_2fRequests_2fMessages_2fMarkTutorialCompleteMessage_2eproto() {
  delete MarkTutorialCompleteMessage::default_instance_;
  delete MarkTutorialCompleteMessage_reflection_;
}

void protobuf_AddDesc_POGOProtos_2fNetworking_2fRequests_2fMessages_2fMarkTutorialCompleteMessage_2eproto() GOOGLE_ATTRIBUTE_COLD;
void protobuf_AddDesc_POGOProtos_2fNetworking_2fRequests_2fMessages_2fMarkTutorialCompleteMessage_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::POGOProtos::Enums::protobuf_AddDesc_POGOProtos_2fEnums_2fTutorialState_2eproto();
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\nIPOGOProtos/Networking/Requests/Message"
    "s/MarkTutorialCompleteMessage.proto\022\'POG"
    "OProtos.Networking.Requests.Messages\032$PO"
    "GOProtos/Enums/TutorialState.proto\"\233\001\n\033M"
    "arkTutorialCompleteMessage\022<\n\023tutorials_"
    "completed\030\001 \003(\0162\037.POGOProtos.Enums.Tutor"
    "ialState\022\035\n\025send_marketing_emails\030\002 \001(\010\022"
    "\037\n\027send_push_notifications\030\003 \001(\010b\006proto3", 320);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "POGOProtos/Networking/Requests/Messages/MarkTutorialCompleteMessage.proto", &protobuf_RegisterTypes);
  MarkTutorialCompleteMessage::default_instance_ = new MarkTutorialCompleteMessage();
  MarkTutorialCompleteMessage::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_POGOProtos_2fNetworking_2fRequests_2fMessages_2fMarkTutorialCompleteMessage_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_POGOProtos_2fNetworking_2fRequests_2fMessages_2fMarkTutorialCompleteMessage_2eproto {
  StaticDescriptorInitializer_POGOProtos_2fNetworking_2fRequests_2fMessages_2fMarkTutorialCompleteMessage_2eproto() {
    protobuf_AddDesc_POGOProtos_2fNetworking_2fRequests_2fMessages_2fMarkTutorialCompleteMessage_2eproto();
  }
} static_descriptor_initializer_POGOProtos_2fNetworking_2fRequests_2fMessages_2fMarkTutorialCompleteMessage_2eproto_;

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int MarkTutorialCompleteMessage::kTutorialsCompletedFieldNumber;
const int MarkTutorialCompleteMessage::kSendMarketingEmailsFieldNumber;
const int MarkTutorialCompleteMessage::kSendPushNotificationsFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

MarkTutorialCompleteMessage::MarkTutorialCompleteMessage()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:POGOProtos.Networking.Requests.Messages.MarkTutorialCompleteMessage)
}

void MarkTutorialCompleteMessage::InitAsDefaultInstance() {
  _is_default_instance_ = true;
}

MarkTutorialCompleteMessage::MarkTutorialCompleteMessage(const MarkTutorialCompleteMessage& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:POGOProtos.Networking.Requests.Messages.MarkTutorialCompleteMessage)
}

void MarkTutorialCompleteMessage::SharedCtor() {
    _is_default_instance_ = false;
  _cached_size_ = 0;
  send_marketing_emails_ = false;
  send_push_notifications_ = false;
}

MarkTutorialCompleteMessage::~MarkTutorialCompleteMessage() {
  // @@protoc_insertion_point(destructor:POGOProtos.Networking.Requests.Messages.MarkTutorialCompleteMessage)
  SharedDtor();
}

void MarkTutorialCompleteMessage::SharedDtor() {
  if (this != default_instance_) {
  }
}

void MarkTutorialCompleteMessage::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* MarkTutorialCompleteMessage::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return MarkTutorialCompleteMessage_descriptor_;
}

const MarkTutorialCompleteMessage& MarkTutorialCompleteMessage::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_POGOProtos_2fNetworking_2fRequests_2fMessages_2fMarkTutorialCompleteMessage_2eproto();
  return *default_instance_;
}

MarkTutorialCompleteMessage* MarkTutorialCompleteMessage::default_instance_ = NULL;

MarkTutorialCompleteMessage* MarkTutorialCompleteMessage::New(::google::protobuf::Arena* arena) const {
  MarkTutorialCompleteMessage* n = new MarkTutorialCompleteMessage;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void MarkTutorialCompleteMessage::Clear() {
// @@protoc_insertion_point(message_clear_start:POGOProtos.Networking.Requests.Messages.MarkTutorialCompleteMessage)
#if defined(__clang__)
#define ZR_HELPER_(f) \
  _Pragma("clang diagnostic push") \
  _Pragma("clang diagnostic ignored \"-Winvalid-offsetof\"") \
  __builtin_offsetof(MarkTutorialCompleteMessage, f) \
  _Pragma("clang diagnostic pop")
#else
#define ZR_HELPER_(f) reinterpret_cast<char*>(\
  &reinterpret_cast<MarkTutorialCompleteMessage*>(16)->f)
#endif

#define ZR_(first, last) do {\
  ::memset(&first, 0,\
           ZR_HELPER_(last) - ZR_HELPER_(first) + sizeof(last));\
} while (0)

  ZR_(send_marketing_emails_, send_push_notifications_);

#undef ZR_HELPER_
#undef ZR_

  tutorials_completed_.Clear();
}

bool MarkTutorialCompleteMessage::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:POGOProtos.Networking.Requests.Messages.MarkTutorialCompleteMessage)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // repeated .POGOProtos.Enums.TutorialState tutorials_completed = 1;
      case 1: {
        if (tag == 10) {
          ::google::protobuf::uint32 length;
          DO_(input->ReadVarint32(&length));
          ::google::protobuf::io::CodedInputStream::Limit limit = input->PushLimit(length);
          while (input->BytesUntilLimit() > 0) {
            int value;
            DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
            add_tutorials_completed(static_cast< ::POGOProtos::Enums::TutorialState >(value));
          }
          input->PopLimit(limit);
        } else if (tag == 8) {
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          add_tutorials_completed(static_cast< ::POGOProtos::Enums::TutorialState >(value));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(16)) goto parse_send_marketing_emails;
        break;
      }

      // optional bool send_marketing_emails = 2;
      case 2: {
        if (tag == 16) {
         parse_send_marketing_emails:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &send_marketing_emails_)));

        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(24)) goto parse_send_push_notifications;
        break;
      }

      // optional bool send_push_notifications = 3;
      case 3: {
        if (tag == 24) {
         parse_send_push_notifications:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &send_push_notifications_)));

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
  // @@protoc_insertion_point(parse_success:POGOProtos.Networking.Requests.Messages.MarkTutorialCompleteMessage)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:POGOProtos.Networking.Requests.Messages.MarkTutorialCompleteMessage)
  return false;
#undef DO_
}

void MarkTutorialCompleteMessage::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:POGOProtos.Networking.Requests.Messages.MarkTutorialCompleteMessage)
  // repeated .POGOProtos.Enums.TutorialState tutorials_completed = 1;
  if (this->tutorials_completed_size() > 0) {
    ::google::protobuf::internal::WireFormatLite::WriteTag(
      1,
      ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED,
      output);
    output->WriteVarint32(_tutorials_completed_cached_byte_size_);
  }
  for (int i = 0; i < this->tutorials_completed_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::WriteEnumNoTag(
      this->tutorials_completed(i), output);
  }

  // optional bool send_marketing_emails = 2;
  if (this->send_marketing_emails() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(2, this->send_marketing_emails(), output);
  }

  // optional bool send_push_notifications = 3;
  if (this->send_push_notifications() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(3, this->send_push_notifications(), output);
  }

  // @@protoc_insertion_point(serialize_end:POGOProtos.Networking.Requests.Messages.MarkTutorialCompleteMessage)
}

::google::protobuf::uint8* MarkTutorialCompleteMessage::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:POGOProtos.Networking.Requests.Messages.MarkTutorialCompleteMessage)
  // repeated .POGOProtos.Enums.TutorialState tutorials_completed = 1;
  if (this->tutorials_completed_size() > 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteTagToArray(
      1,
      ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED,
      target);
    target = ::google::protobuf::io::CodedOutputStream::WriteVarint32ToArray(    _tutorials_completed_cached_byte_size_, target);
  }
  for (int i = 0; i < this->tutorials_completed_size(); i++) {
    target = ::google::protobuf::internal::WireFormatLite::WriteEnumNoTagToArray(
      this->tutorials_completed(i), target);
  }

  // optional bool send_marketing_emails = 2;
  if (this->send_marketing_emails() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(2, this->send_marketing_emails(), target);
  }

  // optional bool send_push_notifications = 3;
  if (this->send_push_notifications() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(3, this->send_push_notifications(), target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:POGOProtos.Networking.Requests.Messages.MarkTutorialCompleteMessage)
  return target;
}

int MarkTutorialCompleteMessage::ByteSize() const {
// @@protoc_insertion_point(message_byte_size_start:POGOProtos.Networking.Requests.Messages.MarkTutorialCompleteMessage)
  int total_size = 0;

  // optional bool send_marketing_emails = 2;
  if (this->send_marketing_emails() != 0) {
    total_size += 1 + 1;
  }

  // optional bool send_push_notifications = 3;
  if (this->send_push_notifications() != 0) {
    total_size += 1 + 1;
  }

  // repeated .POGOProtos.Enums.TutorialState tutorials_completed = 1;
  {
    int data_size = 0;
    for (int i = 0; i < this->tutorials_completed_size(); i++) {
      data_size += ::google::protobuf::internal::WireFormatLite::EnumSize(
        this->tutorials_completed(i));
    }
    if (data_size > 0) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(data_size);
    }
    GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
    _tutorials_completed_cached_byte_size_ = data_size;
    GOOGLE_SAFE_CONCURRENT_WRITES_END();
    total_size += data_size;
  }

  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void MarkTutorialCompleteMessage::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:POGOProtos.Networking.Requests.Messages.MarkTutorialCompleteMessage)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  const MarkTutorialCompleteMessage* source = 
      ::google::protobuf::internal::DynamicCastToGenerated<const MarkTutorialCompleteMessage>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:POGOProtos.Networking.Requests.Messages.MarkTutorialCompleteMessage)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:POGOProtos.Networking.Requests.Messages.MarkTutorialCompleteMessage)
    MergeFrom(*source);
  }
}

void MarkTutorialCompleteMessage::MergeFrom(const MarkTutorialCompleteMessage& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:POGOProtos.Networking.Requests.Messages.MarkTutorialCompleteMessage)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  tutorials_completed_.MergeFrom(from.tutorials_completed_);
  if (from.send_marketing_emails() != 0) {
    set_send_marketing_emails(from.send_marketing_emails());
  }
  if (from.send_push_notifications() != 0) {
    set_send_push_notifications(from.send_push_notifications());
  }
}

void MarkTutorialCompleteMessage::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:POGOProtos.Networking.Requests.Messages.MarkTutorialCompleteMessage)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void MarkTutorialCompleteMessage::CopyFrom(const MarkTutorialCompleteMessage& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:POGOProtos.Networking.Requests.Messages.MarkTutorialCompleteMessage)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool MarkTutorialCompleteMessage::IsInitialized() const {

  return true;
}

void MarkTutorialCompleteMessage::Swap(MarkTutorialCompleteMessage* other) {
  if (other == this) return;
  InternalSwap(other);
}
void MarkTutorialCompleteMessage::InternalSwap(MarkTutorialCompleteMessage* other) {
  tutorials_completed_.UnsafeArenaSwap(&other->tutorials_completed_);
  std::swap(send_marketing_emails_, other->send_marketing_emails_);
  std::swap(send_push_notifications_, other->send_push_notifications_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata MarkTutorialCompleteMessage::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = MarkTutorialCompleteMessage_descriptor_;
  metadata.reflection = MarkTutorialCompleteMessage_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// MarkTutorialCompleteMessage

// repeated .POGOProtos.Enums.TutorialState tutorials_completed = 1;
int MarkTutorialCompleteMessage::tutorials_completed_size() const {
  return tutorials_completed_.size();
}
void MarkTutorialCompleteMessage::clear_tutorials_completed() {
  tutorials_completed_.Clear();
}
 ::POGOProtos::Enums::TutorialState MarkTutorialCompleteMessage::tutorials_completed(int index) const {
  // @@protoc_insertion_point(field_get:POGOProtos.Networking.Requests.Messages.MarkTutorialCompleteMessage.tutorials_completed)
  return static_cast< ::POGOProtos::Enums::TutorialState >(tutorials_completed_.Get(index));
}
 void MarkTutorialCompleteMessage::set_tutorials_completed(int index, ::POGOProtos::Enums::TutorialState value) {
  tutorials_completed_.Set(index, value);
  // @@protoc_insertion_point(field_set:POGOProtos.Networking.Requests.Messages.MarkTutorialCompleteMessage.tutorials_completed)
}
 void MarkTutorialCompleteMessage::add_tutorials_completed(::POGOProtos::Enums::TutorialState value) {
  tutorials_completed_.Add(value);
  // @@protoc_insertion_point(field_add:POGOProtos.Networking.Requests.Messages.MarkTutorialCompleteMessage.tutorials_completed)
}
 const ::google::protobuf::RepeatedField<int>&
MarkTutorialCompleteMessage::tutorials_completed() const {
  // @@protoc_insertion_point(field_list:POGOProtos.Networking.Requests.Messages.MarkTutorialCompleteMessage.tutorials_completed)
  return tutorials_completed_;
}
 ::google::protobuf::RepeatedField<int>*
MarkTutorialCompleteMessage::mutable_tutorials_completed() {
  // @@protoc_insertion_point(field_mutable_list:POGOProtos.Networking.Requests.Messages.MarkTutorialCompleteMessage.tutorials_completed)
  return &tutorials_completed_;
}

// optional bool send_marketing_emails = 2;
void MarkTutorialCompleteMessage::clear_send_marketing_emails() {
  send_marketing_emails_ = false;
}
 bool MarkTutorialCompleteMessage::send_marketing_emails() const {
  // @@protoc_insertion_point(field_get:POGOProtos.Networking.Requests.Messages.MarkTutorialCompleteMessage.send_marketing_emails)
  return send_marketing_emails_;
}
 void MarkTutorialCompleteMessage::set_send_marketing_emails(bool value) {
  
  send_marketing_emails_ = value;
  // @@protoc_insertion_point(field_set:POGOProtos.Networking.Requests.Messages.MarkTutorialCompleteMessage.send_marketing_emails)
}

// optional bool send_push_notifications = 3;
void MarkTutorialCompleteMessage::clear_send_push_notifications() {
  send_push_notifications_ = false;
}
 bool MarkTutorialCompleteMessage::send_push_notifications() const {
  // @@protoc_insertion_point(field_get:POGOProtos.Networking.Requests.Messages.MarkTutorialCompleteMessage.send_push_notifications)
  return send_push_notifications_;
}
 void MarkTutorialCompleteMessage::set_send_push_notifications(bool value) {
  
  send_push_notifications_ = value;
  // @@protoc_insertion_point(field_set:POGOProtos.Networking.Requests.Messages.MarkTutorialCompleteMessage.send_push_notifications)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace Messages
}  // namespace Requests
}  // namespace Networking
}  // namespace POGOProtos

// @@protoc_insertion_point(global_scope)
