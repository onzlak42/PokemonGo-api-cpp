// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: POGOProtos/Networking/Responses/UseItemEggIncubatorResponse.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "POGOProtos/Networking/Responses/UseItemEggIncubatorResponse.pb.h"

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

const ::google::protobuf::Descriptor* UseItemEggIncubatorResponse_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  UseItemEggIncubatorResponse_reflection_ = NULL;
const ::google::protobuf::EnumDescriptor* UseItemEggIncubatorResponse_Result_descriptor_ = NULL;

}  // namespace


void protobuf_AssignDesc_POGOProtos_2fNetworking_2fResponses_2fUseItemEggIncubatorResponse_2eproto() GOOGLE_ATTRIBUTE_COLD;
void protobuf_AssignDesc_POGOProtos_2fNetworking_2fResponses_2fUseItemEggIncubatorResponse_2eproto() {
  protobuf_AddDesc_POGOProtos_2fNetworking_2fResponses_2fUseItemEggIncubatorResponse_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "POGOProtos/Networking/Responses/UseItemEggIncubatorResponse.proto");
  GOOGLE_CHECK(file != NULL);
  UseItemEggIncubatorResponse_descriptor_ = file->message_type(0);
  static const int UseItemEggIncubatorResponse_offsets_[2] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(UseItemEggIncubatorResponse, result_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(UseItemEggIncubatorResponse, egg_incubator_),
  };
  UseItemEggIncubatorResponse_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      UseItemEggIncubatorResponse_descriptor_,
      UseItemEggIncubatorResponse::default_instance_,
      UseItemEggIncubatorResponse_offsets_,
      -1,
      -1,
      -1,
      sizeof(UseItemEggIncubatorResponse),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(UseItemEggIncubatorResponse, _internal_metadata_),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(UseItemEggIncubatorResponse, _is_default_instance_));
  UseItemEggIncubatorResponse_Result_descriptor_ = UseItemEggIncubatorResponse_descriptor_->enum_type(0);
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_POGOProtos_2fNetworking_2fResponses_2fUseItemEggIncubatorResponse_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      UseItemEggIncubatorResponse_descriptor_, &UseItemEggIncubatorResponse::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_POGOProtos_2fNetworking_2fResponses_2fUseItemEggIncubatorResponse_2eproto() {
  delete UseItemEggIncubatorResponse::default_instance_;
  delete UseItemEggIncubatorResponse_reflection_;
}

void protobuf_AddDesc_POGOProtos_2fNetworking_2fResponses_2fUseItemEggIncubatorResponse_2eproto() GOOGLE_ATTRIBUTE_COLD;
void protobuf_AddDesc_POGOProtos_2fNetworking_2fResponses_2fUseItemEggIncubatorResponse_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::POGOProtos::Inventory::protobuf_AddDesc_POGOProtos_2fInventory_2fEggIncubator_2eproto();
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\nAPOGOProtos/Networking/Responses/UseIte"
    "mEggIncubatorResponse.proto\022\037POGOProtos."
    "Networking.Responses\032\'POGOProtos/Invento"
    "ry/EggIncubator.proto\"\237\003\n\033UseItemEggIncu"
    "batorResponse\022S\n\006result\030\001 \001(\0162C.POGOProt"
    "os.Networking.Responses.UseItemEggIncuba"
    "torResponse.Result\0229\n\regg_incubator\030\002 \001("
    "\0132\".POGOProtos.Inventory.EggIncubator\"\357\001"
    "\n\006Result\022\t\n\005UNSET\020\000\022\013\n\007SUCCESS\020\001\022\035\n\031ERRO"
    "R_INCUBATOR_NOT_FOUND\020\002\022\037\n\033ERROR_POKEMON"
    "_EGG_NOT_FOUND\020\003\022\034\n\030ERROR_POKEMON_ID_NOT"
    "_EGG\020\004\022\"\n\036ERROR_INCUBATOR_ALREADY_IN_USE"
    "\020\005\022$\n ERROR_POKEMON_ALREADY_INCUBATING\020\006"
    "\022%\n!ERROR_INCUBATOR_NO_USES_REMAINING\020\007b"
    "\006proto3", 567);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "POGOProtos/Networking/Responses/UseItemEggIncubatorResponse.proto", &protobuf_RegisterTypes);
  UseItemEggIncubatorResponse::default_instance_ = new UseItemEggIncubatorResponse();
  UseItemEggIncubatorResponse::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_POGOProtos_2fNetworking_2fResponses_2fUseItemEggIncubatorResponse_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_POGOProtos_2fNetworking_2fResponses_2fUseItemEggIncubatorResponse_2eproto {
  StaticDescriptorInitializer_POGOProtos_2fNetworking_2fResponses_2fUseItemEggIncubatorResponse_2eproto() {
    protobuf_AddDesc_POGOProtos_2fNetworking_2fResponses_2fUseItemEggIncubatorResponse_2eproto();
  }
} static_descriptor_initializer_POGOProtos_2fNetworking_2fResponses_2fUseItemEggIncubatorResponse_2eproto_;

// ===================================================================

const ::google::protobuf::EnumDescriptor* UseItemEggIncubatorResponse_Result_descriptor() {
  protobuf_AssignDescriptorsOnce();
  return UseItemEggIncubatorResponse_Result_descriptor_;
}
bool UseItemEggIncubatorResponse_Result_IsValid(int value) {
  switch(value) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
      return true;
    default:
      return false;
  }
}

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const UseItemEggIncubatorResponse_Result UseItemEggIncubatorResponse::UNSET;
const UseItemEggIncubatorResponse_Result UseItemEggIncubatorResponse::SUCCESS;
const UseItemEggIncubatorResponse_Result UseItemEggIncubatorResponse::ERROR_INCUBATOR_NOT_FOUND;
const UseItemEggIncubatorResponse_Result UseItemEggIncubatorResponse::ERROR_POKEMON_EGG_NOT_FOUND;
const UseItemEggIncubatorResponse_Result UseItemEggIncubatorResponse::ERROR_POKEMON_ID_NOT_EGG;
const UseItemEggIncubatorResponse_Result UseItemEggIncubatorResponse::ERROR_INCUBATOR_ALREADY_IN_USE;
const UseItemEggIncubatorResponse_Result UseItemEggIncubatorResponse::ERROR_POKEMON_ALREADY_INCUBATING;
const UseItemEggIncubatorResponse_Result UseItemEggIncubatorResponse::ERROR_INCUBATOR_NO_USES_REMAINING;
const UseItemEggIncubatorResponse_Result UseItemEggIncubatorResponse::Result_MIN;
const UseItemEggIncubatorResponse_Result UseItemEggIncubatorResponse::Result_MAX;
const int UseItemEggIncubatorResponse::Result_ARRAYSIZE;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int UseItemEggIncubatorResponse::kResultFieldNumber;
const int UseItemEggIncubatorResponse::kEggIncubatorFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

UseItemEggIncubatorResponse::UseItemEggIncubatorResponse()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:POGOProtos.Networking.Responses.UseItemEggIncubatorResponse)
}

void UseItemEggIncubatorResponse::InitAsDefaultInstance() {
  _is_default_instance_ = true;
  egg_incubator_ = const_cast< ::POGOProtos::Inventory::EggIncubator*>(&::POGOProtos::Inventory::EggIncubator::default_instance());
}

UseItemEggIncubatorResponse::UseItemEggIncubatorResponse(const UseItemEggIncubatorResponse& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:POGOProtos.Networking.Responses.UseItemEggIncubatorResponse)
}

void UseItemEggIncubatorResponse::SharedCtor() {
    _is_default_instance_ = false;
  _cached_size_ = 0;
  result_ = 0;
  egg_incubator_ = NULL;
}

UseItemEggIncubatorResponse::~UseItemEggIncubatorResponse() {
  // @@protoc_insertion_point(destructor:POGOProtos.Networking.Responses.UseItemEggIncubatorResponse)
  SharedDtor();
}

void UseItemEggIncubatorResponse::SharedDtor() {
  if (this != default_instance_) {
    delete egg_incubator_;
  }
}

void UseItemEggIncubatorResponse::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* UseItemEggIncubatorResponse::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return UseItemEggIncubatorResponse_descriptor_;
}

const UseItemEggIncubatorResponse& UseItemEggIncubatorResponse::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_POGOProtos_2fNetworking_2fResponses_2fUseItemEggIncubatorResponse_2eproto();
  return *default_instance_;
}

UseItemEggIncubatorResponse* UseItemEggIncubatorResponse::default_instance_ = NULL;

UseItemEggIncubatorResponse* UseItemEggIncubatorResponse::New(::google::protobuf::Arena* arena) const {
  UseItemEggIncubatorResponse* n = new UseItemEggIncubatorResponse;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void UseItemEggIncubatorResponse::Clear() {
// @@protoc_insertion_point(message_clear_start:POGOProtos.Networking.Responses.UseItemEggIncubatorResponse)
  result_ = 0;
  if (GetArenaNoVirtual() == NULL && egg_incubator_ != NULL) delete egg_incubator_;
  egg_incubator_ = NULL;
}

bool UseItemEggIncubatorResponse::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:POGOProtos.Networking.Responses.UseItemEggIncubatorResponse)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional .POGOProtos.Networking.Responses.UseItemEggIncubatorResponse.Result result = 1;
      case 1: {
        if (tag == 8) {
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          set_result(static_cast< ::POGOProtos::Networking::Responses::UseItemEggIncubatorResponse_Result >(value));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(18)) goto parse_egg_incubator;
        break;
      }

      // optional .POGOProtos.Inventory.EggIncubator egg_incubator = 2;
      case 2: {
        if (tag == 18) {
         parse_egg_incubator:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_egg_incubator()));
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
  // @@protoc_insertion_point(parse_success:POGOProtos.Networking.Responses.UseItemEggIncubatorResponse)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:POGOProtos.Networking.Responses.UseItemEggIncubatorResponse)
  return false;
#undef DO_
}

void UseItemEggIncubatorResponse::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:POGOProtos.Networking.Responses.UseItemEggIncubatorResponse)
  // optional .POGOProtos.Networking.Responses.UseItemEggIncubatorResponse.Result result = 1;
  if (this->result() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      1, this->result(), output);
  }

  // optional .POGOProtos.Inventory.EggIncubator egg_incubator = 2;
  if (this->has_egg_incubator()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      2, *this->egg_incubator_, output);
  }

  // @@protoc_insertion_point(serialize_end:POGOProtos.Networking.Responses.UseItemEggIncubatorResponse)
}

::google::protobuf::uint8* UseItemEggIncubatorResponse::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:POGOProtos.Networking.Responses.UseItemEggIncubatorResponse)
  // optional .POGOProtos.Networking.Responses.UseItemEggIncubatorResponse.Result result = 1;
  if (this->result() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteEnumToArray(
      1, this->result(), target);
  }

  // optional .POGOProtos.Inventory.EggIncubator egg_incubator = 2;
  if (this->has_egg_incubator()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        2, *this->egg_incubator_, false, target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:POGOProtos.Networking.Responses.UseItemEggIncubatorResponse)
  return target;
}

int UseItemEggIncubatorResponse::ByteSize() const {
// @@protoc_insertion_point(message_byte_size_start:POGOProtos.Networking.Responses.UseItemEggIncubatorResponse)
  int total_size = 0;

  // optional .POGOProtos.Networking.Responses.UseItemEggIncubatorResponse.Result result = 1;
  if (this->result() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::EnumSize(this->result());
  }

  // optional .POGOProtos.Inventory.EggIncubator egg_incubator = 2;
  if (this->has_egg_incubator()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        *this->egg_incubator_);
  }

  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void UseItemEggIncubatorResponse::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:POGOProtos.Networking.Responses.UseItemEggIncubatorResponse)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  const UseItemEggIncubatorResponse* source = 
      ::google::protobuf::internal::DynamicCastToGenerated<const UseItemEggIncubatorResponse>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:POGOProtos.Networking.Responses.UseItemEggIncubatorResponse)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:POGOProtos.Networking.Responses.UseItemEggIncubatorResponse)
    MergeFrom(*source);
  }
}

void UseItemEggIncubatorResponse::MergeFrom(const UseItemEggIncubatorResponse& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:POGOProtos.Networking.Responses.UseItemEggIncubatorResponse)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  if (from.result() != 0) {
    set_result(from.result());
  }
  if (from.has_egg_incubator()) {
    mutable_egg_incubator()->::POGOProtos::Inventory::EggIncubator::MergeFrom(from.egg_incubator());
  }
}

void UseItemEggIncubatorResponse::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:POGOProtos.Networking.Responses.UseItemEggIncubatorResponse)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void UseItemEggIncubatorResponse::CopyFrom(const UseItemEggIncubatorResponse& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:POGOProtos.Networking.Responses.UseItemEggIncubatorResponse)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool UseItemEggIncubatorResponse::IsInitialized() const {

  return true;
}

void UseItemEggIncubatorResponse::Swap(UseItemEggIncubatorResponse* other) {
  if (other == this) return;
  InternalSwap(other);
}
void UseItemEggIncubatorResponse::InternalSwap(UseItemEggIncubatorResponse* other) {
  std::swap(result_, other->result_);
  std::swap(egg_incubator_, other->egg_incubator_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata UseItemEggIncubatorResponse::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = UseItemEggIncubatorResponse_descriptor_;
  metadata.reflection = UseItemEggIncubatorResponse_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// UseItemEggIncubatorResponse

// optional .POGOProtos.Networking.Responses.UseItemEggIncubatorResponse.Result result = 1;
void UseItemEggIncubatorResponse::clear_result() {
  result_ = 0;
}
 ::POGOProtos::Networking::Responses::UseItemEggIncubatorResponse_Result UseItemEggIncubatorResponse::result() const {
  // @@protoc_insertion_point(field_get:POGOProtos.Networking.Responses.UseItemEggIncubatorResponse.result)
  return static_cast< ::POGOProtos::Networking::Responses::UseItemEggIncubatorResponse_Result >(result_);
}
 void UseItemEggIncubatorResponse::set_result(::POGOProtos::Networking::Responses::UseItemEggIncubatorResponse_Result value) {
  
  result_ = value;
  // @@protoc_insertion_point(field_set:POGOProtos.Networking.Responses.UseItemEggIncubatorResponse.result)
}

// optional .POGOProtos.Inventory.EggIncubator egg_incubator = 2;
bool UseItemEggIncubatorResponse::has_egg_incubator() const {
  return !_is_default_instance_ && egg_incubator_ != NULL;
}
void UseItemEggIncubatorResponse::clear_egg_incubator() {
  if (GetArenaNoVirtual() == NULL && egg_incubator_ != NULL) delete egg_incubator_;
  egg_incubator_ = NULL;
}
const ::POGOProtos::Inventory::EggIncubator& UseItemEggIncubatorResponse::egg_incubator() const {
  // @@protoc_insertion_point(field_get:POGOProtos.Networking.Responses.UseItemEggIncubatorResponse.egg_incubator)
  return egg_incubator_ != NULL ? *egg_incubator_ : *default_instance_->egg_incubator_;
}
::POGOProtos::Inventory::EggIncubator* UseItemEggIncubatorResponse::mutable_egg_incubator() {
  
  if (egg_incubator_ == NULL) {
    egg_incubator_ = new ::POGOProtos::Inventory::EggIncubator;
  }
  // @@protoc_insertion_point(field_mutable:POGOProtos.Networking.Responses.UseItemEggIncubatorResponse.egg_incubator)
  return egg_incubator_;
}
::POGOProtos::Inventory::EggIncubator* UseItemEggIncubatorResponse::release_egg_incubator() {
  // @@protoc_insertion_point(field_release:POGOProtos.Networking.Responses.UseItemEggIncubatorResponse.egg_incubator)
  
  ::POGOProtos::Inventory::EggIncubator* temp = egg_incubator_;
  egg_incubator_ = NULL;
  return temp;
}
void UseItemEggIncubatorResponse::set_allocated_egg_incubator(::POGOProtos::Inventory::EggIncubator* egg_incubator) {
  delete egg_incubator_;
  egg_incubator_ = egg_incubator;
  if (egg_incubator) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:POGOProtos.Networking.Responses.UseItemEggIncubatorResponse.egg_incubator)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace Responses
}  // namespace Networking
}  // namespace POGOProtos

// @@protoc_insertion_point(global_scope)