// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: POGOProtos/Enums/PokemonType.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "POGOProtos/Enums/PokemonType.pb.h"

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
namespace Enums {

namespace {

const ::google::protobuf::EnumDescriptor* PokemonType_descriptor_ = NULL;

}  // namespace


void protobuf_AssignDesc_POGOProtos_2fEnums_2fPokemonType_2eproto() GOOGLE_ATTRIBUTE_COLD;
void protobuf_AssignDesc_POGOProtos_2fEnums_2fPokemonType_2eproto() {
  protobuf_AddDesc_POGOProtos_2fEnums_2fPokemonType_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "POGOProtos/Enums/PokemonType.proto");
  GOOGLE_CHECK(file != NULL);
  PokemonType_descriptor_ = file->enum_type(0);
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_POGOProtos_2fEnums_2fPokemonType_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
}

}  // namespace

void protobuf_ShutdownFile_POGOProtos_2fEnums_2fPokemonType_2eproto() {
}

void protobuf_AddDesc_POGOProtos_2fEnums_2fPokemonType_2eproto() GOOGLE_ATTRIBUTE_COLD;
void protobuf_AddDesc_POGOProtos_2fEnums_2fPokemonType_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\"POGOProtos/Enums/PokemonType.proto\022\020PO"
    "GOProtos.Enums*\332\003\n\013PokemonType\022\025\n\021POKEMO"
    "N_TYPE_NONE\020\000\022\027\n\023POKEMON_TYPE_NORMAL\020\001\022\031"
    "\n\025POKEMON_TYPE_FIGHTING\020\002\022\027\n\023POKEMON_TYP"
    "E_FLYING\020\003\022\027\n\023POKEMON_TYPE_POISON\020\004\022\027\n\023P"
    "OKEMON_TYPE_GROUND\020\005\022\025\n\021POKEMON_TYPE_ROC"
    "K\020\006\022\024\n\020POKEMON_TYPE_BUG\020\007\022\026\n\022POKEMON_TYP"
    "E_GHOST\020\010\022\026\n\022POKEMON_TYPE_STEEL\020\t\022\025\n\021POK"
    "EMON_TYPE_FIRE\020\n\022\026\n\022POKEMON_TYPE_WATER\020\013"
    "\022\026\n\022POKEMON_TYPE_GRASS\020\014\022\031\n\025POKEMON_TYPE"
    "_ELECTRIC\020\r\022\030\n\024POKEMON_TYPE_PSYCHIC\020\016\022\024\n"
    "\020POKEMON_TYPE_ICE\020\017\022\027\n\023POKEMON_TYPE_DRAG"
    "ON\020\020\022\025\n\021POKEMON_TYPE_DARK\020\021\022\026\n\022POKEMON_T"
    "YPE_FAIRY\020\022b\006proto3", 539);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "POGOProtos/Enums/PokemonType.proto", &protobuf_RegisterTypes);
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_POGOProtos_2fEnums_2fPokemonType_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_POGOProtos_2fEnums_2fPokemonType_2eproto {
  StaticDescriptorInitializer_POGOProtos_2fEnums_2fPokemonType_2eproto() {
    protobuf_AddDesc_POGOProtos_2fEnums_2fPokemonType_2eproto();
  }
} static_descriptor_initializer_POGOProtos_2fEnums_2fPokemonType_2eproto_;
const ::google::protobuf::EnumDescriptor* PokemonType_descriptor() {
  protobuf_AssignDescriptorsOnce();
  return PokemonType_descriptor_;
}
bool PokemonType_IsValid(int value) {
  switch(value) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
    case 10:
    case 11:
    case 12:
    case 13:
    case 14:
    case 15:
    case 16:
    case 17:
    case 18:
      return true;
    default:
      return false;
  }
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace Enums
}  // namespace POGOProtos

// @@protoc_insertion_point(global_scope)