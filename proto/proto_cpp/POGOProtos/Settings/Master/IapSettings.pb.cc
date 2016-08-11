// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: POGOProtos/Settings/Master/IapSettings.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "POGOProtos/Settings/Master/IapSettings.pb.h"

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

const ::google::protobuf::Descriptor* IapSettings_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  IapSettings_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_POGOProtos_2fSettings_2fMaster_2fIapSettings_2eproto() GOOGLE_ATTRIBUTE_COLD;
void protobuf_AssignDesc_POGOProtos_2fSettings_2fMaster_2fIapSettings_2eproto() {
  protobuf_AddDesc_POGOProtos_2fSettings_2fMaster_2fIapSettings_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "POGOProtos/Settings/Master/IapSettings.proto");
  GOOGLE_CHECK(file != NULL);
  IapSettings_descriptor_ = file->message_type(0);
  static const int IapSettings_offsets_[7] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(IapSettings, daily_bonus_coins_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(IapSettings, daily_defender_bonus_per_pokemon_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(IapSettings, daily_defender_bonus_max_defenders_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(IapSettings, daily_defender_bonus_currency_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(IapSettings, min_time_between_claims_ms_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(IapSettings, daily_bonus_enabled_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(IapSettings, daily_defender_bonus_enabled_),
  };
  IapSettings_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      IapSettings_descriptor_,
      IapSettings::default_instance_,
      IapSettings_offsets_,
      -1,
      -1,
      -1,
      sizeof(IapSettings),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(IapSettings, _internal_metadata_),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(IapSettings, _is_default_instance_));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_POGOProtos_2fSettings_2fMaster_2fIapSettings_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      IapSettings_descriptor_, &IapSettings::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_POGOProtos_2fSettings_2fMaster_2fIapSettings_2eproto() {
  delete IapSettings::default_instance_;
  delete IapSettings_reflection_;
}

void protobuf_AddDesc_POGOProtos_2fSettings_2fMaster_2fIapSettings_2eproto() GOOGLE_ATTRIBUTE_COLD;
void protobuf_AddDesc_POGOProtos_2fSettings_2fMaster_2fIapSettings_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n,POGOProtos/Settings/Master/IapSettings"
    ".proto\022\032POGOProtos.Settings.Master\"\214\002\n\013I"
    "apSettings\022\031\n\021daily_bonus_coins\030\001 \001(\005\022(\n"
    " daily_defender_bonus_per_pokemon\030\002 \003(\005\022"
    "*\n\"daily_defender_bonus_max_defenders\030\003 "
    "\001(\005\022%\n\035daily_defender_bonus_currency\030\004 \003"
    "(\t\022\"\n\032min_time_between_claims_ms\030\005 \001(\003\022\033"
    "\n\023daily_bonus_enabled\030\006 \001(\010\022$\n\034daily_def"
    "ender_bonus_enabled\030\007 \001(\010b\006proto3", 353);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "POGOProtos/Settings/Master/IapSettings.proto", &protobuf_RegisterTypes);
  IapSettings::default_instance_ = new IapSettings();
  IapSettings::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_POGOProtos_2fSettings_2fMaster_2fIapSettings_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_POGOProtos_2fSettings_2fMaster_2fIapSettings_2eproto {
  StaticDescriptorInitializer_POGOProtos_2fSettings_2fMaster_2fIapSettings_2eproto() {
    protobuf_AddDesc_POGOProtos_2fSettings_2fMaster_2fIapSettings_2eproto();
  }
} static_descriptor_initializer_POGOProtos_2fSettings_2fMaster_2fIapSettings_2eproto_;

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int IapSettings::kDailyBonusCoinsFieldNumber;
const int IapSettings::kDailyDefenderBonusPerPokemonFieldNumber;
const int IapSettings::kDailyDefenderBonusMaxDefendersFieldNumber;
const int IapSettings::kDailyDefenderBonusCurrencyFieldNumber;
const int IapSettings::kMinTimeBetweenClaimsMsFieldNumber;
const int IapSettings::kDailyBonusEnabledFieldNumber;
const int IapSettings::kDailyDefenderBonusEnabledFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

IapSettings::IapSettings()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:POGOProtos.Settings.Master.IapSettings)
}

void IapSettings::InitAsDefaultInstance() {
  _is_default_instance_ = true;
}

IapSettings::IapSettings(const IapSettings& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:POGOProtos.Settings.Master.IapSettings)
}

void IapSettings::SharedCtor() {
    _is_default_instance_ = false;
  ::google::protobuf::internal::GetEmptyString();
  _cached_size_ = 0;
  daily_bonus_coins_ = 0;
  daily_defender_bonus_max_defenders_ = 0;
  min_time_between_claims_ms_ = GOOGLE_LONGLONG(0);
  daily_bonus_enabled_ = false;
  daily_defender_bonus_enabled_ = false;
}

IapSettings::~IapSettings() {
  // @@protoc_insertion_point(destructor:POGOProtos.Settings.Master.IapSettings)
  SharedDtor();
}

void IapSettings::SharedDtor() {
  if (this != default_instance_) {
  }
}

void IapSettings::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* IapSettings::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return IapSettings_descriptor_;
}

const IapSettings& IapSettings::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_POGOProtos_2fSettings_2fMaster_2fIapSettings_2eproto();
  return *default_instance_;
}

IapSettings* IapSettings::default_instance_ = NULL;

IapSettings* IapSettings::New(::google::protobuf::Arena* arena) const {
  IapSettings* n = new IapSettings;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void IapSettings::Clear() {
// @@protoc_insertion_point(message_clear_start:POGOProtos.Settings.Master.IapSettings)
#if defined(__clang__)
#define ZR_HELPER_(f) \
  _Pragma("clang diagnostic push") \
  _Pragma("clang diagnostic ignored \"-Winvalid-offsetof\"") \
  __builtin_offsetof(IapSettings, f) \
  _Pragma("clang diagnostic pop")
#else
#define ZR_HELPER_(f) reinterpret_cast<char*>(\
  &reinterpret_cast<IapSettings*>(16)->f)
#endif

#define ZR_(first, last) do {\
  ::memset(&first, 0,\
           ZR_HELPER_(last) - ZR_HELPER_(first) + sizeof(last));\
} while (0)

  ZR_(daily_bonus_coins_, daily_defender_bonus_max_defenders_);
  ZR_(min_time_between_claims_ms_, daily_defender_bonus_enabled_);

#undef ZR_HELPER_
#undef ZR_

  daily_defender_bonus_per_pokemon_.Clear();
  daily_defender_bonus_currency_.Clear();
}

bool IapSettings::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:POGOProtos.Settings.Master.IapSettings)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional int32 daily_bonus_coins = 1;
      case 1: {
        if (tag == 8) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &daily_bonus_coins_)));

        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(18)) goto parse_daily_defender_bonus_per_pokemon;
        break;
      }

      // repeated int32 daily_defender_bonus_per_pokemon = 2;
      case 2: {
        if (tag == 18) {
         parse_daily_defender_bonus_per_pokemon:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPackedPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, this->mutable_daily_defender_bonus_per_pokemon())));
        } else if (tag == 16) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadRepeatedPrimitiveNoInline<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 1, 18, input, this->mutable_daily_defender_bonus_per_pokemon())));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(24)) goto parse_daily_defender_bonus_max_defenders;
        break;
      }

      // optional int32 daily_defender_bonus_max_defenders = 3;
      case 3: {
        if (tag == 24) {
         parse_daily_defender_bonus_max_defenders:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &daily_defender_bonus_max_defenders_)));

        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(34)) goto parse_daily_defender_bonus_currency;
        break;
      }

      // repeated string daily_defender_bonus_currency = 4;
      case 4: {
        if (tag == 34) {
         parse_daily_defender_bonus_currency:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->add_daily_defender_bonus_currency()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->daily_defender_bonus_currency(this->daily_defender_bonus_currency_size() - 1).data(),
            this->daily_defender_bonus_currency(this->daily_defender_bonus_currency_size() - 1).length(),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "POGOProtos.Settings.Master.IapSettings.daily_defender_bonus_currency"));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(34)) goto parse_daily_defender_bonus_currency;
        if (input->ExpectTag(40)) goto parse_min_time_between_claims_ms;
        break;
      }

      // optional int64 min_time_between_claims_ms = 5;
      case 5: {
        if (tag == 40) {
         parse_min_time_between_claims_ms:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int64, ::google::protobuf::internal::WireFormatLite::TYPE_INT64>(
                 input, &min_time_between_claims_ms_)));

        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(48)) goto parse_daily_bonus_enabled;
        break;
      }

      // optional bool daily_bonus_enabled = 6;
      case 6: {
        if (tag == 48) {
         parse_daily_bonus_enabled:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &daily_bonus_enabled_)));

        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(56)) goto parse_daily_defender_bonus_enabled;
        break;
      }

      // optional bool daily_defender_bonus_enabled = 7;
      case 7: {
        if (tag == 56) {
         parse_daily_defender_bonus_enabled:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &daily_defender_bonus_enabled_)));

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
  // @@protoc_insertion_point(parse_success:POGOProtos.Settings.Master.IapSettings)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:POGOProtos.Settings.Master.IapSettings)
  return false;
#undef DO_
}

void IapSettings::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:POGOProtos.Settings.Master.IapSettings)
  // optional int32 daily_bonus_coins = 1;
  if (this->daily_bonus_coins() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(1, this->daily_bonus_coins(), output);
  }

  // repeated int32 daily_defender_bonus_per_pokemon = 2;
  if (this->daily_defender_bonus_per_pokemon_size() > 0) {
    ::google::protobuf::internal::WireFormatLite::WriteTag(2, ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED, output);
    output->WriteVarint32(_daily_defender_bonus_per_pokemon_cached_byte_size_);
  }
  for (int i = 0; i < this->daily_defender_bonus_per_pokemon_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32NoTag(
      this->daily_defender_bonus_per_pokemon(i), output);
  }

  // optional int32 daily_defender_bonus_max_defenders = 3;
  if (this->daily_defender_bonus_max_defenders() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(3, this->daily_defender_bonus_max_defenders(), output);
  }

  // repeated string daily_defender_bonus_currency = 4;
  for (int i = 0; i < this->daily_defender_bonus_currency_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->daily_defender_bonus_currency(i).data(), this->daily_defender_bonus_currency(i).length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "POGOProtos.Settings.Master.IapSettings.daily_defender_bonus_currency");
    ::google::protobuf::internal::WireFormatLite::WriteString(
      4, this->daily_defender_bonus_currency(i), output);
  }

  // optional int64 min_time_between_claims_ms = 5;
  if (this->min_time_between_claims_ms() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt64(5, this->min_time_between_claims_ms(), output);
  }

  // optional bool daily_bonus_enabled = 6;
  if (this->daily_bonus_enabled() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(6, this->daily_bonus_enabled(), output);
  }

  // optional bool daily_defender_bonus_enabled = 7;
  if (this->daily_defender_bonus_enabled() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(7, this->daily_defender_bonus_enabled(), output);
  }

  // @@protoc_insertion_point(serialize_end:POGOProtos.Settings.Master.IapSettings)
}

::google::protobuf::uint8* IapSettings::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:POGOProtos.Settings.Master.IapSettings)
  // optional int32 daily_bonus_coins = 1;
  if (this->daily_bonus_coins() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(1, this->daily_bonus_coins(), target);
  }

  // repeated int32 daily_defender_bonus_per_pokemon = 2;
  if (this->daily_defender_bonus_per_pokemon_size() > 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteTagToArray(
      2,
      ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED,
      target);
    target = ::google::protobuf::io::CodedOutputStream::WriteVarint32ToArray(
      _daily_defender_bonus_per_pokemon_cached_byte_size_, target);
  }
  for (int i = 0; i < this->daily_defender_bonus_per_pokemon_size(); i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteInt32NoTagToArray(this->daily_defender_bonus_per_pokemon(i), target);
  }

  // optional int32 daily_defender_bonus_max_defenders = 3;
  if (this->daily_defender_bonus_max_defenders() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(3, this->daily_defender_bonus_max_defenders(), target);
  }

  // repeated string daily_defender_bonus_currency = 4;
  for (int i = 0; i < this->daily_defender_bonus_currency_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->daily_defender_bonus_currency(i).data(), this->daily_defender_bonus_currency(i).length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "POGOProtos.Settings.Master.IapSettings.daily_defender_bonus_currency");
    target = ::google::protobuf::internal::WireFormatLite::
      WriteStringToArray(4, this->daily_defender_bonus_currency(i), target);
  }

  // optional int64 min_time_between_claims_ms = 5;
  if (this->min_time_between_claims_ms() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt64ToArray(5, this->min_time_between_claims_ms(), target);
  }

  // optional bool daily_bonus_enabled = 6;
  if (this->daily_bonus_enabled() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(6, this->daily_bonus_enabled(), target);
  }

  // optional bool daily_defender_bonus_enabled = 7;
  if (this->daily_defender_bonus_enabled() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(7, this->daily_defender_bonus_enabled(), target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:POGOProtos.Settings.Master.IapSettings)
  return target;
}

int IapSettings::ByteSize() const {
// @@protoc_insertion_point(message_byte_size_start:POGOProtos.Settings.Master.IapSettings)
  int total_size = 0;

  // optional int32 daily_bonus_coins = 1;
  if (this->daily_bonus_coins() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->daily_bonus_coins());
  }

  // optional int32 daily_defender_bonus_max_defenders = 3;
  if (this->daily_defender_bonus_max_defenders() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->daily_defender_bonus_max_defenders());
  }

  // optional int64 min_time_between_claims_ms = 5;
  if (this->min_time_between_claims_ms() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int64Size(
        this->min_time_between_claims_ms());
  }

  // optional bool daily_bonus_enabled = 6;
  if (this->daily_bonus_enabled() != 0) {
    total_size += 1 + 1;
  }

  // optional bool daily_defender_bonus_enabled = 7;
  if (this->daily_defender_bonus_enabled() != 0) {
    total_size += 1 + 1;
  }

  // repeated int32 daily_defender_bonus_per_pokemon = 2;
  {
    int data_size = 0;
    for (int i = 0; i < this->daily_defender_bonus_per_pokemon_size(); i++) {
      data_size += ::google::protobuf::internal::WireFormatLite::
        Int32Size(this->daily_defender_bonus_per_pokemon(i));
    }
    if (data_size > 0) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(data_size);
    }
    GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
    _daily_defender_bonus_per_pokemon_cached_byte_size_ = data_size;
    GOOGLE_SAFE_CONCURRENT_WRITES_END();
    total_size += data_size;
  }

  // repeated string daily_defender_bonus_currency = 4;
  total_size += 1 * this->daily_defender_bonus_currency_size();
  for (int i = 0; i < this->daily_defender_bonus_currency_size(); i++) {
    total_size += ::google::protobuf::internal::WireFormatLite::StringSize(
      this->daily_defender_bonus_currency(i));
  }

  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void IapSettings::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:POGOProtos.Settings.Master.IapSettings)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  const IapSettings* source = 
      ::google::protobuf::internal::DynamicCastToGenerated<const IapSettings>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:POGOProtos.Settings.Master.IapSettings)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:POGOProtos.Settings.Master.IapSettings)
    MergeFrom(*source);
  }
}

void IapSettings::MergeFrom(const IapSettings& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:POGOProtos.Settings.Master.IapSettings)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  daily_defender_bonus_per_pokemon_.MergeFrom(from.daily_defender_bonus_per_pokemon_);
  daily_defender_bonus_currency_.MergeFrom(from.daily_defender_bonus_currency_);
  if (from.daily_bonus_coins() != 0) {
    set_daily_bonus_coins(from.daily_bonus_coins());
  }
  if (from.daily_defender_bonus_max_defenders() != 0) {
    set_daily_defender_bonus_max_defenders(from.daily_defender_bonus_max_defenders());
  }
  if (from.min_time_between_claims_ms() != 0) {
    set_min_time_between_claims_ms(from.min_time_between_claims_ms());
  }
  if (from.daily_bonus_enabled() != 0) {
    set_daily_bonus_enabled(from.daily_bonus_enabled());
  }
  if (from.daily_defender_bonus_enabled() != 0) {
    set_daily_defender_bonus_enabled(from.daily_defender_bonus_enabled());
  }
}

void IapSettings::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:POGOProtos.Settings.Master.IapSettings)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void IapSettings::CopyFrom(const IapSettings& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:POGOProtos.Settings.Master.IapSettings)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool IapSettings::IsInitialized() const {

  return true;
}

void IapSettings::Swap(IapSettings* other) {
  if (other == this) return;
  InternalSwap(other);
}
void IapSettings::InternalSwap(IapSettings* other) {
  std::swap(daily_bonus_coins_, other->daily_bonus_coins_);
  daily_defender_bonus_per_pokemon_.UnsafeArenaSwap(&other->daily_defender_bonus_per_pokemon_);
  std::swap(daily_defender_bonus_max_defenders_, other->daily_defender_bonus_max_defenders_);
  daily_defender_bonus_currency_.UnsafeArenaSwap(&other->daily_defender_bonus_currency_);
  std::swap(min_time_between_claims_ms_, other->min_time_between_claims_ms_);
  std::swap(daily_bonus_enabled_, other->daily_bonus_enabled_);
  std::swap(daily_defender_bonus_enabled_, other->daily_defender_bonus_enabled_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata IapSettings::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = IapSettings_descriptor_;
  metadata.reflection = IapSettings_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// IapSettings

// optional int32 daily_bonus_coins = 1;
void IapSettings::clear_daily_bonus_coins() {
  daily_bonus_coins_ = 0;
}
 ::google::protobuf::int32 IapSettings::daily_bonus_coins() const {
  // @@protoc_insertion_point(field_get:POGOProtos.Settings.Master.IapSettings.daily_bonus_coins)
  return daily_bonus_coins_;
}
 void IapSettings::set_daily_bonus_coins(::google::protobuf::int32 value) {
  
  daily_bonus_coins_ = value;
  // @@protoc_insertion_point(field_set:POGOProtos.Settings.Master.IapSettings.daily_bonus_coins)
}

// repeated int32 daily_defender_bonus_per_pokemon = 2;
int IapSettings::daily_defender_bonus_per_pokemon_size() const {
  return daily_defender_bonus_per_pokemon_.size();
}
void IapSettings::clear_daily_defender_bonus_per_pokemon() {
  daily_defender_bonus_per_pokemon_.Clear();
}
 ::google::protobuf::int32 IapSettings::daily_defender_bonus_per_pokemon(int index) const {
  // @@protoc_insertion_point(field_get:POGOProtos.Settings.Master.IapSettings.daily_defender_bonus_per_pokemon)
  return daily_defender_bonus_per_pokemon_.Get(index);
}
 void IapSettings::set_daily_defender_bonus_per_pokemon(int index, ::google::protobuf::int32 value) {
  daily_defender_bonus_per_pokemon_.Set(index, value);
  // @@protoc_insertion_point(field_set:POGOProtos.Settings.Master.IapSettings.daily_defender_bonus_per_pokemon)
}
 void IapSettings::add_daily_defender_bonus_per_pokemon(::google::protobuf::int32 value) {
  daily_defender_bonus_per_pokemon_.Add(value);
  // @@protoc_insertion_point(field_add:POGOProtos.Settings.Master.IapSettings.daily_defender_bonus_per_pokemon)
}
 const ::google::protobuf::RepeatedField< ::google::protobuf::int32 >&
IapSettings::daily_defender_bonus_per_pokemon() const {
  // @@protoc_insertion_point(field_list:POGOProtos.Settings.Master.IapSettings.daily_defender_bonus_per_pokemon)
  return daily_defender_bonus_per_pokemon_;
}
 ::google::protobuf::RepeatedField< ::google::protobuf::int32 >*
IapSettings::mutable_daily_defender_bonus_per_pokemon() {
  // @@protoc_insertion_point(field_mutable_list:POGOProtos.Settings.Master.IapSettings.daily_defender_bonus_per_pokemon)
  return &daily_defender_bonus_per_pokemon_;
}

// optional int32 daily_defender_bonus_max_defenders = 3;
void IapSettings::clear_daily_defender_bonus_max_defenders() {
  daily_defender_bonus_max_defenders_ = 0;
}
 ::google::protobuf::int32 IapSettings::daily_defender_bonus_max_defenders() const {
  // @@protoc_insertion_point(field_get:POGOProtos.Settings.Master.IapSettings.daily_defender_bonus_max_defenders)
  return daily_defender_bonus_max_defenders_;
}
 void IapSettings::set_daily_defender_bonus_max_defenders(::google::protobuf::int32 value) {
  
  daily_defender_bonus_max_defenders_ = value;
  // @@protoc_insertion_point(field_set:POGOProtos.Settings.Master.IapSettings.daily_defender_bonus_max_defenders)
}

// repeated string daily_defender_bonus_currency = 4;
int IapSettings::daily_defender_bonus_currency_size() const {
  return daily_defender_bonus_currency_.size();
}
void IapSettings::clear_daily_defender_bonus_currency() {
  daily_defender_bonus_currency_.Clear();
}
 const ::std::string& IapSettings::daily_defender_bonus_currency(int index) const {
  // @@protoc_insertion_point(field_get:POGOProtos.Settings.Master.IapSettings.daily_defender_bonus_currency)
  return daily_defender_bonus_currency_.Get(index);
}
 ::std::string* IapSettings::mutable_daily_defender_bonus_currency(int index) {
  // @@protoc_insertion_point(field_mutable:POGOProtos.Settings.Master.IapSettings.daily_defender_bonus_currency)
  return daily_defender_bonus_currency_.Mutable(index);
}
 void IapSettings::set_daily_defender_bonus_currency(int index, const ::std::string& value) {
  // @@protoc_insertion_point(field_set:POGOProtos.Settings.Master.IapSettings.daily_defender_bonus_currency)
  daily_defender_bonus_currency_.Mutable(index)->assign(value);
}
 void IapSettings::set_daily_defender_bonus_currency(int index, const char* value) {
  daily_defender_bonus_currency_.Mutable(index)->assign(value);
  // @@protoc_insertion_point(field_set_char:POGOProtos.Settings.Master.IapSettings.daily_defender_bonus_currency)
}
 void IapSettings::set_daily_defender_bonus_currency(int index, const char* value, size_t size) {
  daily_defender_bonus_currency_.Mutable(index)->assign(
    reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:POGOProtos.Settings.Master.IapSettings.daily_defender_bonus_currency)
}
 ::std::string* IapSettings::add_daily_defender_bonus_currency() {
  // @@protoc_insertion_point(field_add_mutable:POGOProtos.Settings.Master.IapSettings.daily_defender_bonus_currency)
  return daily_defender_bonus_currency_.Add();
}
 void IapSettings::add_daily_defender_bonus_currency(const ::std::string& value) {
  daily_defender_bonus_currency_.Add()->assign(value);
  // @@protoc_insertion_point(field_add:POGOProtos.Settings.Master.IapSettings.daily_defender_bonus_currency)
}
 void IapSettings::add_daily_defender_bonus_currency(const char* value) {
  daily_defender_bonus_currency_.Add()->assign(value);
  // @@protoc_insertion_point(field_add_char:POGOProtos.Settings.Master.IapSettings.daily_defender_bonus_currency)
}
 void IapSettings::add_daily_defender_bonus_currency(const char* value, size_t size) {
  daily_defender_bonus_currency_.Add()->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_add_pointer:POGOProtos.Settings.Master.IapSettings.daily_defender_bonus_currency)
}
 const ::google::protobuf::RepeatedPtrField< ::std::string>&
IapSettings::daily_defender_bonus_currency() const {
  // @@protoc_insertion_point(field_list:POGOProtos.Settings.Master.IapSettings.daily_defender_bonus_currency)
  return daily_defender_bonus_currency_;
}
 ::google::protobuf::RepeatedPtrField< ::std::string>*
IapSettings::mutable_daily_defender_bonus_currency() {
  // @@protoc_insertion_point(field_mutable_list:POGOProtos.Settings.Master.IapSettings.daily_defender_bonus_currency)
  return &daily_defender_bonus_currency_;
}

// optional int64 min_time_between_claims_ms = 5;
void IapSettings::clear_min_time_between_claims_ms() {
  min_time_between_claims_ms_ = GOOGLE_LONGLONG(0);
}
 ::google::protobuf::int64 IapSettings::min_time_between_claims_ms() const {
  // @@protoc_insertion_point(field_get:POGOProtos.Settings.Master.IapSettings.min_time_between_claims_ms)
  return min_time_between_claims_ms_;
}
 void IapSettings::set_min_time_between_claims_ms(::google::protobuf::int64 value) {
  
  min_time_between_claims_ms_ = value;
  // @@protoc_insertion_point(field_set:POGOProtos.Settings.Master.IapSettings.min_time_between_claims_ms)
}

// optional bool daily_bonus_enabled = 6;
void IapSettings::clear_daily_bonus_enabled() {
  daily_bonus_enabled_ = false;
}
 bool IapSettings::daily_bonus_enabled() const {
  // @@protoc_insertion_point(field_get:POGOProtos.Settings.Master.IapSettings.daily_bonus_enabled)
  return daily_bonus_enabled_;
}
 void IapSettings::set_daily_bonus_enabled(bool value) {
  
  daily_bonus_enabled_ = value;
  // @@protoc_insertion_point(field_set:POGOProtos.Settings.Master.IapSettings.daily_bonus_enabled)
}

// optional bool daily_defender_bonus_enabled = 7;
void IapSettings::clear_daily_defender_bonus_enabled() {
  daily_defender_bonus_enabled_ = false;
}
 bool IapSettings::daily_defender_bonus_enabled() const {
  // @@protoc_insertion_point(field_get:POGOProtos.Settings.Master.IapSettings.daily_defender_bonus_enabled)
  return daily_defender_bonus_enabled_;
}
 void IapSettings::set_daily_defender_bonus_enabled(bool value) {
  
  daily_defender_bonus_enabled_ = value;
  // @@protoc_insertion_point(field_set:POGOProtos.Settings.Master.IapSettings.daily_defender_bonus_enabled)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace Master
}  // namespace Settings
}  // namespace POGOProtos

// @@protoc_insertion_point(global_scope)