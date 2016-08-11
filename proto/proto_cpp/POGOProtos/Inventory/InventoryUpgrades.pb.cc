// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: POGOProtos/Inventory/InventoryUpgrades.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "POGOProtos/Inventory/InventoryUpgrades.pb.h"

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
namespace Inventory {

namespace {

const ::google::protobuf::Descriptor* InventoryUpgrades_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  InventoryUpgrades_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_POGOProtos_2fInventory_2fInventoryUpgrades_2eproto() GOOGLE_ATTRIBUTE_COLD;
void protobuf_AssignDesc_POGOProtos_2fInventory_2fInventoryUpgrades_2eproto() {
  protobuf_AddDesc_POGOProtos_2fInventory_2fInventoryUpgrades_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "POGOProtos/Inventory/InventoryUpgrades.proto");
  GOOGLE_CHECK(file != NULL);
  InventoryUpgrades_descriptor_ = file->message_type(0);
  static const int InventoryUpgrades_offsets_[1] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(InventoryUpgrades, inventory_upgrades_),
  };
  InventoryUpgrades_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      InventoryUpgrades_descriptor_,
      InventoryUpgrades::default_instance_,
      InventoryUpgrades_offsets_,
      -1,
      -1,
      -1,
      sizeof(InventoryUpgrades),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(InventoryUpgrades, _internal_metadata_),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(InventoryUpgrades, _is_default_instance_));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_POGOProtos_2fInventory_2fInventoryUpgrades_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      InventoryUpgrades_descriptor_, &InventoryUpgrades::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_POGOProtos_2fInventory_2fInventoryUpgrades_2eproto() {
  delete InventoryUpgrades::default_instance_;
  delete InventoryUpgrades_reflection_;
}

void protobuf_AddDesc_POGOProtos_2fInventory_2fInventoryUpgrades_2eproto() GOOGLE_ATTRIBUTE_COLD;
void protobuf_AddDesc_POGOProtos_2fInventory_2fInventoryUpgrades_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::POGOProtos::Inventory::protobuf_AddDesc_POGOProtos_2fInventory_2fInventoryUpgrade_2eproto();
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n,POGOProtos/Inventory/InventoryUpgrades"
    ".proto\022\024POGOProtos.Inventory\032+POGOProtos"
    "/Inventory/InventoryUpgrade.proto\"W\n\021Inv"
    "entoryUpgrades\022B\n\022inventory_upgrades\030\001 \003"
    "(\0132&.POGOProtos.Inventory.InventoryUpgra"
    "deb\006proto3", 210);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "POGOProtos/Inventory/InventoryUpgrades.proto", &protobuf_RegisterTypes);
  InventoryUpgrades::default_instance_ = new InventoryUpgrades();
  InventoryUpgrades::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_POGOProtos_2fInventory_2fInventoryUpgrades_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_POGOProtos_2fInventory_2fInventoryUpgrades_2eproto {
  StaticDescriptorInitializer_POGOProtos_2fInventory_2fInventoryUpgrades_2eproto() {
    protobuf_AddDesc_POGOProtos_2fInventory_2fInventoryUpgrades_2eproto();
  }
} static_descriptor_initializer_POGOProtos_2fInventory_2fInventoryUpgrades_2eproto_;

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int InventoryUpgrades::kInventoryUpgradesFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

InventoryUpgrades::InventoryUpgrades()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:POGOProtos.Inventory.InventoryUpgrades)
}

void InventoryUpgrades::InitAsDefaultInstance() {
  _is_default_instance_ = true;
}

InventoryUpgrades::InventoryUpgrades(const InventoryUpgrades& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:POGOProtos.Inventory.InventoryUpgrades)
}

void InventoryUpgrades::SharedCtor() {
    _is_default_instance_ = false;
  _cached_size_ = 0;
}

InventoryUpgrades::~InventoryUpgrades() {
  // @@protoc_insertion_point(destructor:POGOProtos.Inventory.InventoryUpgrades)
  SharedDtor();
}

void InventoryUpgrades::SharedDtor() {
  if (this != default_instance_) {
  }
}

void InventoryUpgrades::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* InventoryUpgrades::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return InventoryUpgrades_descriptor_;
}

const InventoryUpgrades& InventoryUpgrades::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_POGOProtos_2fInventory_2fInventoryUpgrades_2eproto();
  return *default_instance_;
}

InventoryUpgrades* InventoryUpgrades::default_instance_ = NULL;

InventoryUpgrades* InventoryUpgrades::New(::google::protobuf::Arena* arena) const {
  InventoryUpgrades* n = new InventoryUpgrades;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void InventoryUpgrades::Clear() {
// @@protoc_insertion_point(message_clear_start:POGOProtos.Inventory.InventoryUpgrades)
  inventory_upgrades_.Clear();
}

bool InventoryUpgrades::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:POGOProtos.Inventory.InventoryUpgrades)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // repeated .POGOProtos.Inventory.InventoryUpgrade inventory_upgrades = 1;
      case 1: {
        if (tag == 10) {
          DO_(input->IncrementRecursionDepth());
         parse_loop_inventory_upgrades:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtualNoRecursionDepth(
                input, add_inventory_upgrades()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(10)) goto parse_loop_inventory_upgrades;
        input->UnsafeDecrementRecursionDepth();
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
  // @@protoc_insertion_point(parse_success:POGOProtos.Inventory.InventoryUpgrades)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:POGOProtos.Inventory.InventoryUpgrades)
  return false;
#undef DO_
}

void InventoryUpgrades::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:POGOProtos.Inventory.InventoryUpgrades)
  // repeated .POGOProtos.Inventory.InventoryUpgrade inventory_upgrades = 1;
  for (unsigned int i = 0, n = this->inventory_upgrades_size(); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      1, this->inventory_upgrades(i), output);
  }

  // @@protoc_insertion_point(serialize_end:POGOProtos.Inventory.InventoryUpgrades)
}

::google::protobuf::uint8* InventoryUpgrades::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:POGOProtos.Inventory.InventoryUpgrades)
  // repeated .POGOProtos.Inventory.InventoryUpgrade inventory_upgrades = 1;
  for (unsigned int i = 0, n = this->inventory_upgrades_size(); i < n; i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        1, this->inventory_upgrades(i), false, target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:POGOProtos.Inventory.InventoryUpgrades)
  return target;
}

int InventoryUpgrades::ByteSize() const {
// @@protoc_insertion_point(message_byte_size_start:POGOProtos.Inventory.InventoryUpgrades)
  int total_size = 0;

  // repeated .POGOProtos.Inventory.InventoryUpgrade inventory_upgrades = 1;
  total_size += 1 * this->inventory_upgrades_size();
  for (int i = 0; i < this->inventory_upgrades_size(); i++) {
    total_size +=
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        this->inventory_upgrades(i));
  }

  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void InventoryUpgrades::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:POGOProtos.Inventory.InventoryUpgrades)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  const InventoryUpgrades* source = 
      ::google::protobuf::internal::DynamicCastToGenerated<const InventoryUpgrades>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:POGOProtos.Inventory.InventoryUpgrades)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:POGOProtos.Inventory.InventoryUpgrades)
    MergeFrom(*source);
  }
}

void InventoryUpgrades::MergeFrom(const InventoryUpgrades& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:POGOProtos.Inventory.InventoryUpgrades)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  inventory_upgrades_.MergeFrom(from.inventory_upgrades_);
}

void InventoryUpgrades::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:POGOProtos.Inventory.InventoryUpgrades)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void InventoryUpgrades::CopyFrom(const InventoryUpgrades& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:POGOProtos.Inventory.InventoryUpgrades)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool InventoryUpgrades::IsInitialized() const {

  return true;
}

void InventoryUpgrades::Swap(InventoryUpgrades* other) {
  if (other == this) return;
  InternalSwap(other);
}
void InventoryUpgrades::InternalSwap(InventoryUpgrades* other) {
  inventory_upgrades_.UnsafeArenaSwap(&other->inventory_upgrades_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata InventoryUpgrades::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = InventoryUpgrades_descriptor_;
  metadata.reflection = InventoryUpgrades_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// InventoryUpgrades

// repeated .POGOProtos.Inventory.InventoryUpgrade inventory_upgrades = 1;
int InventoryUpgrades::inventory_upgrades_size() const {
  return inventory_upgrades_.size();
}
void InventoryUpgrades::clear_inventory_upgrades() {
  inventory_upgrades_.Clear();
}
const ::POGOProtos::Inventory::InventoryUpgrade& InventoryUpgrades::inventory_upgrades(int index) const {
  // @@protoc_insertion_point(field_get:POGOProtos.Inventory.InventoryUpgrades.inventory_upgrades)
  return inventory_upgrades_.Get(index);
}
::POGOProtos::Inventory::InventoryUpgrade* InventoryUpgrades::mutable_inventory_upgrades(int index) {
  // @@protoc_insertion_point(field_mutable:POGOProtos.Inventory.InventoryUpgrades.inventory_upgrades)
  return inventory_upgrades_.Mutable(index);
}
::POGOProtos::Inventory::InventoryUpgrade* InventoryUpgrades::add_inventory_upgrades() {
  // @@protoc_insertion_point(field_add:POGOProtos.Inventory.InventoryUpgrades.inventory_upgrades)
  return inventory_upgrades_.Add();
}
::google::protobuf::RepeatedPtrField< ::POGOProtos::Inventory::InventoryUpgrade >*
InventoryUpgrades::mutable_inventory_upgrades() {
  // @@protoc_insertion_point(field_mutable_list:POGOProtos.Inventory.InventoryUpgrades.inventory_upgrades)
  return &inventory_upgrades_;
}
const ::google::protobuf::RepeatedPtrField< ::POGOProtos::Inventory::InventoryUpgrade >&
InventoryUpgrades::inventory_upgrades() const {
  // @@protoc_insertion_point(field_list:POGOProtos.Inventory.InventoryUpgrades.inventory_upgrades)
  return inventory_upgrades_;
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace Inventory
}  // namespace POGOProtos

// @@protoc_insertion_point(global_scope)