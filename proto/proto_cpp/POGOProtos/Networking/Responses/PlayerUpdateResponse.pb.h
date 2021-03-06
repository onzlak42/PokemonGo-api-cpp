// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: POGOProtos/Networking/Responses/PlayerUpdateResponse.proto

#ifndef PROTOBUF_POGOProtos_2fNetworking_2fResponses_2fPlayerUpdateResponse_2eproto__INCLUDED
#define PROTOBUF_POGOProtos_2fNetworking_2fResponses_2fPlayerUpdateResponse_2eproto__INCLUDED

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
#include <google/protobuf/unknown_field_set.h>
#include "POGOProtos/Map/Fort/FortData.pb.h"
#include "POGOProtos/Map/Pokemon/WildPokemon.pb.h"
// @@protoc_insertion_point(includes)

namespace POGOProtos {
namespace Networking {
namespace Responses {

// Internal implementation detail -- do not call these.
void protobuf_AddDesc_POGOProtos_2fNetworking_2fResponses_2fPlayerUpdateResponse_2eproto();
void protobuf_AssignDesc_POGOProtos_2fNetworking_2fResponses_2fPlayerUpdateResponse_2eproto();
void protobuf_ShutdownFile_POGOProtos_2fNetworking_2fResponses_2fPlayerUpdateResponse_2eproto();

class PlayerUpdateResponse;

// ===================================================================

class PlayerUpdateResponse : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:POGOProtos.Networking.Responses.PlayerUpdateResponse) */ {
 public:
  PlayerUpdateResponse();
  virtual ~PlayerUpdateResponse();

  PlayerUpdateResponse(const PlayerUpdateResponse& from);

  inline PlayerUpdateResponse& operator=(const PlayerUpdateResponse& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const PlayerUpdateResponse& default_instance();

  void Swap(PlayerUpdateResponse* other);

  // implements Message ----------------------------------------------

  inline PlayerUpdateResponse* New() const { return New(NULL); }

  PlayerUpdateResponse* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const PlayerUpdateResponse& from);
  void MergeFrom(const PlayerUpdateResponse& from);
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
  void InternalSwap(PlayerUpdateResponse* other);
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

  // accessors -------------------------------------------------------

  // repeated .POGOProtos.Map.Pokemon.WildPokemon wild_pokemons = 1;
  int wild_pokemons_size() const;
  void clear_wild_pokemons();
  static const int kWildPokemonsFieldNumber = 1;
  const ::POGOProtos::Map::Pokemon::WildPokemon& wild_pokemons(int index) const;
  ::POGOProtos::Map::Pokemon::WildPokemon* mutable_wild_pokemons(int index);
  ::POGOProtos::Map::Pokemon::WildPokemon* add_wild_pokemons();
  ::google::protobuf::RepeatedPtrField< ::POGOProtos::Map::Pokemon::WildPokemon >*
      mutable_wild_pokemons();
  const ::google::protobuf::RepeatedPtrField< ::POGOProtos::Map::Pokemon::WildPokemon >&
      wild_pokemons() const;

  // repeated .POGOProtos.Map.Fort.FortData forts = 2;
  int forts_size() const;
  void clear_forts();
  static const int kFortsFieldNumber = 2;
  const ::POGOProtos::Map::Fort::FortData& forts(int index) const;
  ::POGOProtos::Map::Fort::FortData* mutable_forts(int index);
  ::POGOProtos::Map::Fort::FortData* add_forts();
  ::google::protobuf::RepeatedPtrField< ::POGOProtos::Map::Fort::FortData >*
      mutable_forts();
  const ::google::protobuf::RepeatedPtrField< ::POGOProtos::Map::Fort::FortData >&
      forts() const;

  // optional int32 forts_nearby = 3;
  void clear_forts_nearby();
  static const int kFortsNearbyFieldNumber = 3;
  ::google::protobuf::int32 forts_nearby() const;
  void set_forts_nearby(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:POGOProtos.Networking.Responses.PlayerUpdateResponse)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  bool _is_default_instance_;
  ::google::protobuf::RepeatedPtrField< ::POGOProtos::Map::Pokemon::WildPokemon > wild_pokemons_;
  ::google::protobuf::RepeatedPtrField< ::POGOProtos::Map::Fort::FortData > forts_;
  ::google::protobuf::int32 forts_nearby_;
  mutable int _cached_size_;
  friend void  protobuf_AddDesc_POGOProtos_2fNetworking_2fResponses_2fPlayerUpdateResponse_2eproto();
  friend void protobuf_AssignDesc_POGOProtos_2fNetworking_2fResponses_2fPlayerUpdateResponse_2eproto();
  friend void protobuf_ShutdownFile_POGOProtos_2fNetworking_2fResponses_2fPlayerUpdateResponse_2eproto();

  void InitAsDefaultInstance();
  static PlayerUpdateResponse* default_instance_;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// PlayerUpdateResponse

// repeated .POGOProtos.Map.Pokemon.WildPokemon wild_pokemons = 1;
inline int PlayerUpdateResponse::wild_pokemons_size() const {
  return wild_pokemons_.size();
}
inline void PlayerUpdateResponse::clear_wild_pokemons() {
  wild_pokemons_.Clear();
}
inline const ::POGOProtos::Map::Pokemon::WildPokemon& PlayerUpdateResponse::wild_pokemons(int index) const {
  // @@protoc_insertion_point(field_get:POGOProtos.Networking.Responses.PlayerUpdateResponse.wild_pokemons)
  return wild_pokemons_.Get(index);
}
inline ::POGOProtos::Map::Pokemon::WildPokemon* PlayerUpdateResponse::mutable_wild_pokemons(int index) {
  // @@protoc_insertion_point(field_mutable:POGOProtos.Networking.Responses.PlayerUpdateResponse.wild_pokemons)
  return wild_pokemons_.Mutable(index);
}
inline ::POGOProtos::Map::Pokemon::WildPokemon* PlayerUpdateResponse::add_wild_pokemons() {
  // @@protoc_insertion_point(field_add:POGOProtos.Networking.Responses.PlayerUpdateResponse.wild_pokemons)
  return wild_pokemons_.Add();
}
inline ::google::protobuf::RepeatedPtrField< ::POGOProtos::Map::Pokemon::WildPokemon >*
PlayerUpdateResponse::mutable_wild_pokemons() {
  // @@protoc_insertion_point(field_mutable_list:POGOProtos.Networking.Responses.PlayerUpdateResponse.wild_pokemons)
  return &wild_pokemons_;
}
inline const ::google::protobuf::RepeatedPtrField< ::POGOProtos::Map::Pokemon::WildPokemon >&
PlayerUpdateResponse::wild_pokemons() const {
  // @@protoc_insertion_point(field_list:POGOProtos.Networking.Responses.PlayerUpdateResponse.wild_pokemons)
  return wild_pokemons_;
}

// repeated .POGOProtos.Map.Fort.FortData forts = 2;
inline int PlayerUpdateResponse::forts_size() const {
  return forts_.size();
}
inline void PlayerUpdateResponse::clear_forts() {
  forts_.Clear();
}
inline const ::POGOProtos::Map::Fort::FortData& PlayerUpdateResponse::forts(int index) const {
  // @@protoc_insertion_point(field_get:POGOProtos.Networking.Responses.PlayerUpdateResponse.forts)
  return forts_.Get(index);
}
inline ::POGOProtos::Map::Fort::FortData* PlayerUpdateResponse::mutable_forts(int index) {
  // @@protoc_insertion_point(field_mutable:POGOProtos.Networking.Responses.PlayerUpdateResponse.forts)
  return forts_.Mutable(index);
}
inline ::POGOProtos::Map::Fort::FortData* PlayerUpdateResponse::add_forts() {
  // @@protoc_insertion_point(field_add:POGOProtos.Networking.Responses.PlayerUpdateResponse.forts)
  return forts_.Add();
}
inline ::google::protobuf::RepeatedPtrField< ::POGOProtos::Map::Fort::FortData >*
PlayerUpdateResponse::mutable_forts() {
  // @@protoc_insertion_point(field_mutable_list:POGOProtos.Networking.Responses.PlayerUpdateResponse.forts)
  return &forts_;
}
inline const ::google::protobuf::RepeatedPtrField< ::POGOProtos::Map::Fort::FortData >&
PlayerUpdateResponse::forts() const {
  // @@protoc_insertion_point(field_list:POGOProtos.Networking.Responses.PlayerUpdateResponse.forts)
  return forts_;
}

// optional int32 forts_nearby = 3;
inline void PlayerUpdateResponse::clear_forts_nearby() {
  forts_nearby_ = 0;
}
inline ::google::protobuf::int32 PlayerUpdateResponse::forts_nearby() const {
  // @@protoc_insertion_point(field_get:POGOProtos.Networking.Responses.PlayerUpdateResponse.forts_nearby)
  return forts_nearby_;
}
inline void PlayerUpdateResponse::set_forts_nearby(::google::protobuf::int32 value) {
  
  forts_nearby_ = value;
  // @@protoc_insertion_point(field_set:POGOProtos.Networking.Responses.PlayerUpdateResponse.forts_nearby)
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace Responses
}  // namespace Networking
}  // namespace POGOProtos

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_POGOProtos_2fNetworking_2fResponses_2fPlayerUpdateResponse_2eproto__INCLUDED
