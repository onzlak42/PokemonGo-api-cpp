// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: POGOProtos/Inventory/Item/ItemAward.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "POGOProtos/Inventory/Item/ItemAward.pb.h"

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
namespace Item {

namespace {

const ::google::protobuf::Descriptor* ItemAward_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  ItemAward_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_POGOProtos_2fInventory_2fItem_2fItemAward_2eproto() GOOGLE_ATTRIBUTE_COLD;
void protobuf_AssignDesc_POGOProtos_2fInventory_2fItem_2fItemAward_2eproto() {
  protobuf_AddDesc_POGOProtos_2fInventory_2fItem_2fItemAward_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "POGOProtos/Inventory/Item/ItemAward.proto");
  GOOGLE_CHECK(file != NULL);
  ItemAward_descriptor_ = file->message_type(0);
  static const int ItemAward_offsets_[2] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ItemAward, item_id_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ItemAward, item_count_),
  };
  ItemAward_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      ItemAward_descriptor_,
      ItemAward::default_instance_,
      ItemAward_offsets_,
      -1,
      -1,
      -1,
      sizeof(ItemAward),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ItemAward, _internal_metadata_),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ItemAward, _is_default_instance_));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_POGOProtos_2fInventory_2fItem_2fItemAward_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      ItemAward_descriptor_, &ItemAward::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_POGOProtos_2fInventory_2fItem_2fItemAward_2eproto() {
  delete ItemAward::default_instance_;
  delete ItemAward_reflection_;
}

void protobuf_AddDesc_POGOProtos_2fInventory_2fItem_2fItemAward_2eproto() GOOGLE_ATTRIBUTE_COLD;
void protobuf_AddDesc_POGOProtos_2fInventory_2fItem_2fItemAward_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::POGOProtos::Inventory::Item::protobuf_AddDesc_POGOProtos_2fInventory_2fItem_2fItemId_2eproto();
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n)POGOProtos/Inventory/Item/ItemAward.pr"
    "oto\022\031POGOProtos.Inventory.Item\032&POGOProt"
    "os/Inventory/Item/ItemId.proto\"S\n\tItemAw"
    "ard\0222\n\007item_id\030\001 \001(\0162!.POGOProtos.Invent"
    "ory.Item.ItemId\022\022\n\nitem_count\030\002 \001(\005b\006pro"
    "to3", 203);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "POGOProtos/Inventory/Item/ItemAward.proto", &protobuf_RegisterTypes);
  ItemAward::default_instance_ = new ItemAward();
  ItemAward::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_POGOProtos_2fInventory_2fItem_2fItemAward_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_POGOProtos_2fInventory_2fItem_2fItemAward_2eproto {
  StaticDescriptorInitializer_POGOProtos_2fInventory_2fItem_2fItemAward_2eproto() {
    protobuf_AddDesc_POGOProtos_2fInventory_2fItem_2fItemAward_2eproto();
  }
} static_descriptor_initializer_POGOProtos_2fInventory_2fItem_2fItemAward_2eproto_;

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int ItemAward::kItemIdFieldNumber;
const int ItemAward::kItemCountFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

ItemAward::ItemAward()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:POGOProtos.Inventory.Item.ItemAward)
}

void ItemAward::InitAsDefaultInstance() {
  _is_default_instance_ = true;
}

ItemAward::ItemAward(const ItemAward& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:POGOProtos.Inventory.Item.ItemAward)
}

void ItemAward::SharedCtor() {
    _is_default_instance_ = false;
  _cached_size_ = 0;
  item_id_ = 0;
  item_count_ = 0;
}

ItemAward::~ItemAward() {
  // @@protoc_insertion_point(destructor:POGOProtos.Inventory.Item.ItemAward)
  SharedDtor();
}

void ItemAward::SharedDtor() {
  if (this != default_instance_) {
  }
}

void ItemAward::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* ItemAward::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return ItemAward_descriptor_;
}

const ItemAward& ItemAward::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_POGOProtos_2fInventory_2fItem_2fItemAward_2eproto();
  return *default_instance_;
}

ItemAward* ItemAward::default_instance_ = NULL;

ItemAward* ItemAward::New(::google::protobuf::Arena* arena) const {
  ItemAward* n = new ItemAward;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void ItemAward::Clear() {
// @@protoc_insertion_point(message_clear_start:POGOProtos.Inventory.Item.ItemAward)
#if defined(__clang__)
#define ZR_HELPER_(f) \
  _Pragma("clang diagnostic push") \
  _Pragma("clang diagnostic ignored \"-Winvalid-offsetof\"") \
  __builtin_offsetof(ItemAward, f) \
  _Pragma("clang diagnostic pop")
#else
#define ZR_HELPER_(f) reinterpret_cast<char*>(\
  &reinterpret_cast<ItemAward*>(16)->f)
#endif

#define ZR_(first, last) do {\
  ::memset(&first, 0,\
           ZR_HELPER_(last) - ZR_HELPER_(first) + sizeof(last));\
} while (0)

  ZR_(item_id_, item_count_);

#undef ZR_HELPER_
#undef ZR_

}

bool ItemAward::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:POGOProtos.Inventory.Item.ItemAward)
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
        if (input->ExpectTag(16)) goto parse_item_count;
        break;
      }

      // optional int32 item_count = 2;
      case 2: {
        if (tag == 16) {
         parse_item_count:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &item_count_)));

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
  // @@protoc_insertion_point(parse_success:POGOProtos.Inventory.Item.ItemAward)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:POGOProtos.Inventory.Item.ItemAward)
  return false;
#undef DO_
}

void ItemAward::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:POGOProtos.Inventory.Item.ItemAward)
  // optional .POGOProtos.Inventory.Item.ItemId item_id = 1;
  if (this->item_id() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      1, this->item_id(), output);
  }

  // optional int32 item_count = 2;
  if (this->item_count() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(2, this->item_count(), output);
  }

  // @@protoc_insertion_point(serialize_end:POGOProtos.Inventory.Item.ItemAward)
}

::google::protobuf::uint8* ItemAward::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:POGOProtos.Inventory.Item.ItemAward)
  // optional .POGOProtos.Inventory.Item.ItemId item_id = 1;
  if (this->item_id() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteEnumToArray(
      1, this->item_id(), target);
  }

  // optional int32 item_count = 2;
  if (this->item_count() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(2, this->item_count(), target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:POGOProtos.Inventory.Item.ItemAward)
  return target;
}

int ItemAward::ByteSize() const {
// @@protoc_insertion_point(message_byte_size_start:POGOProtos.Inventory.Item.ItemAward)
  int total_size = 0;

  // optional .POGOProtos.Inventory.Item.ItemId item_id = 1;
  if (this->item_id() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::EnumSize(this->item_id());
  }

  // optional int32 item_count = 2;
  if (this->item_count() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->item_count());
  }

  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void ItemAward::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:POGOProtos.Inventory.Item.ItemAward)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  const ItemAward* source = 
      ::google::protobuf::internal::DynamicCastToGenerated<const ItemAward>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:POGOProtos.Inventory.Item.ItemAward)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:POGOProtos.Inventory.Item.ItemAward)
    MergeFrom(*source);
  }
}

void ItemAward::MergeFrom(const ItemAward& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:POGOProtos.Inventory.Item.ItemAward)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  if (from.item_id() != 0) {
    set_item_id(from.item_id());
  }
  if (from.item_count() != 0) {
    set_item_count(from.item_count());
  }
}

void ItemAward::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:POGOProtos.Inventory.Item.ItemAward)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void ItemAward::CopyFrom(const ItemAward& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:POGOProtos.Inventory.Item.ItemAward)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ItemAward::IsInitialized() const {

  return true;
}

void ItemAward::Swap(ItemAward* other) {
  if (other == this) return;
  InternalSwap(other);
}
void ItemAward::InternalSwap(ItemAward* other) {
  std::swap(item_id_, other->item_id_);
  std::swap(item_count_, other->item_count_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata ItemAward::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = ItemAward_descriptor_;
  metadata.reflection = ItemAward_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// ItemAward

// optional .POGOProtos.Inventory.Item.ItemId item_id = 1;
void ItemAward::clear_item_id() {
  item_id_ = 0;
}
 ::POGOProtos::Inventory::Item::ItemId ItemAward::item_id() const {
  // @@protoc_insertion_point(field_get:POGOProtos.Inventory.Item.ItemAward.item_id)
  return static_cast< ::POGOProtos::Inventory::Item::ItemId >(item_id_);
}
 void ItemAward::set_item_id(::POGOProtos::Inventory::Item::ItemId value) {
  
  item_id_ = value;
  // @@protoc_insertion_point(field_set:POGOProtos.Inventory.Item.ItemAward.item_id)
}

// optional int32 item_count = 2;
void ItemAward::clear_item_count() {
  item_count_ = 0;
}
 ::google::protobuf::int32 ItemAward::item_count() const {
  // @@protoc_insertion_point(field_get:POGOProtos.Inventory.Item.ItemAward.item_count)
  return item_count_;
}
 void ItemAward::set_item_count(::google::protobuf::int32 value) {
  
  item_count_ = value;
  // @@protoc_insertion_point(field_set:POGOProtos.Inventory.Item.ItemAward.item_count)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace Item
}  // namespace Inventory
}  // namespace POGOProtos

// @@protoc_insertion_point(global_scope)