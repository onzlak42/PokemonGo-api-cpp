// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: POGOProtos/Networking/Requests/Messages/SetAvatarMessage.proto

#ifndef PROTOBUF_POGOProtos_2fNetworking_2fRequests_2fMessages_2fSetAvatarMessage_2eproto__INCLUDED
#define PROTOBUF_POGOProtos_2fNetworking_2fRequests_2fMessages_2fSetAvatarMessage_2eproto__INCLUDED

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
#include "POGOProtos/Data/Player/PlayerAvatar.pb.h"
// @@protoc_insertion_point(includes)

namespace POGOProtos {
namespace Networking {
namespace Requests {
namespace Messages {

// Internal implementation detail -- do not call these.
void protobuf_AddDesc_POGOProtos_2fNetworking_2fRequests_2fMessages_2fSetAvatarMessage_2eproto();
void protobuf_AssignDesc_POGOProtos_2fNetworking_2fRequests_2fMessages_2fSetAvatarMessage_2eproto();
void protobuf_ShutdownFile_POGOProtos_2fNetworking_2fRequests_2fMessages_2fSetAvatarMessage_2eproto();

class SetAvatarMessage;

// ===================================================================

class SetAvatarMessage : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:POGOProtos.Networking.Requests.Messages.SetAvatarMessage) */ {
 public:
  SetAvatarMessage();
  virtual ~SetAvatarMessage();

  SetAvatarMessage(const SetAvatarMessage& from);

  inline SetAvatarMessage& operator=(const SetAvatarMessage& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const SetAvatarMessage& default_instance();

  void Swap(SetAvatarMessage* other);

  // implements Message ----------------------------------------------

  inline SetAvatarMessage* New() const { return New(NULL); }

  SetAvatarMessage* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const SetAvatarMessage& from);
  void MergeFrom(const SetAvatarMessage& from);
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
  void InternalSwap(SetAvatarMessage* other);
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

  // optional .POGOProtos.Data.Player.PlayerAvatar player_avatar = 2;
  bool has_player_avatar() const;
  void clear_player_avatar();
  static const int kPlayerAvatarFieldNumber = 2;
  const ::POGOProtos::Data::Player::PlayerAvatar& player_avatar() const;
  ::POGOProtos::Data::Player::PlayerAvatar* mutable_player_avatar();
  ::POGOProtos::Data::Player::PlayerAvatar* release_player_avatar();
  void set_allocated_player_avatar(::POGOProtos::Data::Player::PlayerAvatar* player_avatar);

  // @@protoc_insertion_point(class_scope:POGOProtos.Networking.Requests.Messages.SetAvatarMessage)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  bool _is_default_instance_;
  ::POGOProtos::Data::Player::PlayerAvatar* player_avatar_;
  mutable int _cached_size_;
  friend void  protobuf_AddDesc_POGOProtos_2fNetworking_2fRequests_2fMessages_2fSetAvatarMessage_2eproto();
  friend void protobuf_AssignDesc_POGOProtos_2fNetworking_2fRequests_2fMessages_2fSetAvatarMessage_2eproto();
  friend void protobuf_ShutdownFile_POGOProtos_2fNetworking_2fRequests_2fMessages_2fSetAvatarMessage_2eproto();

  void InitAsDefaultInstance();
  static SetAvatarMessage* default_instance_;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// SetAvatarMessage

// optional .POGOProtos.Data.Player.PlayerAvatar player_avatar = 2;
inline bool SetAvatarMessage::has_player_avatar() const {
  return !_is_default_instance_ && player_avatar_ != NULL;
}
inline void SetAvatarMessage::clear_player_avatar() {
  if (GetArenaNoVirtual() == NULL && player_avatar_ != NULL) delete player_avatar_;
  player_avatar_ = NULL;
}
inline const ::POGOProtos::Data::Player::PlayerAvatar& SetAvatarMessage::player_avatar() const {
  // @@protoc_insertion_point(field_get:POGOProtos.Networking.Requests.Messages.SetAvatarMessage.player_avatar)
  return player_avatar_ != NULL ? *player_avatar_ : *default_instance_->player_avatar_;
}
inline ::POGOProtos::Data::Player::PlayerAvatar* SetAvatarMessage::mutable_player_avatar() {
  
  if (player_avatar_ == NULL) {
    player_avatar_ = new ::POGOProtos::Data::Player::PlayerAvatar;
  }
  // @@protoc_insertion_point(field_mutable:POGOProtos.Networking.Requests.Messages.SetAvatarMessage.player_avatar)
  return player_avatar_;
}
inline ::POGOProtos::Data::Player::PlayerAvatar* SetAvatarMessage::release_player_avatar() {
  // @@protoc_insertion_point(field_release:POGOProtos.Networking.Requests.Messages.SetAvatarMessage.player_avatar)
  
  ::POGOProtos::Data::Player::PlayerAvatar* temp = player_avatar_;
  player_avatar_ = NULL;
  return temp;
}
inline void SetAvatarMessage::set_allocated_player_avatar(::POGOProtos::Data::Player::PlayerAvatar* player_avatar) {
  delete player_avatar_;
  player_avatar_ = player_avatar;
  if (player_avatar) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:POGOProtos.Networking.Requests.Messages.SetAvatarMessage.player_avatar)
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace Messages
}  // namespace Requests
}  // namespace Networking
}  // namespace POGOProtos

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_POGOProtos_2fNetworking_2fRequests_2fMessages_2fSetAvatarMessage_2eproto__INCLUDED
