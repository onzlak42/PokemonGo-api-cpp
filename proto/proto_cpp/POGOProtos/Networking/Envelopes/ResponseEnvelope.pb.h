// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: POGOProtos/Networking/Envelopes/ResponseEnvelope.proto

#ifndef PROTOBUF_POGOProtos_2fNetworking_2fEnvelopes_2fResponseEnvelope_2eproto__INCLUDED
#define PROTOBUF_POGOProtos_2fNetworking_2fEnvelopes_2fResponseEnvelope_2eproto__INCLUDED

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
#include "POGOProtos/Networking/Envelopes/AuthTicket.pb.h"
#include "POGOProtos/Networking/Envelopes/Unknown6Response.pb.h"
// @@protoc_insertion_point(includes)

namespace POGOProtos {
namespace Networking {
namespace Envelopes {

// Internal implementation detail -- do not call these.
void protobuf_AddDesc_POGOProtos_2fNetworking_2fEnvelopes_2fResponseEnvelope_2eproto();
void protobuf_AssignDesc_POGOProtos_2fNetworking_2fEnvelopes_2fResponseEnvelope_2eproto();
void protobuf_ShutdownFile_POGOProtos_2fNetworking_2fEnvelopes_2fResponseEnvelope_2eproto();

class ResponseEnvelope;

// ===================================================================

class ResponseEnvelope : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:POGOProtos.Networking.Envelopes.ResponseEnvelope) */ {
 public:
  ResponseEnvelope();
  virtual ~ResponseEnvelope();

  ResponseEnvelope(const ResponseEnvelope& from);

  inline ResponseEnvelope& operator=(const ResponseEnvelope& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const ResponseEnvelope& default_instance();

  void Swap(ResponseEnvelope* other);

  // implements Message ----------------------------------------------

  inline ResponseEnvelope* New() const { return New(NULL); }

  ResponseEnvelope* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const ResponseEnvelope& from);
  void MergeFrom(const ResponseEnvelope& from);
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
  void InternalSwap(ResponseEnvelope* other);
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

  // optional int32 status_code = 1;
  void clear_status_code();
  static const int kStatusCodeFieldNumber = 1;
  ::google::protobuf::int32 status_code() const;
  void set_status_code(::google::protobuf::int32 value);

  // optional uint64 request_id = 2;
  void clear_request_id();
  static const int kRequestIdFieldNumber = 2;
  ::google::protobuf::uint64 request_id() const;
  void set_request_id(::google::protobuf::uint64 value);

  // optional string api_url = 3;
  void clear_api_url();
  static const int kApiUrlFieldNumber = 3;
  const ::std::string& api_url() const;
  void set_api_url(const ::std::string& value);
  void set_api_url(const char* value);
  void set_api_url(const char* value, size_t size);
  ::std::string* mutable_api_url();
  ::std::string* release_api_url();
  void set_allocated_api_url(::std::string* api_url);

  // repeated .POGOProtos.Networking.Envelopes.Unknown6Response unknown6 = 6;
  int unknown6_size() const;
  void clear_unknown6();
  static const int kUnknown6FieldNumber = 6;
  const ::POGOProtos::Networking::Envelopes::Unknown6Response& unknown6(int index) const;
  ::POGOProtos::Networking::Envelopes::Unknown6Response* mutable_unknown6(int index);
  ::POGOProtos::Networking::Envelopes::Unknown6Response* add_unknown6();
  ::google::protobuf::RepeatedPtrField< ::POGOProtos::Networking::Envelopes::Unknown6Response >*
      mutable_unknown6();
  const ::google::protobuf::RepeatedPtrField< ::POGOProtos::Networking::Envelopes::Unknown6Response >&
      unknown6() const;

  // optional .POGOProtos.Networking.Envelopes.AuthTicket auth_ticket = 7;
  bool has_auth_ticket() const;
  void clear_auth_ticket();
  static const int kAuthTicketFieldNumber = 7;
  const ::POGOProtos::Networking::Envelopes::AuthTicket& auth_ticket() const;
  ::POGOProtos::Networking::Envelopes::AuthTicket* mutable_auth_ticket();
  ::POGOProtos::Networking::Envelopes::AuthTicket* release_auth_ticket();
  void set_allocated_auth_ticket(::POGOProtos::Networking::Envelopes::AuthTicket* auth_ticket);

  // repeated bytes returns = 100;
  int returns_size() const;
  void clear_returns();
  static const int kReturnsFieldNumber = 100;
  const ::std::string& returns(int index) const;
  ::std::string* mutable_returns(int index);
  void set_returns(int index, const ::std::string& value);
  void set_returns(int index, const char* value);
  void set_returns(int index, const void* value, size_t size);
  ::std::string* add_returns();
  void add_returns(const ::std::string& value);
  void add_returns(const char* value);
  void add_returns(const void* value, size_t size);
  const ::google::protobuf::RepeatedPtrField< ::std::string>& returns() const;
  ::google::protobuf::RepeatedPtrField< ::std::string>* mutable_returns();

  // optional string error = 101;
  void clear_error();
  static const int kErrorFieldNumber = 101;
  const ::std::string& error() const;
  void set_error(const ::std::string& value);
  void set_error(const char* value);
  void set_error(const char* value, size_t size);
  ::std::string* mutable_error();
  ::std::string* release_error();
  void set_allocated_error(::std::string* error);

  // @@protoc_insertion_point(class_scope:POGOProtos.Networking.Envelopes.ResponseEnvelope)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  bool _is_default_instance_;
  ::google::protobuf::uint64 request_id_;
  ::google::protobuf::internal::ArenaStringPtr api_url_;
  ::google::protobuf::RepeatedPtrField< ::POGOProtos::Networking::Envelopes::Unknown6Response > unknown6_;
  ::POGOProtos::Networking::Envelopes::AuthTicket* auth_ticket_;
  ::google::protobuf::RepeatedPtrField< ::std::string> returns_;
  ::google::protobuf::internal::ArenaStringPtr error_;
  ::google::protobuf::int32 status_code_;
  mutable int _cached_size_;
  friend void  protobuf_AddDesc_POGOProtos_2fNetworking_2fEnvelopes_2fResponseEnvelope_2eproto();
  friend void protobuf_AssignDesc_POGOProtos_2fNetworking_2fEnvelopes_2fResponseEnvelope_2eproto();
  friend void protobuf_ShutdownFile_POGOProtos_2fNetworking_2fEnvelopes_2fResponseEnvelope_2eproto();

  void InitAsDefaultInstance();
  static ResponseEnvelope* default_instance_;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// ResponseEnvelope

// optional int32 status_code = 1;
inline void ResponseEnvelope::clear_status_code() {
  status_code_ = 0;
}
inline ::google::protobuf::int32 ResponseEnvelope::status_code() const {
  // @@protoc_insertion_point(field_get:POGOProtos.Networking.Envelopes.ResponseEnvelope.status_code)
  return status_code_;
}
inline void ResponseEnvelope::set_status_code(::google::protobuf::int32 value) {
  
  status_code_ = value;
  // @@protoc_insertion_point(field_set:POGOProtos.Networking.Envelopes.ResponseEnvelope.status_code)
}

// optional uint64 request_id = 2;
inline void ResponseEnvelope::clear_request_id() {
  request_id_ = GOOGLE_ULONGLONG(0);
}
inline ::google::protobuf::uint64 ResponseEnvelope::request_id() const {
  // @@protoc_insertion_point(field_get:POGOProtos.Networking.Envelopes.ResponseEnvelope.request_id)
  return request_id_;
}
inline void ResponseEnvelope::set_request_id(::google::protobuf::uint64 value) {
  
  request_id_ = value;
  // @@protoc_insertion_point(field_set:POGOProtos.Networking.Envelopes.ResponseEnvelope.request_id)
}

// optional string api_url = 3;
inline void ResponseEnvelope::clear_api_url() {
  api_url_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& ResponseEnvelope::api_url() const {
  // @@protoc_insertion_point(field_get:POGOProtos.Networking.Envelopes.ResponseEnvelope.api_url)
  return api_url_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void ResponseEnvelope::set_api_url(const ::std::string& value) {
  
  api_url_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:POGOProtos.Networking.Envelopes.ResponseEnvelope.api_url)
}
inline void ResponseEnvelope::set_api_url(const char* value) {
  
  api_url_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:POGOProtos.Networking.Envelopes.ResponseEnvelope.api_url)
}
inline void ResponseEnvelope::set_api_url(const char* value, size_t size) {
  
  api_url_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:POGOProtos.Networking.Envelopes.ResponseEnvelope.api_url)
}
inline ::std::string* ResponseEnvelope::mutable_api_url() {
  
  // @@protoc_insertion_point(field_mutable:POGOProtos.Networking.Envelopes.ResponseEnvelope.api_url)
  return api_url_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* ResponseEnvelope::release_api_url() {
  // @@protoc_insertion_point(field_release:POGOProtos.Networking.Envelopes.ResponseEnvelope.api_url)
  
  return api_url_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void ResponseEnvelope::set_allocated_api_url(::std::string* api_url) {
  if (api_url != NULL) {
    
  } else {
    
  }
  api_url_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), api_url);
  // @@protoc_insertion_point(field_set_allocated:POGOProtos.Networking.Envelopes.ResponseEnvelope.api_url)
}

// repeated .POGOProtos.Networking.Envelopes.Unknown6Response unknown6 = 6;
inline int ResponseEnvelope::unknown6_size() const {
  return unknown6_.size();
}
inline void ResponseEnvelope::clear_unknown6() {
  unknown6_.Clear();
}
inline const ::POGOProtos::Networking::Envelopes::Unknown6Response& ResponseEnvelope::unknown6(int index) const {
  // @@protoc_insertion_point(field_get:POGOProtos.Networking.Envelopes.ResponseEnvelope.unknown6)
  return unknown6_.Get(index);
}
inline ::POGOProtos::Networking::Envelopes::Unknown6Response* ResponseEnvelope::mutable_unknown6(int index) {
  // @@protoc_insertion_point(field_mutable:POGOProtos.Networking.Envelopes.ResponseEnvelope.unknown6)
  return unknown6_.Mutable(index);
}
inline ::POGOProtos::Networking::Envelopes::Unknown6Response* ResponseEnvelope::add_unknown6() {
  // @@protoc_insertion_point(field_add:POGOProtos.Networking.Envelopes.ResponseEnvelope.unknown6)
  return unknown6_.Add();
}
inline ::google::protobuf::RepeatedPtrField< ::POGOProtos::Networking::Envelopes::Unknown6Response >*
ResponseEnvelope::mutable_unknown6() {
  // @@protoc_insertion_point(field_mutable_list:POGOProtos.Networking.Envelopes.ResponseEnvelope.unknown6)
  return &unknown6_;
}
inline const ::google::protobuf::RepeatedPtrField< ::POGOProtos::Networking::Envelopes::Unknown6Response >&
ResponseEnvelope::unknown6() const {
  // @@protoc_insertion_point(field_list:POGOProtos.Networking.Envelopes.ResponseEnvelope.unknown6)
  return unknown6_;
}

// optional .POGOProtos.Networking.Envelopes.AuthTicket auth_ticket = 7;
inline bool ResponseEnvelope::has_auth_ticket() const {
  return !_is_default_instance_ && auth_ticket_ != NULL;
}
inline void ResponseEnvelope::clear_auth_ticket() {
  if (GetArenaNoVirtual() == NULL && auth_ticket_ != NULL) delete auth_ticket_;
  auth_ticket_ = NULL;
}
inline const ::POGOProtos::Networking::Envelopes::AuthTicket& ResponseEnvelope::auth_ticket() const {
  // @@protoc_insertion_point(field_get:POGOProtos.Networking.Envelopes.ResponseEnvelope.auth_ticket)
  return auth_ticket_ != NULL ? *auth_ticket_ : *default_instance_->auth_ticket_;
}
inline ::POGOProtos::Networking::Envelopes::AuthTicket* ResponseEnvelope::mutable_auth_ticket() {
  
  if (auth_ticket_ == NULL) {
    auth_ticket_ = new ::POGOProtos::Networking::Envelopes::AuthTicket;
  }
  // @@protoc_insertion_point(field_mutable:POGOProtos.Networking.Envelopes.ResponseEnvelope.auth_ticket)
  return auth_ticket_;
}
inline ::POGOProtos::Networking::Envelopes::AuthTicket* ResponseEnvelope::release_auth_ticket() {
  // @@protoc_insertion_point(field_release:POGOProtos.Networking.Envelopes.ResponseEnvelope.auth_ticket)
  
  ::POGOProtos::Networking::Envelopes::AuthTicket* temp = auth_ticket_;
  auth_ticket_ = NULL;
  return temp;
}
inline void ResponseEnvelope::set_allocated_auth_ticket(::POGOProtos::Networking::Envelopes::AuthTicket* auth_ticket) {
  delete auth_ticket_;
  auth_ticket_ = auth_ticket;
  if (auth_ticket) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:POGOProtos.Networking.Envelopes.ResponseEnvelope.auth_ticket)
}

// repeated bytes returns = 100;
inline int ResponseEnvelope::returns_size() const {
  return returns_.size();
}
inline void ResponseEnvelope::clear_returns() {
  returns_.Clear();
}
inline const ::std::string& ResponseEnvelope::returns(int index) const {
  // @@protoc_insertion_point(field_get:POGOProtos.Networking.Envelopes.ResponseEnvelope.returns)
  return returns_.Get(index);
}
inline ::std::string* ResponseEnvelope::mutable_returns(int index) {
  // @@protoc_insertion_point(field_mutable:POGOProtos.Networking.Envelopes.ResponseEnvelope.returns)
  return returns_.Mutable(index);
}
inline void ResponseEnvelope::set_returns(int index, const ::std::string& value) {
  // @@protoc_insertion_point(field_set:POGOProtos.Networking.Envelopes.ResponseEnvelope.returns)
  returns_.Mutable(index)->assign(value);
}
inline void ResponseEnvelope::set_returns(int index, const char* value) {
  returns_.Mutable(index)->assign(value);
  // @@protoc_insertion_point(field_set_char:POGOProtos.Networking.Envelopes.ResponseEnvelope.returns)
}
inline void ResponseEnvelope::set_returns(int index, const void* value, size_t size) {
  returns_.Mutable(index)->assign(
    reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:POGOProtos.Networking.Envelopes.ResponseEnvelope.returns)
}
inline ::std::string* ResponseEnvelope::add_returns() {
  // @@protoc_insertion_point(field_add_mutable:POGOProtos.Networking.Envelopes.ResponseEnvelope.returns)
  return returns_.Add();
}
inline void ResponseEnvelope::add_returns(const ::std::string& value) {
  returns_.Add()->assign(value);
  // @@protoc_insertion_point(field_add:POGOProtos.Networking.Envelopes.ResponseEnvelope.returns)
}
inline void ResponseEnvelope::add_returns(const char* value) {
  returns_.Add()->assign(value);
  // @@protoc_insertion_point(field_add_char:POGOProtos.Networking.Envelopes.ResponseEnvelope.returns)
}
inline void ResponseEnvelope::add_returns(const void* value, size_t size) {
  returns_.Add()->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_add_pointer:POGOProtos.Networking.Envelopes.ResponseEnvelope.returns)
}
inline const ::google::protobuf::RepeatedPtrField< ::std::string>&
ResponseEnvelope::returns() const {
  // @@protoc_insertion_point(field_list:POGOProtos.Networking.Envelopes.ResponseEnvelope.returns)
  return returns_;
}
inline ::google::protobuf::RepeatedPtrField< ::std::string>*
ResponseEnvelope::mutable_returns() {
  // @@protoc_insertion_point(field_mutable_list:POGOProtos.Networking.Envelopes.ResponseEnvelope.returns)
  return &returns_;
}

// optional string error = 101;
inline void ResponseEnvelope::clear_error() {
  error_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& ResponseEnvelope::error() const {
  // @@protoc_insertion_point(field_get:POGOProtos.Networking.Envelopes.ResponseEnvelope.error)
  return error_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void ResponseEnvelope::set_error(const ::std::string& value) {
  
  error_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:POGOProtos.Networking.Envelopes.ResponseEnvelope.error)
}
inline void ResponseEnvelope::set_error(const char* value) {
  
  error_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:POGOProtos.Networking.Envelopes.ResponseEnvelope.error)
}
inline void ResponseEnvelope::set_error(const char* value, size_t size) {
  
  error_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:POGOProtos.Networking.Envelopes.ResponseEnvelope.error)
}
inline ::std::string* ResponseEnvelope::mutable_error() {
  
  // @@protoc_insertion_point(field_mutable:POGOProtos.Networking.Envelopes.ResponseEnvelope.error)
  return error_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* ResponseEnvelope::release_error() {
  // @@protoc_insertion_point(field_release:POGOProtos.Networking.Envelopes.ResponseEnvelope.error)
  
  return error_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void ResponseEnvelope::set_allocated_error(::std::string* error) {
  if (error != NULL) {
    
  } else {
    
  }
  error_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), error);
  // @@protoc_insertion_point(field_set_allocated:POGOProtos.Networking.Envelopes.ResponseEnvelope.error)
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace Envelopes
}  // namespace Networking
}  // namespace POGOProtos

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_POGOProtos_2fNetworking_2fEnvelopes_2fResponseEnvelope_2eproto__INCLUDED