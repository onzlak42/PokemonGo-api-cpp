// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: POGOProtos/Networking/Responses/SetContactSettingsResponse.proto

#ifndef PROTOBUF_POGOProtos_2fNetworking_2fResponses_2fSetContactSettingsResponse_2eproto__INCLUDED
#define PROTOBUF_POGOProtos_2fNetworking_2fResponses_2fSetContactSettingsResponse_2eproto__INCLUDED

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
#include "POGOProtos/Data/PlayerData.pb.h"
// @@protoc_insertion_point(includes)

namespace POGOProtos {
namespace Networking {
namespace Responses {

// Internal implementation detail -- do not call these.
void protobuf_AddDesc_POGOProtos_2fNetworking_2fResponses_2fSetContactSettingsResponse_2eproto();
void protobuf_AssignDesc_POGOProtos_2fNetworking_2fResponses_2fSetContactSettingsResponse_2eproto();
void protobuf_ShutdownFile_POGOProtos_2fNetworking_2fResponses_2fSetContactSettingsResponse_2eproto();

class SetContactSettingsResponse;

enum SetContactSettingsResponse_Status {
  SetContactSettingsResponse_Status_UNSET = 0,
  SetContactSettingsResponse_Status_SUCCESS = 1,
  SetContactSettingsResponse_Status_FAILURE = 2,
  SetContactSettingsResponse_Status_SetContactSettingsResponse_Status_INT_MIN_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32min,
  SetContactSettingsResponse_Status_SetContactSettingsResponse_Status_INT_MAX_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32max
};
bool SetContactSettingsResponse_Status_IsValid(int value);
const SetContactSettingsResponse_Status SetContactSettingsResponse_Status_Status_MIN = SetContactSettingsResponse_Status_UNSET;
const SetContactSettingsResponse_Status SetContactSettingsResponse_Status_Status_MAX = SetContactSettingsResponse_Status_FAILURE;
const int SetContactSettingsResponse_Status_Status_ARRAYSIZE = SetContactSettingsResponse_Status_Status_MAX + 1;

const ::google::protobuf::EnumDescriptor* SetContactSettingsResponse_Status_descriptor();
inline const ::std::string& SetContactSettingsResponse_Status_Name(SetContactSettingsResponse_Status value) {
  return ::google::protobuf::internal::NameOfEnum(
    SetContactSettingsResponse_Status_descriptor(), value);
}
inline bool SetContactSettingsResponse_Status_Parse(
    const ::std::string& name, SetContactSettingsResponse_Status* value) {
  return ::google::protobuf::internal::ParseNamedEnum<SetContactSettingsResponse_Status>(
    SetContactSettingsResponse_Status_descriptor(), name, value);
}
// ===================================================================

class SetContactSettingsResponse : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:POGOProtos.Networking.Responses.SetContactSettingsResponse) */ {
 public:
  SetContactSettingsResponse();
  virtual ~SetContactSettingsResponse();

  SetContactSettingsResponse(const SetContactSettingsResponse& from);

  inline SetContactSettingsResponse& operator=(const SetContactSettingsResponse& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const SetContactSettingsResponse& default_instance();

  void Swap(SetContactSettingsResponse* other);

  // implements Message ----------------------------------------------

  inline SetContactSettingsResponse* New() const { return New(NULL); }

  SetContactSettingsResponse* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const SetContactSettingsResponse& from);
  void MergeFrom(const SetContactSettingsResponse& from);
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
  void InternalSwap(SetContactSettingsResponse* other);
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

  typedef SetContactSettingsResponse_Status Status;
  static const Status UNSET =
    SetContactSettingsResponse_Status_UNSET;
  static const Status SUCCESS =
    SetContactSettingsResponse_Status_SUCCESS;
  static const Status FAILURE =
    SetContactSettingsResponse_Status_FAILURE;
  static inline bool Status_IsValid(int value) {
    return SetContactSettingsResponse_Status_IsValid(value);
  }
  static const Status Status_MIN =
    SetContactSettingsResponse_Status_Status_MIN;
  static const Status Status_MAX =
    SetContactSettingsResponse_Status_Status_MAX;
  static const int Status_ARRAYSIZE =
    SetContactSettingsResponse_Status_Status_ARRAYSIZE;
  static inline const ::google::protobuf::EnumDescriptor*
  Status_descriptor() {
    return SetContactSettingsResponse_Status_descriptor();
  }
  static inline const ::std::string& Status_Name(Status value) {
    return SetContactSettingsResponse_Status_Name(value);
  }
  static inline bool Status_Parse(const ::std::string& name,
      Status* value) {
    return SetContactSettingsResponse_Status_Parse(name, value);
  }

  // accessors -------------------------------------------------------

  // optional .POGOProtos.Networking.Responses.SetContactSettingsResponse.Status status = 1;
  void clear_status();
  static const int kStatusFieldNumber = 1;
  ::POGOProtos::Networking::Responses::SetContactSettingsResponse_Status status() const;
  void set_status(::POGOProtos::Networking::Responses::SetContactSettingsResponse_Status value);

  // optional .POGOProtos.Data.PlayerData player_data = 2;
  bool has_player_data() const;
  void clear_player_data();
  static const int kPlayerDataFieldNumber = 2;
  const ::POGOProtos::Data::PlayerData& player_data() const;
  ::POGOProtos::Data::PlayerData* mutable_player_data();
  ::POGOProtos::Data::PlayerData* release_player_data();
  void set_allocated_player_data(::POGOProtos::Data::PlayerData* player_data);

  // @@protoc_insertion_point(class_scope:POGOProtos.Networking.Responses.SetContactSettingsResponse)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  bool _is_default_instance_;
  ::POGOProtos::Data::PlayerData* player_data_;
  int status_;
  mutable int _cached_size_;
  friend void  protobuf_AddDesc_POGOProtos_2fNetworking_2fResponses_2fSetContactSettingsResponse_2eproto();
  friend void protobuf_AssignDesc_POGOProtos_2fNetworking_2fResponses_2fSetContactSettingsResponse_2eproto();
  friend void protobuf_ShutdownFile_POGOProtos_2fNetworking_2fResponses_2fSetContactSettingsResponse_2eproto();

  void InitAsDefaultInstance();
  static SetContactSettingsResponse* default_instance_;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// SetContactSettingsResponse

// optional .POGOProtos.Networking.Responses.SetContactSettingsResponse.Status status = 1;
inline void SetContactSettingsResponse::clear_status() {
  status_ = 0;
}
inline ::POGOProtos::Networking::Responses::SetContactSettingsResponse_Status SetContactSettingsResponse::status() const {
  // @@protoc_insertion_point(field_get:POGOProtos.Networking.Responses.SetContactSettingsResponse.status)
  return static_cast< ::POGOProtos::Networking::Responses::SetContactSettingsResponse_Status >(status_);
}
inline void SetContactSettingsResponse::set_status(::POGOProtos::Networking::Responses::SetContactSettingsResponse_Status value) {
  
  status_ = value;
  // @@protoc_insertion_point(field_set:POGOProtos.Networking.Responses.SetContactSettingsResponse.status)
}

// optional .POGOProtos.Data.PlayerData player_data = 2;
inline bool SetContactSettingsResponse::has_player_data() const {
  return !_is_default_instance_ && player_data_ != NULL;
}
inline void SetContactSettingsResponse::clear_player_data() {
  if (GetArenaNoVirtual() == NULL && player_data_ != NULL) delete player_data_;
  player_data_ = NULL;
}
inline const ::POGOProtos::Data::PlayerData& SetContactSettingsResponse::player_data() const {
  // @@protoc_insertion_point(field_get:POGOProtos.Networking.Responses.SetContactSettingsResponse.player_data)
  return player_data_ != NULL ? *player_data_ : *default_instance_->player_data_;
}
inline ::POGOProtos::Data::PlayerData* SetContactSettingsResponse::mutable_player_data() {
  
  if (player_data_ == NULL) {
    player_data_ = new ::POGOProtos::Data::PlayerData;
  }
  // @@protoc_insertion_point(field_mutable:POGOProtos.Networking.Responses.SetContactSettingsResponse.player_data)
  return player_data_;
}
inline ::POGOProtos::Data::PlayerData* SetContactSettingsResponse::release_player_data() {
  // @@protoc_insertion_point(field_release:POGOProtos.Networking.Responses.SetContactSettingsResponse.player_data)
  
  ::POGOProtos::Data::PlayerData* temp = player_data_;
  player_data_ = NULL;
  return temp;
}
inline void SetContactSettingsResponse::set_allocated_player_data(::POGOProtos::Data::PlayerData* player_data) {
  delete player_data_;
  player_data_ = player_data;
  if (player_data) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:POGOProtos.Networking.Responses.SetContactSettingsResponse.player_data)
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace Responses
}  // namespace Networking
}  // namespace POGOProtos

#ifndef SWIG
namespace google {
namespace protobuf {

template <> struct is_proto_enum< ::POGOProtos::Networking::Responses::SetContactSettingsResponse_Status> : ::google::protobuf::internal::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::POGOProtos::Networking::Responses::SetContactSettingsResponse_Status>() {
  return ::POGOProtos::Networking::Responses::SetContactSettingsResponse_Status_descriptor();
}

}  // namespace protobuf
}  // namespace google
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_POGOProtos_2fNetworking_2fResponses_2fSetContactSettingsResponse_2eproto__INCLUDED