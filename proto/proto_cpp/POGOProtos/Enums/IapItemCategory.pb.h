// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: POGOProtos/Enums/IapItemCategory.proto

#ifndef PROTOBUF_POGOProtos_2fEnums_2fIapItemCategory_2eproto__INCLUDED
#define PROTOBUF_POGOProtos_2fEnums_2fIapItemCategory_2eproto__INCLUDED

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
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/generated_enum_reflection.h>
// @@protoc_insertion_point(includes)

namespace POGOProtos {
namespace Enums {

// Internal implementation detail -- do not call these.
void protobuf_AddDesc_POGOProtos_2fEnums_2fIapItemCategory_2eproto();
void protobuf_AssignDesc_POGOProtos_2fEnums_2fIapItemCategory_2eproto();
void protobuf_ShutdownFile_POGOProtos_2fEnums_2fIapItemCategory_2eproto();


enum HoloIapItemCategory {
  IAP_CATEGORY_NONE = 0,
  IAP_CATEGORY_BUNDLE = 1,
  IAP_CATEGORY_ITEMS = 2,
  IAP_CATEGORY_UPGRADES = 3,
  IAP_CATEGORY_POKECOINS = 4,
  HoloIapItemCategory_INT_MIN_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32min,
  HoloIapItemCategory_INT_MAX_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32max
};
bool HoloIapItemCategory_IsValid(int value);
const HoloIapItemCategory HoloIapItemCategory_MIN = IAP_CATEGORY_NONE;
const HoloIapItemCategory HoloIapItemCategory_MAX = IAP_CATEGORY_POKECOINS;
const int HoloIapItemCategory_ARRAYSIZE = HoloIapItemCategory_MAX + 1;

const ::google::protobuf::EnumDescriptor* HoloIapItemCategory_descriptor();
inline const ::std::string& HoloIapItemCategory_Name(HoloIapItemCategory value) {
  return ::google::protobuf::internal::NameOfEnum(
    HoloIapItemCategory_descriptor(), value);
}
inline bool HoloIapItemCategory_Parse(
    const ::std::string& name, HoloIapItemCategory* value) {
  return ::google::protobuf::internal::ParseNamedEnum<HoloIapItemCategory>(
    HoloIapItemCategory_descriptor(), name, value);
}
// ===================================================================


// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace Enums
}  // namespace POGOProtos

#ifndef SWIG
namespace google {
namespace protobuf {

template <> struct is_proto_enum< ::POGOProtos::Enums::HoloIapItemCategory> : ::google::protobuf::internal::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::POGOProtos::Enums::HoloIapItemCategory>() {
  return ::POGOProtos::Enums::HoloIapItemCategory_descriptor();
}

}  // namespace protobuf
}  // namespace google
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_POGOProtos_2fEnums_2fIapItemCategory_2eproto__INCLUDED
