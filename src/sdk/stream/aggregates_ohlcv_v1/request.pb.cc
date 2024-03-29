// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: sdk/stream/aggregates_ohlcv_v1/request.proto

#include "sdk/stream/aggregates_ohlcv_v1/request.pb.h"

#include <algorithm>

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/wire_format_lite.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>

PROTOBUF_PRAGMA_INIT_SEG

namespace _pb = ::PROTOBUF_NAMESPACE_ID;
namespace _pbi = _pb::internal;

namespace kaikosdk {
PROTOBUF_CONSTEXPR StreamAggregatesOHLCVRequestV1::StreamAggregatesOHLCVRequestV1(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_.aggregate_)*/{&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{}}
  , /*decltype(_impl_.instrument_criteria_)*/nullptr
  , /*decltype(_impl_._cached_size_)*/{}} {}
struct StreamAggregatesOHLCVRequestV1DefaultTypeInternal {
  PROTOBUF_CONSTEXPR StreamAggregatesOHLCVRequestV1DefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~StreamAggregatesOHLCVRequestV1DefaultTypeInternal() {}
  union {
    StreamAggregatesOHLCVRequestV1 _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 StreamAggregatesOHLCVRequestV1DefaultTypeInternal _StreamAggregatesOHLCVRequestV1_default_instance_;
}  // namespace kaikosdk
static ::_pb::Metadata file_level_metadata_sdk_2fstream_2faggregates_5fohlcv_5fv1_2frequest_2eproto[1];
static constexpr ::_pb::EnumDescriptor const** file_level_enum_descriptors_sdk_2fstream_2faggregates_5fohlcv_5fv1_2frequest_2eproto = nullptr;
static constexpr ::_pb::ServiceDescriptor const** file_level_service_descriptors_sdk_2fstream_2faggregates_5fohlcv_5fv1_2frequest_2eproto = nullptr;

const uint32_t TableStruct_sdk_2fstream_2faggregates_5fohlcv_5fv1_2frequest_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::kaikosdk::StreamAggregatesOHLCVRequestV1, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::kaikosdk::StreamAggregatesOHLCVRequestV1, _impl_.instrument_criteria_),
  PROTOBUF_FIELD_OFFSET(::kaikosdk::StreamAggregatesOHLCVRequestV1, _impl_.aggregate_),
};
static const ::_pbi::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, -1, sizeof(::kaikosdk::StreamAggregatesOHLCVRequestV1)},
};

static const ::_pb::Message* const file_default_instances[] = {
  &::kaikosdk::_StreamAggregatesOHLCVRequestV1_default_instance_._instance,
};

const char descriptor_table_protodef_sdk_2fstream_2faggregates_5fohlcv_5fv1_2frequest_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n,sdk/stream/aggregates_ohlcv_v1/request"
  ".proto\022\010kaikosdk\032\"sdk/core/instrument_cr"
  "iteria.proto\"n\n\036StreamAggregatesOHLCVReq"
  "uestV1\0229\n\023instrument_criteria\030\001 \001(\0132\034.ka"
  "ikosdk.InstrumentCriteria\022\021\n\taggregate\030\002"
  " \001(\tB\242\001\n(com.kaiko.sdk.stream.aggregates"
  "_ohlcv_v1P\001ZPgithub.com/kaikodata/kaiko-"
  "go-sdk/stream/aggregates_ohlcv_v1;aggreg"
  "ates_ohlcv_v1\252\002!KaikoSdk.Stream.Aggregat"
  "esOHLCVV1b\006proto3"
  ;
static const ::_pbi::DescriptorTable* const descriptor_table_sdk_2fstream_2faggregates_5fohlcv_5fv1_2frequest_2eproto_deps[1] = {
  &::descriptor_table_sdk_2fcore_2finstrument_5fcriteria_2eproto,
};
static ::_pbi::once_flag descriptor_table_sdk_2fstream_2faggregates_5fohlcv_5fv1_2frequest_2eproto_once;
const ::_pbi::DescriptorTable descriptor_table_sdk_2fstream_2faggregates_5fohlcv_5fv1_2frequest_2eproto = {
    false, false, 377, descriptor_table_protodef_sdk_2fstream_2faggregates_5fohlcv_5fv1_2frequest_2eproto,
    "sdk/stream/aggregates_ohlcv_v1/request.proto",
    &descriptor_table_sdk_2fstream_2faggregates_5fohlcv_5fv1_2frequest_2eproto_once, descriptor_table_sdk_2fstream_2faggregates_5fohlcv_5fv1_2frequest_2eproto_deps, 1, 1,
    schemas, file_default_instances, TableStruct_sdk_2fstream_2faggregates_5fohlcv_5fv1_2frequest_2eproto::offsets,
    file_level_metadata_sdk_2fstream_2faggregates_5fohlcv_5fv1_2frequest_2eproto, file_level_enum_descriptors_sdk_2fstream_2faggregates_5fohlcv_5fv1_2frequest_2eproto,
    file_level_service_descriptors_sdk_2fstream_2faggregates_5fohlcv_5fv1_2frequest_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::_pbi::DescriptorTable* descriptor_table_sdk_2fstream_2faggregates_5fohlcv_5fv1_2frequest_2eproto_getter() {
  return &descriptor_table_sdk_2fstream_2faggregates_5fohlcv_5fv1_2frequest_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2 static ::_pbi::AddDescriptorsRunner dynamic_init_dummy_sdk_2fstream_2faggregates_5fohlcv_5fv1_2frequest_2eproto(&descriptor_table_sdk_2fstream_2faggregates_5fohlcv_5fv1_2frequest_2eproto);
namespace kaikosdk {

// ===================================================================

class StreamAggregatesOHLCVRequestV1::_Internal {
 public:
  static const ::kaikosdk::InstrumentCriteria& instrument_criteria(const StreamAggregatesOHLCVRequestV1* msg);
};

const ::kaikosdk::InstrumentCriteria&
StreamAggregatesOHLCVRequestV1::_Internal::instrument_criteria(const StreamAggregatesOHLCVRequestV1* msg) {
  return *msg->_impl_.instrument_criteria_;
}
void StreamAggregatesOHLCVRequestV1::clear_instrument_criteria() {
  if (GetArenaForAllocation() == nullptr && _impl_.instrument_criteria_ != nullptr) {
    delete _impl_.instrument_criteria_;
  }
  _impl_.instrument_criteria_ = nullptr;
}
StreamAggregatesOHLCVRequestV1::StreamAggregatesOHLCVRequestV1(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor(arena, is_message_owned);
  // @@protoc_insertion_point(arena_constructor:kaikosdk.StreamAggregatesOHLCVRequestV1)
}
StreamAggregatesOHLCVRequestV1::StreamAggregatesOHLCVRequestV1(const StreamAggregatesOHLCVRequestV1& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  StreamAggregatesOHLCVRequestV1* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_.aggregate_){}
    , decltype(_impl_.instrument_criteria_){nullptr}
    , /*decltype(_impl_._cached_size_)*/{}};

  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  _impl_.aggregate_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.aggregate_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (!from._internal_aggregate().empty()) {
    _this->_impl_.aggregate_.Set(from._internal_aggregate(), 
      _this->GetArenaForAllocation());
  }
  if (from._internal_has_instrument_criteria()) {
    _this->_impl_.instrument_criteria_ = new ::kaikosdk::InstrumentCriteria(*from._impl_.instrument_criteria_);
  }
  // @@protoc_insertion_point(copy_constructor:kaikosdk.StreamAggregatesOHLCVRequestV1)
}

inline void StreamAggregatesOHLCVRequestV1::SharedCtor(
    ::_pb::Arena* arena, bool is_message_owned) {
  (void)arena;
  (void)is_message_owned;
  new (&_impl_) Impl_{
      decltype(_impl_.aggregate_){}
    , decltype(_impl_.instrument_criteria_){nullptr}
    , /*decltype(_impl_._cached_size_)*/{}
  };
  _impl_.aggregate_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.aggregate_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
}

StreamAggregatesOHLCVRequestV1::~StreamAggregatesOHLCVRequestV1() {
  // @@protoc_insertion_point(destructor:kaikosdk.StreamAggregatesOHLCVRequestV1)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void StreamAggregatesOHLCVRequestV1::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  _impl_.aggregate_.Destroy();
  if (this != internal_default_instance()) delete _impl_.instrument_criteria_;
}

void StreamAggregatesOHLCVRequestV1::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void StreamAggregatesOHLCVRequestV1::Clear() {
// @@protoc_insertion_point(message_clear_start:kaikosdk.StreamAggregatesOHLCVRequestV1)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _impl_.aggregate_.ClearToEmpty();
  if (GetArenaForAllocation() == nullptr && _impl_.instrument_criteria_ != nullptr) {
    delete _impl_.instrument_criteria_;
  }
  _impl_.instrument_criteria_ = nullptr;
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* StreamAggregatesOHLCVRequestV1::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // .kaikosdk.InstrumentCriteria instrument_criteria = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 10)) {
          ptr = ctx->ParseMessage(_internal_mutable_instrument_criteria(), ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // string aggregate = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 18)) {
          auto str = _internal_mutable_aggregate();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
          CHK_(::_pbi::VerifyUTF8(str, "kaikosdk.StreamAggregatesOHLCVRequestV1.aggregate"));
        } else
          goto handle_unusual;
        continue;
      default:
        goto handle_unusual;
    }  // switch
  handle_unusual:
    if ((tag == 0) || ((tag & 7) == 4)) {
      CHK_(ptr);
      ctx->SetLastTag(tag);
      goto message_done;
    }
    ptr = UnknownFieldParse(
        tag,
        _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
        ptr, ctx);
    CHK_(ptr != nullptr);
  }  // while
message_done:
  return ptr;
failure:
  ptr = nullptr;
  goto message_done;
#undef CHK_
}

uint8_t* StreamAggregatesOHLCVRequestV1::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:kaikosdk.StreamAggregatesOHLCVRequestV1)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // .kaikosdk.InstrumentCriteria instrument_criteria = 1;
  if (this->_internal_has_instrument_criteria()) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(1, _Internal::instrument_criteria(this),
        _Internal::instrument_criteria(this).GetCachedSize(), target, stream);
  }

  // string aggregate = 2;
  if (!this->_internal_aggregate().empty()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_aggregate().data(), static_cast<int>(this->_internal_aggregate().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "kaikosdk.StreamAggregatesOHLCVRequestV1.aggregate");
    target = stream->WriteStringMaybeAliased(
        2, this->_internal_aggregate(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:kaikosdk.StreamAggregatesOHLCVRequestV1)
  return target;
}

size_t StreamAggregatesOHLCVRequestV1::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:kaikosdk.StreamAggregatesOHLCVRequestV1)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // string aggregate = 2;
  if (!this->_internal_aggregate().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_aggregate());
  }

  // .kaikosdk.InstrumentCriteria instrument_criteria = 1;
  if (this->_internal_has_instrument_criteria()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
        *_impl_.instrument_criteria_);
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData StreamAggregatesOHLCVRequestV1::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    StreamAggregatesOHLCVRequestV1::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*StreamAggregatesOHLCVRequestV1::GetClassData() const { return &_class_data_; }


void StreamAggregatesOHLCVRequestV1::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<StreamAggregatesOHLCVRequestV1*>(&to_msg);
  auto& from = static_cast<const StreamAggregatesOHLCVRequestV1&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:kaikosdk.StreamAggregatesOHLCVRequestV1)
  GOOGLE_DCHECK_NE(&from, _this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  if (!from._internal_aggregate().empty()) {
    _this->_internal_set_aggregate(from._internal_aggregate());
  }
  if (from._internal_has_instrument_criteria()) {
    _this->_internal_mutable_instrument_criteria()->::kaikosdk::InstrumentCriteria::MergeFrom(
        from._internal_instrument_criteria());
  }
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void StreamAggregatesOHLCVRequestV1::CopyFrom(const StreamAggregatesOHLCVRequestV1& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:kaikosdk.StreamAggregatesOHLCVRequestV1)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool StreamAggregatesOHLCVRequestV1::IsInitialized() const {
  return true;
}

void StreamAggregatesOHLCVRequestV1::InternalSwap(StreamAggregatesOHLCVRequestV1* other) {
  using std::swap;
  auto* lhs_arena = GetArenaForAllocation();
  auto* rhs_arena = other->GetArenaForAllocation();
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &_impl_.aggregate_, lhs_arena,
      &other->_impl_.aggregate_, rhs_arena
  );
  swap(_impl_.instrument_criteria_, other->_impl_.instrument_criteria_);
}

::PROTOBUF_NAMESPACE_ID::Metadata StreamAggregatesOHLCVRequestV1::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_sdk_2fstream_2faggregates_5fohlcv_5fv1_2frequest_2eproto_getter, &descriptor_table_sdk_2fstream_2faggregates_5fohlcv_5fv1_2frequest_2eproto_once,
      file_level_metadata_sdk_2fstream_2faggregates_5fohlcv_5fv1_2frequest_2eproto[0]);
}

// @@protoc_insertion_point(namespace_scope)
}  // namespace kaikosdk
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::kaikosdk::StreamAggregatesOHLCVRequestV1*
Arena::CreateMaybeMessage< ::kaikosdk::StreamAggregatesOHLCVRequestV1 >(Arena* arena) {
  return Arena::CreateMessageInternal< ::kaikosdk::StreamAggregatesOHLCVRequestV1 >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
