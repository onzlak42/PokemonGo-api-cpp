// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: POGOProtos/Inventory/AppliedItem.proto

#ifndef PROTOBUF_POGOProtos_2fInventory_2fAppliedItem_2eproto__INCLUDED
#define PROTOBUF_POGOProtos_2fInventory_2fAppliedItem_2eproto__INCLUDED

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
#include "POGOProtos/Inventory/Item/ItemId.pb.h"
#include "POGOProtos/Inventory/Item/ItemType.pb.h"
// @@protoc_insertion_point(includes)

namespace POGOProtos {
namespace Inventory {

// Internal implementation detail -- do not call these.
void protobuf_AddDesc_POGOProtos_2fInventory_2fAppliedItem_2eproto();
void protobuf_AssignDesc_POGOProtos_2fInventory_2fAppliedItem_2eproto();
void protobuf_ShutdownFile_POGOProtos_2fInventory_2fAppliedItem_2eproto();

class AppliedItem;

// ===================================================================

class AppliedItem : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:POGOProtos.Inventory.AppliedItem) */ {
 public:
  AppliedItem();
  virtual ~AppliedItem();

  AppliedItem(const AppliedItem& from);

  inline AppliedItem& operator=(const AppliedItem& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const AppliedItem& default_instance();

  void Swap(AppliedItem* other);

  // implements Message ----------------------------------------------

  inline AppliedItem* New() const { return New(NULL); }

  AppliedItem* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const AppliedItem& from);
  void MergeFrom(const AppliedItem& from);
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
  void InternalSwap(AppliedItem* other);
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

  // optional .POGOProtos.Inventory.Item.ItemId item_id = 1;
  void clear_item_id();
  static const int kItemIdFieldNumber = 1;
  ::POGOProtos::Inventory::Item::ItemId item_id() const;
  void set_item_id(::POGOProtos::Inventory::Item::ItemId value);

  // optional .POGOProtos.Inventory.Item.ItemType item_type = 2;
  void clear_item_type();
  static const int kItemTypeFieldNumber = 2;
  ::POGOProtos::Inventory::Item::ItemType item_type() const;
  void set_item_type(::POGOProtos::Inventory::Item::ItemType value);

  // optional int64 expire_ms = 3;
  void clear_expire_ms();
  static const int kExpireMsFieldNumber = 3;
  ::google::protobuf::int64 expire_ms() const;
  void set_expire_ms(::google::protobuf::int64 value);

  // optional int64 applied_ms = 4;
  void clear_applied_ms();
  static const int kAppliedMsFieldNumber = 4;
  ::google::protobuf::int64 applied_ms() const;
  void set_applied_ms(::google::protobuf::int64 value);

  // @@protoc_insertion_point(class_scope:POGOProtos.Inventory.AppliedItem)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  bool _is_default_instance_;
  int item_id_;
  int item_type_;
  ::google::protobuf::int64 expire_ms_;
  ::google::protobuf::int64 applied_ms_;
  mutable int _cached_size_;
  friend void  protobuf_AddDesc_POGOProtos_2fInventory_2fAppliedItem_2eproto();
  friend void protobuf_AssignDesc_POGOProtos_2fInventory_2fAppliedItem_2eproto();
  friend void protobuf_ShutdownFile_POGOProtos_2fInventory_2fAppliedItem_2eproto();

  void InitAsDefaultInstance();
  static AppliedItem* default_instance_;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// AppliedItem

// optional .POGOProtos.Inventory.Item.ItemId item_id = 1;
inline void AppliedItem::clear_item_id() {
  item_id_ = 0;
}
inline ::POGOProtos::Inventory::Item::ItemId AppliedItem::item_id() const {
  // @@protoc_insertion_point(field_get:POGOProtos.Inventory.AppliedItem.item_id)
  return static_cast< ::POGOProtos::Inventory::Item::ItemId >(item_id_);
}
inline void AppliedItem::set_item_id(::POGOProtos::Inventory::Item::ItemId value) {
  
  item_id_ = value;
  // @@protoc_insertion_point(field_set:POGOProtos.Inventory.AppliedItem.item_id)
}

// optional .POGOProtos.Inventory.Item.ItemType item_type = 2;
inline void AppliedItem::clear_item_type() {
  item_type_ = 0;
}
inline ::POGOProtos::Inventory::Item::ItemType AppliedItem::item_type() const {
  // @@protoc_insertion_point(field_get:POGOProtos.Inventory.AppliedItem.item_type)
  return static_cast< ::POGOProtos::Inventory::Item::ItemType >(item_type_);
}
inline void AppliedItem::set_item_type(::POGOProtos::Inventory::Item::ItemType value) {
  
  item_type_ = value;
  // @@protoc_insertion_point(field_set:POGOProtos.Inventory.AppliedItem.item_type)
}

// optional int64 expire_ms = 3;
inline void AppliedItem::clear_expire_ms() {
  expire_ms_ = GOOGLE_LONGLONG(0);
}
inline ::google::protobuf::int64 AppliedItem::expire_ms() const {
  // @@protoc_insertion_point(field_get:POGOProtos.Inventory.AppliedItem.expire_ms)
  return expire_ms_;
}
inline void AppliedItem::set_expire_ms(::google::protobuf::int64 value) {
  
  expire_ms_ = value;
  // @@protoc_insertion_point(field_set:POGOProtos.Inventory.AppliedItem.expire_ms)
}

// optional int64 applied_ms = 4;
inline void AppliedItem::clear_applied_ms() {
  applied_ms_ = GOOGLE_LONGLONG(0);
}
inline ::google::protobuf::int64 AppliedItem::applied_ms() const {
  // @@protoc_insertion_point(field_get:POGOProtos.Inventory.AppliedItem.applied_ms)
  return applied_ms_;
}
inline void AppliedItem::set_applied_ms(::google::protobuf::int64 value) {
  
  applied_ms_ = value;
  // @@protoc_insertion_point(field_set:POGOProtos.Inventory.AppliedItem.applied_ms)
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace Inventory
}  // namespace POGOProtos

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_POGOProtos_2fInventory_2fAppliedItem_2eproto__INCLUDED
