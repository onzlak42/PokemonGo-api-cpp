// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: POGOProtos/Inventory/AppliedItem.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "POGOProtos/Inventory/AppliedItem.pb.h"

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

const ::google::protobuf::Descriptor* AppliedItem_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  AppliedItem_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_POGOProtos_2fInventory_2fAppliedItem_2eproto() GOOGLE_ATTRIBUTE_COLD;
void protobuf_AssignDesc_POGOProtos_2fInventory_2fAppliedItem_2eproto() {
  protobuf_AddDesc_POGOProtos_2fInventory_2fAppliedItem_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "POGOProtos/Inventory/AppliedItem.proto");
  GOOGLE_CHECK(file != NULL);
  AppliedItem_descriptor_ = file->message_type(0);
  static const int AppliedItem_offsets_[4] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(AppliedItem, item_id_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(AppliedItem, item_type_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(AppliedItem, expire_ms_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(AppliedItem, applied_ms_),
  };
  AppliedItem_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      AppliedItem_descriptor_,
      AppliedItem::default_instance_,
      AppliedItem_offsets_,
      -1,
      -1,
      -1,
      sizeof(AppliedItem),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(AppliedItem, _internal_metadata_),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(AppliedItem, _is_default_instance_));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_POGOProtos_2fInventory_2fAppliedItem_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      AppliedItem_descriptor_, &AppliedItem::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_POGOProtos_2fInventory_2fAppliedItem_2eproto() {
  delete AppliedItem::default_instance_;
  delete AppliedItem_reflection_;
}

void protobuf_AddDesc_POGOProtos_2fInventory_2fAppliedItem_2eproto() GOOGLE_ATTRIBUTE_COLD;
void protobuf_AddDesc_POGOProtos_2fInventory_2fAppliedItem_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::POGOProtos::Inventory::Item::protobuf_AddDesc_POGOProtos_2fInventory_2fItem_2fItemId_2eproto();
  ::POGOProtos::Inventory::Item::protobuf_AddDesc_POGOProtos_2fInventory_2fItem_2fItemType_2eproto();
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n&POGOProtos/Inventory/AppliedItem.proto"
    "\022\024POGOProtos.Inventory\032&POGOProtos/Inven"
    "tory/Item/ItemId.proto\032(POGOProtos/Inven"
    "tory/Item/ItemType.proto\"\240\001\n\013AppliedItem"
    "\0222\n\007item_id\030\001 \001(\0162!.POGOProtos.Inventory"
    ".Item.ItemId\0226\n\titem_type\030\002 \001(\0162#.POGOPr"
    "otos.Inventory.Item.ItemType\022\021\n\texpire_m"
    "s\030\003 \001(\003\022\022\n\napplied_ms\030\004 \001(\003b\006proto3", 315);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "POGOProtos/Inventory/AppliedItem.proto", &protobuf_RegisterTypes);
  AppliedItem::default_instance_ = new AppliedItem();
  AppliedItem::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_POGOProtos_2fInventory_2fAppliedItem_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_POGOProtos_2fInventory_2fAppliedItem_2eproto {
  StaticDescriptorInitializer_POGOProtos_2fInventory_2fAppliedItem_2eproto() {
    protobuf_AddDesc_POGOProtos_2fInventory_2fAppliedItem_2eproto();
  }
} static_descriptor_initializer_POGOProtos_2fInventory_2fAppliedItem_2eproto_;

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int AppliedItem::kItemIdFieldNumber;
const int AppliedItem::kItemTypeFieldNumber;
const int AppliedItem::kExpireMsFieldNumber;
const int AppliedItem::kAppliedMsFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

AppliedItem::AppliedItem()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:POGOProtos.Inventory.AppliedItem)
}

void AppliedItem::InitAsDefaultInstance() {
  _is_default_instance_ = true;
}

AppliedItem::AppliedItem(const AppliedItem& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:POGOProtos.Inventory.AppliedItem)
}

void AppliedItem::SharedCtor() {
    _is_default_instance_ = false;
  _cached_size_ = 0;
  item_id_ = 0;
  item_type_ = 0;
  expire_ms_ = GOOGLE_LONGLONG(0);
  applied_ms_ = GOOGLE_LONGLONG(0);
}

AppliedItem::~AppliedItem() {
  // @@protoc_insertion_point(destructor:POGOProtos.Inventory.AppliedItem)
  SharedDtor();
}

void AppliedItem::SharedDtor() {
  if (this != default_instance_) {
  }
}

void AppliedItem::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* AppliedItem::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return AppliedItem_descriptor_;
}

const AppliedItem& AppliedItem::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_POGOProtos_2fInventory_2fAppliedItem_2eproto();
  return *default_instance_;
}

AppliedItem* AppliedItem::default_instance_ = NULL;

AppliedItem* AppliedItem::New(::google::protobuf::Arena* arena) const {
  AppliedItem* n = new AppliedItem;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void AppliedItem::Clear() {
// @@protoc_insertion_point(message_clear_start:POGOProtos.Inventory.AppliedItem)
#if defined(__clang__)
#define ZR_HELPER_(f) \
  _Pragma("clang diagnostic push") \
  _Pragma("clang diagnostic ignored \"-Winvalid-offsetof\"") \
  __builtin_offsetof(AppliedItem, f) \
  _Pragma("clang diagnostic pop")
#else
#define ZR_HELPER_(f) reinterpret_cast<char*>(\
  &reinterpret_cast<AppliedItem*>(16)->f)
#endif

#define ZR_(first, last) do {\
  ::memset(&first, 0,\
           ZR_HELPER_(last) - ZR_HELPER_(first) + sizeof(last));\
} while (0)

  ZR_(item_id_, applied_ms_);

#undef ZR_HELPER_
#undef ZR_

}

bool AppliedItem::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:POGOProtos.Inventory.AppliedItem)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional .POGOProtos.Inventory.Item.ItemId item_id = 1;
      case 1: {
        if (tag == 8) {
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          set_item_id(static_cast< ::POGOProtos::Inventory::Item::ItemId >(value));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(16)) goto parse_item_type;
        break;
      }

      // optional .POGOProtos.Inventory.Item.ItemType item_type = 2;
      case 2: {
        if (tag == 16) {
         parse_item_type:
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          set_item_type(static_cast< ::POGOProtos::Inventory::Item::ItemType >(value));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(24)) goto parse_expire_ms;
        break;
      }

      // optional int64 expire_ms = 3;
      case 3: {
        if (tag == 24) {
         parse_expire_ms:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int64, ::google::protobuf::internal::WireFormatLite::TYPE_INT64>(
                 input, &expire_ms_)));

        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(32)) goto parse_applied_ms;
        break;
      }

      // optional int64 applied_ms = 4;
      case 4: {
        if (tag == 32) {
         parse_applied_ms:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int64, ::google::protobuf::internal::WireFormatLite::TYPE_INT64>(
                 input, &applied_ms_)));

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
  // @@protoc_insertion_point(parse_success:POGOProtos.Inventory.AppliedItem)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:POGOProtos.Inventory.AppliedItem)
  return false;
#undef DO_
}

void AppliedItem::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:POGOProtos.Inventory.AppliedItem)
  // optional .POGOProtos.Inventory.Item.ItemId item_id = 1;
  if (this->item_id() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      1, this->item_id(), output);
  }

  // optional .POGOProtos.Inventory.Item.ItemType item_type = 2;
  if (this->item_type() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      2, this->item_type(), output);
  }

  // optional int64 expire_ms = 3;
  if (this->expire_ms() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt64(3, this->expire_ms(), output);
  }

  // optional int64 applied_ms = 4;
  if (this->applied_ms() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt64(4, this->applied_ms(), output);
  }

  // @@protoc_insertion_point(serialize_end:POGOProtos.Inventory.AppliedItem)
}

::google::protobuf::uint8* AppliedItem::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:POGOProtos.Inventory.AppliedItem)
  // optional .POGOProtos.Inventory.Item.ItemId item_id = 1;
  if (this->item_id() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteEnumToArray(
      1, this->item_id(), target);
  }

  // optional .POGOProtos.Inventory.Item.ItemType item_type = 2;
  if (this->item_type() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteEnumToArray(
      2, this->item_type(), target);
  }

  // optional int64 expire_ms = 3;
  if (this->expire_ms() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt64ToArray(3, this->expire_ms(), target);
  }

  // optional int64 applied_ms = 4;
  if (this->applied_ms() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt64ToArray(4, this->applied_ms(), target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:POGOProtos.Inventory.AppliedItem)
  return target;
}

int AppliedItem::ByteSize() const {
// @@protoc_insertion_point(message_byte_size_start:POGOProtos.Inventory.AppliedItem)
  int total_size = 0;

  // optional .POGOProtos.Inventory.Item.ItemId item_id = 1;
  if (this->item_id() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::EnumSize(this->item_id());
  }

  // optional .POGOProtos.Inventory.Item.ItemType item_type = 2;
  if (this->item_type() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::EnumSize(this->item_type());
  }

  // optional int64 expire_ms = 3;
  if (this->expire_ms() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int64Size(
        this->expire_ms());
  }

  // optional int64 applied_ms = 4;
  if (this->applied_ms() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int64Size(
        this->applied_ms());
  }

  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void AppliedItem::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:POGOProtos.Inventory.AppliedItem)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  const AppliedItem* source = 
      ::google::protobuf::internal::DynamicCastToGenerated<const AppliedItem>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:POGOProtos.Inventory.AppliedItem)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:POGOProtos.Inventory.AppliedItem)
    MergeFrom(*source);
  }
}

void AppliedItem::MergeFrom(const AppliedItem& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:POGOProtos.Inventory.AppliedItem)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  if (from.item_id() != 0) {
    set_item_id(from.item_id());
  }
  if (from.item_type() != 0) {
    set_item_type(from.item_type());
  }
  if (from.expire_ms() != 0) {
    set_expire_ms(from.expire_ms());
  }
  if (from.applied_ms() != 0) {
    set_applied_ms(from.applied_ms());
  }
}

void AppliedItem::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:POGOProtos.Inventory.AppliedItem)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void AppliedItem::CopyFrom(const AppliedItem& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:POGOProtos.Inventory.AppliedItem)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool AppliedItem::IsInitialized() const {

  return true;
}

void AppliedItem::Swap(AppliedItem* other) {
  if (other == this) return;
  InternalSwap(other);
}
void AppliedItem::InternalSwap(AppliedItem* other) {
  std::swap(item_id_, other->item_id_);
  std::swap(item_type_, other->item_type_);
  std::swap(expire_ms_, other->expire_ms_);
  std::swap(applied_ms_, other->applied_ms_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata AppliedItem::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = AppliedItem_descriptor_;
  metadata.reflection = AppliedItem_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// AppliedItem

// optional .POGOProtos.Inventory.Item.ItemId item_id = 1;
void AppliedItem::clear_item_id() {
  item_id_ = 0;
}
 ::POGOProtos::Inventory::Item::ItemId AppliedItem::item_id() const {
  // @@protoc_insertion_point(field_get:POGOProtos.Inventory.AppliedItem.item_id)
  return static_cast< ::POGOProtos::Inventory::Item::ItemId >(item_id_);
}
 void AppliedItem::set_item_id(::POGOProtos::Inventory::Item::ItemId value) {
  
  item_id_ = value;
  // @@protoc_insertion_point(field_set:POGOProtos.Inventory.AppliedItem.item_id)
}

// optional .POGOProtos.Inventory.Item.ItemType item_type = 2;
void AppliedItem::clear_item_type() {
  item_type_ = 0;
}
 ::POGOProtos::Inventory::Item::ItemType AppliedItem::item_type() const {
  // @@protoc_insertion_point(field_get:POGOProtos.Inventory.AppliedItem.item_type)
  return static_cast< ::POGOProtos::Inventory::Item::ItemType >(item_type_);
}
 void AppliedItem::set_item_type(::POGOProtos::Inventory::Item::ItemType value) {
  
  item_type_ = value;
  // @@protoc_insertion_point(field_set:POGOProtos.Inventory.AppliedItem.item_type)
}

// optional int64 expire_ms = 3;
void AppliedItem::clear_expire_ms() {
  expire_ms_ = GOOGLE_LONGLONG(0);
}
 ::google::protobuf::int64 AppliedItem::expire_ms() const {
  // @@protoc_insertion_point(field_get:POGOProtos.Inventory.AppliedItem.expire_ms)
  return expire_ms_;
}
 void AppliedItem::set_expire_ms(::google::protobuf::int64 value) {
  
  expire_ms_ = value;
  // @@protoc_insertion_point(field_set:POGOProtos.Inventory.AppliedItem.expire_ms)
}

// optional int64 applied_ms = 4;
void AppliedItem::clear_applied_ms() {
  applied_ms_ = GOOGLE_LONGLONG(0);
}
 ::google::protobuf::int64 AppliedItem::applied_ms() const {
  // @@protoc_insertion_point(field_get:POGOProtos.Inventory.AppliedItem.applied_ms)
  return applied_ms_;
}
 void AppliedItem::set_applied_ms(::google::protobuf::int64 value) {
  
  applied_ms_ = value;
  // @@protoc_insertion_point(field_set:POGOProtos.Inventory.AppliedItem.applied_ms)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace Inventory
}  // namespace POGOProtos

// @@protoc_insertion_point(global_scope)