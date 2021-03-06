// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: POGOProtos/Settings/Master/GymLevelSettings.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "POGOProtos/Settings/Master/GymLevelSettings.pb.h"

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

const ::google::protobuf::Descriptor* GymLevelSettings_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  GymLevelSettings_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_POGOProtos_2fSettings_2fMaster_2fGymLevelSettings_2eproto() GOOGLE_ATTRIBUTE_COLD;
void protobuf_AssignDesc_POGOProtos_2fSettings_2fMaster_2fGymLevelSettings_2eproto() {
  protobuf_AddDesc_POGOProtos_2fSettings_2fMaster_2fGymLevelSettings_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "POGOProtos/Settings/Master/GymLevelSettings.proto");
  GOOGLE_CHECK(file != NULL);
  GymLevelSettings_descriptor_ = file->message_type(0);
  static const int GymLevelSettings_offsets_[4] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(GymLevelSettings, required_experience_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(GymLevelSettings, leader_slots_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(GymLevelSettings, trainer_slots_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(GymLevelSettings, search_roll_bonus_),
  };
  GymLevelSettings_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      GymLevelSettings_descriptor_,
      GymLevelSettings::default_instance_,
      GymLevelSettings_offsets_,
      -1,
      -1,
      -1,
      sizeof(GymLevelSettings),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(GymLevelSettings, _internal_metadata_),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(GymLevelSettings, _is_default_instance_));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_POGOProtos_2fSettings_2fMaster_2fGymLevelSettings_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      GymLevelSettings_descriptor_, &GymLevelSettings::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_POGOProtos_2fSettings_2fMaster_2fGymLevelSettings_2eproto() {
  delete GymLevelSettings::default_instance_;
  delete GymLevelSettings_reflection_;
}

void protobuf_AddDesc_POGOProtos_2fSettings_2fMaster_2fGymLevelSettings_2eproto() GOOGLE_ATTRIBUTE_COLD;
void protobuf_AddDesc_POGOProtos_2fSettings_2fMaster_2fGymLevelSettings_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n1POGOProtos/Settings/Master/GymLevelSet"
    "tings.proto\022\032POGOProtos.Settings.Master\""
    "w\n\020GymLevelSettings\022\033\n\023required_experien"
    "ce\030\001 \003(\005\022\024\n\014leader_slots\030\002 \003(\005\022\025\n\rtraine"
    "r_slots\030\003 \003(\005\022\031\n\021search_roll_bonus\030\004 \003(\005"
    "b\006proto3", 208);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "POGOProtos/Settings/Master/GymLevelSettings.proto", &protobuf_RegisterTypes);
  GymLevelSettings::default_instance_ = new GymLevelSettings();
  GymLevelSettings::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_POGOProtos_2fSettings_2fMaster_2fGymLevelSettings_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_POGOProtos_2fSettings_2fMaster_2fGymLevelSettings_2eproto {
  StaticDescriptorInitializer_POGOProtos_2fSettings_2fMaster_2fGymLevelSettings_2eproto() {
    protobuf_AddDesc_POGOProtos_2fSettings_2fMaster_2fGymLevelSettings_2eproto();
  }
} static_descriptor_initializer_POGOProtos_2fSettings_2fMaster_2fGymLevelSettings_2eproto_;

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int GymLevelSettings::kRequiredExperienceFieldNumber;
const int GymLevelSettings::kLeaderSlotsFieldNumber;
const int GymLevelSettings::kTrainerSlotsFieldNumber;
const int GymLevelSettings::kSearchRollBonusFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

GymLevelSettings::GymLevelSettings()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:POGOProtos.Settings.Master.GymLevelSettings)
}

void GymLevelSettings::InitAsDefaultInstance() {
  _is_default_instance_ = true;
}

GymLevelSettings::GymLevelSettings(const GymLevelSettings& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:POGOProtos.Settings.Master.GymLevelSettings)
}

void GymLevelSettings::SharedCtor() {
    _is_default_instance_ = false;
  _cached_size_ = 0;
}

GymLevelSettings::~GymLevelSettings() {
  // @@protoc_insertion_point(destructor:POGOProtos.Settings.Master.GymLevelSettings)
  SharedDtor();
}

void GymLevelSettings::SharedDtor() {
  if (this != default_instance_) {
  }
}

void GymLevelSettings::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* GymLevelSettings::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return GymLevelSettings_descriptor_;
}

const GymLevelSettings& GymLevelSettings::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_POGOProtos_2fSettings_2fMaster_2fGymLevelSettings_2eproto();
  return *default_instance_;
}

GymLevelSettings* GymLevelSettings::default_instance_ = NULL;

GymLevelSettings* GymLevelSettings::New(::google::protobuf::Arena* arena) const {
  GymLevelSettings* n = new GymLevelSettings;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void GymLevelSettings::Clear() {
// @@protoc_insertion_point(message_clear_start:POGOProtos.Settings.Master.GymLevelSettings)
  required_experience_.Clear();
  leader_slots_.Clear();
  trainer_slots_.Clear();
  search_roll_bonus_.Clear();
}

bool GymLevelSettings::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:POGOProtos.Settings.Master.GymLevelSettings)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // repeated int32 required_experience = 1;
      case 1: {
        if (tag == 10) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPackedPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, this->mutable_required_experience())));
        } else if (tag == 8) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadRepeatedPrimitiveNoInline<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 1, 10, input, this->mutable_required_experience())));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(18)) goto parse_leader_slots;
        break;
      }

      // repeated int32 leader_slots = 2;
      case 2: {
        if (tag == 18) {
         parse_leader_slots:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPackedPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, this->mutable_leader_slots())));
        } else if (tag == 16) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadRepeatedPrimitiveNoInline<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 1, 18, input, this->mutable_leader_slots())));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(26)) goto parse_trainer_slots;
        break;
      }

      // repeated int32 trainer_slots = 3;
      case 3: {
        if (tag == 26) {
         parse_trainer_slots:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPackedPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, this->mutable_trainer_slots())));
        } else if (tag == 24) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadRepeatedPrimitiveNoInline<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 1, 26, input, this->mutable_trainer_slots())));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(34)) goto parse_search_roll_bonus;
        break;
      }

      // repeated int32 search_roll_bonus = 4;
      case 4: {
        if (tag == 34) {
         parse_search_roll_bonus:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPackedPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, this->mutable_search_roll_bonus())));
        } else if (tag == 32) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadRepeatedPrimitiveNoInline<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 1, 34, input, this->mutable_search_roll_bonus())));
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
  // @@protoc_insertion_point(parse_success:POGOProtos.Settings.Master.GymLevelSettings)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:POGOProtos.Settings.Master.GymLevelSettings)
  return false;
#undef DO_
}

void GymLevelSettings::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:POGOProtos.Settings.Master.GymLevelSettings)
  // repeated int32 required_experience = 1;
  if (this->required_experience_size() > 0) {
    ::google::protobuf::internal::WireFormatLite::WriteTag(1, ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED, output);
    output->WriteVarint32(_required_experience_cached_byte_size_);
  }
  for (int i = 0; i < this->required_experience_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32NoTag(
      this->required_experience(i), output);
  }

  // repeated int32 leader_slots = 2;
  if (this->leader_slots_size() > 0) {
    ::google::protobuf::internal::WireFormatLite::WriteTag(2, ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED, output);
    output->WriteVarint32(_leader_slots_cached_byte_size_);
  }
  for (int i = 0; i < this->leader_slots_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32NoTag(
      this->leader_slots(i), output);
  }

  // repeated int32 trainer_slots = 3;
  if (this->trainer_slots_size() > 0) {
    ::google::protobuf::internal::WireFormatLite::WriteTag(3, ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED, output);
    output->WriteVarint32(_trainer_slots_cached_byte_size_);
  }
  for (int i = 0; i < this->trainer_slots_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32NoTag(
      this->trainer_slots(i), output);
  }

  // repeated int32 search_roll_bonus = 4;
  if (this->search_roll_bonus_size() > 0) {
    ::google::protobuf::internal::WireFormatLite::WriteTag(4, ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED, output);
    output->WriteVarint32(_search_roll_bonus_cached_byte_size_);
  }
  for (int i = 0; i < this->search_roll_bonus_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32NoTag(
      this->search_roll_bonus(i), output);
  }

  // @@protoc_insertion_point(serialize_end:POGOProtos.Settings.Master.GymLevelSettings)
}

::google::protobuf::uint8* GymLevelSettings::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:POGOProtos.Settings.Master.GymLevelSettings)
  // repeated int32 required_experience = 1;
  if (this->required_experience_size() > 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteTagToArray(
      1,
      ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED,
      target);
    target = ::google::protobuf::io::CodedOutputStream::WriteVarint32ToArray(
      _required_experience_cached_byte_size_, target);
  }
  for (int i = 0; i < this->required_experience_size(); i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteInt32NoTagToArray(this->required_experience(i), target);
  }

  // repeated int32 leader_slots = 2;
  if (this->leader_slots_size() > 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteTagToArray(
      2,
      ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED,
      target);
    target = ::google::protobuf::io::CodedOutputStream::WriteVarint32ToArray(
      _leader_slots_cached_byte_size_, target);
  }
  for (int i = 0; i < this->leader_slots_size(); i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteInt32NoTagToArray(this->leader_slots(i), target);
  }

  // repeated int32 trainer_slots = 3;
  if (this->trainer_slots_size() > 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteTagToArray(
      3,
      ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED,
      target);
    target = ::google::protobuf::io::CodedOutputStream::WriteVarint32ToArray(
      _trainer_slots_cached_byte_size_, target);
  }
  for (int i = 0; i < this->trainer_slots_size(); i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteInt32NoTagToArray(this->trainer_slots(i), target);
  }

  // repeated int32 search_roll_bonus = 4;
  if (this->search_roll_bonus_size() > 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteTagToArray(
      4,
      ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED,
      target);
    target = ::google::protobuf::io::CodedOutputStream::WriteVarint32ToArray(
      _search_roll_bonus_cached_byte_size_, target);
  }
  for (int i = 0; i < this->search_roll_bonus_size(); i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteInt32NoTagToArray(this->search_roll_bonus(i), target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:POGOProtos.Settings.Master.GymLevelSettings)
  return target;
}

int GymLevelSettings::ByteSize() const {
// @@protoc_insertion_point(message_byte_size_start:POGOProtos.Settings.Master.GymLevelSettings)
  int total_size = 0;

  // repeated int32 required_experience = 1;
  {
    int data_size = 0;
    for (int i = 0; i < this->required_experience_size(); i++) {
      data_size += ::google::protobuf::internal::WireFormatLite::
        Int32Size(this->required_experience(i));
    }
    if (data_size > 0) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(data_size);
    }
    GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
    _required_experience_cached_byte_size_ = data_size;
    GOOGLE_SAFE_CONCURRENT_WRITES_END();
    total_size += data_size;
  }

  // repeated int32 leader_slots = 2;
  {
    int data_size = 0;
    for (int i = 0; i < this->leader_slots_size(); i++) {
      data_size += ::google::protobuf::internal::WireFormatLite::
        Int32Size(this->leader_slots(i));
    }
    if (data_size > 0) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(data_size);
    }
    GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
    _leader_slots_cached_byte_size_ = data_size;
    GOOGLE_SAFE_CONCURRENT_WRITES_END();
    total_size += data_size;
  }

  // repeated int32 trainer_slots = 3;
  {
    int data_size = 0;
    for (int i = 0; i < this->trainer_slots_size(); i++) {
      data_size += ::google::protobuf::internal::WireFormatLite::
        Int32Size(this->trainer_slots(i));
    }
    if (data_size > 0) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(data_size);
    }
    GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
    _trainer_slots_cached_byte_size_ = data_size;
    GOOGLE_SAFE_CONCURRENT_WRITES_END();
    total_size += data_size;
  }

  // repeated int32 search_roll_bonus = 4;
  {
    int data_size = 0;
    for (int i = 0; i < this->search_roll_bonus_size(); i++) {
      data_size += ::google::protobuf::internal::WireFormatLite::
        Int32Size(this->search_roll_bonus(i));
    }
    if (data_size > 0) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(data_size);
    }
    GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
    _search_roll_bonus_cached_byte_size_ = data_size;
    GOOGLE_SAFE_CONCURRENT_WRITES_END();
    total_size += data_size;
  }

  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void GymLevelSettings::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:POGOProtos.Settings.Master.GymLevelSettings)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  const GymLevelSettings* source = 
      ::google::protobuf::internal::DynamicCastToGenerated<const GymLevelSettings>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:POGOProtos.Settings.Master.GymLevelSettings)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:POGOProtos.Settings.Master.GymLevelSettings)
    MergeFrom(*source);
  }
}

void GymLevelSettings::MergeFrom(const GymLevelSettings& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:POGOProtos.Settings.Master.GymLevelSettings)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  required_experience_.MergeFrom(from.required_experience_);
  leader_slots_.MergeFrom(from.leader_slots_);
  trainer_slots_.MergeFrom(from.trainer_slots_);
  search_roll_bonus_.MergeFrom(from.search_roll_bonus_);
}

void GymLevelSettings::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:POGOProtos.Settings.Master.GymLevelSettings)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void GymLevelSettings::CopyFrom(const GymLevelSettings& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:POGOProtos.Settings.Master.GymLevelSettings)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool GymLevelSettings::IsInitialized() const {

  return true;
}

void GymLevelSettings::Swap(GymLevelSettings* other) {
  if (other == this) return;
  InternalSwap(other);
}
void GymLevelSettings::InternalSwap(GymLevelSettings* other) {
  required_experience_.UnsafeArenaSwap(&other->required_experience_);
  leader_slots_.UnsafeArenaSwap(&other->leader_slots_);
  trainer_slots_.UnsafeArenaSwap(&other->trainer_slots_);
  search_roll_bonus_.UnsafeArenaSwap(&other->search_roll_bonus_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata GymLevelSettings::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = GymLevelSettings_descriptor_;
  metadata.reflection = GymLevelSettings_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// GymLevelSettings

// repeated int32 required_experience = 1;
int GymLevelSettings::required_experience_size() const {
  return required_experience_.size();
}
void GymLevelSettings::clear_required_experience() {
  required_experience_.Clear();
}
 ::google::protobuf::int32 GymLevelSettings::required_experience(int index) const {
  // @@protoc_insertion_point(field_get:POGOProtos.Settings.Master.GymLevelSettings.required_experience)
  return required_experience_.Get(index);
}
 void GymLevelSettings::set_required_experience(int index, ::google::protobuf::int32 value) {
  required_experience_.Set(index, value);
  // @@protoc_insertion_point(field_set:POGOProtos.Settings.Master.GymLevelSettings.required_experience)
}
 void GymLevelSettings::add_required_experience(::google::protobuf::int32 value) {
  required_experience_.Add(value);
  // @@protoc_insertion_point(field_add:POGOProtos.Settings.Master.GymLevelSettings.required_experience)
}
 const ::google::protobuf::RepeatedField< ::google::protobuf::int32 >&
GymLevelSettings::required_experience() const {
  // @@protoc_insertion_point(field_list:POGOProtos.Settings.Master.GymLevelSettings.required_experience)
  return required_experience_;
}
 ::google::protobuf::RepeatedField< ::google::protobuf::int32 >*
GymLevelSettings::mutable_required_experience() {
  // @@protoc_insertion_point(field_mutable_list:POGOProtos.Settings.Master.GymLevelSettings.required_experience)
  return &required_experience_;
}

// repeated int32 leader_slots = 2;
int GymLevelSettings::leader_slots_size() const {
  return leader_slots_.size();
}
void GymLevelSettings::clear_leader_slots() {
  leader_slots_.Clear();
}
 ::google::protobuf::int32 GymLevelSettings::leader_slots(int index) const {
  // @@protoc_insertion_point(field_get:POGOProtos.Settings.Master.GymLevelSettings.leader_slots)
  return leader_slots_.Get(index);
}
 void GymLevelSettings::set_leader_slots(int index, ::google::protobuf::int32 value) {
  leader_slots_.Set(index, value);
  // @@protoc_insertion_point(field_set:POGOProtos.Settings.Master.GymLevelSettings.leader_slots)
}
 void GymLevelSettings::add_leader_slots(::google::protobuf::int32 value) {
  leader_slots_.Add(value);
  // @@protoc_insertion_point(field_add:POGOProtos.Settings.Master.GymLevelSettings.leader_slots)
}
 const ::google::protobuf::RepeatedField< ::google::protobuf::int32 >&
GymLevelSettings::leader_slots() const {
  // @@protoc_insertion_point(field_list:POGOProtos.Settings.Master.GymLevelSettings.leader_slots)
  return leader_slots_;
}
 ::google::protobuf::RepeatedField< ::google::protobuf::int32 >*
GymLevelSettings::mutable_leader_slots() {
  // @@protoc_insertion_point(field_mutable_list:POGOProtos.Settings.Master.GymLevelSettings.leader_slots)
  return &leader_slots_;
}

// repeated int32 trainer_slots = 3;
int GymLevelSettings::trainer_slots_size() const {
  return trainer_slots_.size();
}
void GymLevelSettings::clear_trainer_slots() {
  trainer_slots_.Clear();
}
 ::google::protobuf::int32 GymLevelSettings::trainer_slots(int index) const {
  // @@protoc_insertion_point(field_get:POGOProtos.Settings.Master.GymLevelSettings.trainer_slots)
  return trainer_slots_.Get(index);
}
 void GymLevelSettings::set_trainer_slots(int index, ::google::protobuf::int32 value) {
  trainer_slots_.Set(index, value);
  // @@protoc_insertion_point(field_set:POGOProtos.Settings.Master.GymLevelSettings.trainer_slots)
}
 void GymLevelSettings::add_trainer_slots(::google::protobuf::int32 value) {
  trainer_slots_.Add(value);
  // @@protoc_insertion_point(field_add:POGOProtos.Settings.Master.GymLevelSettings.trainer_slots)
}
 const ::google::protobuf::RepeatedField< ::google::protobuf::int32 >&
GymLevelSettings::trainer_slots() const {
  // @@protoc_insertion_point(field_list:POGOProtos.Settings.Master.GymLevelSettings.trainer_slots)
  return trainer_slots_;
}
 ::google::protobuf::RepeatedField< ::google::protobuf::int32 >*
GymLevelSettings::mutable_trainer_slots() {
  // @@protoc_insertion_point(field_mutable_list:POGOProtos.Settings.Master.GymLevelSettings.trainer_slots)
  return &trainer_slots_;
}

// repeated int32 search_roll_bonus = 4;
int GymLevelSettings::search_roll_bonus_size() const {
  return search_roll_bonus_.size();
}
void GymLevelSettings::clear_search_roll_bonus() {
  search_roll_bonus_.Clear();
}
 ::google::protobuf::int32 GymLevelSettings::search_roll_bonus(int index) const {
  // @@protoc_insertion_point(field_get:POGOProtos.Settings.Master.GymLevelSettings.search_roll_bonus)
  return search_roll_bonus_.Get(index);
}
 void GymLevelSettings::set_search_roll_bonus(int index, ::google::protobuf::int32 value) {
  search_roll_bonus_.Set(index, value);
  // @@protoc_insertion_point(field_set:POGOProtos.Settings.Master.GymLevelSettings.search_roll_bonus)
}
 void GymLevelSettings::add_search_roll_bonus(::google::protobuf::int32 value) {
  search_roll_bonus_.Add(value);
  // @@protoc_insertion_point(field_add:POGOProtos.Settings.Master.GymLevelSettings.search_roll_bonus)
}
 const ::google::protobuf::RepeatedField< ::google::protobuf::int32 >&
GymLevelSettings::search_roll_bonus() const {
  // @@protoc_insertion_point(field_list:POGOProtos.Settings.Master.GymLevelSettings.search_roll_bonus)
  return search_roll_bonus_;
}
 ::google::protobuf::RepeatedField< ::google::protobuf::int32 >*
GymLevelSettings::mutable_search_roll_bonus() {
  // @@protoc_insertion_point(field_mutable_list:POGOProtos.Settings.Master.GymLevelSettings.search_roll_bonus)
  return &search_roll_bonus_;
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace Master
}  // namespace Settings
}  // namespace POGOProtos

// @@protoc_insertion_point(global_scope)
