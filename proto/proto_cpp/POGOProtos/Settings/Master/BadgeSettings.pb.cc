// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: POGOProtos/Settings/Master/BadgeSettings.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "POGOProtos/Settings/Master/BadgeSettings.pb.h"

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
namespace Settings {
namespace Master {

namespace {

const ::google::protobuf::Descriptor* BadgeSettings_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  BadgeSettings_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_POGOProtos_2fSettings_2fMaster_2fBadgeSettings_2eproto() GOOGLE_ATTRIBUTE_COLD;
void protobuf_AssignDesc_POGOProtos_2fSettings_2fMaster_2fBadgeSettings_2eproto() {
  protobuf_AddDesc_POGOProtos_2fSettings_2fMaster_2fBadgeSettings_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "POGOProtos/Settings/Master/BadgeSettings.proto");
  GOOGLE_CHECK(file != NULL);
  BadgeSettings_descriptor_ = file->message_type(0);
  static const int BadgeSettings_offsets_[3] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(BadgeSettings, badge_type_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(BadgeSettings, badge_rank_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(BadgeSettings, targets_),
  };
  BadgeSettings_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      BadgeSettings_descriptor_,
      BadgeSettings::default_instance_,
      BadgeSettings_offsets_,
      -1,
      -1,
      -1,
      sizeof(BadgeSettings),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(BadgeSettings, _internal_metadata_),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(BadgeSettings, _is_default_instance_));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_POGOProtos_2fSettings_2fMaster_2fBadgeSettings_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      BadgeSettings_descriptor_, &BadgeSettings::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_POGOProtos_2fSettings_2fMaster_2fBadgeSettings_2eproto() {
  delete BadgeSettings::default_instance_;
  delete BadgeSettings_reflection_;
}

void protobuf_AddDesc_POGOProtos_2fSettings_2fMaster_2fBadgeSettings_2eproto() GOOGLE_ATTRIBUTE_COLD;
void protobuf_AddDesc_POGOProtos_2fSettings_2fMaster_2fBadgeSettings_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::POGOProtos::Enums::protobuf_AddDesc_POGOProtos_2fEnums_2fBadgeType_2eproto();
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n.POGOProtos/Settings/Master/BadgeSettin"
    "gs.proto\022\032POGOProtos.Settings.Master\032 PO"
    "GOProtos/Enums/BadgeType.proto\"e\n\rBadgeS"
    "ettings\022/\n\nbadge_type\030\001 \001(\0162\033.POGOProtos"
    ".Enums.BadgeType\022\022\n\nbadge_rank\030\002 \001(\005\022\017\n\007"
    "targets\030\003 \003(\005b\006proto3", 221);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "POGOProtos/Settings/Master/BadgeSettings.proto", &protobuf_RegisterTypes);
  BadgeSettings::default_instance_ = new BadgeSettings();
  BadgeSettings::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_POGOProtos_2fSettings_2fMaster_2fBadgeSettings_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_POGOProtos_2fSettings_2fMaster_2fBadgeSettings_2eproto {
  StaticDescriptorInitializer_POGOProtos_2fSettings_2fMaster_2fBadgeSettings_2eproto() {
    protobuf_AddDesc_POGOProtos_2fSettings_2fMaster_2fBadgeSettings_2eproto();
  }
} static_descriptor_initializer_POGOProtos_2fSettings_2fMaster_2fBadgeSettings_2eproto_;

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int BadgeSettings::kBadgeTypeFieldNumber;
const int BadgeSettings::kBadgeRankFieldNumber;
const int BadgeSettings::kTargetsFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

BadgeSettings::BadgeSettings()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:POGOProtos.Settings.Master.BadgeSettings)
}

void BadgeSettings::InitAsDefaultInstance() {
  _is_default_instance_ = true;
}

BadgeSettings::BadgeSettings(const BadgeSettings& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:POGOProtos.Settings.Master.BadgeSettings)
}

void BadgeSettings::SharedCtor() {
    _is_default_instance_ = false;
  _cached_size_ = 0;
  badge_type_ = 0;
  badge_rank_ = 0;
}

BadgeSettings::~BadgeSettings() {
  // @@protoc_insertion_point(destructor:POGOProtos.Settings.Master.BadgeSettings)
  SharedDtor();
}

void BadgeSettings::SharedDtor() {
  if (this != default_instance_) {
  }
}

void BadgeSettings::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* BadgeSettings::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return BadgeSettings_descriptor_;
}

const BadgeSettings& BadgeSettings::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_POGOProtos_2fSettings_2fMaster_2fBadgeSettings_2eproto();
  return *default_instance_;
}

BadgeSettings* BadgeSettings::default_instance_ = NULL;

BadgeSettings* BadgeSettings::New(::google::protobuf::Arena* arena) const {
  BadgeSettings* n = new BadgeSettings;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void BadgeSettings::Clear() {
// @@protoc_insertion_point(message_clear_start:POGOProtos.Settings.Master.BadgeSettings)
#if defined(__clang__)
#define ZR_HELPER_(f) \
  _Pragma("clang diagnostic push") \
  _Pragma("clang diagnostic ignored \"-Winvalid-offsetof\"") \
  __builtin_offsetof(BadgeSettings, f) \
  _Pragma("clang diagnostic pop")
#else
#define ZR_HELPER_(f) reinterpret_cast<char*>(\
  &reinterpret_cast<BadgeSettings*>(16)->f)
#endif

#define ZR_(first, last) do {\
  ::memset(&first, 0,\
           ZR_HELPER_(last) - ZR_HELPER_(first) + sizeof(last));\
} while (0)

  ZR_(badge_type_, badge_rank_);

#undef ZR_HELPER_
#undef ZR_

  targets_.Clear();
}

bool BadgeSettings::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:POGOProtos.Settings.Master.BadgeSettings)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional .POGOProtos.Enums.BadgeType badge_type = 1;
      case 1: {
        if (tag == 8) {
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          set_badge_type(static_cast< ::POGOProtos::Enums::BadgeType >(value));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(16)) goto parse_badge_rank;
        break;
      }

      // optional int32 badge_rank = 2;
      case 2: {
        if (tag == 16) {
         parse_badge_rank:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &badge_rank_)));

        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(26)) goto parse_targets;
        break;
      }

      // repeated int32 targets = 3;
      case 3: {
        if (tag == 26) {
         parse_targets:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPackedPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, this->mutable_targets())));
        } else if (tag == 24) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadRepeatedPrimitiveNoInline<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 1, 26, input, this->mutable_targets())));
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
  // @@protoc_insertion_point(parse_success:POGOProtos.Settings.Master.BadgeSettings)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:POGOProtos.Settings.Master.BadgeSettings)
  return false;
#undef DO_
}

void BadgeSettings::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:POGOProtos.Settings.Master.BadgeSettings)
  // optional .POGOProtos.Enums.BadgeType badge_type = 1;
  if (this->badge_type() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      1, this->badge_type(), output);
  }

  // optional int32 badge_rank = 2;
  if (this->badge_rank() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(2, this->badge_rank(), output);
  }

  // repeated int32 targets = 3;
  if (this->targets_size() > 0) {
    ::google::protobuf::internal::WireFormatLite::WriteTag(3, ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED, output);
    output->WriteVarint32(_targets_cached_byte_size_);
  }
  for (int i = 0; i < this->targets_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32NoTag(
      this->targets(i), output);
  }

  // @@protoc_insertion_point(serialize_end:POGOProtos.Settings.Master.BadgeSettings)
}

::google::protobuf::uint8* BadgeSettings::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:POGOProtos.Settings.Master.BadgeSettings)
  // optional .POGOProtos.Enums.BadgeType badge_type = 1;
  if (this->badge_type() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteEnumToArray(
      1, this->badge_type(), target);
  }

  // optional int32 badge_rank = 2;
  if (this->badge_rank() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(2, this->badge_rank(), target);
  }

  // repeated int32 targets = 3;
  if (this->targets_size() > 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteTagToArray(
      3,
      ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED,
      target);
    target = ::google::protobuf::io::CodedOutputStream::WriteVarint32ToArray(
      _targets_cached_byte_size_, target);
  }
  for (int i = 0; i < this->targets_size(); i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteInt32NoTagToArray(this->targets(i), target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:POGOProtos.Settings.Master.BadgeSettings)
  return target;
}

int BadgeSettings::ByteSize() const {
// @@protoc_insertion_point(message_byte_size_start:POGOProtos.Settings.Master.BadgeSettings)
  int total_size = 0;

  // optional .POGOProtos.Enums.BadgeType badge_type = 1;
  if (this->badge_type() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::EnumSize(this->badge_type());
  }

  // optional int32 badge_rank = 2;
  if (this->badge_rank() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->badge_rank());
  }

  // repeated int32 targets = 3;
  {
    int data_size = 0;
    for (int i = 0; i < this->targets_size(); i++) {
      data_size += ::google::protobuf::internal::WireFormatLite::
        Int32Size(this->targets(i));
    }
    if (data_size > 0) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(data_size);
    }
    GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
    _targets_cached_byte_size_ = data_size;
    GOOGLE_SAFE_CONCURRENT_WRITES_END();
    total_size += data_size;
  }

  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void BadgeSettings::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:POGOProtos.Settings.Master.BadgeSettings)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  const BadgeSettings* source = 
      ::google::protobuf::internal::DynamicCastToGenerated<const BadgeSettings>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:POGOProtos.Settings.Master.BadgeSettings)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:POGOProtos.Settings.Master.BadgeSettings)
    MergeFrom(*source);
  }
}

void BadgeSettings::MergeFrom(const BadgeSettings& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:POGOProtos.Settings.Master.BadgeSettings)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  targets_.MergeFrom(from.targets_);
  if (from.badge_type() != 0) {
    set_badge_type(from.badge_type());
  }
  if (from.badge_rank() != 0) {
    set_badge_rank(from.badge_rank());
  }
}

void BadgeSettings::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:POGOProtos.Settings.Master.BadgeSettings)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void BadgeSettings::CopyFrom(const BadgeSettings& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:POGOProtos.Settings.Master.BadgeSettings)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool BadgeSettings::IsInitialized() const {

  return true;
}

void BadgeSettings::Swap(BadgeSettings* other) {
  if (other == this) return;
  InternalSwap(other);
}
void BadgeSettings::InternalSwap(BadgeSettings* other) {
  std::swap(badge_type_, other->badge_type_);
  std::swap(badge_rank_, other->badge_rank_);
  targets_.UnsafeArenaSwap(&other->targets_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata BadgeSettings::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = BadgeSettings_descriptor_;
  metadata.reflection = BadgeSettings_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// BadgeSettings

// optional .POGOProtos.Enums.BadgeType badge_type = 1;
void BadgeSettings::clear_badge_type() {
  badge_type_ = 0;
}
 ::POGOProtos::Enums::BadgeType BadgeSettings::badge_type() const {
  // @@protoc_insertion_point(field_get:POGOProtos.Settings.Master.BadgeSettings.badge_type)
  return static_cast< ::POGOProtos::Enums::BadgeType >(badge_type_);
}
 void BadgeSettings::set_badge_type(::POGOProtos::Enums::BadgeType value) {
  
  badge_type_ = value;
  // @@protoc_insertion_point(field_set:POGOProtos.Settings.Master.BadgeSettings.badge_type)
}

// optional int32 badge_rank = 2;
void BadgeSettings::clear_badge_rank() {
  badge_rank_ = 0;
}
 ::google::protobuf::int32 BadgeSettings::badge_rank() const {
  // @@protoc_insertion_point(field_get:POGOProtos.Settings.Master.BadgeSettings.badge_rank)
  return badge_rank_;
}
 void BadgeSettings::set_badge_rank(::google::protobuf::int32 value) {
  
  badge_rank_ = value;
  // @@protoc_insertion_point(field_set:POGOProtos.Settings.Master.BadgeSettings.badge_rank)
}

// repeated int32 targets = 3;
int BadgeSettings::targets_size() const {
  return targets_.size();
}
void BadgeSettings::clear_targets() {
  targets_.Clear();
}
 ::google::protobuf::int32 BadgeSettings::targets(int index) const {
  // @@protoc_insertion_point(field_get:POGOProtos.Settings.Master.BadgeSettings.targets)
  return targets_.Get(index);
}
 void BadgeSettings::set_targets(int index, ::google::protobuf::int32 value) {
  targets_.Set(index, value);
  // @@protoc_insertion_point(field_set:POGOProtos.Settings.Master.BadgeSettings.targets)
}
 void BadgeSettings::add_targets(::google::protobuf::int32 value) {
  targets_.Add(value);
  // @@protoc_insertion_point(field_add:POGOProtos.Settings.Master.BadgeSettings.targets)
}
 const ::google::protobuf::RepeatedField< ::google::protobuf::int32 >&
BadgeSettings::targets() const {
  // @@protoc_insertion_point(field_list:POGOProtos.Settings.Master.BadgeSettings.targets)
  return targets_;
}
 ::google::protobuf::RepeatedField< ::google::protobuf::int32 >*
BadgeSettings::mutable_targets() {
  // @@protoc_insertion_point(field_mutable_list:POGOProtos.Settings.Master.BadgeSettings.targets)
  return &targets_;
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace Master
}  // namespace Settings
}  // namespace POGOProtos

// @@protoc_insertion_point(global_scope)
