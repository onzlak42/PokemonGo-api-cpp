// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: POGOProtos/Networking/Envelopes/Unknown6.proto

#ifndef PROTOBUF_POGOProtos_2fNetworking_2fEnvelopes_2fUnknown6_2eproto__INCLUDED
#define PROTOBUF_POGOProtos_2fNetworking_2fEnvelopes_2fUnknown6_2eproto__INCLUDED

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
// @@protoc_insertion_point(includes)

namespace POGOProtos {
namespace Networking {
namespace Envelopes {

// Internal implementation detail -- do not call these.
void protobuf_AddDesc_POGOProtos_2fNetworking_2fEnvelopes_2fUnknown6_2eproto();
void protobuf_AssignDesc_POGOProtos_2fNetworking_2fEnvelopes_2fUnknown6_2eproto();
void protobuf_ShutdownFile_POGOProtos_2fNetworking_2fEnvelopes_2fUnknown6_2eproto();

class Unknown6;
class Unknown6_Unknown2;

// ===================================================================

class Unknown6_Unknown2 : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:POGOProtos.Networking.Envelopes.Unknown6.Unknown2) */ {
 public:
  Unknown6_Unknown2();
  virtual ~Unknown6_Unknown2();

  Unknown6_Unknown2(const Unknown6_Unknown2& from);

  inline Unknown6_Unknown2& operator=(const Unknown6_Unknown2& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const Unknown6_Unknown2& default_instance();

  void Swap(Unknown6_Unknown2* other);

  // implements Message ----------------------------------------------

  inline Unknown6_Unknown2* New() const { return New(NULL); }

  Unknown6_Unknown2* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const Unknown6_Unknown2& from);
  void MergeFrom(const Unknown6_Unknown2& from);
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
  void InternalSwap(Unknown6_Unknown2* other);
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

  // optional bytes encrypted_signature = 1;
  void clear_encrypted_signature();
  static const int kEncryptedSignatureFieldNumber = 1;
  const ::std::string& encrypted_signature() const;
  void set_encrypted_signature(const ::std::string& value);
  void set_encrypted_signature(const char* value);
  void set_encrypted_signature(const void* value, size_t size);
  ::std::string* mutable_encrypted_signature();
  ::std::string* release_encrypted_signature();
  void set_allocated_encrypted_signature(::std::string* encrypted_signature);

  // @@protoc_insertion_point(class_scope:POGOProtos.Networking.Envelopes.Unknown6.Unknown2)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  bool _is_default_instance_;
  ::google::protobuf::internal::ArenaStringPtr encrypted_signature_;
  mutable int _cached_size_;
  friend void  protobuf_AddDesc_POGOProtos_2fNetworking_2fEnvelopes_2fUnknown6_2eproto();
  friend void protobuf_AssignDesc_POGOProtos_2fNetworking_2fEnvelopes_2fUnknown6_2eproto();
  friend void protobuf_ShutdownFile_POGOProtos_2fNetworking_2fEnvelopes_2fUnknown6_2eproto();

  void InitAsDefaultInstance();
  static Unknown6_Unknown2* default_instance_;
};
// -------------------------------------------------------------------

class Unknown6 : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:POGOProtos.Networking.Envelopes.Unknown6) */ {
 public:
  Unknown6();
  virtual ~Unknown6();

  Unknown6(const Unknown6& from);

  inline Unknown6& operator=(const Unknown6& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const Unknown6& default_instance();

  void Swap(Unknown6* other);

  // implements Message ----------------------------------------------

  inline Unknown6* New() const { return New(NULL); }

  Unknown6* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const Unknown6& from);
  void MergeFrom(const Unknown6& from);
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
  void InternalSwap(Unknown6* other);
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

  typedef Unknown6_Unknown2 Unknown2;

  // accessors -------------------------------------------------------

  // optional int32 request_type = 1;
  void clear_request_type();
  static const int kRequestTypeFieldNumber = 1;
  ::google::protobuf::int32 request_type() const;
  void set_request_type(::google::protobuf::int32 value);

  // optional .POGOProtos.Networking.Envelopes.Unknown6.Unknown2 unknown2 = 2;
  bool has_unknown2() const;
  void clear_unknown2();
  static const int kUnknown2FieldNumber = 2;
  const ::POGOProtos::Networking::Envelopes::Unknown6_Unknown2& unknown2() const;
  ::POGOProtos::Networking::Envelopes::Unknown6_Unknown2* mutable_unknown2();
  ::POGOProtos::Networking::Envelopes::Unknown6_Unknown2* release_unknown2();
  void set_allocated_unknown2(::POGOProtos::Networking::Envelopes::Unknown6_Unknown2* unknown2);

  // @@protoc_insertion_point(class_scope:POGOProtos.Networking.Envelopes.Unknown6)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  bool _is_default_instance_;
  ::POGOProtos::Networking::Envelopes::Unknown6_Unknown2* unknown2_;
  ::google::protobuf::int32 request_type_;
  mutable int _cached_size_;
  friend void  protobuf_AddDesc_POGOProtos_2fNetworking_2fEnvelopes_2fUnknown6_2eproto();
  friend void protobuf_AssignDesc_POGOProtos_2fNetworking_2fEnvelopes_2fUnknown6_2eproto();
  friend void protobuf_ShutdownFile_POGOProtos_2fNetworking_2fEnvelopes_2fUnknown6_2eproto();

  void InitAsDefaultInstance();
  static Unknown6* default_instance_;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// Unknown6_Unknown2

// optional bytes encrypted_signature = 1;
inline void Unknown6_Unknown2::clear_encrypted_signature() {
  encrypted_signature_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& Unknown6_Unknown2::encrypted_signature() const {
  // @@protoc_insertion_point(field_get:POGOProtos.Networking.Envelopes.Unknown6.Unknown2.encrypted_signature)
  return encrypted_signature_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Unknown6_Unknown2::set_encrypted_signature(const ::std::string& value) {
  
  encrypted_signature_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:POGOProtos.Networking.Envelopes.Unknown6.Unknown2.encrypted_signature)
}
inline void Unknown6_Unknown2::set_encrypted_signature(const char* value) {
  
  encrypted_signature_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:POGOProtos.Networking.Envelopes.Unknown6.Unknown2.encrypted_signature)
}
inline void Unknown6_Unknown2::set_encrypted_signature(const void* value, size_t size) {
  
  encrypted_signature_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:POGOProtos.Networking.Envelopes.Unknown6.Unknown2.encrypted_signature)
}
inline ::std::string* Unknown6_Unknown2::mutable_encrypted_signature() {
  
  // @@protoc_insertion_point(field_mutable:POGOProtos.Networking.Envelopes.Unknown6.Unknown2.encrypted_signature)
  return encrypted_signature_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Unknown6_Unknown2::release_encrypted_signature() {
  // @@protoc_insertion_point(field_release:POGOProtos.Networking.Envelopes.Unknown6.Unknown2.encrypted_signature)
  
  return encrypted_signature_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Unknown6_Unknown2::set_allocated_encrypted_signature(::std::string* encrypted_signature) {
  if (encrypted_signature != NULL) {
    
  } else {
    
  }
  encrypted_signature_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), encrypted_signature);
  // @@protoc_insertion_point(field_set_allocated:POGOProtos.Networking.Envelopes.Unknown6.Unknown2.encrypted_signature)
}

// -------------------------------------------------------------------

// Unknown6

// optional int32 request_type = 1;
inline void Unknown6::clear_request_type() {
  request_type_ = 0;
}
inline ::google::protobuf::int32 Unknown6::request_type() const {
  // @@protoc_insertion_point(field_get:POGOProtos.Networking.Envelopes.Unknown6.request_type)
  return request_type_;
}
inline void Unknown6::set_request_type(::google::protobuf::int32 value) {
  
  request_type_ = value;
  // @@protoc_insertion_point(field_set:POGOProtos.Networking.Envelopes.Unknown6.request_type)
}

// optional .POGOProtos.Networking.Envelopes.Unknown6.Unknown2 unknown2 = 2;
inline bool Unknown6::has_unknown2() const {
  return !_is_default_instance_ && unknown2_ != NULL;
}
inline void Unknown6::clear_unknown2() {
  if (GetArenaNoVirtual() == NULL && unknown2_ != NULL) delete unknown2_;
  unknown2_ = NULL;
}
inline const ::POGOProtos::Networking::Envelopes::Unknown6_Unknown2& Unknown6::unknown2() const {
  // @@protoc_insertion_point(field_get:POGOProtos.Networking.Envelopes.Unknown6.unknown2)
  return unknown2_ != NULL ? *unknown2_ : *default_instance_->unknown2_;
}
inline ::POGOProtos::Networking::Envelopes::Unknown6_Unknown2* Unknown6::mutable_unknown2() {
  
  if (unknown2_ == NULL) {
    unknown2_ = new ::POGOProtos::Networking::Envelopes::Unknown6_Unknown2;
  }
  // @@protoc_insertion_point(field_mutable:POGOProtos.Networking.Envelopes.Unknown6.unknown2)
  return unknown2_;
}
inline ::POGOProtos::Networking::Envelopes::Unknown6_Unknown2* Unknown6::release_unknown2() {
  // @@protoc_insertion_point(field_release:POGOProtos.Networking.Envelopes.Unknown6.unknown2)
  
  ::POGOProtos::Networking::Envelopes::Unknown6_Unknown2* temp = unknown2_;
  unknown2_ = NULL;
  return temp;
}
inline void Unknown6::set_allocated_unknown2(::POGOProtos::Networking::Envelopes::Unknown6_Unknown2* unknown2) {
  delete unknown2_;
  unknown2_ = unknown2;
  if (unknown2) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:POGOProtos.Networking.Envelopes.Unknown6.unknown2)
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace Envelopes
}  // namespace Networking
}  // namespace POGOProtos

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_POGOProtos_2fNetworking_2fEnvelopes_2fUnknown6_2eproto__INCLUDED