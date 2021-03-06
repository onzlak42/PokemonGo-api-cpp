// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: POGOProtos/Data/Player/PlayerPublicProfile.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "POGOProtos/Data/Player/PlayerPublicProfile.pb.h"

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
namespace Data {
namespace Player {

namespace {

const ::google::protobuf::Descriptor* PlayerPublicProfile_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  PlayerPublicProfile_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_POGOProtos_2fData_2fPlayer_2fPlayerPublicProfile_2eproto() GOOGLE_ATTRIBUTE_COLD;
void protobuf_AssignDesc_POGOProtos_2fData_2fPlayer_2fPlayerPublicProfile_2eproto() {
  protobuf_AddDesc_POGOProtos_2fData_2fPlayer_2fPlayerPublicProfile_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "POGOProtos/Data/Player/PlayerPublicProfile.proto");
  GOOGLE_CHECK(file != NULL);
  PlayerPublicProfile_descriptor_ = file->message_type(0);
  static const int PlayerPublicProfile_offsets_[3] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(PlayerPublicProfile, name_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(PlayerPublicProfile, level_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(PlayerPublicProfile, avatar_),
  };
  PlayerPublicProfile_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      PlayerPublicProfile_descriptor_,
      PlayerPublicProfile::default_instance_,
      PlayerPublicProfile_offsets_,
      -1,
      -1,
      -1,
      sizeof(PlayerPublicProfile),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(PlayerPublicProfile, _internal_metadata_),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(PlayerPublicProfile, _is_default_instance_));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_POGOProtos_2fData_2fPlayer_2fPlayerPublicProfile_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      PlayerPublicProfile_descriptor_, &PlayerPublicProfile::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_POGOProtos_2fData_2fPlayer_2fPlayerPublicProfile_2eproto() {
  delete PlayerPublicProfile::default_instance_;
  delete PlayerPublicProfile_reflection_;
}

void protobuf_AddDesc_POGOProtos_2fData_2fPlayer_2fPlayerPublicProfile_2eproto() GOOGLE_ATTRIBUTE_COLD;
void protobuf_AddDesc_POGOProtos_2fData_2fPlayer_2fPlayerPublicProfile_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::POGOProtos::Data::Player::protobuf_AddDesc_POGOProtos_2fData_2fPlayer_2fPlayerAvatar_2eproto();
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n0POGOProtos/Data/Player/PlayerPublicPro"
    "file.proto\022\026POGOProtos.Data.Player\032)POGO"
    "Protos/Data/Player/PlayerAvatar.proto\"h\n"
    "\023PlayerPublicProfile\022\014\n\004name\030\001 \001(\t\022\r\n\005le"
    "vel\030\002 \001(\005\0224\n\006avatar\030\003 \001(\0132$.POGOProtos.D"
    "ata.Player.PlayerAvatarb\006proto3", 231);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "POGOProtos/Data/Player/PlayerPublicProfile.proto", &protobuf_RegisterTypes);
  PlayerPublicProfile::default_instance_ = new PlayerPublicProfile();
  PlayerPublicProfile::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_POGOProtos_2fData_2fPlayer_2fPlayerPublicProfile_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_POGOProtos_2fData_2fPlayer_2fPlayerPublicProfile_2eproto {
  StaticDescriptorInitializer_POGOProtos_2fData_2fPlayer_2fPlayerPublicProfile_2eproto() {
    protobuf_AddDesc_POGOProtos_2fData_2fPlayer_2fPlayerPublicProfile_2eproto();
  }
} static_descriptor_initializer_POGOProtos_2fData_2fPlayer_2fPlayerPublicProfile_2eproto_;

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int PlayerPublicProfile::kNameFieldNumber;
const int PlayerPublicProfile::kLevelFieldNumber;
const int PlayerPublicProfile::kAvatarFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

PlayerPublicProfile::PlayerPublicProfile()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:POGOProtos.Data.Player.PlayerPublicProfile)
}

void PlayerPublicProfile::InitAsDefaultInstance() {
  _is_default_instance_ = true;
  avatar_ = const_cast< ::POGOProtos::Data::Player::PlayerAvatar*>(&::POGOProtos::Data::Player::PlayerAvatar::default_instance());
}

PlayerPublicProfile::PlayerPublicProfile(const PlayerPublicProfile& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:POGOProtos.Data.Player.PlayerPublicProfile)
}

void PlayerPublicProfile::SharedCtor() {
    _is_default_instance_ = false;
  ::google::protobuf::internal::GetEmptyString();
  _cached_size_ = 0;
  name_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  level_ = 0;
  avatar_ = NULL;
}

PlayerPublicProfile::~PlayerPublicProfile() {
  // @@protoc_insertion_point(destructor:POGOProtos.Data.Player.PlayerPublicProfile)
  SharedDtor();
}

void PlayerPublicProfile::SharedDtor() {
  name_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (this != default_instance_) {
    delete avatar_;
  }
}

void PlayerPublicProfile::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* PlayerPublicProfile::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return PlayerPublicProfile_descriptor_;
}

const PlayerPublicProfile& PlayerPublicProfile::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_POGOProtos_2fData_2fPlayer_2fPlayerPublicProfile_2eproto();
  return *default_instance_;
}

PlayerPublicProfile* PlayerPublicProfile::default_instance_ = NULL;

PlayerPublicProfile* PlayerPublicProfile::New(::google::protobuf::Arena* arena) const {
  PlayerPublicProfile* n = new PlayerPublicProfile;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void PlayerPublicProfile::Clear() {
// @@protoc_insertion_point(message_clear_start:POGOProtos.Data.Player.PlayerPublicProfile)
  name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  level_ = 0;
  if (GetArenaNoVirtual() == NULL && avatar_ != NULL) delete avatar_;
  avatar_ = NULL;
}

bool PlayerPublicProfile::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:POGOProtos.Data.Player.PlayerPublicProfile)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional string name = 1;
      case 1: {
        if (tag == 10) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_name()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->name().data(), this->name().length(),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "POGOProtos.Data.Player.PlayerPublicProfile.name"));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(16)) goto parse_level;
        break;
      }

      // optional int32 level = 2;
      case 2: {
        if (tag == 16) {
         parse_level:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &level_)));

        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(26)) goto parse_avatar;
        break;
      }

      // optional .POGOProtos.Data.Player.PlayerAvatar avatar = 3;
      case 3: {
        if (tag == 26) {
         parse_avatar:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_avatar()));
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
  // @@protoc_insertion_point(parse_success:POGOProtos.Data.Player.PlayerPublicProfile)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:POGOProtos.Data.Player.PlayerPublicProfile)
  return false;
#undef DO_
}

void PlayerPublicProfile::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:POGOProtos.Data.Player.PlayerPublicProfile)
  // optional string name = 1;
  if (this->name().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->name().data(), this->name().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "POGOProtos.Data.Player.PlayerPublicProfile.name");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->name(), output);
  }

  // optional int32 level = 2;
  if (this->level() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(2, this->level(), output);
  }

  // optional .POGOProtos.Data.Player.PlayerAvatar avatar = 3;
  if (this->has_avatar()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      3, *this->avatar_, output);
  }

  // @@protoc_insertion_point(serialize_end:POGOProtos.Data.Player.PlayerPublicProfile)
}

::google::protobuf::uint8* PlayerPublicProfile::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:POGOProtos.Data.Player.PlayerPublicProfile)
  // optional string name = 1;
  if (this->name().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->name().data(), this->name().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "POGOProtos.Data.Player.PlayerPublicProfile.name");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->name(), target);
  }

  // optional int32 level = 2;
  if (this->level() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(2, this->level(), target);
  }

  // optional .POGOProtos.Data.Player.PlayerAvatar avatar = 3;
  if (this->has_avatar()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        3, *this->avatar_, false, target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:POGOProtos.Data.Player.PlayerPublicProfile)
  return target;
}

int PlayerPublicProfile::ByteSize() const {
// @@protoc_insertion_point(message_byte_size_start:POGOProtos.Data.Player.PlayerPublicProfile)
  int total_size = 0;

  // optional string name = 1;
  if (this->name().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->name());
  }

  // optional int32 level = 2;
  if (this->level() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->level());
  }

  // optional .POGOProtos.Data.Player.PlayerAvatar avatar = 3;
  if (this->has_avatar()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        *this->avatar_);
  }

  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void PlayerPublicProfile::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:POGOProtos.Data.Player.PlayerPublicProfile)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  const PlayerPublicProfile* source = 
      ::google::protobuf::internal::DynamicCastToGenerated<const PlayerPublicProfile>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:POGOProtos.Data.Player.PlayerPublicProfile)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:POGOProtos.Data.Player.PlayerPublicProfile)
    MergeFrom(*source);
  }
}

void PlayerPublicProfile::MergeFrom(const PlayerPublicProfile& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:POGOProtos.Data.Player.PlayerPublicProfile)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  if (from.name().size() > 0) {

    name_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.name_);
  }
  if (from.level() != 0) {
    set_level(from.level());
  }
  if (from.has_avatar()) {
    mutable_avatar()->::POGOProtos::Data::Player::PlayerAvatar::MergeFrom(from.avatar());
  }
}

void PlayerPublicProfile::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:POGOProtos.Data.Player.PlayerPublicProfile)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void PlayerPublicProfile::CopyFrom(const PlayerPublicProfile& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:POGOProtos.Data.Player.PlayerPublicProfile)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool PlayerPublicProfile::IsInitialized() const {

  return true;
}

void PlayerPublicProfile::Swap(PlayerPublicProfile* other) {
  if (other == this) return;
  InternalSwap(other);
}
void PlayerPublicProfile::InternalSwap(PlayerPublicProfile* other) {
  name_.Swap(&other->name_);
  std::swap(level_, other->level_);
  std::swap(avatar_, other->avatar_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata PlayerPublicProfile::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = PlayerPublicProfile_descriptor_;
  metadata.reflection = PlayerPublicProfile_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// PlayerPublicProfile

// optional string name = 1;
void PlayerPublicProfile::clear_name() {
  name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 const ::std::string& PlayerPublicProfile::name() const {
  // @@protoc_insertion_point(field_get:POGOProtos.Data.Player.PlayerPublicProfile.name)
  return name_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void PlayerPublicProfile::set_name(const ::std::string& value) {
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:POGOProtos.Data.Player.PlayerPublicProfile.name)
}
 void PlayerPublicProfile::set_name(const char* value) {
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:POGOProtos.Data.Player.PlayerPublicProfile.name)
}
 void PlayerPublicProfile::set_name(const char* value, size_t size) {
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:POGOProtos.Data.Player.PlayerPublicProfile.name)
}
 ::std::string* PlayerPublicProfile::mutable_name() {
  
  // @@protoc_insertion_point(field_mutable:POGOProtos.Data.Player.PlayerPublicProfile.name)
  return name_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 ::std::string* PlayerPublicProfile::release_name() {
  // @@protoc_insertion_point(field_release:POGOProtos.Data.Player.PlayerPublicProfile.name)
  
  return name_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void PlayerPublicProfile::set_allocated_name(::std::string* name) {
  if (name != NULL) {
    
  } else {
    
  }
  name_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), name);
  // @@protoc_insertion_point(field_set_allocated:POGOProtos.Data.Player.PlayerPublicProfile.name)
}

// optional int32 level = 2;
void PlayerPublicProfile::clear_level() {
  level_ = 0;
}
 ::google::protobuf::int32 PlayerPublicProfile::level() const {
  // @@protoc_insertion_point(field_get:POGOProtos.Data.Player.PlayerPublicProfile.level)
  return level_;
}
 void PlayerPublicProfile::set_level(::google::protobuf::int32 value) {
  
  level_ = value;
  // @@protoc_insertion_point(field_set:POGOProtos.Data.Player.PlayerPublicProfile.level)
}

// optional .POGOProtos.Data.Player.PlayerAvatar avatar = 3;
bool PlayerPublicProfile::has_avatar() const {
  return !_is_default_instance_ && avatar_ != NULL;
}
void PlayerPublicProfile::clear_avatar() {
  if (GetArenaNoVirtual() == NULL && avatar_ != NULL) delete avatar_;
  avatar_ = NULL;
}
const ::POGOProtos::Data::Player::PlayerAvatar& PlayerPublicProfile::avatar() const {
  // @@protoc_insertion_point(field_get:POGOProtos.Data.Player.PlayerPublicProfile.avatar)
  return avatar_ != NULL ? *avatar_ : *default_instance_->avatar_;
}
::POGOProtos::Data::Player::PlayerAvatar* PlayerPublicProfile::mutable_avatar() {
  
  if (avatar_ == NULL) {
    avatar_ = new ::POGOProtos::Data::Player::PlayerAvatar;
  }
  // @@protoc_insertion_point(field_mutable:POGOProtos.Data.Player.PlayerPublicProfile.avatar)
  return avatar_;
}
::POGOProtos::Data::Player::PlayerAvatar* PlayerPublicProfile::release_avatar() {
  // @@protoc_insertion_point(field_release:POGOProtos.Data.Player.PlayerPublicProfile.avatar)
  
  ::POGOProtos::Data::Player::PlayerAvatar* temp = avatar_;
  avatar_ = NULL;
  return temp;
}
void PlayerPublicProfile::set_allocated_avatar(::POGOProtos::Data::Player::PlayerAvatar* avatar) {
  delete avatar_;
  avatar_ = avatar;
  if (avatar) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:POGOProtos.Data.Player.PlayerPublicProfile.avatar)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace Player
}  // namespace Data
}  // namespace POGOProtos

// @@protoc_insertion_point(global_scope)
