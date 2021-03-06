// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: POGOProtos/Networking/Responses/FortDeployPokemonResponse.proto

#ifndef PROTOBUF_POGOProtos_2fNetworking_2fResponses_2fFortDeployPokemonResponse_2eproto__INCLUDED
#define PROTOBUF_POGOProtos_2fNetworking_2fResponses_2fFortDeployPokemonResponse_2eproto__INCLUDED

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
#include "POGOProtos/Data/PokemonData.pb.h"
#include "POGOProtos/Data/Gym/GymState.pb.h"
#include "POGOProtos/Networking/Responses/FortDetailsResponse.pb.h"
// @@protoc_insertion_point(includes)

namespace POGOProtos {
namespace Networking {
namespace Responses {

// Internal implementation detail -- do not call these.
void protobuf_AddDesc_POGOProtos_2fNetworking_2fResponses_2fFortDeployPokemonResponse_2eproto();
void protobuf_AssignDesc_POGOProtos_2fNetworking_2fResponses_2fFortDeployPokemonResponse_2eproto();
void protobuf_ShutdownFile_POGOProtos_2fNetworking_2fResponses_2fFortDeployPokemonResponse_2eproto();

class FortDeployPokemonResponse;

enum FortDeployPokemonResponse_Result {
  FortDeployPokemonResponse_Result_NO_RESULT_SET = 0,
  FortDeployPokemonResponse_Result_SUCCESS = 1,
  FortDeployPokemonResponse_Result_ERROR_ALREADY_HAS_POKEMON_ON_FORT = 2,
  FortDeployPokemonResponse_Result_ERROR_OPPOSING_TEAM_OWNS_FORT = 3,
  FortDeployPokemonResponse_Result_ERROR_FORT_IS_FULL = 4,
  FortDeployPokemonResponse_Result_ERROR_NOT_IN_RANGE = 5,
  FortDeployPokemonResponse_Result_ERROR_PLAYER_HAS_NO_TEAM = 6,
  FortDeployPokemonResponse_Result_ERROR_POKEMON_NOT_FULL_HP = 7,
  FortDeployPokemonResponse_Result_ERROR_PLAYER_BELOW_MINIMUM_LEVEL = 8,
  FortDeployPokemonResponse_Result_FortDeployPokemonResponse_Result_INT_MIN_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32min,
  FortDeployPokemonResponse_Result_FortDeployPokemonResponse_Result_INT_MAX_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32max
};
bool FortDeployPokemonResponse_Result_IsValid(int value);
const FortDeployPokemonResponse_Result FortDeployPokemonResponse_Result_Result_MIN = FortDeployPokemonResponse_Result_NO_RESULT_SET;
const FortDeployPokemonResponse_Result FortDeployPokemonResponse_Result_Result_MAX = FortDeployPokemonResponse_Result_ERROR_PLAYER_BELOW_MINIMUM_LEVEL;
const int FortDeployPokemonResponse_Result_Result_ARRAYSIZE = FortDeployPokemonResponse_Result_Result_MAX + 1;

const ::google::protobuf::EnumDescriptor* FortDeployPokemonResponse_Result_descriptor();
inline const ::std::string& FortDeployPokemonResponse_Result_Name(FortDeployPokemonResponse_Result value) {
  return ::google::protobuf::internal::NameOfEnum(
    FortDeployPokemonResponse_Result_descriptor(), value);
}
inline bool FortDeployPokemonResponse_Result_Parse(
    const ::std::string& name, FortDeployPokemonResponse_Result* value) {
  return ::google::protobuf::internal::ParseNamedEnum<FortDeployPokemonResponse_Result>(
    FortDeployPokemonResponse_Result_descriptor(), name, value);
}
// ===================================================================

class FortDeployPokemonResponse : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:POGOProtos.Networking.Responses.FortDeployPokemonResponse) */ {
 public:
  FortDeployPokemonResponse();
  virtual ~FortDeployPokemonResponse();

  FortDeployPokemonResponse(const FortDeployPokemonResponse& from);

  inline FortDeployPokemonResponse& operator=(const FortDeployPokemonResponse& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const FortDeployPokemonResponse& default_instance();

  void Swap(FortDeployPokemonResponse* other);

  // implements Message ----------------------------------------------

  inline FortDeployPokemonResponse* New() const { return New(NULL); }

  FortDeployPokemonResponse* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const FortDeployPokemonResponse& from);
  void MergeFrom(const FortDeployPokemonResponse& from);
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
  void InternalSwap(FortDeployPokemonResponse* other);
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

  typedef FortDeployPokemonResponse_Result Result;
  static const Result NO_RESULT_SET =
    FortDeployPokemonResponse_Result_NO_RESULT_SET;
  static const Result SUCCESS =
    FortDeployPokemonResponse_Result_SUCCESS;
  static const Result ERROR_ALREADY_HAS_POKEMON_ON_FORT =
    FortDeployPokemonResponse_Result_ERROR_ALREADY_HAS_POKEMON_ON_FORT;
  static const Result ERROR_OPPOSING_TEAM_OWNS_FORT =
    FortDeployPokemonResponse_Result_ERROR_OPPOSING_TEAM_OWNS_FORT;
  static const Result ERROR_FORT_IS_FULL =
    FortDeployPokemonResponse_Result_ERROR_FORT_IS_FULL;
  static const Result ERROR_NOT_IN_RANGE =
    FortDeployPokemonResponse_Result_ERROR_NOT_IN_RANGE;
  static const Result ERROR_PLAYER_HAS_NO_TEAM =
    FortDeployPokemonResponse_Result_ERROR_PLAYER_HAS_NO_TEAM;
  static const Result ERROR_POKEMON_NOT_FULL_HP =
    FortDeployPokemonResponse_Result_ERROR_POKEMON_NOT_FULL_HP;
  static const Result ERROR_PLAYER_BELOW_MINIMUM_LEVEL =
    FortDeployPokemonResponse_Result_ERROR_PLAYER_BELOW_MINIMUM_LEVEL;
  static inline bool Result_IsValid(int value) {
    return FortDeployPokemonResponse_Result_IsValid(value);
  }
  static const Result Result_MIN =
    FortDeployPokemonResponse_Result_Result_MIN;
  static const Result Result_MAX =
    FortDeployPokemonResponse_Result_Result_MAX;
  static const int Result_ARRAYSIZE =
    FortDeployPokemonResponse_Result_Result_ARRAYSIZE;
  static inline const ::google::protobuf::EnumDescriptor*
  Result_descriptor() {
    return FortDeployPokemonResponse_Result_descriptor();
  }
  static inline const ::std::string& Result_Name(Result value) {
    return FortDeployPokemonResponse_Result_Name(value);
  }
  static inline bool Result_Parse(const ::std::string& name,
      Result* value) {
    return FortDeployPokemonResponse_Result_Parse(name, value);
  }

  // accessors -------------------------------------------------------

  // optional .POGOProtos.Networking.Responses.FortDeployPokemonResponse.Result result = 1;
  void clear_result();
  static const int kResultFieldNumber = 1;
  ::POGOProtos::Networking::Responses::FortDeployPokemonResponse_Result result() const;
  void set_result(::POGOProtos::Networking::Responses::FortDeployPokemonResponse_Result value);

  // optional .POGOProtos.Networking.Responses.FortDetailsResponse fort_details = 2;
  bool has_fort_details() const;
  void clear_fort_details();
  static const int kFortDetailsFieldNumber = 2;
  const ::POGOProtos::Networking::Responses::FortDetailsResponse& fort_details() const;
  ::POGOProtos::Networking::Responses::FortDetailsResponse* mutable_fort_details();
  ::POGOProtos::Networking::Responses::FortDetailsResponse* release_fort_details();
  void set_allocated_fort_details(::POGOProtos::Networking::Responses::FortDetailsResponse* fort_details);

  // optional .POGOProtos.Data.PokemonData pokemon_data = 3;
  bool has_pokemon_data() const;
  void clear_pokemon_data();
  static const int kPokemonDataFieldNumber = 3;
  const ::POGOProtos::Data::PokemonData& pokemon_data() const;
  ::POGOProtos::Data::PokemonData* mutable_pokemon_data();
  ::POGOProtos::Data::PokemonData* release_pokemon_data();
  void set_allocated_pokemon_data(::POGOProtos::Data::PokemonData* pokemon_data);

  // optional .POGOProtos.Data.Gym.GymState gym_state = 4;
  bool has_gym_state() const;
  void clear_gym_state();
  static const int kGymStateFieldNumber = 4;
  const ::POGOProtos::Data::Gym::GymState& gym_state() const;
  ::POGOProtos::Data::Gym::GymState* mutable_gym_state();
  ::POGOProtos::Data::Gym::GymState* release_gym_state();
  void set_allocated_gym_state(::POGOProtos::Data::Gym::GymState* gym_state);

  // @@protoc_insertion_point(class_scope:POGOProtos.Networking.Responses.FortDeployPokemonResponse)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  bool _is_default_instance_;
  ::POGOProtos::Networking::Responses::FortDetailsResponse* fort_details_;
  ::POGOProtos::Data::PokemonData* pokemon_data_;
  ::POGOProtos::Data::Gym::GymState* gym_state_;
  int result_;
  mutable int _cached_size_;
  friend void  protobuf_AddDesc_POGOProtos_2fNetworking_2fResponses_2fFortDeployPokemonResponse_2eproto();
  friend void protobuf_AssignDesc_POGOProtos_2fNetworking_2fResponses_2fFortDeployPokemonResponse_2eproto();
  friend void protobuf_ShutdownFile_POGOProtos_2fNetworking_2fResponses_2fFortDeployPokemonResponse_2eproto();

  void InitAsDefaultInstance();
  static FortDeployPokemonResponse* default_instance_;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// FortDeployPokemonResponse

// optional .POGOProtos.Networking.Responses.FortDeployPokemonResponse.Result result = 1;
inline void FortDeployPokemonResponse::clear_result() {
  result_ = 0;
}
inline ::POGOProtos::Networking::Responses::FortDeployPokemonResponse_Result FortDeployPokemonResponse::result() const {
  // @@protoc_insertion_point(field_get:POGOProtos.Networking.Responses.FortDeployPokemonResponse.result)
  return static_cast< ::POGOProtos::Networking::Responses::FortDeployPokemonResponse_Result >(result_);
}
inline void FortDeployPokemonResponse::set_result(::POGOProtos::Networking::Responses::FortDeployPokemonResponse_Result value) {
  
  result_ = value;
  // @@protoc_insertion_point(field_set:POGOProtos.Networking.Responses.FortDeployPokemonResponse.result)
}

// optional .POGOProtos.Networking.Responses.FortDetailsResponse fort_details = 2;
inline bool FortDeployPokemonResponse::has_fort_details() const {
  return !_is_default_instance_ && fort_details_ != NULL;
}
inline void FortDeployPokemonResponse::clear_fort_details() {
  if (GetArenaNoVirtual() == NULL && fort_details_ != NULL) delete fort_details_;
  fort_details_ = NULL;
}
inline const ::POGOProtos::Networking::Responses::FortDetailsResponse& FortDeployPokemonResponse::fort_details() const {
  // @@protoc_insertion_point(field_get:POGOProtos.Networking.Responses.FortDeployPokemonResponse.fort_details)
  return fort_details_ != NULL ? *fort_details_ : *default_instance_->fort_details_;
}
inline ::POGOProtos::Networking::Responses::FortDetailsResponse* FortDeployPokemonResponse::mutable_fort_details() {
  
  if (fort_details_ == NULL) {
    fort_details_ = new ::POGOProtos::Networking::Responses::FortDetailsResponse;
  }
  // @@protoc_insertion_point(field_mutable:POGOProtos.Networking.Responses.FortDeployPokemonResponse.fort_details)
  return fort_details_;
}
inline ::POGOProtos::Networking::Responses::FortDetailsResponse* FortDeployPokemonResponse::release_fort_details() {
  // @@protoc_insertion_point(field_release:POGOProtos.Networking.Responses.FortDeployPokemonResponse.fort_details)
  
  ::POGOProtos::Networking::Responses::FortDetailsResponse* temp = fort_details_;
  fort_details_ = NULL;
  return temp;
}
inline void FortDeployPokemonResponse::set_allocated_fort_details(::POGOProtos::Networking::Responses::FortDetailsResponse* fort_details) {
  delete fort_details_;
  fort_details_ = fort_details;
  if (fort_details) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:POGOProtos.Networking.Responses.FortDeployPokemonResponse.fort_details)
}

// optional .POGOProtos.Data.PokemonData pokemon_data = 3;
inline bool FortDeployPokemonResponse::has_pokemon_data() const {
  return !_is_default_instance_ && pokemon_data_ != NULL;
}
inline void FortDeployPokemonResponse::clear_pokemon_data() {
  if (GetArenaNoVirtual() == NULL && pokemon_data_ != NULL) delete pokemon_data_;
  pokemon_data_ = NULL;
}
inline const ::POGOProtos::Data::PokemonData& FortDeployPokemonResponse::pokemon_data() const {
  // @@protoc_insertion_point(field_get:POGOProtos.Networking.Responses.FortDeployPokemonResponse.pokemon_data)
  return pokemon_data_ != NULL ? *pokemon_data_ : *default_instance_->pokemon_data_;
}
inline ::POGOProtos::Data::PokemonData* FortDeployPokemonResponse::mutable_pokemon_data() {
  
  if (pokemon_data_ == NULL) {
    pokemon_data_ = new ::POGOProtos::Data::PokemonData;
  }
  // @@protoc_insertion_point(field_mutable:POGOProtos.Networking.Responses.FortDeployPokemonResponse.pokemon_data)
  return pokemon_data_;
}
inline ::POGOProtos::Data::PokemonData* FortDeployPokemonResponse::release_pokemon_data() {
  // @@protoc_insertion_point(field_release:POGOProtos.Networking.Responses.FortDeployPokemonResponse.pokemon_data)
  
  ::POGOProtos::Data::PokemonData* temp = pokemon_data_;
  pokemon_data_ = NULL;
  return temp;
}
inline void FortDeployPokemonResponse::set_allocated_pokemon_data(::POGOProtos::Data::PokemonData* pokemon_data) {
  delete pokemon_data_;
  pokemon_data_ = pokemon_data;
  if (pokemon_data) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:POGOProtos.Networking.Responses.FortDeployPokemonResponse.pokemon_data)
}

// optional .POGOProtos.Data.Gym.GymState gym_state = 4;
inline bool FortDeployPokemonResponse::has_gym_state() const {
  return !_is_default_instance_ && gym_state_ != NULL;
}
inline void FortDeployPokemonResponse::clear_gym_state() {
  if (GetArenaNoVirtual() == NULL && gym_state_ != NULL) delete gym_state_;
  gym_state_ = NULL;
}
inline const ::POGOProtos::Data::Gym::GymState& FortDeployPokemonResponse::gym_state() const {
  // @@protoc_insertion_point(field_get:POGOProtos.Networking.Responses.FortDeployPokemonResponse.gym_state)
  return gym_state_ != NULL ? *gym_state_ : *default_instance_->gym_state_;
}
inline ::POGOProtos::Data::Gym::GymState* FortDeployPokemonResponse::mutable_gym_state() {
  
  if (gym_state_ == NULL) {
    gym_state_ = new ::POGOProtos::Data::Gym::GymState;
  }
  // @@protoc_insertion_point(field_mutable:POGOProtos.Networking.Responses.FortDeployPokemonResponse.gym_state)
  return gym_state_;
}
inline ::POGOProtos::Data::Gym::GymState* FortDeployPokemonResponse::release_gym_state() {
  // @@protoc_insertion_point(field_release:POGOProtos.Networking.Responses.FortDeployPokemonResponse.gym_state)
  
  ::POGOProtos::Data::Gym::GymState* temp = gym_state_;
  gym_state_ = NULL;
  return temp;
}
inline void FortDeployPokemonResponse::set_allocated_gym_state(::POGOProtos::Data::Gym::GymState* gym_state) {
  delete gym_state_;
  gym_state_ = gym_state;
  if (gym_state) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:POGOProtos.Networking.Responses.FortDeployPokemonResponse.gym_state)
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace Responses
}  // namespace Networking
}  // namespace POGOProtos

#ifndef SWIG
namespace google {
namespace protobuf {

template <> struct is_proto_enum< ::POGOProtos::Networking::Responses::FortDeployPokemonResponse_Result> : ::google::protobuf::internal::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::POGOProtos::Networking::Responses::FortDeployPokemonResponse_Result>() {
  return ::POGOProtos::Networking::Responses::FortDeployPokemonResponse_Result_descriptor();
}

}  // namespace protobuf
}  // namespace google
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_POGOProtos_2fNetworking_2fResponses_2fFortDeployPokemonResponse_2eproto__INCLUDED
