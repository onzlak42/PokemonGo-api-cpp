// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: POGOProtos/Map/Fort/FortData.proto

#ifndef PROTOBUF_POGOProtos_2fMap_2fFort_2fFortData_2eproto__INCLUDED
#define PROTOBUF_POGOProtos_2fMap_2fFort_2fFortData_2eproto__INCLUDED

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
#include "POGOProtos/Enums/TeamColor.pb.h"
#include "POGOProtos/Inventory/Item/ItemId.pb.h"
#include "POGOProtos/Map/Fort/FortType.pb.h"
#include "POGOProtos/Map/Fort/FortSponsor.pb.h"
#include "POGOProtos/Map/Fort/FortRenderingType.pb.h"
#include "POGOProtos/Map/Fort/FortLureInfo.pb.h"
// @@protoc_insertion_point(includes)

namespace POGOProtos {
namespace Map {
namespace Fort {

// Internal implementation detail -- do not call these.
void protobuf_AddDesc_POGOProtos_2fMap_2fFort_2fFortData_2eproto();
void protobuf_AssignDesc_POGOProtos_2fMap_2fFort_2fFortData_2eproto();
void protobuf_ShutdownFile_POGOProtos_2fMap_2fFort_2fFortData_2eproto();

class FortData;

// ===================================================================

class FortData : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:POGOProtos.Map.Fort.FortData) */ {
 public:
  FortData();
  virtual ~FortData();

  FortData(const FortData& from);

  inline FortData& operator=(const FortData& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const FortData& default_instance();

  void Swap(FortData* other);

  // implements Message ----------------------------------------------

  inline FortData* New() const { return New(NULL); }

  FortData* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const FortData& from);
  void MergeFrom(const FortData& from);
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
  void InternalSwap(FortData* other);
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

  // optional string id = 1;
  void clear_id();
  static const int kIdFieldNumber = 1;
  const ::std::string& id() const;
  void set_id(const ::std::string& value);
  void set_id(const char* value);
  void set_id(const char* value, size_t size);
  ::std::string* mutable_id();
  ::std::string* release_id();
  void set_allocated_id(::std::string* id);

  // optional int64 last_modified_timestamp_ms = 2;
  void clear_last_modified_timestamp_ms();
  static const int kLastModifiedTimestampMsFieldNumber = 2;
  ::google::protobuf::int64 last_modified_timestamp_ms() const;
  void set_last_modified_timestamp_ms(::google::protobuf::int64 value);

  // optional double latitude = 3;
  void clear_latitude();
  static const int kLatitudeFieldNumber = 3;
  double latitude() const;
  void set_latitude(double value);

  // optional double longitude = 4;
  void clear_longitude();
  static const int kLongitudeFieldNumber = 4;
  double longitude() const;
  void set_longitude(double value);

  // optional bool enabled = 8;
  void clear_enabled();
  static const int kEnabledFieldNumber = 8;
  bool enabled() const;
  void set_enabled(bool value);

  // optional .POGOProtos.Map.Fort.FortType type = 9;
  void clear_type();
  static const int kTypeFieldNumber = 9;
  ::POGOProtos::Map::Fort::FortType type() const;
  void set_type(::POGOProtos::Map::Fort::FortType value);

  // optional .POGOProtos.Enums.TeamColor owned_by_team = 5;
  void clear_owned_by_team();
  static const int kOwnedByTeamFieldNumber = 5;
  ::POGOProtos::Enums::TeamColor owned_by_team() const;
  void set_owned_by_team(::POGOProtos::Enums::TeamColor value);

  // optional .POGOProtos.Enums.PokemonId guard_pokemon_id = 6;
  void clear_guard_pokemon_id();
  static const int kGuardPokemonIdFieldNumber = 6;
  ::POGOProtos::Enums::PokemonId guard_pokemon_id() const;
  void set_guard_pokemon_id(::POGOProtos::Enums::PokemonId value);

  // optional int32 guard_pokemon_cp = 7;
  void clear_guard_pokemon_cp();
  static const int kGuardPokemonCpFieldNumber = 7;
  ::google::protobuf::int32 guard_pokemon_cp() const;
  void set_guard_pokemon_cp(::google::protobuf::int32 value);

  // optional int64 gym_points = 10;
  void clear_gym_points();
  static const int kGymPointsFieldNumber = 10;
  ::google::protobuf::int64 gym_points() const;
  void set_gym_points(::google::protobuf::int64 value);

  // optional bool is_in_battle = 11;
  void clear_is_in_battle();
  static const int kIsInBattleFieldNumber = 11;
  bool is_in_battle() const;
  void set_is_in_battle(bool value);

  // repeated .POGOProtos.Inventory.Item.ItemId active_fort_modifier = 12;
  int active_fort_modifier_size() const;
  void clear_active_fort_modifier();
  static const int kActiveFortModifierFieldNumber = 12;
  ::POGOProtos::Inventory::Item::ItemId active_fort_modifier(int index) const;
  void set_active_fort_modifier(int index, ::POGOProtos::Inventory::Item::ItemId value);
  void add_active_fort_modifier(::POGOProtos::Inventory::Item::ItemId value);
  const ::google::protobuf::RepeatedField<int>& active_fort_modifier() const;
  ::google::protobuf::RepeatedField<int>* mutable_active_fort_modifier();

  // optional .POGOProtos.Map.Fort.FortLureInfo lure_info = 13;
  bool has_lure_info() const;
  void clear_lure_info();
  static const int kLureInfoFieldNumber = 13;
  const ::POGOProtos::Map::Fort::FortLureInfo& lure_info() const;
  ::POGOProtos::Map::Fort::FortLureInfo* mutable_lure_info();
  ::POGOProtos::Map::Fort::FortLureInfo* release_lure_info();
  void set_allocated_lure_info(::POGOProtos::Map::Fort::FortLureInfo* lure_info);

  // optional int64 cooldown_complete_timestamp_ms = 14;
  void clear_cooldown_complete_timestamp_ms();
  static const int kCooldownCompleteTimestampMsFieldNumber = 14;
  ::google::protobuf::int64 cooldown_complete_timestamp_ms() const;
  void set_cooldown_complete_timestamp_ms(::google::protobuf::int64 value);

  // optional .POGOProtos.Map.Fort.FortSponsor sponsor = 15;
  void clear_sponsor();
  static const int kSponsorFieldNumber = 15;
  ::POGOProtos::Map::Fort::FortSponsor sponsor() const;
  void set_sponsor(::POGOProtos::Map::Fort::FortSponsor value);

  // optional .POGOProtos.Map.Fort.FortRenderingType rendering_type = 16;
  void clear_rendering_type();
  static const int kRenderingTypeFieldNumber = 16;
  ::POGOProtos::Map::Fort::FortRenderingType rendering_type() const;
  void set_rendering_type(::POGOProtos::Map::Fort::FortRenderingType value);

  // @@protoc_insertion_point(class_scope:POGOProtos.Map.Fort.FortData)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  bool _is_default_instance_;
  ::google::protobuf::internal::ArenaStringPtr id_;
  ::google::protobuf::int64 last_modified_timestamp_ms_;
  double latitude_;
  double longitude_;
  int type_;
  int owned_by_team_;
  int guard_pokemon_id_;
  bool enabled_;
  bool is_in_battle_;
  ::google::protobuf::int64 gym_points_;
  ::google::protobuf::RepeatedField<int> active_fort_modifier_;
  mutable int _active_fort_modifier_cached_byte_size_;
  ::google::protobuf::int32 guard_pokemon_cp_;
  int sponsor_;
  ::POGOProtos::Map::Fort::FortLureInfo* lure_info_;
  ::google::protobuf::int64 cooldown_complete_timestamp_ms_;
  int rendering_type_;
  mutable int _cached_size_;
  friend void  protobuf_AddDesc_POGOProtos_2fMap_2fFort_2fFortData_2eproto();
  friend void protobuf_AssignDesc_POGOProtos_2fMap_2fFort_2fFortData_2eproto();
  friend void protobuf_ShutdownFile_POGOProtos_2fMap_2fFort_2fFortData_2eproto();

  void InitAsDefaultInstance();
  static FortData* default_instance_;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// FortData

// optional string id = 1;
inline void FortData::clear_id() {
  id_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& FortData::id() const {
  // @@protoc_insertion_point(field_get:POGOProtos.Map.Fort.FortData.id)
  return id_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void FortData::set_id(const ::std::string& value) {
  
  id_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:POGOProtos.Map.Fort.FortData.id)
}
inline void FortData::set_id(const char* value) {
  
  id_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:POGOProtos.Map.Fort.FortData.id)
}
inline void FortData::set_id(const char* value, size_t size) {
  
  id_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:POGOProtos.Map.Fort.FortData.id)
}
inline ::std::string* FortData::mutable_id() {
  
  // @@protoc_insertion_point(field_mutable:POGOProtos.Map.Fort.FortData.id)
  return id_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* FortData::release_id() {
  // @@protoc_insertion_point(field_release:POGOProtos.Map.Fort.FortData.id)
  
  return id_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void FortData::set_allocated_id(::std::string* id) {
  if (id != NULL) {
    
  } else {
    
  }
  id_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), id);
  // @@protoc_insertion_point(field_set_allocated:POGOProtos.Map.Fort.FortData.id)
}

// optional int64 last_modified_timestamp_ms = 2;
inline void FortData::clear_last_modified_timestamp_ms() {
  last_modified_timestamp_ms_ = GOOGLE_LONGLONG(0);
}
inline ::google::protobuf::int64 FortData::last_modified_timestamp_ms() const {
  // @@protoc_insertion_point(field_get:POGOProtos.Map.Fort.FortData.last_modified_timestamp_ms)
  return last_modified_timestamp_ms_;
}
inline void FortData::set_last_modified_timestamp_ms(::google::protobuf::int64 value) {
  
  last_modified_timestamp_ms_ = value;
  // @@protoc_insertion_point(field_set:POGOProtos.Map.Fort.FortData.last_modified_timestamp_ms)
}

// optional double latitude = 3;
inline void FortData::clear_latitude() {
  latitude_ = 0;
}
inline double FortData::latitude() const {
  // @@protoc_insertion_point(field_get:POGOProtos.Map.Fort.FortData.latitude)
  return latitude_;
}
inline void FortData::set_latitude(double value) {
  
  latitude_ = value;
  // @@protoc_insertion_point(field_set:POGOProtos.Map.Fort.FortData.latitude)
}

// optional double longitude = 4;
inline void FortData::clear_longitude() {
  longitude_ = 0;
}
inline double FortData::longitude() const {
  // @@protoc_insertion_point(field_get:POGOProtos.Map.Fort.FortData.longitude)
  return longitude_;
}
inline void FortData::set_longitude(double value) {
  
  longitude_ = value;
  // @@protoc_insertion_point(field_set:POGOProtos.Map.Fort.FortData.longitude)
}

// optional bool enabled = 8;
inline void FortData::clear_enabled() {
  enabled_ = false;
}
inline bool FortData::enabled() const {
  // @@protoc_insertion_point(field_get:POGOProtos.Map.Fort.FortData.enabled)
  return enabled_;
}
inline void FortData::set_enabled(bool value) {
  
  enabled_ = value;
  // @@protoc_insertion_point(field_set:POGOProtos.Map.Fort.FortData.enabled)
}

// optional .POGOProtos.Map.Fort.FortType type = 9;
inline void FortData::clear_type() {
  type_ = 0;
}
inline ::POGOProtos::Map::Fort::FortType FortData::type() const {
  // @@protoc_insertion_point(field_get:POGOProtos.Map.Fort.FortData.type)
  return static_cast< ::POGOProtos::Map::Fort::FortType >(type_);
}
inline void FortData::set_type(::POGOProtos::Map::Fort::FortType value) {
  
  type_ = value;
  // @@protoc_insertion_point(field_set:POGOProtos.Map.Fort.FortData.type)
}

// optional .POGOProtos.Enums.TeamColor owned_by_team = 5;
inline void FortData::clear_owned_by_team() {
  owned_by_team_ = 0;
}
inline ::POGOProtos::Enums::TeamColor FortData::owned_by_team() const {
  // @@protoc_insertion_point(field_get:POGOProtos.Map.Fort.FortData.owned_by_team)
  return static_cast< ::POGOProtos::Enums::TeamColor >(owned_by_team_);
}
inline void FortData::set_owned_by_team(::POGOProtos::Enums::TeamColor value) {
  
  owned_by_team_ = value;
  // @@protoc_insertion_point(field_set:POGOProtos.Map.Fort.FortData.owned_by_team)
}

// optional .POGOProtos.Enums.PokemonId guard_pokemon_id = 6;
inline void FortData::clear_guard_pokemon_id() {
  guard_pokemon_id_ = 0;
}
inline ::POGOProtos::Enums::PokemonId FortData::guard_pokemon_id() const {
  // @@protoc_insertion_point(field_get:POGOProtos.Map.Fort.FortData.guard_pokemon_id)
  return static_cast< ::POGOProtos::Enums::PokemonId >(guard_pokemon_id_);
}
inline void FortData::set_guard_pokemon_id(::POGOProtos::Enums::PokemonId value) {
  
  guard_pokemon_id_ = value;
  // @@protoc_insertion_point(field_set:POGOProtos.Map.Fort.FortData.guard_pokemon_id)
}

// optional int32 guard_pokemon_cp = 7;
inline void FortData::clear_guard_pokemon_cp() {
  guard_pokemon_cp_ = 0;
}
inline ::google::protobuf::int32 FortData::guard_pokemon_cp() const {
  // @@protoc_insertion_point(field_get:POGOProtos.Map.Fort.FortData.guard_pokemon_cp)
  return guard_pokemon_cp_;
}
inline void FortData::set_guard_pokemon_cp(::google::protobuf::int32 value) {
  
  guard_pokemon_cp_ = value;
  // @@protoc_insertion_point(field_set:POGOProtos.Map.Fort.FortData.guard_pokemon_cp)
}

// optional int64 gym_points = 10;
inline void FortData::clear_gym_points() {
  gym_points_ = GOOGLE_LONGLONG(0);
}
inline ::google::protobuf::int64 FortData::gym_points() const {
  // @@protoc_insertion_point(field_get:POGOProtos.Map.Fort.FortData.gym_points)
  return gym_points_;
}
inline void FortData::set_gym_points(::google::protobuf::int64 value) {
  
  gym_points_ = value;
  // @@protoc_insertion_point(field_set:POGOProtos.Map.Fort.FortData.gym_points)
}

// optional bool is_in_battle = 11;
inline void FortData::clear_is_in_battle() {
  is_in_battle_ = false;
}
inline bool FortData::is_in_battle() const {
  // @@protoc_insertion_point(field_get:POGOProtos.Map.Fort.FortData.is_in_battle)
  return is_in_battle_;
}
inline void FortData::set_is_in_battle(bool value) {
  
  is_in_battle_ = value;
  // @@protoc_insertion_point(field_set:POGOProtos.Map.Fort.FortData.is_in_battle)
}

// repeated .POGOProtos.Inventory.Item.ItemId active_fort_modifier = 12;
inline int FortData::active_fort_modifier_size() const {
  return active_fort_modifier_.size();
}
inline void FortData::clear_active_fort_modifier() {
  active_fort_modifier_.Clear();
}
inline ::POGOProtos::Inventory::Item::ItemId FortData::active_fort_modifier(int index) const {
  // @@protoc_insertion_point(field_get:POGOProtos.Map.Fort.FortData.active_fort_modifier)
  return static_cast< ::POGOProtos::Inventory::Item::ItemId >(active_fort_modifier_.Get(index));
}
inline void FortData::set_active_fort_modifier(int index, ::POGOProtos::Inventory::Item::ItemId value) {
  active_fort_modifier_.Set(index, value);
  // @@protoc_insertion_point(field_set:POGOProtos.Map.Fort.FortData.active_fort_modifier)
}
inline void FortData::add_active_fort_modifier(::POGOProtos::Inventory::Item::ItemId value) {
  active_fort_modifier_.Add(value);
  // @@protoc_insertion_point(field_add:POGOProtos.Map.Fort.FortData.active_fort_modifier)
}
inline const ::google::protobuf::RepeatedField<int>&
FortData::active_fort_modifier() const {
  // @@protoc_insertion_point(field_list:POGOProtos.Map.Fort.FortData.active_fort_modifier)
  return active_fort_modifier_;
}
inline ::google::protobuf::RepeatedField<int>*
FortData::mutable_active_fort_modifier() {
  // @@protoc_insertion_point(field_mutable_list:POGOProtos.Map.Fort.FortData.active_fort_modifier)
  return &active_fort_modifier_;
}

// optional .POGOProtos.Map.Fort.FortLureInfo lure_info = 13;
inline bool FortData::has_lure_info() const {
  return !_is_default_instance_ && lure_info_ != NULL;
}
inline void FortData::clear_lure_info() {
  if (GetArenaNoVirtual() == NULL && lure_info_ != NULL) delete lure_info_;
  lure_info_ = NULL;
}
inline const ::POGOProtos::Map::Fort::FortLureInfo& FortData::lure_info() const {
  // @@protoc_insertion_point(field_get:POGOProtos.Map.Fort.FortData.lure_info)
  return lure_info_ != NULL ? *lure_info_ : *default_instance_->lure_info_;
}
inline ::POGOProtos::Map::Fort::FortLureInfo* FortData::mutable_lure_info() {
  
  if (lure_info_ == NULL) {
    lure_info_ = new ::POGOProtos::Map::Fort::FortLureInfo;
  }
  // @@protoc_insertion_point(field_mutable:POGOProtos.Map.Fort.FortData.lure_info)
  return lure_info_;
}
inline ::POGOProtos::Map::Fort::FortLureInfo* FortData::release_lure_info() {
  // @@protoc_insertion_point(field_release:POGOProtos.Map.Fort.FortData.lure_info)
  
  ::POGOProtos::Map::Fort::FortLureInfo* temp = lure_info_;
  lure_info_ = NULL;
  return temp;
}
inline void FortData::set_allocated_lure_info(::POGOProtos::Map::Fort::FortLureInfo* lure_info) {
  delete lure_info_;
  lure_info_ = lure_info;
  if (lure_info) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:POGOProtos.Map.Fort.FortData.lure_info)
}

// optional int64 cooldown_complete_timestamp_ms = 14;
inline void FortData::clear_cooldown_complete_timestamp_ms() {
  cooldown_complete_timestamp_ms_ = GOOGLE_LONGLONG(0);
}
inline ::google::protobuf::int64 FortData::cooldown_complete_timestamp_ms() const {
  // @@protoc_insertion_point(field_get:POGOProtos.Map.Fort.FortData.cooldown_complete_timestamp_ms)
  return cooldown_complete_timestamp_ms_;
}
inline void FortData::set_cooldown_complete_timestamp_ms(::google::protobuf::int64 value) {
  
  cooldown_complete_timestamp_ms_ = value;
  // @@protoc_insertion_point(field_set:POGOProtos.Map.Fort.FortData.cooldown_complete_timestamp_ms)
}

// optional .POGOProtos.Map.Fort.FortSponsor sponsor = 15;
inline void FortData::clear_sponsor() {
  sponsor_ = 0;
}
inline ::POGOProtos::Map::Fort::FortSponsor FortData::sponsor() const {
  // @@protoc_insertion_point(field_get:POGOProtos.Map.Fort.FortData.sponsor)
  return static_cast< ::POGOProtos::Map::Fort::FortSponsor >(sponsor_);
}
inline void FortData::set_sponsor(::POGOProtos::Map::Fort::FortSponsor value) {
  
  sponsor_ = value;
  // @@protoc_insertion_point(field_set:POGOProtos.Map.Fort.FortData.sponsor)
}

// optional .POGOProtos.Map.Fort.FortRenderingType rendering_type = 16;
inline void FortData::clear_rendering_type() {
  rendering_type_ = 0;
}
inline ::POGOProtos::Map::Fort::FortRenderingType FortData::rendering_type() const {
  // @@protoc_insertion_point(field_get:POGOProtos.Map.Fort.FortData.rendering_type)
  return static_cast< ::POGOProtos::Map::Fort::FortRenderingType >(rendering_type_);
}
inline void FortData::set_rendering_type(::POGOProtos::Map::Fort::FortRenderingType value) {
  
  rendering_type_ = value;
  // @@protoc_insertion_point(field_set:POGOProtos.Map.Fort.FortData.rendering_type)
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace Fort
}  // namespace Map
}  // namespace POGOProtos

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_POGOProtos_2fMap_2fFort_2fFortData_2eproto__INCLUDED
