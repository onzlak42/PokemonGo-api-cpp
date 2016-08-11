// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: POGOProtos/Networking/Responses/AttackGymResponse.proto

#ifndef PROTOBUF_POGOProtos_2fNetworking_2fResponses_2fAttackGymResponse_2eproto__INCLUDED
#define PROTOBUF_POGOProtos_2fNetworking_2fResponses_2fAttackGymResponse_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3000000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3000000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/generated_enum_reflection.h>
#include <google/protobuf/unknown_field_set.h>
#include "POGOProtos/Data/Battle/BattleLog.pb.h"
#include "POGOProtos/Data/Battle/BattlePokemonInfo.pb.h"
// @@protoc_insertion_point(includes)

namespace POGOProtos {
namespace Networking {
namespace Responses {

// Internal implementation detail -- do not call these.
void protobuf_AddDesc_POGOProtos_2fNetworking_2fResponses_2fAttackGymResponse_2eproto();
void protobuf_AssignDesc_POGOProtos_2fNetworking_2fResponses_2fAttackGymResponse_2eproto();
void protobuf_ShutdownFile_POGOProtos_2fNetworking_2fResponses_2fAttackGymResponse_2eproto();

class AttackGymResponse;

enum AttackGymResponse_Result {
  AttackGymResponse_Result_UNSET = 0,
  AttackGymResponse_Result_SUCCESS = 1,
  AttackGymResponse_Result_ERROR_INVALID_ATTACK_ACTIONS = 2,
  AttackGymResponse_Result_ERROR_NOT_IN_RANGE = 3,
  AttackGymResponse_Result_AttackGymResponse_Result_INT_MIN_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32min,
  AttackGymResponse_Result_AttackGymResponse_Result_INT_MAX_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32max
};
bool AttackGymResponse_Result_IsValid(int value);
const AttackGymResponse_Result AttackGymResponse_Result_Result_MIN = AttackGymResponse_Result_UNSET;
const AttackGymResponse_Result AttackGymResponse_Result_Result_MAX = AttackGymResponse_Result_ERROR_NOT_IN_RANGE;
const int AttackGymResponse_Result_Result_ARRAYSIZE = AttackGymResponse_Result_Result_MAX + 1;

const ::google::protobuf::EnumDescriptor* AttackGymResponse_Result_descriptor();
inline const ::std::string& AttackGymResponse_Result_Name(AttackGymResponse_Result value) {
  return ::google::protobuf::internal::NameOfEnum(
    AttackGymResponse_Result_descriptor(), value);
}
inline bool AttackGymResponse_Result_Parse(
    const ::std::string& name, AttackGymResponse_Result* value) {
  return ::google::protobuf::internal::ParseNamedEnum<AttackGymResponse_Result>(
    AttackGymResponse_Result_descriptor(), name, value);
}
// ===================================================================

class AttackGymResponse : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:POGOProtos.Networking.Responses.AttackGymResponse) */ {
 public:
  AttackGymResponse();
  virtual ~AttackGymResponse();

  AttackGymResponse(const AttackGymResponse& from);

  inline AttackGymResponse& operator=(const AttackGymResponse& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const AttackGymResponse& default_instance();

  void Swap(AttackGymResponse* other);

  // implements Message ----------------------------------------------

  inline AttackGymResponse* New() const { return New(NULL); }

  AttackGymResponse* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const AttackGymResponse& from);
  void MergeFrom(const AttackGymResponse& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const {
    return InternalSerializeWithCachedSizesToArray(false, output);
  }
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(AttackGymResponse* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _internal_metadata_.arena();
  }
  inline void* MaybeArenaPtr() const {
    return _internal_metadata_.raw_arena_ptr();
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  typedef AttackGymResponse_Result Result;
  static const Result UNSET =
    AttackGymResponse_Result_UNSET;
  static const Result SUCCESS =
    AttackGymResponse_Result_SUCCESS;
  static const Result ERROR_INVALID_ATTACK_ACTIONS =
    AttackGymResponse_Result_ERROR_INVALID_ATTACK_ACTIONS;
  static const Result ERROR_NOT_IN_RANGE =
    AttackGymResponse_Result_ERROR_NOT_IN_RANGE;
  static inline bool Result_IsValid(int value) {
    return AttackGymResponse_Result_IsValid(value);
  }
  static const Result Result_MIN =
    AttackGymResponse_Result_Result_MIN;
  static const Result Result_MAX =
    AttackGymResponse_Result_Result_MAX;
  static const int Result_ARRAYSIZE =
    AttackGymResponse_Result_Result_ARRAYSIZE;
  static inline const ::google::protobuf::EnumDescriptor*
  Result_descriptor() {
    return AttackGymResponse_Result_descriptor();
  }
  static inline const ::std::string& Result_Name(Result value) {
    return AttackGymResponse_Result_Name(value);
  }
  static inline bool Result_Parse(const ::std::string& name,
      Result* value) {
    return AttackGymResponse_Result_Parse(name, value);
  }

  // accessors -------------------------------------------------------

  // optional .POGOProtos.Networking.Responses.AttackGymResponse.Result result = 1;
  void clear_result();
  static const int kResultFieldNumber = 1;
  ::POGOProtos::Networking::Responses::AttackGymResponse_Result result() const;
  void set_result(::POGOProtos::Networking::Responses::AttackGymResponse_Result value);

  // optional .POGOProtos.Data.Battle.BattleLog battle_log = 2;
  bool has_battle_log() const;
  void clear_battle_log();
  static const int kBattleLogFieldNumber = 2;
  const ::POGOProtos::Data::Battle::BattleLog& battle_log() const;
  ::POGOProtos::Data::Battle::BattleLog* mutable_battle_log();
  ::POGOProtos::Data::Battle::BattleLog* release_battle_log();
  void set_allocated_battle_log(::POGOProtos::Data::Battle::BattleLog* battle_log);

  // optional string battle_id = 3;
  void clear_battle_id();
  static const int kBattleIdFieldNumber = 3;
  const ::std::string& battle_id() const;
  void set_battle_id(const ::std::string& value);
  void set_battle_id(const char* value);
  void set_battle_id(const char* value, size_t size);
  ::std::string* mutable_battle_id();
  ::std::string* release_battle_id();
  void set_allocated_battle_id(::std::string* battle_id);

  // optional .POGOProtos.Data.Battle.BattlePokemonInfo active_defender = 4;
  bool has_active_defender() const;
  void clear_active_defender();
  static const int kActiveDefenderFieldNumber = 4;
  const ::POGOProtos::Data::Battle::BattlePokemonInfo& active_defender() const;
  ::POGOProtos::Data::Battle::BattlePokemonInfo* mutable_active_defender();
  ::POGOProtos::Data::Battle::BattlePokemonInfo* release_active_defender();
  void set_allocated_active_defender(::POGOProtos::Data::Battle::BattlePokemonInfo* active_defender);

  // optional .POGOProtos.Data.Battle.BattlePokemonInfo active_attacker = 5;
  bool has_active_attacker() const;
  void clear_active_attacker();
  static const int kActiveAttackerFieldNumber = 5;
  const ::POGOProtos::Data::Battle::BattlePokemonInfo& active_attacker() const;
  ::POGOProtos::Data::Battle::BattlePokemonInfo* mutable_active_attacker();
  ::POGOProtos::Data::Battle::BattlePokemonInfo* release_active_attacker();
  void set_allocated_active_attacker(::POGOProtos::Data::Battle::BattlePokemonInfo* active_attacker);

  // @@protoc_insertion_point(class_scope:POGOProtos.Networking.Responses.AttackGymResponse)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  bool _is_default_instance_;
  ::POGOProtos::Data::Battle::BattleLog* battle_log_;
  ::google::protobuf::internal::ArenaStringPtr battle_id_;
  ::POGOProtos::Data::Battle::BattlePokemonInfo* active_defender_;
  ::POGOProtos::Data::Battle::BattlePokemonInfo* active_attacker_;
  int result_;
  mutable int _cached_size_;
  friend void  protobuf_AddDesc_POGOProtos_2fNetworking_2fResponses_2fAttackGymResponse_2eproto();
  friend void protobuf_AssignDesc_POGOProtos_2fNetworking_2fResponses_2fAttackGymResponse_2eproto();
  friend void protobuf_ShutdownFile_POGOProtos_2fNetworking_2fResponses_2fAttackGymResponse_2eproto();

  void InitAsDefaultInstance();
  static AttackGymResponse* default_instance_;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// AttackGymResponse

// optional .POGOProtos.Networking.Responses.AttackGymResponse.Result result = 1;
inline void AttackGymResponse::clear_result() {
  result_ = 0;
}
inline ::POGOProtos::Networking::Responses::AttackGymResponse_Result AttackGymResponse::result() const {
  // @@protoc_insertion_point(field_get:POGOProtos.Networking.Responses.AttackGymResponse.result)
  return static_cast< ::POGOProtos::Networking::Responses::AttackGymResponse_Result >(result_);
}
inline void AttackGymResponse::set_result(::POGOProtos::Networking::Responses::AttackGymResponse_Result value) {
  
  result_ = value;
  // @@protoc_insertion_point(field_set:POGOProtos.Networking.Responses.AttackGymResponse.result)
}

// optional .POGOProtos.Data.Battle.BattleLog battle_log = 2;
inline bool AttackGymResponse::has_battle_log() const {
  return !_is_default_instance_ && battle_log_ != NULL;
}
inline void AttackGymResponse::clear_battle_log() {
  if (GetArenaNoVirtual() == NULL && battle_log_ != NULL) delete battle_log_;
  battle_log_ = NULL;
}
inline const ::POGOProtos::Data::Battle::BattleLog& AttackGymResponse::battle_log() const {
  // @@protoc_insertion_point(field_get:POGOProtos.Networking.Responses.AttackGymResponse.battle_log)
  return battle_log_ != NULL ? *battle_log_ : *default_instance_->battle_log_;
}
inline ::POGOProtos::Data::Battle::BattleLog* AttackGymResponse::mutable_battle_log() {
  
  if (battle_log_ == NULL) {
    battle_log_ = new ::POGOProtos::Data::Battle::BattleLog;
  }
  // @@protoc_insertion_point(field_mutable:POGOProtos.Networking.Responses.AttackGymResponse.battle_log)
  return battle_log_;
}
inline ::POGOProtos::Data::Battle::BattleLog* AttackGymResponse::release_battle_log() {
  // @@protoc_insertion_point(field_release:POGOProtos.Networking.Responses.AttackGymResponse.battle_log)
  
  ::POGOProtos::Data::Battle::BattleLog* temp = battle_log_;
  battle_log_ = NULL;
  return temp;
}
inline void AttackGymResponse::set_allocated_battle_log(::POGOProtos::Data::Battle::BattleLog* battle_log) {
  delete battle_log_;
  battle_log_ = battle_log;
  if (battle_log) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:POGOProtos.Networking.Responses.AttackGymResponse.battle_log)
}

// optional string battle_id = 3;
inline void AttackGymResponse::clear_battle_id() {
  battle_id_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& AttackGymResponse::battle_id() const {
  // @@protoc_insertion_point(field_get:POGOProtos.Networking.Responses.AttackGymResponse.battle_id)
  return battle_id_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void AttackGymResponse::set_battle_id(const ::std::string& value) {
  
  battle_id_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:POGOProtos.Networking.Responses.AttackGymResponse.battle_id)
}
inline void AttackGymResponse::set_battle_id(const char* value) {
  
  battle_id_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:POGOProtos.Networking.Responses.AttackGymResponse.battle_id)
}
inline void AttackGymResponse::set_battle_id(const char* value, size_t size) {
  
  battle_id_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:POGOProtos.Networking.Responses.AttackGymResponse.battle_id)
}
inline ::std::string* AttackGymResponse::mutable_battle_id() {
  
  // @@protoc_insertion_point(field_mutable:POGOProtos.Networking.Responses.AttackGymResponse.battle_id)
  return battle_id_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* AttackGymResponse::release_battle_id() {
  // @@protoc_insertion_point(field_release:POGOProtos.Networking.Responses.AttackGymResponse.battle_id)
  
  return battle_id_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void AttackGymResponse::set_allocated_battle_id(::std::string* battle_id) {
  if (battle_id != NULL) {
    
  } else {
    
  }
  battle_id_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), battle_id);
  // @@protoc_insertion_point(field_set_allocated:POGOProtos.Networking.Responses.AttackGymResponse.battle_id)
}

// optional .POGOProtos.Data.Battle.BattlePokemonInfo active_defender = 4;
inline bool AttackGymResponse::has_active_defender() const {
  return !_is_default_instance_ && active_defender_ != NULL;
}
inline void AttackGymResponse::clear_active_defender() {
  if (GetArenaNoVirtual() == NULL && active_defender_ != NULL) delete active_defender_;
  active_defender_ = NULL;
}
inline const ::POGOProtos::Data::Battle::BattlePokemonInfo& AttackGymResponse::active_defender() const {
  // @@protoc_insertion_point(field_get:POGOProtos.Networking.Responses.AttackGymResponse.active_defender)
  return active_defender_ != NULL ? *active_defender_ : *default_instance_->active_defender_;
}
inline ::POGOProtos::Data::Battle::BattlePokemonInfo* AttackGymResponse::mutable_active_defender() {
  
  if (active_defender_ == NULL) {
    active_defender_ = new ::POGOProtos::Data::Battle::BattlePokemonInfo;
  }
  // @@protoc_insertion_point(field_mutable:POGOProtos.Networking.Responses.AttackGymResponse.active_defender)
  return active_defender_;
}
inline ::POGOProtos::Data::Battle::BattlePokemonInfo* AttackGymResponse::release_active_defender() {
  // @@protoc_insertion_point(field_release:POGOProtos.Networking.Responses.AttackGymResponse.active_defender)
  
  ::POGOProtos::Data::Battle::BattlePokemonInfo* temp = active_defender_;
  active_defender_ = NULL;
  return temp;
}
inline void AttackGymResponse::set_allocated_active_defender(::POGOProtos::Data::Battle::BattlePokemonInfo* active_defender) {
  delete active_defender_;
  active_defender_ = active_defender;
  if (active_defender) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:POGOProtos.Networking.Responses.AttackGymResponse.active_defender)
}

// optional .POGOProtos.Data.Battle.BattlePokemonInfo active_attacker = 5;
inline bool AttackGymResponse::has_active_attacker() const {
  return !_is_default_instance_ && active_attacker_ != NULL;
}
inline void AttackGymResponse::clear_active_attacker() {
  if (GetArenaNoVirtual() == NULL && active_attacker_ != NULL) delete active_attacker_;
  active_attacker_ = NULL;
}
inline const ::POGOProtos::Data::Battle::BattlePokemonInfo& AttackGymResponse::active_attacker() const {
  // @@protoc_insertion_point(field_get:POGOProtos.Networking.Responses.AttackGymResponse.active_attacker)
  return active_attacker_ != NULL ? *active_attacker_ : *default_instance_->active_attacker_;
}
inline ::POGOProtos::Data::Battle::BattlePokemonInfo* AttackGymResponse::mutable_active_attacker() {
  
  if (active_attacker_ == NULL) {
    active_attacker_ = new ::POGOProtos::Data::Battle::BattlePokemonInfo;
  }
  // @@protoc_insertion_point(field_mutable:POGOProtos.Networking.Responses.AttackGymResponse.active_attacker)
  return active_attacker_;
}
inline ::POGOProtos::Data::Battle::BattlePokemonInfo* AttackGymResponse::release_active_attacker() {
  // @@protoc_insertion_point(field_release:POGOProtos.Networking.Responses.AttackGymResponse.active_attacker)
  
  ::POGOProtos::Data::Battle::BattlePokemonInfo* temp = active_attacker_;
  active_attacker_ = NULL;
  return temp;
}
inline void AttackGymResponse::set_allocated_active_attacker(::POGOProtos::Data::Battle::BattlePokemonInfo* active_attacker) {
  delete active_attacker_;
  active_attacker_ = active_attacker;
  if (active_attacker) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:POGOProtos.Networking.Responses.AttackGymResponse.active_attacker)
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace Responses
}  // namespace Networking
}  // namespace POGOProtos

#ifndef SWIG
namespace google {
namespace protobuf {

template <> struct is_proto_enum< ::POGOProtos::Networking::Responses::AttackGymResponse_Result> : ::google::protobuf::internal::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::POGOProtos::Networking::Responses::AttackGymResponse_Result>() {
  return ::POGOProtos::Networking::Responses::AttackGymResponse_Result_descriptor();
}

}  // namespace protobuf
}  // namespace google
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_POGOProtos_2fNetworking_2fResponses_2fAttackGymResponse_2eproto__INCLUDED