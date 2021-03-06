// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: POGOProtos/Networking/Responses/FortRecallPokemonResponse.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "POGOProtos/Networking/Responses/FortRecallPokemonResponse.pb.h"

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

const ::google::protobuf::Descriptor* FortRecallPokemonResponse_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  FortRecallPokemonResponse_reflection_ = NULL;
const ::google::protobuf::EnumDescriptor* FortRecallPokemonResponse_Result_descriptor_ = NULL;

}  // namespace


void protobuf_AssignDesc_POGOProtos_2fNetworking_2fResponses_2fFortRecallPokemonResponse_2eproto() GOOGLE_ATTRIBUTE_COLD;
void protobuf_AssignDesc_POGOProtos_2fNetworking_2fResponses_2fFortRecallPokemonResponse_2eproto() {
  protobuf_AddDesc_POGOProtos_2fNetworking_2fResponses_2fFortRecallPokemonResponse_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "POGOProtos/Networking/Responses/FortRecallPokemonResponse.proto");
  GOOGLE_CHECK(file != NULL);
  FortRecallPokemonResponse_descriptor_ = file->message_type(0);
  static const int FortRecallPokemonResponse_offsets_[2] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(FortRecallPokemonResponse, result_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(FortRecallPokemonResponse, fort_details_),
  };
  FortRecallPokemonResponse_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      FortRecallPokemonResponse_descriptor_,
      FortRecallPokemonResponse::default_instance_,
      FortRecallPokemonResponse_offsets_,
      -1,
      -1,
      -1,
      sizeof(FortRecallPokemonResponse),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(FortRecallPokemonResponse, _internal_metadata_),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(FortRecallPokemonResponse, _is_default_instance_));
  FortRecallPokemonResponse_Result_descriptor_ = FortRecallPokemonResponse_descriptor_->enum_type(0);
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_POGOProtos_2fNetworking_2fResponses_2fFortRecallPokemonResponse_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      FortRecallPokemonResponse_descriptor_, &FortRecallPokemonResponse::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_POGOProtos_2fNetworking_2fResponses_2fFortRecallPokemonResponse_2eproto() {
  delete FortRecallPokemonResponse::default_instance_;
  delete FortRecallPokemonResponse_reflection_;
}

void protobuf_AddDesc_POGOProtos_2fNetworking_2fResponses_2fFortRecallPokemonResponse_2eproto() GOOGLE_ATTRIBUTE_COLD;
void protobuf_AddDesc_POGOProtos_2fNetworking_2fResponses_2fFortRecallPokemonResponse_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::POGOProtos::Networking::Responses::protobuf_AddDesc_POGOProtos_2fNetworking_2fResponses_2fFortDetailsResponse_2eproto();
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\?POGOProtos/Networking/Responses/FortRe"
    "callPokemonResponse.proto\022\037POGOProtos.Ne"
    "tworking.Responses\0329POGOProtos/Networkin"
    "g/Responses/FortDetailsResponse.proto\"\260\002"
    "\n\031FortRecallPokemonResponse\022Q\n\006result\030\001 "
    "\001(\0162A.POGOProtos.Networking.Responses.Fo"
    "rtRecallPokemonResponse.Result\022J\n\014fort_d"
    "etails\030\002 \001(\01324.POGOProtos.Networking.Res"
    "ponses.FortDetailsResponse\"t\n\006Result\022\021\n\r"
    "NO_RESULT_SET\020\000\022\013\n\007SUCCESS\020\001\022\026\n\022ERROR_NO"
    "T_IN_RANGE\020\002\022\035\n\031ERROR_POKEMON_NOT_ON_FOR"
    "T\020\003\022\023\n\017ERROR_NO_PLAYER\020\004b\006proto3", 472);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "POGOProtos/Networking/Responses/FortRecallPokemonResponse.proto", &protobuf_RegisterTypes);
  FortRecallPokemonResponse::default_instance_ = new FortRecallPokemonResponse();
  FortRecallPokemonResponse::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_POGOProtos_2fNetworking_2fResponses_2fFortRecallPokemonResponse_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_POGOProtos_2fNetworking_2fResponses_2fFortRecallPokemonResponse_2eproto {
  StaticDescriptorInitializer_POGOProtos_2fNetworking_2fResponses_2fFortRecallPokemonResponse_2eproto() {
    protobuf_AddDesc_POGOProtos_2fNetworking_2fResponses_2fFortRecallPokemonResponse_2eproto();
  }
} static_descriptor_initializer_POGOProtos_2fNetworking_2fResponses_2fFortRecallPokemonResponse_2eproto_;

// ===================================================================

const ::google::protobuf::EnumDescriptor* FortRecallPokemonResponse_Result_descriptor() {
  protobuf_AssignDescriptorsOnce();
  return FortRecallPokemonResponse_Result_descriptor_;
}
bool FortRecallPokemonResponse_Result_IsValid(int value) {
  switch(value) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
      return true;
    default:
      return false;
  }
}

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const FortRecallPokemonResponse_Result FortRecallPokemonResponse::NO_RESULT_SET;
const FortRecallPokemonResponse_Result FortRecallPokemonResponse::SUCCESS;
const FortRecallPokemonResponse_Result FortRecallPokemonResponse::ERROR_NOT_IN_RANGE;
const FortRecallPokemonResponse_Result FortRecallPokemonResponse::ERROR_POKEMON_NOT_ON_FORT;
const FortRecallPokemonResponse_Result FortRecallPokemonResponse::ERROR_NO_PLAYER;
const FortRecallPokemonResponse_Result FortRecallPokemonResponse::Result_MIN;
const FortRecallPokemonResponse_Result FortRecallPokemonResponse::Result_MAX;
const int FortRecallPokemonResponse::Result_ARRAYSIZE;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int FortRecallPokemonResponse::kResultFieldNumber;
const int FortRecallPokemonResponse::kFortDetailsFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

FortRecallPokemonResponse::FortRecallPokemonResponse()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:POGOProtos.Networking.Responses.FortRecallPokemonResponse)
}

void FortRecallPokemonResponse::InitAsDefaultInstance() {
  _is_default_instance_ = true;
  fort_details_ = const_cast< ::POGOProtos::Networking::Responses::FortDetailsResponse*>(&::POGOProtos::Networking::Responses::FortDetailsResponse::default_instance());
}

FortRecallPokemonResponse::FortRecallPokemonResponse(const FortRecallPokemonResponse& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:POGOProtos.Networking.Responses.FortRecallPokemonResponse)
}

void FortRecallPokemonResponse::SharedCtor() {
    _is_default_instance_ = false;
  _cached_size_ = 0;
  result_ = 0;
  fort_details_ = NULL;
}

FortRecallPokemonResponse::~FortRecallPokemonResponse() {
  // @@protoc_insertion_point(destructor:POGOProtos.Networking.Responses.FortRecallPokemonResponse)
  SharedDtor();
}

void FortRecallPokemonResponse::SharedDtor() {
  if (this != default_instance_) {
    delete fort_details_;
  }
}

void FortRecallPokemonResponse::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* FortRecallPokemonResponse::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return FortRecallPokemonResponse_descriptor_;
}

const FortRecallPokemonResponse& FortRecallPokemonResponse::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_POGOProtos_2fNetworking_2fResponses_2fFortRecallPokemonResponse_2eproto();
  return *default_instance_;
}

FortRecallPokemonResponse* FortRecallPokemonResponse::default_instance_ = NULL;

FortRecallPokemonResponse* FortRecallPokemonResponse::New(::google::protobuf::Arena* arena) const {
  FortRecallPokemonResponse* n = new FortRecallPokemonResponse;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void FortRecallPokemonResponse::Clear() {
// @@protoc_insertion_point(message_clear_start:POGOProtos.Networking.Responses.FortRecallPokemonResponse)
  result_ = 0;
  if (GetArenaNoVirtual() == NULL && fort_details_ != NULL) delete fort_details_;
  fort_details_ = NULL;
}

bool FortRecallPokemonResponse::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:POGOProtos.Networking.Responses.FortRecallPokemonResponse)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional .POGOProtos.Networking.Responses.FortRecallPokemonResponse.Result result = 1;
      case 1: {
        if (tag == 8) {
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          set_result(static_cast< ::POGOProtos::Networking::Responses::FortRecallPokemonResponse_Result >(value));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(18)) goto parse_fort_details;
        break;
      }

      // optional .POGOProtos.Networking.Responses.FortDetailsResponse fort_details = 2;
      case 2: {
        if (tag == 18) {
         parse_fort_details:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_fort_details()));
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
  // @@protoc_insertion_point(parse_success:POGOProtos.Networking.Responses.FortRecallPokemonResponse)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:POGOProtos.Networking.Responses.FortRecallPokemonResponse)
  return false;
#undef DO_
}

void FortRecallPokemonResponse::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:POGOProtos.Networking.Responses.FortRecallPokemonResponse)
  // optional .POGOProtos.Networking.Responses.FortRecallPokemonResponse.Result result = 1;
  if (this->result() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      1, this->result(), output);
  }

  // optional .POGOProtos.Networking.Responses.FortDetailsResponse fort_details = 2;
  if (this->has_fort_details()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      2, *this->fort_details_, output);
  }

  // @@protoc_insertion_point(serialize_end:POGOProtos.Networking.Responses.FortRecallPokemonResponse)
}

::google::protobuf::uint8* FortRecallPokemonResponse::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:POGOProtos.Networking.Responses.FortRecallPokemonResponse)
  // optional .POGOProtos.Networking.Responses.FortRecallPokemonResponse.Result result = 1;
  if (this->result() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteEnumToArray(
      1, this->result(), target);
  }

  // optional .POGOProtos.Networking.Responses.FortDetailsResponse fort_details = 2;
  if (this->has_fort_details()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        2, *this->fort_details_, false, target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:POGOProtos.Networking.Responses.FortRecallPokemonResponse)
  return target;
}

int FortRecallPokemonResponse::ByteSize() const {
// @@protoc_insertion_point(message_byte_size_start:POGOProtos.Networking.Responses.FortRecallPokemonResponse)
  int total_size = 0;

  // optional .POGOProtos.Networking.Responses.FortRecallPokemonResponse.Result result = 1;
  if (this->result() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::EnumSize(this->result());
  }

  // optional .POGOProtos.Networking.Responses.FortDetailsResponse fort_details = 2;
  if (this->has_fort_details()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        *this->fort_details_);
  }

  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void FortRecallPokemonResponse::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:POGOProtos.Networking.Responses.FortRecallPokemonResponse)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  const FortRecallPokemonResponse* source = 
      ::google::protobuf::internal::DynamicCastToGenerated<const FortRecallPokemonResponse>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:POGOProtos.Networking.Responses.FortRecallPokemonResponse)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:POGOProtos.Networking.Responses.FortRecallPokemonResponse)
    MergeFrom(*source);
  }
}

void FortRecallPokemonResponse::MergeFrom(const FortRecallPokemonResponse& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:POGOProtos.Networking.Responses.FortRecallPokemonResponse)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  if (from.result() != 0) {
    set_result(from.result());
  }
  if (from.has_fort_details()) {
    mutable_fort_details()->::POGOProtos::Networking::Responses::FortDetailsResponse::MergeFrom(from.fort_details());
  }
}

void FortRecallPokemonResponse::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:POGOProtos.Networking.Responses.FortRecallPokemonResponse)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void FortRecallPokemonResponse::CopyFrom(const FortRecallPokemonResponse& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:POGOProtos.Networking.Responses.FortRecallPokemonResponse)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool FortRecallPokemonResponse::IsInitialized() const {

  return true;
}

void FortRecallPokemonResponse::Swap(FortRecallPokemonResponse* other) {
  if (other == this) return;
  InternalSwap(other);
}
void FortRecallPokemonResponse::InternalSwap(FortRecallPokemonResponse* other) {
  std::swap(result_, other->result_);
  std::swap(fort_details_, other->fort_details_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata FortRecallPokemonResponse::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = FortRecallPokemonResponse_descriptor_;
  metadata.reflection = FortRecallPokemonResponse_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// FortRecallPokemonResponse

// optional .POGOProtos.Networking.Responses.FortRecallPokemonResponse.Result result = 1;
void FortRecallPokemonResponse::clear_result() {
  result_ = 0;
}
 ::POGOProtos::Networking::Responses::FortRecallPokemonResponse_Result FortRecallPokemonResponse::result() const {
  // @@protoc_insertion_point(field_get:POGOProtos.Networking.Responses.FortRecallPokemonResponse.result)
  return static_cast< ::POGOProtos::Networking::Responses::FortRecallPokemonResponse_Result >(result_);
}
 void FortRecallPokemonResponse::set_result(::POGOProtos::Networking::Responses::FortRecallPokemonResponse_Result value) {
  
  result_ = value;
  // @@protoc_insertion_point(field_set:POGOProtos.Networking.Responses.FortRecallPokemonResponse.result)
}

// optional .POGOProtos.Networking.Responses.FortDetailsResponse fort_details = 2;
bool FortRecallPokemonResponse::has_fort_details() const {
  return !_is_default_instance_ && fort_details_ != NULL;
}
void FortRecallPokemonResponse::clear_fort_details() {
  if (GetArenaNoVirtual() == NULL && fort_details_ != NULL) delete fort_details_;
  fort_details_ = NULL;
}
const ::POGOProtos::Networking::Responses::FortDetailsResponse& FortRecallPokemonResponse::fort_details() const {
  // @@protoc_insertion_point(field_get:POGOProtos.Networking.Responses.FortRecallPokemonResponse.fort_details)
  return fort_details_ != NULL ? *fort_details_ : *default_instance_->fort_details_;
}
::POGOProtos::Networking::Responses::FortDetailsResponse* FortRecallPokemonResponse::mutable_fort_details() {
  
  if (fort_details_ == NULL) {
    fort_details_ = new ::POGOProtos::Networking::Responses::FortDetailsResponse;
  }
  // @@protoc_insertion_point(field_mutable:POGOProtos.Networking.Responses.FortRecallPokemonResponse.fort_details)
  return fort_details_;
}
::POGOProtos::Networking::Responses::FortDetailsResponse* FortRecallPokemonResponse::release_fort_details() {
  // @@protoc_insertion_point(field_release:POGOProtos.Networking.Responses.FortRecallPokemonResponse.fort_details)
  
  ::POGOProtos::Networking::Responses::FortDetailsResponse* temp = fort_details_;
  fort_details_ = NULL;
  return temp;
}
void FortRecallPokemonResponse::set_allocated_fort_details(::POGOProtos::Networking::Responses::FortDetailsResponse* fort_details) {
  delete fort_details_;
  fort_details_ = fort_details;
  if (fort_details) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:POGOProtos.Networking.Responses.FortRecallPokemonResponse.fort_details)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace Responses
}  // namespace Networking
}  // namespace POGOProtos

// @@protoc_insertion_point(global_scope)
