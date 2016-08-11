// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: POGOProtos/Data/Logs/CatchPokemonLogEntry.proto

#ifndef PROTOBUF_POGOProtos_2fData_2fLogs_2fCatchPokemonLogEntry_2eproto__INCLUDED
#define PROTOBUF_POGOProtos_2fData_2fLogs_2fCatchPokemonLogEntry_2eproto__INCLUDED

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
#include "POGOProtos/Enums/PokemonId.pb.h"
// @@protoc_insertion_point(includes)

namespace POGOProtos {
namespace Data {
namespace Logs {

// Internal implementation detail -- do not call these.
void protobuf_AddDesc_POGOProtos_2fData_2fLogs_2fCatchPokemonLogEntry_2eproto();
void protobuf_AssignDesc_POGOProtos_2fData_2fLogs_2fCatchPokemonLogEntry_2eproto();
void protobuf_ShutdownFile_POGOProtos_2fData_2fLogs_2fCatchPokemonLogEntry_2eproto();

class CatchPokemonLogEntry;

enum CatchPokemonLogEntry_Result {
  CatchPokemonLogEntry_Result_UNSET = 0,
  CatchPokemonLogEntry_Result_POKEMON_CAPTURED = 1,
  CatchPokemonLogEntry_Result_POKEMON_FLED = 2,
  CatchPokemonLogEntry_Result_CatchPokemonLogEntry_Result_INT_MIN_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32min,
  CatchPokemonLogEntry_Result_CatchPokemonLogEntry_Result_INT_MAX_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32max
};
bool CatchPokemonLogEntry_Result_IsValid(int value);
const CatchPokemonLogEntry_Result CatchPokemonLogEntry_Result_Result_MIN = CatchPokemonLogEntry_Result_UNSET;
const CatchPokemonLogEntry_Result CatchPokemonLogEntry_Result_Result_MAX = CatchPokemonLogEntry_Result_POKEMON_FLED;
const int CatchPokemonLogEntry_Result_Result_ARRAYSIZE = CatchPokemonLogEntry_Result_Result_MAX + 1;

const ::google::protobuf::EnumDescriptor* CatchPokemonLogEntry_Result_descriptor();
inline const ::std::string& CatchPokemonLogEntry_Result_Name(CatchPokemonLogEntry_Result value) {
  return ::google::protobuf::internal::NameOfEnum(
    CatchPokemonLogEntry_Result_descriptor(), value);
}
inline bool CatchPokemonLogEntry_Result_Parse(
    const ::std::string& name, CatchPokemonLogEntry_Result* value) {
  return ::google::protobuf::internal::ParseNamedEnum<CatchPokemonLogEntry_Result>(
    CatchPokemonLogEntry_Result_descriptor(), name, value);
}
// ===================================================================

class CatchPokemonLogEntry : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:POGOProtos.Data.Logs.CatchPokemonLogEntry) */ {
 public:
  CatchPokemonLogEntry();
  virtual ~CatchPokemonLogEntry();

  CatchPokemonLogEntry(const CatchPokemonLogEntry& from);

  inline CatchPokemonLogEntry& operator=(const CatchPokemonLogEntry& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const CatchPokemonLogEntry& default_instance();

  void Swap(CatchPokemonLogEntry* other);

  // implements Message ----------------------------------------------

  inline CatchPokemonLogEntry* New() const { return New(NULL); }

  CatchPokemonLogEntry* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const CatchPokemonLogEntry& from);
  void MergeFrom(const CatchPokemonLogEntry& from);
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
  void InternalSwap(CatchPokemonLogEntry* other);
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

  typedef CatchPokemonLogEntry_Result Result;
  static const Result UNSET =
    CatchPokemonLogEntry_Result_UNSET;
  static const Result POKEMON_CAPTURED =
    CatchPokemonLogEntry_Result_POKEMON_CAPTURED;
  static const Result POKEMON_FLED =
    CatchPokemonLogEntry_Result_POKEMON_FLED;
  static inline bool Result_IsValid(int value) {
    return CatchPokemonLogEntry_Result_IsValid(value);
  }
  static const Result Result_MIN =
    CatchPokemonLogEntry_Result_Result_MIN;
  static const Result Result_MAX =
    CatchPokemonLogEntry_Result_Result_MAX;
  static const int Result_ARRAYSIZE =
    CatchPokemonLogEntry_Result_Result_ARRAYSIZE;
  static inline const ::google::protobuf::EnumDescriptor*
  Result_descriptor() {
    return CatchPokemonLogEntry_Result_descriptor();
  }
  static inline const ::std::string& Result_Name(Result value) {
    return CatchPokemonLogEntry_Result_Name(value);
  }
  static inline bool Result_Parse(const ::std::string& name,
      Result* value) {
    return CatchPokemonLogEntry_Result_Parse(name, value);
  }

  // accessors -------------------------------------------------------

  // optional .POGOProtos.Data.Logs.CatchPokemonLogEntry.Result result = 1;
  void clear_result();
  static const int kResultFieldNumber = 1;
  ::POGOProtos::Data::Logs::CatchPokemonLogEntry_Result result() const;
  void set_result(::POGOProtos::Data::Logs::CatchPokemonLogEntry_Result value);

  // optional .POGOProtos.Enums.PokemonId pokemon_id = 2;
  void clear_pokemon_id();
  static const int kPokemonIdFieldNumber = 2;
  ::POGOProtos::Enums::PokemonId pokemon_id() const;
  void set_pokemon_id(::POGOProtos::Enums::PokemonId value);

  // optional int32 combat_points = 3;
  void clear_combat_points();
  static const int kCombatPointsFieldNumber = 3;
  ::google::protobuf::int32 combat_points() const;
  void set_combat_points(::google::protobuf::int32 value);

  // optional uint64 pokemon_data_id = 4;
  void clear_pokemon_data_id();
  static const int kPokemonDataIdFieldNumber = 4;
  ::google::protobuf::uint64 pokemon_data_id() const;
  void set_pokemon_data_id(::google::protobuf::uint64 value);

  // @@protoc_insertion_point(class_scope:POGOProtos.Data.Logs.CatchPokemonLogEntry)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  bool _is_default_instance_;
  int result_;
  int pokemon_id_;
  ::google::protobuf::uint64 pokemon_data_id_;
  ::google::protobuf::int32 combat_points_;
  mutable int _cached_size_;
  friend void  protobuf_AddDesc_POGOProtos_2fData_2fLogs_2fCatchPokemonLogEntry_2eproto();
  friend void protobuf_AssignDesc_POGOProtos_2fData_2fLogs_2fCatchPokemonLogEntry_2eproto();
  friend void protobuf_ShutdownFile_POGOProtos_2fData_2fLogs_2fCatchPokemonLogEntry_2eproto();

  void InitAsDefaultInstance();
  static CatchPokemonLogEntry* default_instance_;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// CatchPokemonLogEntry

// optional .POGOProtos.Data.Logs.CatchPokemonLogEntry.Result result = 1;
inline void CatchPokemonLogEntry::clear_result() {
  result_ = 0;
}
inline ::POGOProtos::Data::Logs::CatchPokemonLogEntry_Result CatchPokemonLogEntry::result() const {
  // @@protoc_insertion_point(field_get:POGOProtos.Data.Logs.CatchPokemonLogEntry.result)
  return static_cast< ::POGOProtos::Data::Logs::CatchPokemonLogEntry_Result >(result_);
}
inline void CatchPokemonLogEntry::set_result(::POGOProtos::Data::Logs::CatchPokemonLogEntry_Result value) {
  
  result_ = value;
  // @@protoc_insertion_point(field_set:POGOProtos.Data.Logs.CatchPokemonLogEntry.result)
}

// optional .POGOProtos.Enums.PokemonId pokemon_id = 2;
inline void CatchPokemonLogEntry::clear_pokemon_id() {
  pokemon_id_ = 0;
}
inline ::POGOProtos::Enums::PokemonId CatchPokemonLogEntry::pokemon_id() const {
  // @@protoc_insertion_point(field_get:POGOProtos.Data.Logs.CatchPokemonLogEntry.pokemon_id)
  return static_cast< ::POGOProtos::Enums::PokemonId >(pokemon_id_);
}
inline void CatchPokemonLogEntry::set_pokemon_id(::POGOProtos::Enums::PokemonId value) {
  
  pokemon_id_ = value;
  // @@protoc_insertion_point(field_set:POGOProtos.Data.Logs.CatchPokemonLogEntry.pokemon_id)
}

// optional int32 combat_points = 3;
inline void CatchPokemonLogEntry::clear_combat_points() {
  combat_points_ = 0;
}
inline ::google::protobuf::int32 CatchPokemonLogEntry::combat_points() const {
  // @@protoc_insertion_point(field_get:POGOProtos.Data.Logs.CatchPokemonLogEntry.combat_points)
  return combat_points_;
}
inline void CatchPokemonLogEntry::set_combat_points(::google::protobuf::int32 value) {
  
  combat_points_ = value;
  // @@protoc_insertion_point(field_set:POGOProtos.Data.Logs.CatchPokemonLogEntry.combat_points)
}

// optional uint64 pokemon_data_id = 4;
inline void CatchPokemonLogEntry::clear_pokemon_data_id() {
  pokemon_data_id_ = GOOGLE_ULONGLONG(0);
}
inline ::google::protobuf::uint64 CatchPokemonLogEntry::pokemon_data_id() const {
  // @@protoc_insertion_point(field_get:POGOProtos.Data.Logs.CatchPokemonLogEntry.pokemon_data_id)
  return pokemon_data_id_;
}
inline void CatchPokemonLogEntry::set_pokemon_data_id(::google::protobuf::uint64 value) {
  
  pokemon_data_id_ = value;
  // @@protoc_insertion_point(field_set:POGOProtos.Data.Logs.CatchPokemonLogEntry.pokemon_data_id)
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace Logs
}  // namespace Data
}  // namespace POGOProtos

#ifndef SWIG
namespace google {
namespace protobuf {

template <> struct is_proto_enum< ::POGOProtos::Data::Logs::CatchPokemonLogEntry_Result> : ::google::protobuf::internal::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::POGOProtos::Data::Logs::CatchPokemonLogEntry_Result>() {
  return ::POGOProtos::Data::Logs::CatchPokemonLogEntry_Result_descriptor();
}

}  // namespace protobuf
}  // namespace google
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_POGOProtos_2fData_2fLogs_2fCatchPokemonLogEntry_2eproto__INCLUDED