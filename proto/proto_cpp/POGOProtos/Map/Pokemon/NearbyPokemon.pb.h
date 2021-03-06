// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: POGOProtos/Map/Pokemon/NearbyPokemon.proto

#ifndef PROTOBUF_POGOProtos_2fMap_2fPokemon_2fNearbyPokemon_2eproto__INCLUDED
#define PROTOBUF_POGOProtos_2fMap_2fPokemon_2fNearbyPokemon_2eproto__INCLUDED

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
#include "POGOProtos/Enums/PokemonId.pb.h"
// @@protoc_insertion_point(includes)

namespace POGOProtos {
namespace Map {
namespace Pokemon {

// Internal implementation detail -- do not call these.
void protobuf_AddDesc_POGOProtos_2fMap_2fPokemon_2fNearbyPokemon_2eproto();
void protobuf_AssignDesc_POGOProtos_2fMap_2fPokemon_2fNearbyPokemon_2eproto();
void protobuf_ShutdownFile_POGOProtos_2fMap_2fPokemon_2fNearbyPokemon_2eproto();

class NearbyPokemon;

// ===================================================================

class NearbyPokemon : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:POGOProtos.Map.Pokemon.NearbyPokemon) */ {
 public:
  NearbyPokemon();
  virtual ~NearbyPokemon();

  NearbyPokemon(const NearbyPokemon& from);

  inline NearbyPokemon& operator=(const NearbyPokemon& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const NearbyPokemon& default_instance();

  void Swap(NearbyPokemon* other);

  // implements Message ----------------------------------------------

  inline NearbyPokemon* New() const { return New(NULL); }

  NearbyPokemon* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const NearbyPokemon& from);
  void MergeFrom(const NearbyPokemon& from);
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
  void InternalSwap(NearbyPokemon* other);
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

  // optional .POGOProtos.Enums.PokemonId pokemon_id = 1;
  void clear_pokemon_id();
  static const int kPokemonIdFieldNumber = 1;
  ::POGOProtos::Enums::PokemonId pokemon_id() const;
  void set_pokemon_id(::POGOProtos::Enums::PokemonId value);

  // optional float distance_in_meters = 2;
  void clear_distance_in_meters();
  static const int kDistanceInMetersFieldNumber = 2;
  float distance_in_meters() const;
  void set_distance_in_meters(float value);

  // optional fixed64 encounter_id = 3;
  void clear_encounter_id();
  static const int kEncounterIdFieldNumber = 3;
  ::google::protobuf::uint64 encounter_id() const;
  void set_encounter_id(::google::protobuf::uint64 value);

  // optional string fort_id = 4;
  void clear_fort_id();
  static const int kFortIdFieldNumber = 4;
  const ::std::string& fort_id() const;
  void set_fort_id(const ::std::string& value);
  void set_fort_id(const char* value);
  void set_fort_id(const char* value, size_t size);
  ::std::string* mutable_fort_id();
  ::std::string* release_fort_id();
  void set_allocated_fort_id(::std::string* fort_id);

  // optional string fort_image_url = 5;
  void clear_fort_image_url();
  static const int kFortImageUrlFieldNumber = 5;
  const ::std::string& fort_image_url() const;
  void set_fort_image_url(const ::std::string& value);
  void set_fort_image_url(const char* value);
  void set_fort_image_url(const char* value, size_t size);
  ::std::string* mutable_fort_image_url();
  ::std::string* release_fort_image_url();
  void set_allocated_fort_image_url(::std::string* fort_image_url);

  // @@protoc_insertion_point(class_scope:POGOProtos.Map.Pokemon.NearbyPokemon)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  bool _is_default_instance_;
  int pokemon_id_;
  float distance_in_meters_;
  ::google::protobuf::uint64 encounter_id_;
  ::google::protobuf::internal::ArenaStringPtr fort_id_;
  ::google::protobuf::internal::ArenaStringPtr fort_image_url_;
  mutable int _cached_size_;
  friend void  protobuf_AddDesc_POGOProtos_2fMap_2fPokemon_2fNearbyPokemon_2eproto();
  friend void protobuf_AssignDesc_POGOProtos_2fMap_2fPokemon_2fNearbyPokemon_2eproto();
  friend void protobuf_ShutdownFile_POGOProtos_2fMap_2fPokemon_2fNearbyPokemon_2eproto();

  void InitAsDefaultInstance();
  static NearbyPokemon* default_instance_;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// NearbyPokemon

// optional .POGOProtos.Enums.PokemonId pokemon_id = 1;
inline void NearbyPokemon::clear_pokemon_id() {
  pokemon_id_ = 0;
}
inline ::POGOProtos::Enums::PokemonId NearbyPokemon::pokemon_id() const {
  // @@protoc_insertion_point(field_get:POGOProtos.Map.Pokemon.NearbyPokemon.pokemon_id)
  return static_cast< ::POGOProtos::Enums::PokemonId >(pokemon_id_);
}
inline void NearbyPokemon::set_pokemon_id(::POGOProtos::Enums::PokemonId value) {
  
  pokemon_id_ = value;
  // @@protoc_insertion_point(field_set:POGOProtos.Map.Pokemon.NearbyPokemon.pokemon_id)
}

// optional float distance_in_meters = 2;
inline void NearbyPokemon::clear_distance_in_meters() {
  distance_in_meters_ = 0;
}
inline float NearbyPokemon::distance_in_meters() const {
  // @@protoc_insertion_point(field_get:POGOProtos.Map.Pokemon.NearbyPokemon.distance_in_meters)
  return distance_in_meters_;
}
inline void NearbyPokemon::set_distance_in_meters(float value) {
  
  distance_in_meters_ = value;
  // @@protoc_insertion_point(field_set:POGOProtos.Map.Pokemon.NearbyPokemon.distance_in_meters)
}

// optional fixed64 encounter_id = 3;
inline void NearbyPokemon::clear_encounter_id() {
  encounter_id_ = GOOGLE_ULONGLONG(0);
}
inline ::google::protobuf::uint64 NearbyPokemon::encounter_id() const {
  // @@protoc_insertion_point(field_get:POGOProtos.Map.Pokemon.NearbyPokemon.encounter_id)
  return encounter_id_;
}
inline void NearbyPokemon::set_encounter_id(::google::protobuf::uint64 value) {
  
  encounter_id_ = value;
  // @@protoc_insertion_point(field_set:POGOProtos.Map.Pokemon.NearbyPokemon.encounter_id)
}

// optional string fort_id = 4;
inline void NearbyPokemon::clear_fort_id() {
  fort_id_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& NearbyPokemon::fort_id() const {
  // @@protoc_insertion_point(field_get:POGOProtos.Map.Pokemon.NearbyPokemon.fort_id)
  return fort_id_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void NearbyPokemon::set_fort_id(const ::std::string& value) {
  
  fort_id_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:POGOProtos.Map.Pokemon.NearbyPokemon.fort_id)
}
inline void NearbyPokemon::set_fort_id(const char* value) {
  
  fort_id_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:POGOProtos.Map.Pokemon.NearbyPokemon.fort_id)
}
inline void NearbyPokemon::set_fort_id(const char* value, size_t size) {
  
  fort_id_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:POGOProtos.Map.Pokemon.NearbyPokemon.fort_id)
}
inline ::std::string* NearbyPokemon::mutable_fort_id() {
  
  // @@protoc_insertion_point(field_mutable:POGOProtos.Map.Pokemon.NearbyPokemon.fort_id)
  return fort_id_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* NearbyPokemon::release_fort_id() {
  // @@protoc_insertion_point(field_release:POGOProtos.Map.Pokemon.NearbyPokemon.fort_id)
  
  return fort_id_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void NearbyPokemon::set_allocated_fort_id(::std::string* fort_id) {
  if (fort_id != NULL) {
    
  } else {
    
  }
  fort_id_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), fort_id);
  // @@protoc_insertion_point(field_set_allocated:POGOProtos.Map.Pokemon.NearbyPokemon.fort_id)
}

// optional string fort_image_url = 5;
inline void NearbyPokemon::clear_fort_image_url() {
  fort_image_url_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& NearbyPokemon::fort_image_url() const {
  // @@protoc_insertion_point(field_get:POGOProtos.Map.Pokemon.NearbyPokemon.fort_image_url)
  return fort_image_url_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void NearbyPokemon::set_fort_image_url(const ::std::string& value) {
  
  fort_image_url_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:POGOProtos.Map.Pokemon.NearbyPokemon.fort_image_url)
}
inline void NearbyPokemon::set_fort_image_url(const char* value) {
  
  fort_image_url_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:POGOProtos.Map.Pokemon.NearbyPokemon.fort_image_url)
}
inline void NearbyPokemon::set_fort_image_url(const char* value, size_t size) {
  
  fort_image_url_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:POGOProtos.Map.Pokemon.NearbyPokemon.fort_image_url)
}
inline ::std::string* NearbyPokemon::mutable_fort_image_url() {
  
  // @@protoc_insertion_point(field_mutable:POGOProtos.Map.Pokemon.NearbyPokemon.fort_image_url)
  return fort_image_url_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* NearbyPokemon::release_fort_image_url() {
  // @@protoc_insertion_point(field_release:POGOProtos.Map.Pokemon.NearbyPokemon.fort_image_url)
  
  return fort_image_url_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void NearbyPokemon::set_allocated_fort_image_url(::std::string* fort_image_url) {
  if (fort_image_url != NULL) {
    
  } else {
    
  }
  fort_image_url_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), fort_image_url);
  // @@protoc_insertion_point(field_set_allocated:POGOProtos.Map.Pokemon.NearbyPokemon.fort_image_url)
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace Pokemon
}  // namespace Map
}  // namespace POGOProtos

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_POGOProtos_2fMap_2fPokemon_2fNearbyPokemon_2eproto__INCLUDED
