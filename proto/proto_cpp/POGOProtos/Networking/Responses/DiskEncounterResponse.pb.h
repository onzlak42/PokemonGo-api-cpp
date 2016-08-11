// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: POGOProtos/Networking/Responses/DiskEncounterResponse.proto

#ifndef PROTOBUF_POGOProtos_2fNetworking_2fResponses_2fDiskEncounterResponse_2eproto__INCLUDED
#define PROTOBUF_POGOProtos_2fNetworking_2fResponses_2fDiskEncounterResponse_2eproto__INCLUDED

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
#include "POGOProtos/Data/Capture/CaptureProbability.pb.h"
// @@protoc_insertion_point(includes)

namespace POGOProtos {
namespace Networking {
namespace Responses {

// Internal implementation detail -- do not call these.
void protobuf_AddDesc_POGOProtos_2fNetworking_2fResponses_2fDiskEncounterResponse_2eproto();
void protobuf_AssignDesc_POGOProtos_2fNetworking_2fResponses_2fDiskEncounterResponse_2eproto();
void protobuf_ShutdownFile_POGOProtos_2fNetworking_2fResponses_2fDiskEncounterResponse_2eproto();

class DiskEncounterResponse;

enum DiskEncounterResponse_Result {
  DiskEncounterResponse_Result_UNKNOWN = 0,
  DiskEncounterResponse_Result_SUCCESS = 1,
  DiskEncounterResponse_Result_NOT_AVAILABLE = 2,
  DiskEncounterResponse_Result_NOT_IN_RANGE = 3,
  DiskEncounterResponse_Result_ENCOUNTER_ALREADY_FINISHED = 4,
  DiskEncounterResponse_Result_POKEMON_INVENTORY_FULL = 5,
  DiskEncounterResponse_Result_DiskEncounterResponse_Result_INT_MIN_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32min,
  DiskEncounterResponse_Result_DiskEncounterResponse_Result_INT_MAX_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32max
};
bool DiskEncounterResponse_Result_IsValid(int value);
const DiskEncounterResponse_Result DiskEncounterResponse_Result_Result_MIN = DiskEncounterResponse_Result_UNKNOWN;
const DiskEncounterResponse_Result DiskEncounterResponse_Result_Result_MAX = DiskEncounterResponse_Result_POKEMON_INVENTORY_FULL;
const int DiskEncounterResponse_Result_Result_ARRAYSIZE = DiskEncounterResponse_Result_Result_MAX + 1;

const ::google::protobuf::EnumDescriptor* DiskEncounterResponse_Result_descriptor();
inline const ::std::string& DiskEncounterResponse_Result_Name(DiskEncounterResponse_Result value) {
  return ::google::protobuf::internal::NameOfEnum(
    DiskEncounterResponse_Result_descriptor(), value);
}
inline bool DiskEncounterResponse_Result_Parse(
    const ::std::string& name, DiskEncounterResponse_Result* value) {
  return ::google::protobuf::internal::ParseNamedEnum<DiskEncounterResponse_Result>(
    DiskEncounterResponse_Result_descriptor(), name, value);
}
// ===================================================================

class DiskEncounterResponse : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:POGOProtos.Networking.Responses.DiskEncounterResponse) */ {
 public:
  DiskEncounterResponse();
  virtual ~DiskEncounterResponse();

  DiskEncounterResponse(const DiskEncounterResponse& from);

  inline DiskEncounterResponse& operator=(const DiskEncounterResponse& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const DiskEncounterResponse& default_instance();

  void Swap(DiskEncounterResponse* other);

  // implements Message ----------------------------------------------

  inline DiskEncounterResponse* New() const { return New(NULL); }

  DiskEncounterResponse* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const DiskEncounterResponse& from);
  void MergeFrom(const DiskEncounterResponse& from);
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
  void InternalSwap(DiskEncounterResponse* other);
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

  typedef DiskEncounterResponse_Result Result;
  static const Result UNKNOWN =
    DiskEncounterResponse_Result_UNKNOWN;
  static const Result SUCCESS =
    DiskEncounterResponse_Result_SUCCESS;
  static const Result NOT_AVAILABLE =
    DiskEncounterResponse_Result_NOT_AVAILABLE;
  static const Result NOT_IN_RANGE =
    DiskEncounterResponse_Result_NOT_IN_RANGE;
  static const Result ENCOUNTER_ALREADY_FINISHED =
    DiskEncounterResponse_Result_ENCOUNTER_ALREADY_FINISHED;
  static const Result POKEMON_INVENTORY_FULL =
    DiskEncounterResponse_Result_POKEMON_INVENTORY_FULL;
  static inline bool Result_IsValid(int value) {
    return DiskEncounterResponse_Result_IsValid(value);
  }
  static const Result Result_MIN =
    DiskEncounterResponse_Result_Result_MIN;
  static const Result Result_MAX =
    DiskEncounterResponse_Result_Result_MAX;
  static const int Result_ARRAYSIZE =
    DiskEncounterResponse_Result_Result_ARRAYSIZE;
  static inline const ::google::protobuf::EnumDescriptor*
  Result_descriptor() {
    return DiskEncounterResponse_Result_descriptor();
  }
  static inline const ::std::string& Result_Name(Result value) {
    return DiskEncounterResponse_Result_Name(value);
  }
  static inline bool Result_Parse(const ::std::string& name,
      Result* value) {
    return DiskEncounterResponse_Result_Parse(name, value);
  }

  // accessors -------------------------------------------------------

  // optional .POGOProtos.Networking.Responses.DiskEncounterResponse.Result result = 1;
  void clear_result();
  static const int kResultFieldNumber = 1;
  ::POGOProtos::Networking::Responses::DiskEncounterResponse_Result result() const;
  void set_result(::POGOProtos::Networking::Responses::DiskEncounterResponse_Result value);

  // optional .POGOProtos.Data.PokemonData pokemon_data = 2;
  bool has_pokemon_data() const;
  void clear_pokemon_data();
  static const int kPokemonDataFieldNumber = 2;
  const ::POGOProtos::Data::PokemonData& pokemon_data() const;
  ::POGOProtos::Data::PokemonData* mutable_pokemon_data();
  ::POGOProtos::Data::PokemonData* release_pokemon_data();
  void set_allocated_pokemon_data(::POGOProtos::Data::PokemonData* pokemon_data);

  // optional .POGOProtos.Data.Capture.CaptureProbability capture_probability = 3;
  bool has_capture_probability() const;
  void clear_capture_probability();
  static const int kCaptureProbabilityFieldNumber = 3;
  const ::POGOProtos::Data::Capture::CaptureProbability& capture_probability() const;
  ::POGOProtos::Data::Capture::CaptureProbability* mutable_capture_probability();
  ::POGOProtos::Data::Capture::CaptureProbability* release_capture_probability();
  void set_allocated_capture_probability(::POGOProtos::Data::Capture::CaptureProbability* capture_probability);

  // @@protoc_insertion_point(class_scope:POGOProtos.Networking.Responses.DiskEncounterResponse)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  bool _is_default_instance_;
  ::POGOProtos::Data::PokemonData* pokemon_data_;
  ::POGOProtos::Data::Capture::CaptureProbability* capture_probability_;
  int result_;
  mutable int _cached_size_;
  friend void  protobuf_AddDesc_POGOProtos_2fNetworking_2fResponses_2fDiskEncounterResponse_2eproto();
  friend void protobuf_AssignDesc_POGOProtos_2fNetworking_2fResponses_2fDiskEncounterResponse_2eproto();
  friend void protobuf_ShutdownFile_POGOProtos_2fNetworking_2fResponses_2fDiskEncounterResponse_2eproto();

  void InitAsDefaultInstance();
  static DiskEncounterResponse* default_instance_;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// DiskEncounterResponse

// optional .POGOProtos.Networking.Responses.DiskEncounterResponse.Result result = 1;
inline void DiskEncounterResponse::clear_result() {
  result_ = 0;
}
inline ::POGOProtos::Networking::Responses::DiskEncounterResponse_Result DiskEncounterResponse::result() const {
  // @@protoc_insertion_point(field_get:POGOProtos.Networking.Responses.DiskEncounterResponse.result)
  return static_cast< ::POGOProtos::Networking::Responses::DiskEncounterResponse_Result >(result_);
}
inline void DiskEncounterResponse::set_result(::POGOProtos::Networking::Responses::DiskEncounterResponse_Result value) {
  
  result_ = value;
  // @@protoc_insertion_point(field_set:POGOProtos.Networking.Responses.DiskEncounterResponse.result)
}

// optional .POGOProtos.Data.PokemonData pokemon_data = 2;
inline bool DiskEncounterResponse::has_pokemon_data() const {
  return !_is_default_instance_ && pokemon_data_ != NULL;
}
inline void DiskEncounterResponse::clear_pokemon_data() {
  if (GetArenaNoVirtual() == NULL && pokemon_data_ != NULL) delete pokemon_data_;
  pokemon_data_ = NULL;
}
inline const ::POGOProtos::Data::PokemonData& DiskEncounterResponse::pokemon_data() const {
  // @@protoc_insertion_point(field_get:POGOProtos.Networking.Responses.DiskEncounterResponse.pokemon_data)
  return pokemon_data_ != NULL ? *pokemon_data_ : *default_instance_->pokemon_data_;
}
inline ::POGOProtos::Data::PokemonData* DiskEncounterResponse::mutable_pokemon_data() {
  
  if (pokemon_data_ == NULL) {
    pokemon_data_ = new ::POGOProtos::Data::PokemonData;
  }
  // @@protoc_insertion_point(field_mutable:POGOProtos.Networking.Responses.DiskEncounterResponse.pokemon_data)
  return pokemon_data_;
}
inline ::POGOProtos::Data::PokemonData* DiskEncounterResponse::release_pokemon_data() {
  // @@protoc_insertion_point(field_release:POGOProtos.Networking.Responses.DiskEncounterResponse.pokemon_data)
  
  ::POGOProtos::Data::PokemonData* temp = pokemon_data_;
  pokemon_data_ = NULL;
  return temp;
}
inline void DiskEncounterResponse::set_allocated_pokemon_data(::POGOProtos::Data::PokemonData* pokemon_data) {
  delete pokemon_data_;
  pokemon_data_ = pokemon_data;
  if (pokemon_data) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:POGOProtos.Networking.Responses.DiskEncounterResponse.pokemon_data)
}

// optional .POGOProtos.Data.Capture.CaptureProbability capture_probability = 3;
inline bool DiskEncounterResponse::has_capture_probability() const {
  return !_is_default_instance_ && capture_probability_ != NULL;
}
inline void DiskEncounterResponse::clear_capture_probability() {
  if (GetArenaNoVirtual() == NULL && capture_probability_ != NULL) delete capture_probability_;
  capture_probability_ = NULL;
}
inline const ::POGOProtos::Data::Capture::CaptureProbability& DiskEncounterResponse::capture_probability() const {
  // @@protoc_insertion_point(field_get:POGOProtos.Networking.Responses.DiskEncounterResponse.capture_probability)
  return capture_probability_ != NULL ? *capture_probability_ : *default_instance_->capture_probability_;
}
inline ::POGOProtos::Data::Capture::CaptureProbability* DiskEncounterResponse::mutable_capture_probability() {
  
  if (capture_probability_ == NULL) {
    capture_probability_ = new ::POGOProtos::Data::Capture::CaptureProbability;
  }
  // @@protoc_insertion_point(field_mutable:POGOProtos.Networking.Responses.DiskEncounterResponse.capture_probability)
  return capture_probability_;
}
inline ::POGOProtos::Data::Capture::CaptureProbability* DiskEncounterResponse::release_capture_probability() {
  // @@protoc_insertion_point(field_release:POGOProtos.Networking.Responses.DiskEncounterResponse.capture_probability)
  
  ::POGOProtos::Data::Capture::CaptureProbability* temp = capture_probability_;
  capture_probability_ = NULL;
  return temp;
}
inline void DiskEncounterResponse::set_allocated_capture_probability(::POGOProtos::Data::Capture::CaptureProbability* capture_probability) {
  delete capture_probability_;
  capture_probability_ = capture_probability;
  if (capture_probability) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:POGOProtos.Networking.Responses.DiskEncounterResponse.capture_probability)
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace Responses
}  // namespace Networking
}  // namespace POGOProtos

#ifndef SWIG
namespace google {
namespace protobuf {

template <> struct is_proto_enum< ::POGOProtos::Networking::Responses::DiskEncounterResponse_Result> : ::google::protobuf::internal::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::POGOProtos::Networking::Responses::DiskEncounterResponse_Result>() {
  return ::POGOProtos::Networking::Responses::DiskEncounterResponse_Result_descriptor();
}

}  // namespace protobuf
}  // namespace google
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_POGOProtos_2fNetworking_2fResponses_2fDiskEncounterResponse_2eproto__INCLUDED