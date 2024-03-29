// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: sdk/stream/aggregated_quote_v2/request.proto

#include "sdk/stream/aggregated_quote_v2/request.pb.h"

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
PROTOBUF_CONSTEXPR StreamAggregatedQuoteRequestV2::StreamAggregatedQuoteRequestV2(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_.instrument_class_)*/{&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{}}
  , /*decltype(_impl_.code_)*/{&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{}}
  , /*decltype(_impl_.interval_)*/nullptr
  , /*decltype(_impl_.include_unvetted_price_)*/false
  , /*decltype(_impl_._cached_size_)*/{}} {}
struct StreamAggregatedQuoteRequestV2DefaultTypeInternal {
  PROTOBUF_CONSTEXPR StreamAggregatedQuoteRequestV2DefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~StreamAggregatedQuoteRequestV2DefaultTypeInternal() {}
  union {
    StreamAggregatedQuoteRequestV2 _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 StreamAggregatedQuoteRequestV2DefaultTypeInternal _StreamAggregatedQuoteRequestV2_default_instance_;
}  // namespace kaikosdk
static ::_pb::Metadata file_level_metadata_sdk_2fstream_2faggregated_5fquote_5fv2_2frequest_2eproto[1];
static constexpr ::_pb::EnumDescriptor const** file_level_enum_descriptors_sdk_2fstream_2faggregated_5fquote_5fv2_2frequest_2eproto = nullptr;
static constexpr ::_pb::ServiceDescriptor const** file_level_service_descriptors_sdk_2fstream_2faggregated_5fquote_5fv2_2frequest_2eproto = nullptr;

const uint32_t TableStruct_sdk_2fstream_2faggregated_5fquote_5fv2_2frequest_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::kaikosdk::StreamAggregatedQuoteRequestV2, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::kaikosdk::StreamAggregatedQuoteRequestV2, _impl_.instrument_class_),
  PROTOBUF_FIELD_OFFSET(::kaikosdk::StreamAggregatedQuoteRequestV2, _impl_.code_),
  PROTOBUF_FIELD_OFFSET(::kaikosdk::StreamAggregatedQuoteRequestV2, _impl_.interval_),
  PROTOBUF_FIELD_OFFSET(::kaikosdk::StreamAggregatedQuoteRequestV2, _impl_.include_unvetted_price_),
};
static const ::_pbi::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, -1, sizeof(::kaikosdk::StreamAggregatedQuoteRequestV2)},
};

static const ::_pb::Message* const file_default_instances[] = {
  &::kaikosdk::_StreamAggregatedQuoteRequestV2_default_instance_._instance,
};

const char descriptor_table_protodef_sdk_2fstream_2faggregated_5fquote_5fv2_2frequest_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n,sdk/stream/aggregated_quote_v2/request"
  ".proto\022\010kaikosdk\032\034sdk/core/data_interval"
  ".proto\"\222\001\n\036StreamAggregatedQuoteRequestV"
  "2\022\030\n\020instrument_class\030\001 \001(\t\022\014\n\004code\030\002 \001("
  "\t\022(\n\010interval\030\003 \001(\0132\026.kaikosdk.DataInter"
  "val\022\036\n\026include_unvetted_price\030\004 \001(\010B\242\001\n("
  "com.kaiko.sdk.stream.aggregated_quote_v2"
  "P\001ZPgithub.com/kaikodata/kaiko-go-sdk/st"
  "ream/aggregated_quote_v2;aggregated_quot"
  "e_v2\252\002!KaikoSdk.Stream.AggregatedQuoteV2"
  "b\006proto3"
  ;
static const ::_pbi::DescriptorTable* const descriptor_table_sdk_2fstream_2faggregated_5fquote_5fv2_2frequest_2eproto_deps[1] = {
  &::descriptor_table_sdk_2fcore_2fdata_5finterval_2eproto,
};
static ::_pbi::once_flag descriptor_table_sdk_2fstream_2faggregated_5fquote_5fv2_2frequest_2eproto_once;
const ::_pbi::DescriptorTable descriptor_table_sdk_2fstream_2faggregated_5fquote_5fv2_2frequest_2eproto = {
    false, false, 408, descriptor_table_protodef_sdk_2fstream_2faggregated_5fquote_5fv2_2frequest_2eproto,
    "sdk/stream/aggregated_quote_v2/request.proto",
    &descriptor_table_sdk_2fstream_2faggregated_5fquote_5fv2_2frequest_2eproto_once, descriptor_table_sdk_2fstream_2faggregated_5fquote_5fv2_2frequest_2eproto_deps, 1, 1,
    schemas, file_default_instances, TableStruct_sdk_2fstream_2faggregated_5fquote_5fv2_2frequest_2eproto::offsets,
    file_level_metadata_sdk_2fstream_2faggregated_5fquote_5fv2_2frequest_2eproto, file_level_enum_descriptors_sdk_2fstream_2faggregated_5fquote_5fv2_2frequest_2eproto,
    file_level_service_descriptors_sdk_2fstream_2faggregated_5fquote_5fv2_2frequest_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::_pbi::DescriptorTable* descriptor_table_sdk_2fstream_2faggregated_5fquote_5fv2_2frequest_2eproto_getter() {
  return &descriptor_table_sdk_2fstream_2faggregated_5fquote_5fv2_2frequest_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2 static ::_pbi::AddDescriptorsRunner dynamic_init_dummy_sdk_2fstream_2faggregated_5fquote_5fv2_2frequest_2eproto(&descriptor_table_sdk_2fstream_2faggregated_5fquote_5fv2_2frequest_2eproto);
namespace kaikosdk {

// ===================================================================

class StreamAggregatedQuoteRequestV2::_Internal {
 public:
  static const ::kaikosdk::DataInterval& interval(const StreamAggregatedQuoteRequestV2* msg);
};

const ::kaikosdk::DataInterval&
StreamAggregatedQuoteRequestV2::_Internal::interval(const StreamAggregatedQuoteRequestV2* msg) {
  return *msg->_impl_.interval_;
}
void StreamAggregatedQuoteRequestV2::clear_interval() {
  if (GetArenaForAllocation() == nullptr && _impl_.interval_ != nullptr) {
    delete _impl_.interval_;
  }
  _impl_.interval_ = nullptr;
}
StreamAggregatedQuoteRequestV2::StreamAggregatedQuoteRequestV2(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor(arena, is_message_owned);
  // @@protoc_insertion_point(arena_constructor:kaikosdk.StreamAggregatedQuoteRequestV2)
}
StreamAggregatedQuoteRequestV2::StreamAggregatedQuoteRequestV2(const StreamAggregatedQuoteRequestV2& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  StreamAggregatedQuoteRequestV2* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_.instrument_class_){}
    , decltype(_impl_.code_){}
    , decltype(_impl_.interval_){nullptr}
    , decltype(_impl_.include_unvetted_price_){}
    , /*decltype(_impl_._cached_size_)*/{}};

  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  _impl_.instrument_class_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.instrument_class_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (!from._internal_instrument_class().empty()) {
    _this->_impl_.instrument_class_.Set(from._internal_instrument_class(), 
      _this->GetArenaForAllocation());
  }
  _impl_.code_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.code_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (!from._internal_code().empty()) {
    _this->_impl_.code_.Set(from._internal_code(), 
      _this->GetArenaForAllocation());
  }
  if (from._internal_has_interval()) {
    _this->_impl_.interval_ = new ::kaikosdk::DataInterval(*from._impl_.interval_);
  }
  _this->_impl_.include_unvetted_price_ = from._impl_.include_unvetted_price_;
  // @@protoc_insertion_point(copy_constructor:kaikosdk.StreamAggregatedQuoteRequestV2)
}

inline void StreamAggregatedQuoteRequestV2::SharedCtor(
    ::_pb::Arena* arena, bool is_message_owned) {
  (void)arena;
  (void)is_message_owned;
  new (&_impl_) Impl_{
      decltype(_impl_.instrument_class_){}
    , decltype(_impl_.code_){}
    , decltype(_impl_.interval_){nullptr}
    , decltype(_impl_.include_unvetted_price_){false}
    , /*decltype(_impl_._cached_size_)*/{}
  };
  _impl_.instrument_class_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.instrument_class_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  _impl_.code_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.code_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
}

StreamAggregatedQuoteRequestV2::~StreamAggregatedQuoteRequestV2() {
  // @@protoc_insertion_point(destructor:kaikosdk.StreamAggregatedQuoteRequestV2)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void StreamAggregatedQuoteRequestV2::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  _impl_.instrument_class_.Destroy();
  _impl_.code_.Destroy();
  if (this != internal_default_instance()) delete _impl_.interval_;
}

void StreamAggregatedQuoteRequestV2::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void StreamAggregatedQuoteRequestV2::Clear() {
// @@protoc_insertion_point(message_clear_start:kaikosdk.StreamAggregatedQuoteRequestV2)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _impl_.instrument_class_.ClearToEmpty();
  _impl_.code_.ClearToEmpty();
  if (GetArenaForAllocation() == nullptr && _impl_.interval_ != nullptr) {
    delete _impl_.interval_;
  }
  _impl_.interval_ = nullptr;
  _impl_.include_unvetted_price_ = false;
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* StreamAggregatedQuoteRequestV2::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // string instrument_class = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 10)) {
          auto str = _internal_mutable_instrument_class();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
          CHK_(::_pbi::VerifyUTF8(str, "kaikosdk.StreamAggregatedQuoteRequestV2.instrument_class"));
        } else
          goto handle_unusual;
        continue;
      // string code = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 18)) {
          auto str = _internal_mutable_code();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
          CHK_(::_pbi::VerifyUTF8(str, "kaikosdk.StreamAggregatedQuoteRequestV2.code"));
        } else
          goto handle_unusual;
        continue;
      // .kaikosdk.DataInterval interval = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 26)) {
          ptr = ctx->ParseMessage(_internal_mutable_interval(), ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // bool include_unvetted_price = 4;
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 32)) {
          _impl_.include_unvetted_price_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
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

uint8_t* StreamAggregatedQuoteRequestV2::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:kaikosdk.StreamAggregatedQuoteRequestV2)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // string instrument_class = 1;
  if (!this->_internal_instrument_class().empty()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_instrument_class().data(), static_cast<int>(this->_internal_instrument_class().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "kaikosdk.StreamAggregatedQuoteRequestV2.instrument_class");
    target = stream->WriteStringMaybeAliased(
        1, this->_internal_instrument_class(), target);
  }

  // string code = 2;
  if (!this->_internal_code().empty()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_code().data(), static_cast<int>(this->_internal_code().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "kaikosdk.StreamAggregatedQuoteRequestV2.code");
    target = stream->WriteStringMaybeAliased(
        2, this->_internal_code(), target);
  }

  // .kaikosdk.DataInterval interval = 3;
  if (this->_internal_has_interval()) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(3, _Internal::interval(this),
        _Internal::interval(this).GetCachedSize(), target, stream);
  }

  // bool include_unvetted_price = 4;
  if (this->_internal_include_unvetted_price() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteBoolToArray(4, this->_internal_include_unvetted_price(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:kaikosdk.StreamAggregatedQuoteRequestV2)
  return target;
}

size_t StreamAggregatedQuoteRequestV2::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:kaikosdk.StreamAggregatedQuoteRequestV2)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // string instrument_class = 1;
  if (!this->_internal_instrument_class().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_instrument_class());
  }

  // string code = 2;
  if (!this->_internal_code().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_code());
  }

  // .kaikosdk.DataInterval interval = 3;
  if (this->_internal_has_interval()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
        *_impl_.interval_);
  }

  // bool include_unvetted_price = 4;
  if (this->_internal_include_unvetted_price() != 0) {
    total_size += 1 + 1;
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData StreamAggregatedQuoteRequestV2::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    StreamAggregatedQuoteRequestV2::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*StreamAggregatedQuoteRequestV2::GetClassData() const { return &_class_data_; }


void StreamAggregatedQuoteRequestV2::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<StreamAggregatedQuoteRequestV2*>(&to_msg);
  auto& from = static_cast<const StreamAggregatedQuoteRequestV2&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:kaikosdk.StreamAggregatedQuoteRequestV2)
  GOOGLE_DCHECK_NE(&from, _this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  if (!from._internal_instrument_class().empty()) {
    _this->_internal_set_instrument_class(from._internal_instrument_class());
  }
  if (!from._internal_code().empty()) {
    _this->_internal_set_code(from._internal_code());
  }
  if (from._internal_has_interval()) {
    _this->_internal_mutable_interval()->::kaikosdk::DataInterval::MergeFrom(
        from._internal_interval());
  }
  if (from._internal_include_unvetted_price() != 0) {
    _this->_internal_set_include_unvetted_price(from._internal_include_unvetted_price());
  }
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void StreamAggregatedQuoteRequestV2::CopyFrom(const StreamAggregatedQuoteRequestV2& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:kaikosdk.StreamAggregatedQuoteRequestV2)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool StreamAggregatedQuoteRequestV2::IsInitialized() const {
  return true;
}

void StreamAggregatedQuoteRequestV2::InternalSwap(StreamAggregatedQuoteRequestV2* other) {
  using std::swap;
  auto* lhs_arena = GetArenaForAllocation();
  auto* rhs_arena = other->GetArenaForAllocation();
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &_impl_.instrument_class_, lhs_arena,
      &other->_impl_.instrument_class_, rhs_arena
  );
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &_impl_.code_, lhs_arena,
      &other->_impl_.code_, rhs_arena
  );
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(StreamAggregatedQuoteRequestV2, _impl_.include_unvetted_price_)
      + sizeof(StreamAggregatedQuoteRequestV2::_impl_.include_unvetted_price_)
      - PROTOBUF_FIELD_OFFSET(StreamAggregatedQuoteRequestV2, _impl_.interval_)>(
          reinterpret_cast<char*>(&_impl_.interval_),
          reinterpret_cast<char*>(&other->_impl_.interval_));
}

::PROTOBUF_NAMESPACE_ID::Metadata StreamAggregatedQuoteRequestV2::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_sdk_2fstream_2faggregated_5fquote_5fv2_2frequest_2eproto_getter, &descriptor_table_sdk_2fstream_2faggregated_5fquote_5fv2_2frequest_2eproto_once,
      file_level_metadata_sdk_2fstream_2faggregated_5fquote_5fv2_2frequest_2eproto[0]);
}

// @@protoc_insertion_point(namespace_scope)
}  // namespace kaikosdk
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::kaikosdk::StreamAggregatedQuoteRequestV2*
Arena::CreateMaybeMessage< ::kaikosdk::StreamAggregatedQuoteRequestV2 >(Arena* arena) {
  return Arena::CreateMessageInternal< ::kaikosdk::StreamAggregatedQuoteRequestV2 >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
