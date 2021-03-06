// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: POGOProtos/Networking/Responses/AttackGymResponse.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "POGOProtos/Networking/Responses/AttackGymResponse.pb.h"

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

const ::google::protobuf::Descriptor* AttackGymResponse_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  AttackGymResponse_reflection_ = NULL;
const ::google::protobuf::EnumDescriptor* AttackGymResponse_Result_descriptor_ = NULL;

}  // namespace


void protobuf_AssignDesc_POGOProtos_2fNetworking_2fResponses_2fAttackGymResponse_2eproto() GOOGLE_ATTRIBUTE_COLD;
void protobuf_AssignDesc_POGOProtos_2fNetworking_2fResponses_2fAttackGymResponse_2eproto() {
  protobuf_AddDesc_POGOProtos_2fNetworking_2fResponses_2fAttackGymResponse_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "POGOProtos/Networking/Responses/AttackGymResponse.proto");
  GOOGLE_CHECK(file != NULL);
  AttackGymResponse_descriptor_ = file->message_type(0);
  static const int AttackGymResponse_offsets_[5] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(AttackGymResponse, result_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(AttackGymResponse, battle_log_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(AttackGymResponse, battle_id_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(AttackGymResponse, active_defender_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(AttackGymResponse, active_attacker_),
  };
  AttackGymResponse_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      AttackGymResponse_descriptor_,
      AttackGymResponse::default_instance_,
      AttackGymResponse_offsets_,
      -1,
      -1,
      -1,
      sizeof(AttackGymResponse),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(AttackGymResponse, _internal_metadata_),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(AttackGymResponse, _is_default_instance_));
  AttackGymResponse_Result_descriptor_ = AttackGymResponse_descriptor_->enum_type(0);
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_POGOProtos_2fNetworking_2fResponses_2fAttackGymResponse_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      AttackGymResponse_descriptor_, &AttackGymResponse::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_POGOProtos_2fNetworking_2fResponses_2fAttackGymResponse_2eproto() {
  delete AttackGymResponse::default_instance_;
  delete AttackGymResponse_reflection_;
}

void protobuf_AddDesc_POGOProtos_2fNetworking_2fResponses_2fAttackGymResponse_2eproto() GOOGLE_ATTRIBUTE_COLD;
void protobuf_AddDesc_POGOProtos_2fNetworking_2fResponses_2fAttackGymResponse_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::POGOProtos::Data::Battle::protobuf_AddDesc_POGOProtos_2fData_2fBattle_2fBattleLog_2eproto();
  ::POGOProtos::Data::Battle::protobuf_AddDesc_POGOProtos_2fData_2fBattle_2fBattlePokemonInfo_2eproto();
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n7POGOProtos/Networking/Responses/Attack"
    "GymResponse.proto\022\037POGOProtos.Networking"
    ".Responses\032&POGOProtos/Data/Battle/Battl"
    "eLog.proto\032.POGOProtos/Data/Battle/Battl"
    "ePokemonInfo.proto\"\214\003\n\021AttackGymResponse"
    "\022I\n\006result\030\001 \001(\01629.POGOProtos.Networking"
    ".Responses.AttackGymResponse.Result\0225\n\nb"
    "attle_log\030\002 \001(\0132!.POGOProtos.Data.Battle"
    ".BattleLog\022\021\n\tbattle_id\030\003 \001(\t\022B\n\017active_"
    "defender\030\004 \001(\0132).POGOProtos.Data.Battle."
    "BattlePokemonInfo\022B\n\017active_attacker\030\005 \001"
    "(\0132).POGOProtos.Data.Battle.BattlePokemo"
    "nInfo\"Z\n\006Result\022\t\n\005UNSET\020\000\022\013\n\007SUCCESS\020\001\022"
    " \n\034ERROR_INVALID_ATTACK_ACTIONS\020\002\022\026\n\022ERR"
    "OR_NOT_IN_RANGE\020\003b\006proto3", 585);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "POGOProtos/Networking/Responses/AttackGymResponse.proto", &protobuf_RegisterTypes);
  AttackGymResponse::default_instance_ = new AttackGymResponse();
  AttackGymResponse::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_POGOProtos_2fNetworking_2fResponses_2fAttackGymResponse_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_POGOProtos_2fNetworking_2fResponses_2fAttackGymResponse_2eproto {
  StaticDescriptorInitializer_POGOProtos_2fNetworking_2fResponses_2fAttackGymResponse_2eproto() {
    protobuf_AddDesc_POGOProtos_2fNetworking_2fResponses_2fAttackGymResponse_2eproto();
  }
} static_descriptor_initializer_POGOProtos_2fNetworking_2fResponses_2fAttackGymResponse_2eproto_;

// ===================================================================

const ::google::protobuf::EnumDescriptor* AttackGymResponse_Result_descriptor() {
  protobuf_AssignDescriptorsOnce();
  return AttackGymResponse_Result_descriptor_;
}
bool AttackGymResponse_Result_IsValid(int value) {
  switch(value) {
    case 0:
    case 1:
    case 2:
    case 3:
      return true;
    default:
      return false;
  }
}

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const AttackGymResponse_Result AttackGymResponse::UNSET;
const AttackGymResponse_Result AttackGymResponse::SUCCESS;
const AttackGymResponse_Result AttackGymResponse::ERROR_INVALID_ATTACK_ACTIONS;
const AttackGymResponse_Result AttackGymResponse::ERROR_NOT_IN_RANGE;
const AttackGymResponse_Result AttackGymResponse::Result_MIN;
const AttackGymResponse_Result AttackGymResponse::Result_MAX;
const int AttackGymResponse::Result_ARRAYSIZE;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int AttackGymResponse::kResultFieldNumber;
const int AttackGymResponse::kBattleLogFieldNumber;
const int AttackGymResponse::kBattleIdFieldNumber;
const int AttackGymResponse::kActiveDefenderFieldNumber;
const int AttackGymResponse::kActiveAttackerFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

AttackGymResponse::AttackGymResponse()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:POGOProtos.Networking.Responses.AttackGymResponse)
}

void AttackGymResponse::InitAsDefaultInstance() {
  _is_default_instance_ = true;
  battle_log_ = const_cast< ::POGOProtos::Data::Battle::BattleLog*>(&::POGOProtos::Data::Battle::BattleLog::default_instance());
  active_defender_ = const_cast< ::POGOProtos::Data::Battle::BattlePokemonInfo*>(&::POGOProtos::Data::Battle::BattlePokemonInfo::default_instance());
  active_attacker_ = const_cast< ::POGOProtos::Data::Battle::BattlePokemonInfo*>(&::POGOProtos::Data::Battle::BattlePokemonInfo::default_instance());
}

AttackGymResponse::AttackGymResponse(const AttackGymResponse& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:POGOProtos.Networking.Responses.AttackGymResponse)
}

void AttackGymResponse::SharedCtor() {
    _is_default_instance_ = false;
  ::google::protobuf::internal::GetEmptyString();
  _cached_size_ = 0;
  result_ = 0;
  battle_log_ = NULL;
  battle_id_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  active_defender_ = NULL;
  active_attacker_ = NULL;
}

AttackGymResponse::~AttackGymResponse() {
  // @@protoc_insertion_point(destructor:POGOProtos.Networking.Responses.AttackGymResponse)
  SharedDtor();
}

void AttackGymResponse::SharedDtor() {
  battle_id_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (this != default_instance_) {
    delete battle_log_;
    delete active_defender_;
    delete active_attacker_;
  }
}

void AttackGymResponse::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* AttackGymResponse::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return AttackGymResponse_descriptor_;
}

const AttackGymResponse& AttackGymResponse::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_POGOProtos_2fNetworking_2fResponses_2fAttackGymResponse_2eproto();
  return *default_instance_;
}

AttackGymResponse* AttackGymResponse::default_instance_ = NULL;

AttackGymResponse* AttackGymResponse::New(::google::protobuf::Arena* arena) const {
  AttackGymResponse* n = new AttackGymResponse;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void AttackGymResponse::Clear() {
// @@protoc_insertion_point(message_clear_start:POGOProtos.Networking.Responses.AttackGymResponse)
  result_ = 0;
  if (GetArenaNoVirtual() == NULL && battle_log_ != NULL) delete battle_log_;
  battle_log_ = NULL;
  battle_id_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (GetArenaNoVirtual() == NULL && active_defender_ != NULL) delete active_defender_;
  active_defender_ = NULL;
  if (GetArenaNoVirtual() == NULL && active_attacker_ != NULL) delete active_attacker_;
  active_attacker_ = NULL;
}

bool AttackGymResponse::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:POGOProtos.Networking.Responses.AttackGymResponse)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional .POGOProtos.Networking.Responses.AttackGymResponse.Result result = 1;
      case 1: {
        if (tag == 8) {
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          set_result(static_cast< ::POGOProtos::Networking::Responses::AttackGymResponse_Result >(value));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(18)) goto parse_battle_log;
        break;
      }

      // optional .POGOProtos.Data.Battle.BattleLog battle_log = 2;
      case 2: {
        if (tag == 18) {
         parse_battle_log:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_battle_log()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(26)) goto parse_battle_id;
        break;
      }

      // optional string battle_id = 3;
      case 3: {
        if (tag == 26) {
         parse_battle_id:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_battle_id()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->battle_id().data(), this->battle_id().length(),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "POGOProtos.Networking.Responses.AttackGymResponse.battle_id"));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(34)) goto parse_active_defender;
        break;
      }

      // optional .POGOProtos.Data.Battle.BattlePokemonInfo active_defender = 4;
      case 4: {
        if (tag == 34) {
         parse_active_defender:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_active_defender()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(42)) goto parse_active_attacker;
        break;
      }

      // optional .POGOProtos.Data.Battle.BattlePokemonInfo active_attacker = 5;
      case 5: {
        if (tag == 42) {
         parse_active_attacker:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_active_attacker()));
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
  // @@protoc_insertion_point(parse_success:POGOProtos.Networking.Responses.AttackGymResponse)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:POGOProtos.Networking.Responses.AttackGymResponse)
  return false;
#undef DO_
}

void AttackGymResponse::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:POGOProtos.Networking.Responses.AttackGymResponse)
  // optional .POGOProtos.Networking.Responses.AttackGymResponse.Result result = 1;
  if (this->result() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      1, this->result(), output);
  }

  // optional .POGOProtos.Data.Battle.BattleLog battle_log = 2;
  if (this->has_battle_log()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      2, *this->battle_log_, output);
  }

  // optional string battle_id = 3;
  if (this->battle_id().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->battle_id().data(), this->battle_id().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "POGOProtos.Networking.Responses.AttackGymResponse.battle_id");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      3, this->battle_id(), output);
  }

  // optional .POGOProtos.Data.Battle.BattlePokemonInfo active_defender = 4;
  if (this->has_active_defender()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      4, *this->active_defender_, output);
  }

  // optional .POGOProtos.Data.Battle.BattlePokemonInfo active_attacker = 5;
  if (this->has_active_attacker()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      5, *this->active_attacker_, output);
  }

  // @@protoc_insertion_point(serialize_end:POGOProtos.Networking.Responses.AttackGymResponse)
}

::google::protobuf::uint8* AttackGymResponse::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:POGOProtos.Networking.Responses.AttackGymResponse)
  // optional .POGOProtos.Networking.Responses.AttackGymResponse.Result result = 1;
  if (this->result() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteEnumToArray(
      1, this->result(), target);
  }

  // optional .POGOProtos.Data.Battle.BattleLog battle_log = 2;
  if (this->has_battle_log()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        2, *this->battle_log_, false, target);
  }

  // optional string battle_id = 3;
  if (this->battle_id().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->battle_id().data(), this->battle_id().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "POGOProtos.Networking.Responses.AttackGymResponse.battle_id");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        3, this->battle_id(), target);
  }

  // optional .POGOProtos.Data.Battle.BattlePokemonInfo active_defender = 4;
  if (this->has_active_defender()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        4, *this->active_defender_, false, target);
  }

  // optional .POGOProtos.Data.Battle.BattlePokemonInfo active_attacker = 5;
  if (this->has_active_attacker()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        5, *this->active_attacker_, false, target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:POGOProtos.Networking.Responses.AttackGymResponse)
  return target;
}

int AttackGymResponse::ByteSize() const {
// @@protoc_insertion_point(message_byte_size_start:POGOProtos.Networking.Responses.AttackGymResponse)
  int total_size = 0;

  // optional .POGOProtos.Networking.Responses.AttackGymResponse.Result result = 1;
  if (this->result() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::EnumSize(this->result());
  }

  // optional .POGOProtos.Data.Battle.BattleLog battle_log = 2;
  if (this->has_battle_log()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        *this->battle_log_);
  }

  // optional string battle_id = 3;
  if (this->battle_id().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->battle_id());
  }

  // optional .POGOProtos.Data.Battle.BattlePokemonInfo active_defender = 4;
  if (this->has_active_defender()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        *this->active_defender_);
  }

  // optional .POGOProtos.Data.Battle.BattlePokemonInfo active_attacker = 5;
  if (this->has_active_attacker()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        *this->active_attacker_);
  }

  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void AttackGymResponse::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:POGOProtos.Networking.Responses.AttackGymResponse)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  const AttackGymResponse* source = 
      ::google::protobuf::internal::DynamicCastToGenerated<const AttackGymResponse>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:POGOProtos.Networking.Responses.AttackGymResponse)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:POGOProtos.Networking.Responses.AttackGymResponse)
    MergeFrom(*source);
  }
}

void AttackGymResponse::MergeFrom(const AttackGymResponse& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:POGOProtos.Networking.Responses.AttackGymResponse)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  if (from.result() != 0) {
    set_result(from.result());
  }
  if (from.has_battle_log()) {
    mutable_battle_log()->::POGOProtos::Data::Battle::BattleLog::MergeFrom(from.battle_log());
  }
  if (from.battle_id().size() > 0) {

    battle_id_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.battle_id_);
  }
  if (from.has_active_defender()) {
    mutable_active_defender()->::POGOProtos::Data::Battle::BattlePokemonInfo::MergeFrom(from.active_defender());
  }
  if (from.has_active_attacker()) {
    mutable_active_attacker()->::POGOProtos::Data::Battle::BattlePokemonInfo::MergeFrom(from.active_attacker());
  }
}

void AttackGymResponse::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:POGOProtos.Networking.Responses.AttackGymResponse)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void AttackGymResponse::CopyFrom(const AttackGymResponse& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:POGOProtos.Networking.Responses.AttackGymResponse)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool AttackGymResponse::IsInitialized() const {

  return true;
}

void AttackGymResponse::Swap(AttackGymResponse* other) {
  if (other == this) return;
  InternalSwap(other);
}
void AttackGymResponse::InternalSwap(AttackGymResponse* other) {
  std::swap(result_, other->result_);
  std::swap(battle_log_, other->battle_log_);
  battle_id_.Swap(&other->battle_id_);
  std::swap(active_defender_, other->active_defender_);
  std::swap(active_attacker_, other->active_attacker_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata AttackGymResponse::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = AttackGymResponse_descriptor_;
  metadata.reflection = AttackGymResponse_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// AttackGymResponse

// optional .POGOProtos.Networking.Responses.AttackGymResponse.Result result = 1;
void AttackGymResponse::clear_result() {
  result_ = 0;
}
 ::POGOProtos::Networking::Responses::AttackGymResponse_Result AttackGymResponse::result() const {
  // @@protoc_insertion_point(field_get:POGOProtos.Networking.Responses.AttackGymResponse.result)
  return static_cast< ::POGOProtos::Networking::Responses::AttackGymResponse_Result >(result_);
}
 void AttackGymResponse::set_result(::POGOProtos::Networking::Responses::AttackGymResponse_Result value) {
  
  result_ = value;
  // @@protoc_insertion_point(field_set:POGOProtos.Networking.Responses.AttackGymResponse.result)
}

// optional .POGOProtos.Data.Battle.BattleLog battle_log = 2;
bool AttackGymResponse::has_battle_log() const {
  return !_is_default_instance_ && battle_log_ != NULL;
}
void AttackGymResponse::clear_battle_log() {
  if (GetArenaNoVirtual() == NULL && battle_log_ != NULL) delete battle_log_;
  battle_log_ = NULL;
}
const ::POGOProtos::Data::Battle::BattleLog& AttackGymResponse::battle_log() const {
  // @@protoc_insertion_point(field_get:POGOProtos.Networking.Responses.AttackGymResponse.battle_log)
  return battle_log_ != NULL ? *battle_log_ : *default_instance_->battle_log_;
}
::POGOProtos::Data::Battle::BattleLog* AttackGymResponse::mutable_battle_log() {
  
  if (battle_log_ == NULL) {
    battle_log_ = new ::POGOProtos::Data::Battle::BattleLog;
  }
  // @@protoc_insertion_point(field_mutable:POGOProtos.Networking.Responses.AttackGymResponse.battle_log)
  return battle_log_;
}
::POGOProtos::Data::Battle::BattleLog* AttackGymResponse::release_battle_log() {
  // @@protoc_insertion_point(field_release:POGOProtos.Networking.Responses.AttackGymResponse.battle_log)
  
  ::POGOProtos::Data::Battle::BattleLog* temp = battle_log_;
  battle_log_ = NULL;
  return temp;
}
void AttackGymResponse::set_allocated_battle_log(::POGOProtos::Data::Battle::BattleLog* battle_log) {
  delete battle_log_;
  battle_log_ = battle_log;
  if (battle_log) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:POGOProtos.Networking.Responses.AttackGymResponse.battle_log)
}

// optional string battle_id = 3;
void AttackGymResponse::clear_battle_id() {
  battle_id_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 const ::std::string& AttackGymResponse::battle_id() const {
  // @@protoc_insertion_point(field_get:POGOProtos.Networking.Responses.AttackGymResponse.battle_id)
  return battle_id_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void AttackGymResponse::set_battle_id(const ::std::string& value) {
  
  battle_id_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:POGOProtos.Networking.Responses.AttackGymResponse.battle_id)
}
 void AttackGymResponse::set_battle_id(const char* value) {
  
  battle_id_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:POGOProtos.Networking.Responses.AttackGymResponse.battle_id)
}
 void AttackGymResponse::set_battle_id(const char* value, size_t size) {
  
  battle_id_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:POGOProtos.Networking.Responses.AttackGymResponse.battle_id)
}
 ::std::string* AttackGymResponse::mutable_battle_id() {
  
  // @@protoc_insertion_point(field_mutable:POGOProtos.Networking.Responses.AttackGymResponse.battle_id)
  return battle_id_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 ::std::string* AttackGymResponse::release_battle_id() {
  // @@protoc_insertion_point(field_release:POGOProtos.Networking.Responses.AttackGymResponse.battle_id)
  
  return battle_id_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void AttackGymResponse::set_allocated_battle_id(::std::string* battle_id) {
  if (battle_id != NULL) {
    
  } else {
    
  }
  battle_id_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), battle_id);
  // @@protoc_insertion_point(field_set_allocated:POGOProtos.Networking.Responses.AttackGymResponse.battle_id)
}

// optional .POGOProtos.Data.Battle.BattlePokemonInfo active_defender = 4;
bool AttackGymResponse::has_active_defender() const {
  return !_is_default_instance_ && active_defender_ != NULL;
}
void AttackGymResponse::clear_active_defender() {
  if (GetArenaNoVirtual() == NULL && active_defender_ != NULL) delete active_defender_;
  active_defender_ = NULL;
}
const ::POGOProtos::Data::Battle::BattlePokemonInfo& AttackGymResponse::active_defender() const {
  // @@protoc_insertion_point(field_get:POGOProtos.Networking.Responses.AttackGymResponse.active_defender)
  return active_defender_ != NULL ? *active_defender_ : *default_instance_->active_defender_;
}
::POGOProtos::Data::Battle::BattlePokemonInfo* AttackGymResponse::mutable_active_defender() {
  
  if (active_defender_ == NULL) {
    active_defender_ = new ::POGOProtos::Data::Battle::BattlePokemonInfo;
  }
  // @@protoc_insertion_point(field_mutable:POGOProtos.Networking.Responses.AttackGymResponse.active_defender)
  return active_defender_;
}
::POGOProtos::Data::Battle::BattlePokemonInfo* AttackGymResponse::release_active_defender() {
  // @@protoc_insertion_point(field_release:POGOProtos.Networking.Responses.AttackGymResponse.active_defender)
  
  ::POGOProtos::Data::Battle::BattlePokemonInfo* temp = active_defender_;
  active_defender_ = NULL;
  return temp;
}
void AttackGymResponse::set_allocated_active_defender(::POGOProtos::Data::Battle::BattlePokemonInfo* active_defender) {
  delete active_defender_;
  active_defender_ = active_defender;
  if (active_defender) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:POGOProtos.Networking.Responses.AttackGymResponse.active_defender)
}

// optional .POGOProtos.Data.Battle.BattlePokemonInfo active_attacker = 5;
bool AttackGymResponse::has_active_attacker() const {
  return !_is_default_instance_ && active_attacker_ != NULL;
}
void AttackGymResponse::clear_active_attacker() {
  if (GetArenaNoVirtual() == NULL && active_attacker_ != NULL) delete active_attacker_;
  active_attacker_ = NULL;
}
const ::POGOProtos::Data::Battle::BattlePokemonInfo& AttackGymResponse::active_attacker() const {
  // @@protoc_insertion_point(field_get:POGOProtos.Networking.Responses.AttackGymResponse.active_attacker)
  return active_attacker_ != NULL ? *active_attacker_ : *default_instance_->active_attacker_;
}
::POGOProtos::Data::Battle::BattlePokemonInfo* AttackGymResponse::mutable_active_attacker() {
  
  if (active_attacker_ == NULL) {
    active_attacker_ = new ::POGOProtos::Data::Battle::BattlePokemonInfo;
  }
  // @@protoc_insertion_point(field_mutable:POGOProtos.Networking.Responses.AttackGymResponse.active_attacker)
  return active_attacker_;
}
::POGOProtos::Data::Battle::BattlePokemonInfo* AttackGymResponse::release_active_attacker() {
  // @@protoc_insertion_point(field_release:POGOProtos.Networking.Responses.AttackGymResponse.active_attacker)
  
  ::POGOProtos::Data::Battle::BattlePokemonInfo* temp = active_attacker_;
  active_attacker_ = NULL;
  return temp;
}
void AttackGymResponse::set_allocated_active_attacker(::POGOProtos::Data::Battle::BattlePokemonInfo* active_attacker) {
  delete active_attacker_;
  active_attacker_ = active_attacker;
  if (active_attacker) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:POGOProtos.Networking.Responses.AttackGymResponse.active_attacker)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace Responses
}  // namespace Networking
}  // namespace POGOProtos

// @@protoc_insertion_point(global_scope)
