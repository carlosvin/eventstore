// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: event_store.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "event_store.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace event {

namespace {


}  // namespace


void protobuf_AssignDesc_event_5fstore_2eproto() {
  protobuf_AddDesc_event_5fstore_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "event_store.proto");
  GOOGLE_CHECK(file != NULL);
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_event_5fstore_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
}

}  // namespace

void protobuf_ShutdownFile_event_5fstore_2eproto() {
}

void protobuf_AddDesc_event_5fstore_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::common::protobuf_AddDesc_base_2eproto();
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\021event_store.proto\022\005event\032\nbase.proto2;"
    "\n\nEventStore\022-\n\nget_events\022\014.common.Uuid"
    "\032\r.common.Event\"\0000\001B\003\370\001\001b\006proto3", 112);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "event_store.proto", &protobuf_RegisterTypes);
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_event_5fstore_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_event_5fstore_2eproto {
  StaticDescriptorInitializer_event_5fstore_2eproto() {
    protobuf_AddDesc_event_5fstore_2eproto();
  }
} static_descriptor_initializer_event_5fstore_2eproto_;

// @@protoc_insertion_point(namespace_scope)

}  // namespace event

// @@protoc_insertion_point(global_scope)
