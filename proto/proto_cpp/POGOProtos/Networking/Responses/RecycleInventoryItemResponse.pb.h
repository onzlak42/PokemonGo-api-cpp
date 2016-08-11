// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: POGOProtos/Networking/Responses/RecycleInventoryItemResponse.proto

#ifndef PROTOBUF_POGOProtos_2fNetworking_2fResponses_2fRecycleInventoryItemResponse_2eproto__INCLUDED
#define PROTOBUF_POGOProtos_2fNetworking_2fResponses_2fRecycleInventoryItemResponse_2eproto__INCLUDED

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
#include <google/protobuf/generated_enum_reflection.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)

namespace POGOProtos {
namespace Networking {
namespace Responses {

// Internal implementation detail -- do not call these.
void protobuf_AddDesc_POGOProtos_2fNetworking_2fResponses_2fRecycleInventoryItemResponse_2eproto();
void protobuf_AssignDesc_POGOProtos_2fNetworking_2fResponses_2fRecycleInventoryItemResponse_2eproto();
void protobuf_ShutdownFile_POGOProtos_2fNetworking_2fResponses_2fRecycleInventoryItemResponse_2eproto();

class RecycleInventoryItemResponse;

enum RecycleInventoryItemResponse_Result {
  RecycleInventoryItemResponse_Result_UNSET = 0,
  RecycleInventoryItemResponse_Result_SUCCESS = 1,
  RecycleInventoryItemResponse_Result_ERROR_NOT_ENOUGH_COPIES = 2,
  RecycleInventoryItemResponse_Result_ERROR_CANNOT_RECYCLE_INCUBATORS = 3,
  RecycleInventoryItemResponse_Result_RecycleInventoryItemResponse_Result_INT_MIN_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32min,
  RecycleInventoryItemResponse_Result_RecycleInventoryItemResponse_Result_INT_MAX_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32max
};
bool RecycleInventoryItemResponse_Result_IsValid(int value);
const RecycleInventoryItemResponse_Result RecycleInventoryItemResponse_Result_Result_MIN = RecycleInventoryItemResponse_Result_UNSET;
const RecycleInventoryItemResponse_Result RecycleInventoryItemResponse_Result_Result_MAX = RecycleInventoryItemResponse_Result_ERROR_CANNOT_RECYCLE_INCUBATORS;
const int RecycleInventoryItemResponse_Result_Result_ARRAYSIZE = RecycleInventoryItemResponse_Result_Result_MAX + 1;

const ::google::protobuf::EnumDescriptor* RecycleInventoryItemResponse_Result_descriptor();
inline const ::std::string& RecycleInventoryItemResponse_Result_Name(RecycleInventoryItemResponse_Result value) {
  return ::google::protobuf::internal::NameOfEnum(
    RecycleInventoryItemResponse_Result_descriptor(), value);
}
inline bool RecycleInventoryItemResponse_Result_Parse(
    const ::std::string& name, RecycleInventoryItemResponse_Result* value) {
  return ::google::protobuf::internal::ParseNamedEnum<RecycleInventoryItemResponse_Result>(
    RecycleInventoryItemResponse_Result_descriptor(), name, value);
}
// ===================================================================

class RecycleInventoryItemResponse : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:POGOProtos.Networking.Responses.RecycleInventoryItemResponse) */ {
 public:
  RecycleInventoryItemResponse();
  virtual ~RecycleInventoryItemResponse();

  RecycleInventoryItemResponse(const RecycleInventoryItemResponse& from);

  inline RecycleInventoryItemResponse& operator=(const RecycleInventoryItemResponse& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const RecycleInventoryItemResponse& default_instance();

  void Swap(RecycleInventoryItemResponse* other);

  // implements Message ----------------------------------------------

  inline RecycleInventoryItemResponse* New() const { return New(NULL); }

  RecycleInventoryItemResponse* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const RecycleInventoryItemResponse& from);
  void MergeFrom(const RecycleInventoryItemResponse& from);
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
  void InternalSwap(RecycleInventoryItemResponse* other);
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

  typedef RecycleInventoryItemResponse_Result Result;
  static const Result UNSET =
    RecycleInventoryItemResponse_Result_UNSET;
  static const Result SUCCESS =
    RecycleInventoryItemResponse_Result_SUCCESS;
  static const Result ERROR_NOT_ENOUGH_COPIES =
    RecycleInventoryItemResponse_Result_ERROR_NOT_ENOUGH_COPIES;
  static const Result ERROR_CANNOT_RECYCLE_INCUBATORS =
    RecycleInventoryItemResponse_Result_ERROR_CANNOT_RECYCLE_INCUBATORS;
  static inline bool Result_IsValid(int value) {
    return RecycleInventoryItemResponse_Result_IsValid(value);
  }
  static const Result Result_MIN =
    RecycleInventoryItemResponse_Result_Result_MIN;
  static const Result Result_MAX =
    RecycleInventoryItemResponse_Result_Result_MAX;
  static const int Result_ARRAYSIZE =
    RecycleInventoryItemResponse_Result_Result_ARRAYSIZE;
  static inline const ::google::protobuf::EnumDescriptor*
  Result_descriptor() {
    return RecycleInventoryItemResponse_Result_descriptor();
  }
  static inline const ::std::string& Result_Name(Result value) {
    return RecycleInventoryItemResponse_Result_Name(value);
  }
  static inline bool Result_Parse(const ::std::string& name,
      Result* value) {
    return RecycleInventoryItemResponse_Result_Parse(name, value);
  }

  // accessors -------------------------------------------------------

  // optional .POGOProtos.Networking.Responses.RecycleInventoryItemResponse.Result result = 1;
  void clear_result();
  static const int kResultFieldNumber = 1;
  ::POGOProtos::Networking::Responses::RecycleInventoryItemResponse_Result result() const;
  void set_result(::POGOProtos::Networking::Responses::RecycleInventoryItemResponse_Result value);

  // optional int32 new_count = 2;
  void clear_new_count();
  static const int kNewCountFieldNumber = 2;
  ::google::protobuf::int32 new_count() const;
  void set_new_count(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:POGOProtos.Networking.Responses.RecycleInventoryItemResponse)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  bool _is_default_instance_;
  int result_;
  ::google::protobuf::int32 new_count_;
  mutable int _cached_size_;
  friend void  protobuf_AddDesc_POGOProtos_2fNetworking_2fResponses_2fRecycleInventoryItemResponse_2eproto();
  friend void protobuf_AssignDesc_POGOProtos_2fNetworking_2fResponses_2fRecycleInventoryItemResponse_2eproto();
  friend void protobuf_ShutdownFile_POGOProtos_2fNetworking_2fResponses_2fRecycleInventoryItemResponse_2eproto();

  void InitAsDefaultInstance();
  static RecycleInventoryItemResponse* default_instance_;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// RecycleInventoryItemResponse

// optional .POGOProtos.Networking.Responses.RecycleInventoryItemResponse.Result result = 1;
inline void RecycleInventoryItemResponse::clear_result() {
  result_ = 0;
}
inline ::POGOProtos::Networking::Responses::RecycleInventoryItemResponse_Result RecycleInventoryItemResponse::result() const {
  // @@protoc_insertion_point(field_get:POGOProtos.Networking.Responses.RecycleInventoryItemResponse.result)
  return static_cast< ::POGOProtos::Networking::Responses::RecycleInventoryItemResponse_Result >(result_);
}
inline void RecycleInventoryItemResponse::set_result(::POGOProtos::Networking::Responses::RecycleInventoryItemResponse_Result value) {
  
  result_ = value;
  // @@protoc_insertion_point(field_set:POGOProtos.Networking.Responses.RecycleInventoryItemResponse.result)
}

// optional int32 new_count = 2;
inline void RecycleInventoryItemResponse::clear_new_count() {
  new_count_ = 0;
}
inline ::google::protobuf::int32 RecycleInventoryItemResponse::new_count() const {
  // @@protoc_insertion_point(field_get:POGOProtos.Networking.Responses.RecycleInventoryItemResponse.new_count)
  return new_count_;
}
inline void RecycleInventoryItemResponse::set_new_count(::google::protobuf::int32 value) {
  
  new_count_ = value;
  // @@protoc_insertion_point(field_set:POGOProtos.Networking.Responses.RecycleInventoryItemResponse.new_count)
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace Responses
}  // namespace Networking
}  // namespace POGOProtos

#ifndef SWIG
namespace google {
namespace protobuf {

template <> struct is_proto_enum< ::POGOProtos::Networking::Responses::RecycleInventoryItemResponse_Result> : ::google::protobuf::internal::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::POGOProtos::Networking::Responses::RecycleInventoryItemResponse_Result>() {
  return ::POGOProtos::Networking::Responses::RecycleInventoryItemResponse_Result_descriptor();
}

}  // namespace protobuf
}  // namespace google
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_POGOProtos_2fNetworking_2fResponses_2fRecycleInventoryItemResponse_2eproto__INCLUDED