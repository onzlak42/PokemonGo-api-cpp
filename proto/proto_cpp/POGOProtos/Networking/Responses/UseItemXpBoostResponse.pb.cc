// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: POGOProtos/Networking/Responses/UseItemXpBoostResponse.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "POGOProtos/Networking/Responses/UseItemXpBoostResponse.pb.h"

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
namespace Responses {

namespace {

const ::google::protobuf::Descriptor* UseItemXpBoostResponse_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  UseItemXpBoostResponse_reflection_ = NULL;
const ::google::protobuf::EnumDescriptor* UseItemXpBoostResponse_Result_descriptor_ = NULL;

}  // namespace


void protobuf_AssignDesc_POGOProtos_2fNetworking_2fResponses_2fUseItemXpBoostResponse_2eproto() GOOGLE_ATTRIBUTE_COLD;
void protobuf_AssignDesc_POGOProtos_2fNetworking_2fResponses_2fUseItemXpBoostResponse_2eproto() {
  protobuf_AddDesc_POGOProtos_2fNetworking_2fResponses_2fUseItemXpBoostResponse_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "POGOProtos/Networking/Responses/UseItemXpBoostResponse.proto");
  GOOGLE_CHECK(file != NULL);
  UseItemXpBoostResponse_descriptor_ = file->message_type(0);
  static const int UseItemXpBoostResponse_offsets_[2] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(UseItemXpBoostResponse, result_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(UseItemXpBoostResponse, applied_items_),
  };
  UseItemXpBoostResponse_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      UseItemXpBoostResponse_descriptor_,
      UseItemXpBoostResponse::default_instance_,
      UseItemXpBoostResponse_offsets_,
      -1,
      -1,
      -1,
      sizeof(UseItemXpBoostResponse),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(UseItemXpBoostResponse, _internal_metadata_),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(UseItemXpBoostResponse, _is_default_instance_));
  UseItemXpBoostResponse_Result_descriptor_ = UseItemXpBoostResponse_descriptor_->enum_type(0);
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_POGOProtos_2fNetworking_2fResponses_2fUseItemXpBoostResponse_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      UseItemXpBoostResponse_descriptor_, &UseItemXpBoostResponse::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_POGOProtos_2fNetworking_2fResponses_2fUseItemXpBoostResponse_2eproto() {
  delete UseItemXpBoostResponse::default_instance_;
  delete UseItemXpBoostResponse_reflection_;
}

void protobuf_AddDesc_POGOProtos_2fNetworking_2fResponses_2fUseItemXpBoostResponse_2eproto() GOOGLE_ATTRIBUTE_COLD;
void protobuf_AddDesc_POGOProtos_2fNetworking_2fResponses_2fUseItemXpBoostResponse_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::POGOProtos::Inventory::protobuf_AddDesc_POGOProtos_2fInventory_2fAppliedItems_2eproto();
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n<POGOProtos/Networking/Responses/UseIte"
    "mXpBoostResponse.proto\022\037POGOProtos.Netwo"
    "rking.Responses\032\'POGOProtos/Inventory/Ap"
    "pliedItems.proto\"\276\002\n\026UseItemXpBoostRespo"
    "nse\022N\n\006result\030\001 \001(\0162>.POGOProtos.Network"
    "ing.Responses.UseItemXpBoostResponse.Res"
    "ult\0229\n\rapplied_items\030\002 \001(\0132\".POGOProtos."
    "Inventory.AppliedItems\"\230\001\n\006Result\022\t\n\005UNS"
    "ET\020\000\022\013\n\007SUCCESS\020\001\022\033\n\027ERROR_INVALID_ITEM_"
    "TYPE\020\002\022!\n\035ERROR_XP_BOOST_ALREADY_ACTIVE\020"
    "\003\022\034\n\030ERROR_NO_ITEMS_REMAINING\020\004\022\030\n\024ERROR"
    "_LOCATION_UNSET\020\005b\006proto3", 465);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "POGOProtos/Networking/Responses/UseItemXpBoostResponse.proto", &protobuf_RegisterTypes);
  UseItemXpBoostResponse::default_instance_ = new UseItemXpBoostResponse();
  UseItemXpBoostResponse::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_POGOProtos_2fNetworking_2fResponses_2fUseItemXpBoostResponse_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_POGOProtos_2fNetworking_2fResponses_2fUseItemXpBoostResponse_2eproto {
  StaticDescriptorInitializer_POGOProtos_2fNetworking_2fResponses_2fUseItemXpBoostResponse_2eproto() {
    protobuf_AddDesc_POGOProtos_2fNetworking_2fResponses_2fUseItemXpBoostResponse_2eproto();
  }
} static_descriptor_initializer_POGOProtos_2fNetworking_2fResponses_2fUseItemXpBoostResponse_2eproto_;

// ===================================================================

const ::google::protobuf::EnumDescriptor* UseItemXpBoostResponse_Result_descriptor() {
  protobuf_AssignDescriptorsOnce();
  return UseItemXpBoostResponse_Result_descriptor_;
}
bool UseItemXpBoostResponse_Result_IsValid(int value) {
  switch(value) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
      return true;
    default:
      return false;
  }
}

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const UseItemXpBoostResponse_Result UseItemXpBoostResponse::UNSET;
const UseItemXpBoostResponse_Result UseItemXpBoostResponse::SUCCESS;
const UseItemXpBoostResponse_Result UseItemXpBoostResponse::ERROR_INVALID_ITEM_TYPE;
const UseItemXpBoostResponse_Result UseItemXpBoostResponse::ERROR_XP_BOOST_ALREADY_ACTIVE;
const UseItemXpBoostResponse_Result UseItemXpBoostResponse::ERROR_NO_ITEMS_REMAINING;
const UseItemXpBoostResponse_Result UseItemXpBoostResponse::ERROR_LOCATION_UNSET;
const UseItemXpBoostResponse_Result UseItemXpBoostResponse::Result_MIN;
const UseItemXpBoostResponse_Result UseItemXpBoostResponse::Result_MAX;
const int UseItemXpBoostResponse::Result_ARRAYSIZE;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int UseItemXpBoostResponse::kResultFieldNumber;
const int UseItemXpBoostResponse::kAppliedItemsFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

UseItemXpBoostResponse::UseItemXpBoostResponse()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:POGOProtos.Networking.Responses.UseItemXpBoostResponse)
}

void UseItemXpBoostResponse::InitAsDefaultInstance() {
  _is_default_instance_ = true;
  applied_items_ = const_cast< ::POGOProtos::Inventory::AppliedItems*>(&::POGOProtos::Inventory::AppliedItems::default_instance());
}

UseItemXpBoostResponse::UseItemXpBoostResponse(const UseItemXpBoostResponse& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:POGOProtos.Networking.Responses.UseItemXpBoostResponse)
}

void UseItemXpBoostResponse::SharedCtor() {
    _is_default_instance_ = false;
  _cached_size_ = 0;
  result_ = 0;
  applied_items_ = NULL;
}

UseItemXpBoostResponse::~UseItemXpBoostResponse() {
  // @@protoc_insertion_point(destructor:POGOProtos.Networking.Responses.UseItemXpBoostResponse)
  SharedDtor();
}

void UseItemXpBoostResponse::SharedDtor() {
  if (this != default_instance_) {
    delete applied_items_;
  }
}

void UseItemXpBoostResponse::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* UseItemXpBoostResponse::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return UseItemXpBoostResponse_descriptor_;
}

const UseItemXpBoostResponse& UseItemXpBoostResponse::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_POGOProtos_2fNetworking_2fResponses_2fUseItemXpBoostResponse_2eproto();
  return *default_instance_;
}

UseItemXpBoostResponse* UseItemXpBoostResponse::default_instance_ = NULL;

UseItemXpBoostResponse* UseItemXpBoostResponse::New(::google::protobuf::Arena* arena) const {
  UseItemXpBoostResponse* n = new UseItemXpBoostResponse;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void UseItemXpBoostResponse::Clear() {
// @@protoc_insertion_point(message_clear_start:POGOProtos.Networking.Responses.UseItemXpBoostResponse)
  result_ = 0;
  if (GetArenaNoVirtual() == NULL && applied_items_ != NULL) delete applied_items_;
  applied_items_ = NULL;
}

bool UseItemXpBoostResponse::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:POGOProtos.Networking.Responses.UseItemXpBoostResponse)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional .POGOProtos.Networking.Responses.UseItemXpBoostResponse.Result result = 1;
      case 1: {
        if (tag == 8) {
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          set_result(static_cast< ::POGOProtos::Networking::Responses::UseItemXpBoostResponse_Result >(value));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(18)) goto parse_applied_items;
        break;
      }

      // optional .POGOProtos.Inventory.AppliedItems applied_items = 2;
      case 2: {
        if (tag == 18) {
         parse_applied_items:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_applied_items()));
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
  // @@protoc_insertion_point(parse_success:POGOProtos.Networking.Responses.UseItemXpBoostResponse)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:POGOProtos.Networking.Responses.UseItemXpBoostResponse)
  return false;
#undef DO_
}

void UseItemXpBoostResponse::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:POGOProtos.Networking.Responses.UseItemXpBoostResponse)
  // optional .POGOProtos.Networking.Responses.UseItemXpBoostResponse.Result result = 1;
  if (this->result() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      1, this->result(), output);
  }

  // optional .POGOProtos.Inventory.AppliedItems applied_items = 2;
  if (this->has_applied_items()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      2, *this->applied_items_, output);
  }

  // @@protoc_insertion_point(serialize_end:POGOProtos.Networking.Responses.UseItemXpBoostResponse)
}

::google::protobuf::uint8* UseItemXpBoostResponse::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:POGOProtos.Networking.Responses.UseItemXpBoostResponse)
  // optional .POGOProtos.Networking.Responses.UseItemXpBoostResponse.Result result = 1;
  if (this->result() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteEnumToArray(
      1, this->result(), target);
  }

  // optional .POGOProtos.Inventory.AppliedItems applied_items = 2;
  if (this->has_applied_items()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        2, *this->applied_items_, false, target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:POGOProtos.Networking.Responses.UseItemXpBoostResponse)
  return target;
}

int UseItemXpBoostResponse::ByteSize() const {
// @@protoc_insertion_point(message_byte_size_start:POGOProtos.Networking.Responses.UseItemXpBoostResponse)
  int total_size = 0;

  // optional .POGOProtos.Networking.Responses.UseItemXpBoostResponse.Result result = 1;
  if (this->result() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::EnumSize(this->result());
  }

  // optional .POGOProtos.Inventory.AppliedItems applied_items = 2;
  if (this->has_applied_items()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        *this->applied_items_);
  }

  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void UseItemXpBoostResponse::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:POGOProtos.Networking.Responses.UseItemXpBoostResponse)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  const UseItemXpBoostResponse* source = 
      ::google::protobuf::internal::DynamicCastToGenerated<const UseItemXpBoostResponse>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:POGOProtos.Networking.Responses.UseItemXpBoostResponse)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:POGOProtos.Networking.Responses.UseItemXpBoostResponse)
    MergeFrom(*source);
  }
}

void UseItemXpBoostResponse::MergeFrom(const UseItemXpBoostResponse& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:POGOProtos.Networking.Responses.UseItemXpBoostResponse)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  if (from.result() != 0) {
    set_result(from.result());
  }
  if (from.has_applied_items()) {
    mutable_applied_items()->::POGOProtos::Inventory::AppliedItems::MergeFrom(from.applied_items());
  }
}

void UseItemXpBoostResponse::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:POGOProtos.Networking.Responses.UseItemXpBoostResponse)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void UseItemXpBoostResponse::CopyFrom(const UseItemXpBoostResponse& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:POGOProtos.Networking.Responses.UseItemXpBoostResponse)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool UseItemXpBoostResponse::IsInitialized() const {

  return true;
}

void UseItemXpBoostResponse::Swap(UseItemXpBoostResponse* other) {
  if (other == this) return;
  InternalSwap(other);
}
void UseItemXpBoostResponse::InternalSwap(UseItemXpBoostResponse* other) {
  std::swap(result_, other->result_);
  std::swap(applied_items_, other->applied_items_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata UseItemXpBoostResponse::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = UseItemXpBoostResponse_descriptor_;
  metadata.reflection = UseItemXpBoostResponse_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// UseItemXpBoostResponse

// optional .POGOProtos.Networking.Responses.UseItemXpBoostResponse.Result result = 1;
void UseItemXpBoostResponse::clear_result() {
  result_ = 0;
}
 ::POGOProtos::Networking::Responses::UseItemXpBoostResponse_Result UseItemXpBoostResponse::result() const {
  // @@protoc_insertion_point(field_get:POGOProtos.Networking.Responses.UseItemXpBoostResponse.result)
  return static_cast< ::POGOProtos::Networking::Responses::UseItemXpBoostResponse_Result >(result_);
}
 void UseItemXpBoostResponse::set_result(::POGOProtos::Networking::Responses::UseItemXpBoostResponse_Result value) {
  
  result_ = value;
  // @@protoc_insertion_point(field_set:POGOProtos.Networking.Responses.UseItemXpBoostResponse.result)
}

// optional .POGOProtos.Inventory.AppliedItems applied_items = 2;
bool UseItemXpBoostResponse::has_applied_items() const {
  return !_is_default_instance_ && applied_items_ != NULL;
}
void UseItemXpBoostResponse::clear_applied_items() {
  if (GetArenaNoVirtual() == NULL && applied_items_ != NULL) delete applied_items_;
  applied_items_ = NULL;
}
const ::POGOProtos::Inventory::AppliedItems& UseItemXpBoostResponse::applied_items() const {
  // @@protoc_insertion_point(field_get:POGOProtos.Networking.Responses.UseItemXpBoostResponse.applied_items)
  return applied_items_ != NULL ? *applied_items_ : *default_instance_->applied_items_;
}
::POGOProtos::Inventory::AppliedItems* UseItemXpBoostResponse::mutable_applied_items() {
  
  if (applied_items_ == NULL) {
    applied_items_ = new ::POGOProtos::Inventory::AppliedItems;
  }
  // @@protoc_insertion_point(field_mutable:POGOProtos.Networking.Responses.UseItemXpBoostResponse.applied_items)
  return applied_items_;
}
::POGOProtos::Inventory::AppliedItems* UseItemXpBoostResponse::release_applied_items() {
  // @@protoc_insertion_point(field_release:POGOProtos.Networking.Responses.UseItemXpBoostResponse.applied_items)
  
  ::POGOProtos::Inventory::AppliedItems* temp = applied_items_;
  applied_items_ = NULL;
  return temp;
}
void UseItemXpBoostResponse::set_allocated_applied_items(::POGOProtos::Inventory::AppliedItems* applied_items) {
  delete applied_items_;
  applied_items_ = applied_items;
  if (applied_items) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:POGOProtos.Networking.Responses.UseItemXpBoostResponse.applied_items)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace Responses
}  // namespace Networking
}  // namespace POGOProtos

// @@protoc_insertion_point(global_scope)