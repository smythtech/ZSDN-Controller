// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: LoggingModule.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "LoggingModule.pb.h"

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

namespace LoggingModule_Proto {

namespace {

const ::google::protobuf::Descriptor* To_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  To_reflection_ = NULL;
struct ToOneofInstance {
  const ::LoggingModule_Proto::FooBar* foo_;
}* To_default_oneof_instance_ = NULL;
const ::google::protobuf::Descriptor* From_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  From_reflection_ = NULL;
struct FromOneofInstance {
  const ::LoggingModule_Proto::FooBar* bar_;
}* From_default_oneof_instance_ = NULL;
const ::google::protobuf::Descriptor* FooBar_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  FooBar_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_LoggingModule_2eproto() {
  protobuf_AddDesc_LoggingModule_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "LoggingModule.proto");
  GOOGLE_CHECK(file != NULL);
  To_descriptor_ = file->message_type(0);
  static const int To_offsets_[2] = {
    PROTO2_GENERATED_DEFAULT_ONEOF_FIELD_OFFSET(To_default_oneof_instance_, foo_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(To, ToMsg_),
  };
  To_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      To_descriptor_,
      To::default_instance_,
      To_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(To, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(To, _unknown_fields_),
      -1,
      To_default_oneof_instance_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(To, _oneof_case_[0]),
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(To));
  From_descriptor_ = file->message_type(1);
  static const int From_offsets_[2] = {
    PROTO2_GENERATED_DEFAULT_ONEOF_FIELD_OFFSET(From_default_oneof_instance_, bar_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(From, FromMsg_),
  };
  From_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      From_descriptor_,
      From::default_instance_,
      From_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(From, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(From, _unknown_fields_),
      -1,
      From_default_oneof_instance_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(From, _oneof_case_[0]),
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(From));
  FooBar_descriptor_ = file->message_type(2);
  static const int FooBar_offsets_[1] = {
  };
  FooBar_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      FooBar_descriptor_,
      FooBar::default_instance_,
      FooBar_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(FooBar, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(FooBar, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(FooBar));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_LoggingModule_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    To_descriptor_, &To::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    From_descriptor_, &From::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    FooBar_descriptor_, &FooBar::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_LoggingModule_2eproto() {
  delete To::default_instance_;
  delete To_default_oneof_instance_;
  delete To_reflection_;
  delete From::default_instance_;
  delete From_default_oneof_instance_;
  delete From_reflection_;
  delete FooBar::default_instance_;
  delete FooBar_reflection_;
}

void protobuf_AddDesc_LoggingModule_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\023LoggingModule.proto\022\023LoggingModule_Pro"
    "to\"9\n\002To\022*\n\003foo\030\001 \001(\0132\033.LoggingModule_Pr"
    "oto.FooBarH\000B\007\n\005ToMsg\"=\n\004From\022*\n\003bar\030\001 \001"
    "(\0132\033.LoggingModule_Proto.FooBarH\000B\t\n\007Fro"
    "mMsg\"\010\n\006FooBarB&\n\rzsdn.protocolB\025Logging"
    "ModuleProtocol", 214);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "LoggingModule.proto", &protobuf_RegisterTypes);
  To::default_instance_ = new To();
  To_default_oneof_instance_ = new ToOneofInstance;
  From::default_instance_ = new From();
  From_default_oneof_instance_ = new FromOneofInstance;
  FooBar::default_instance_ = new FooBar();
  To::default_instance_->InitAsDefaultInstance();
  From::default_instance_->InitAsDefaultInstance();
  FooBar::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_LoggingModule_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_LoggingModule_2eproto {
  StaticDescriptorInitializer_LoggingModule_2eproto() {
    protobuf_AddDesc_LoggingModule_2eproto();
  }
} static_descriptor_initializer_LoggingModule_2eproto_;

// ===================================================================

#ifndef _MSC_VER
const int To::kFooFieldNumber;
#endif  // !_MSC_VER

To::To()
  : ::google::protobuf::Message() {
  SharedCtor();
  // @@protoc_insertion_point(constructor:LoggingModule_Proto.To)
}

void To::InitAsDefaultInstance() {
  To_default_oneof_instance_->foo_ = const_cast< ::LoggingModule_Proto::FooBar*>(&::LoggingModule_Proto::FooBar::default_instance());
}

To::To(const To& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:LoggingModule_Proto.To)
}

void To::SharedCtor() {
  _cached_size_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  clear_has_ToMsg();
}

To::~To() {
  // @@protoc_insertion_point(destructor:LoggingModule_Proto.To)
  SharedDtor();
}

void To::SharedDtor() {
  if (has_ToMsg()) {
    clear_ToMsg();
  }
  if (this != default_instance_) {
  }
}

void To::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* To::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return To_descriptor_;
}

const To& To::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_LoggingModule_2eproto();
  return *default_instance_;
}

To* To::default_instance_ = NULL;

To* To::New() const {
  return new To;
}

void To::clear_ToMsg() {
  switch(ToMsg_case()) {
    case kFoo: {
      delete ToMsg_.foo_;
      break;
    }
    case TOMSG_NOT_SET: {
      break;
    }
  }
  _oneof_case_[0] = TOMSG_NOT_SET;
}


void To::Clear() {
  clear_ToMsg();
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool To::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:LoggingModule_Proto.To)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional .LoggingModule_Proto.FooBar foo = 1;
      case 1: {
        if (tag == 10) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_foo()));
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
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:LoggingModule_Proto.To)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:LoggingModule_Proto.To)
  return false;
#undef DO_
}

void To::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:LoggingModule_Proto.To)
  // optional .LoggingModule_Proto.FooBar foo = 1;
  if (has_foo()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      1, this->foo(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:LoggingModule_Proto.To)
}

::google::protobuf::uint8* To::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:LoggingModule_Proto.To)
  // optional .LoggingModule_Proto.FooBar foo = 1;
  if (has_foo()) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteMessageNoVirtualToArray(
        1, this->foo(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:LoggingModule_Proto.To)
  return target;
}

int To::ByteSize() const {
  int total_size = 0;

  switch (ToMsg_case()) {
    // optional .LoggingModule_Proto.FooBar foo = 1;
    case kFoo: {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          this->foo());
      break;
    }
    case TOMSG_NOT_SET: {
      break;
    }
  }
  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void To::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const To* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const To*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void To::MergeFrom(const To& from) {
  GOOGLE_CHECK_NE(&from, this);
  switch (from.ToMsg_case()) {
    case kFoo: {
      mutable_foo()->::LoggingModule_Proto::FooBar::MergeFrom(from.foo());
      break;
    }
    case TOMSG_NOT_SET: {
      break;
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void To::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void To::CopyFrom(const To& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool To::IsInitialized() const {

  return true;
}

void To::Swap(To* other) {
  if (other != this) {
    std::swap(ToMsg_, other->ToMsg_);
    std::swap(_oneof_case_[0], other->_oneof_case_[0]);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata To::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = To_descriptor_;
  metadata.reflection = To_reflection_;
  return metadata;
}


// ===================================================================

#ifndef _MSC_VER
const int From::kBarFieldNumber;
#endif  // !_MSC_VER

From::From()
  : ::google::protobuf::Message() {
  SharedCtor();
  // @@protoc_insertion_point(constructor:LoggingModule_Proto.From)
}

void From::InitAsDefaultInstance() {
  From_default_oneof_instance_->bar_ = const_cast< ::LoggingModule_Proto::FooBar*>(&::LoggingModule_Proto::FooBar::default_instance());
}

From::From(const From& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:LoggingModule_Proto.From)
}

void From::SharedCtor() {
  _cached_size_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  clear_has_FromMsg();
}

From::~From() {
  // @@protoc_insertion_point(destructor:LoggingModule_Proto.From)
  SharedDtor();
}

void From::SharedDtor() {
  if (has_FromMsg()) {
    clear_FromMsg();
  }
  if (this != default_instance_) {
  }
}

void From::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* From::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return From_descriptor_;
}

const From& From::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_LoggingModule_2eproto();
  return *default_instance_;
}

From* From::default_instance_ = NULL;

From* From::New() const {
  return new From;
}

void From::clear_FromMsg() {
  switch(FromMsg_case()) {
    case kBar: {
      delete FromMsg_.bar_;
      break;
    }
    case FROMMSG_NOT_SET: {
      break;
    }
  }
  _oneof_case_[0] = FROMMSG_NOT_SET;
}


void From::Clear() {
  clear_FromMsg();
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool From::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:LoggingModule_Proto.From)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional .LoggingModule_Proto.FooBar bar = 1;
      case 1: {
        if (tag == 10) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_bar()));
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
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:LoggingModule_Proto.From)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:LoggingModule_Proto.From)
  return false;
#undef DO_
}

void From::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:LoggingModule_Proto.From)
  // optional .LoggingModule_Proto.FooBar bar = 1;
  if (has_bar()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      1, this->bar(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:LoggingModule_Proto.From)
}

::google::protobuf::uint8* From::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:LoggingModule_Proto.From)
  // optional .LoggingModule_Proto.FooBar bar = 1;
  if (has_bar()) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteMessageNoVirtualToArray(
        1, this->bar(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:LoggingModule_Proto.From)
  return target;
}

int From::ByteSize() const {
  int total_size = 0;

  switch (FromMsg_case()) {
    // optional .LoggingModule_Proto.FooBar bar = 1;
    case kBar: {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          this->bar());
      break;
    }
    case FROMMSG_NOT_SET: {
      break;
    }
  }
  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void From::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const From* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const From*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void From::MergeFrom(const From& from) {
  GOOGLE_CHECK_NE(&from, this);
  switch (from.FromMsg_case()) {
    case kBar: {
      mutable_bar()->::LoggingModule_Proto::FooBar::MergeFrom(from.bar());
      break;
    }
    case FROMMSG_NOT_SET: {
      break;
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void From::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void From::CopyFrom(const From& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool From::IsInitialized() const {

  return true;
}

void From::Swap(From* other) {
  if (other != this) {
    std::swap(FromMsg_, other->FromMsg_);
    std::swap(_oneof_case_[0], other->_oneof_case_[0]);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata From::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = From_descriptor_;
  metadata.reflection = From_reflection_;
  return metadata;
}


// ===================================================================

#ifndef _MSC_VER
#endif  // !_MSC_VER

FooBar::FooBar()
  : ::google::protobuf::Message() {
  SharedCtor();
  // @@protoc_insertion_point(constructor:LoggingModule_Proto.FooBar)
}

void FooBar::InitAsDefaultInstance() {
}

FooBar::FooBar(const FooBar& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:LoggingModule_Proto.FooBar)
}

void FooBar::SharedCtor() {
  _cached_size_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

FooBar::~FooBar() {
  // @@protoc_insertion_point(destructor:LoggingModule_Proto.FooBar)
  SharedDtor();
}

void FooBar::SharedDtor() {
  if (this != default_instance_) {
  }
}

void FooBar::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* FooBar::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return FooBar_descriptor_;
}

const FooBar& FooBar::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_LoggingModule_2eproto();
  return *default_instance_;
}

FooBar* FooBar::default_instance_ = NULL;

FooBar* FooBar::New() const {
  return new FooBar;
}

void FooBar::Clear() {
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool FooBar::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:LoggingModule_Proto.FooBar)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
  handle_unusual:
    if (tag == 0 ||
        ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
        ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
      goto success;
    }
    DO_(::google::protobuf::internal::WireFormat::SkipField(
          input, tag, mutable_unknown_fields()));
  }
success:
  // @@protoc_insertion_point(parse_success:LoggingModule_Proto.FooBar)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:LoggingModule_Proto.FooBar)
  return false;
#undef DO_
}

void FooBar::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:LoggingModule_Proto.FooBar)
  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:LoggingModule_Proto.FooBar)
}

::google::protobuf::uint8* FooBar::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:LoggingModule_Proto.FooBar)
  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:LoggingModule_Proto.FooBar)
  return target;
}

int FooBar::ByteSize() const {
  int total_size = 0;

  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void FooBar::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const FooBar* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const FooBar*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void FooBar::MergeFrom(const FooBar& from) {
  GOOGLE_CHECK_NE(&from, this);
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void FooBar::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void FooBar::CopyFrom(const FooBar& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool FooBar::IsInitialized() const {

  return true;
}

void FooBar::Swap(FooBar* other) {
  if (other != this) {
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata FooBar::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = FooBar_descriptor_;
  metadata.reflection = FooBar_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace LoggingModule_Proto

// @@protoc_insertion_point(global_scope)
