// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: sdk/stream/aggregates_spot_exchange_rate_v1/response.proto

#include "sdk/stream/aggregates_spot_exchange_rate_v1/response.pb.h"

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
PROTOBUF_CONSTEXPR StreamAggregatesSpotExchangeRateV1ResponseV2::StreamAggregatesSpotExchangeRateV1ResponseV2(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_.assets_)*/nullptr
  , /*decltype(_impl_.timestamp_)*/nullptr
  , /*decltype(_impl_.window_)*/nullptr
  , /*decltype(_impl_.price_)*/0
  , /*decltype(_impl_.no_trade_)*/false
  , /*decltype(_impl_._cached_size_)*/{}} {}
struct StreamAggregatesSpotExchangeRateV1ResponseV2DefaultTypeInternal {
  PROTOBUF_CONSTEXPR StreamAggregatesSpotExchangeRateV1ResponseV2DefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~StreamAggregatesSpotExchangeRateV1ResponseV2DefaultTypeInternal() {}
  union {
    StreamAggregatesSpotExchangeRateV1ResponseV2 _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 StreamAggregatesSpotExchangeRateV1ResponseV2DefaultTypeInternal _StreamAggregatesSpotExchangeRateV1ResponseV2_default_instance_;
}  // namespace kaikosdk
static ::_pb::Metadata file_level_metadata_sdk_2fstream_2faggregates_5fspot_5fexchange_5frate_5fv1_2fresponse_2eproto[1];
static constexpr ::_pb::EnumDescriptor const** file_level_enum_descriptors_sdk_2fstream_2faggregates_5fspot_5fexchange_5frate_5fv1_2fresponse_2eproto = nullptr;
static constexpr ::_pb::ServiceDescriptor const** file_level_service_descriptors_sdk_2fstream_2faggregates_5fspot_5fexchange_5frate_5fv1_2fresponse_2eproto = nullptr;

const uint32_t TableStruct_sdk_2fstream_2faggregates_5fspot_5fexchange_5frate_5fv1_2fresponse_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::kaikosdk::StreamAggregatesSpotExchangeRateV1ResponseV2, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::kaikosdk::StreamAggregatesSpotExchangeRateV1ResponseV2, _impl_.assets_),
  PROTOBUF_FIELD_OFFSET(::kaikosdk::StreamAggregatesSpotExchangeRateV1ResponseV2, _impl_.price_),
  PROTOBUF_FIELD_OFFSET(::kaikosdk::StreamAggregatesSpotExchangeRateV1ResponseV2, _impl_.timestamp_),
  PROTOBUF_FIELD_OFFSET(::kaikosdk::StreamAggregatesSpotExchangeRateV1ResponseV2, _impl_.window_),
  PROTOBUF_FIELD_OFFSET(::kaikosdk::StreamAggregatesSpotExchangeRateV1ResponseV2, _impl_.no_trade_),
};
static const ::_pbi::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, -1, sizeof(::kaikosdk::StreamAggregatesSpotExchangeRateV1ResponseV2)},
};

static const ::_pb::Message* const file_default_instances[] = {
  &::kaikosdk::_StreamAggregatesSpotExchangeRateV1ResponseV2_default_instance_._instance,
};

const char descriptor_table_protodef_sdk_2fstream_2faggregates_5fspot_5fexchange_5frate_5fv1_2fresponse_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n:sdk/stream/aggregates_spot_exchange_ra"
  "te_v1/response.proto\022\010kaikosdk\032\037google/p"
  "rotobuf/timestamp.proto\032\025sdk/core/assets"
  ".proto\032\025sdk/core/window.proto\"\302\001\n,Stream"
  "AggregatesSpotExchangeRateV1ResponseV2\022 "
  "\n\006assets\030\001 \001(\0132\020.kaikosdk.Assets\022\r\n\005pric"
  "e\030\002 \001(\001\022-\n\ttimestamp\030\003 \001(\0132\032.google.prot"
  "obuf.Timestamp\022 \n\006window\030\004 \001(\0132\020.kaikosd"
  "k.Window\022\020\n\010no_trade\030\005 \001(\010B\324\001\n5com.kaiko"
  ".sdk.stream.aggregates_spot_exchange_rat"
  "e_v1P\001Zjgithub.com/kaikodata/kaiko-go-sd"
  "k/stream/aggregates_spot_exchange_rate_v"
  "1;aggregates_spot_exchange_rate_v1\252\002,Kai"
  "koSdk.Stream.AggregatesSpotExchangeRateV"
  "1b\006proto3"
  ;
static const ::_pbi::DescriptorTable* const descriptor_table_sdk_2fstream_2faggregates_5fspot_5fexchange_5frate_5fv1_2fresponse_2eproto_deps[3] = {
  &::descriptor_table_google_2fprotobuf_2ftimestamp_2eproto,
  &::descriptor_table_sdk_2fcore_2fassets_2eproto,
  &::descriptor_table_sdk_2fcore_2fwindow_2eproto,
};
static ::_pbi::once_flag descriptor_table_sdk_2fstream_2faggregates_5fspot_5fexchange_5frate_5fv1_2fresponse_2eproto_once;
const ::_pbi::DescriptorTable descriptor_table_sdk_2fstream_2faggregates_5fspot_5fexchange_5frate_5fv1_2fresponse_2eproto = {
    false, false, 569, descriptor_table_protodef_sdk_2fstream_2faggregates_5fspot_5fexchange_5frate_5fv1_2fresponse_2eproto,
    "sdk/stream/aggregates_spot_exchange_rate_v1/response.proto",
    &descriptor_table_sdk_2fstream_2faggregates_5fspot_5fexchange_5frate_5fv1_2fresponse_2eproto_once, descriptor_table_sdk_2fstream_2faggregates_5fspot_5fexchange_5frate_5fv1_2fresponse_2eproto_deps, 3, 1,
    schemas, file_default_instances, TableStruct_sdk_2fstream_2faggregates_5fspot_5fexchange_5frate_5fv1_2fresponse_2eproto::offsets,
    file_level_metadata_sdk_2fstream_2faggregates_5fspot_5fexchange_5frate_5fv1_2fresponse_2eproto, file_level_enum_descriptors_sdk_2fstream_2faggregates_5fspot_5fexchange_5frate_5fv1_2fresponse_2eproto,
    file_level_service_descriptors_sdk_2fstream_2faggregates_5fspot_5fexchange_5frate_5fv1_2fresponse_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::_pbi::DescriptorTable* descriptor_table_sdk_2fstream_2faggregates_5fspot_5fexchange_5frate_5fv1_2fresponse_2eproto_getter() {
  return &descriptor_table_sdk_2fstream_2faggregates_5fspot_5fexchange_5frate_5fv1_2fresponse_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2 static ::_pbi::AddDescriptorsRunner dynamic_init_dummy_sdk_2fstream_2faggregates_5fspot_5fexchange_5frate_5fv1_2fresponse_2eproto(&descriptor_table_sdk_2fstream_2faggregates_5fspot_5fexchange_5frate_5fv1_2fresponse_2eproto);
namespace kaikosdk {

// ===================================================================

class StreamAggregatesSpotExchangeRateV1ResponseV2::_Internal {
 public:
  static const ::kaikosdk::Assets& assets(const StreamAggregatesSpotExchangeRateV1ResponseV2* msg);
  static const ::PROTOBUF_NAMESPACE_ID::Timestamp& timestamp(const StreamAggregatesSpotExchangeRateV1ResponseV2* msg);
  static const ::kaikosdk::Window& window(const StreamAggregatesSpotExchangeRateV1ResponseV2* msg);
};

const ::kaikosdk::Assets&
StreamAggregatesSpotExchangeRateV1ResponseV2::_Internal::assets(const StreamAggregatesSpotExchangeRateV1ResponseV2* msg) {
  return *msg->_impl_.assets_;
}
const ::PROTOBUF_NAMESPACE_ID::Timestamp&
StreamAggregatesSpotExchangeRateV1ResponseV2::_Internal::timestamp(const StreamAggregatesSpotExchangeRateV1ResponseV2* msg) {
  return *msg->_impl_.timestamp_;
}
const ::kaikosdk::Window&
StreamAggregatesSpotExchangeRateV1ResponseV2::_Internal::window(const StreamAggregatesSpotExchangeRateV1ResponseV2* msg) {
  return *msg->_impl_.window_;
}
void StreamAggregatesSpotExchangeRateV1ResponseV2::clear_assets() {
  if (GetArenaForAllocation() == nullptr && _impl_.assets_ != nullptr) {
    delete _impl_.assets_;
  }
  _impl_.assets_ = nullptr;
}
void StreamAggregatesSpotExchangeRateV1ResponseV2::clear_timestamp() {
  if (GetArenaForAllocation() == nullptr && _impl_.timestamp_ != nullptr) {
    delete _impl_.timestamp_;
  }
  _impl_.timestamp_ = nullptr;
}
void StreamAggregatesSpotExchangeRateV1ResponseV2::clear_window() {
  if (GetArenaForAllocation() == nullptr && _impl_.window_ != nullptr) {
    delete _impl_.window_;
  }
  _impl_.window_ = nullptr;
}
StreamAggregatesSpotExchangeRateV1ResponseV2::StreamAggregatesSpotExchangeRateV1ResponseV2(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor(arena, is_message_owned);
  // @@protoc_insertion_point(arena_constructor:kaikosdk.StreamAggregatesSpotExchangeRateV1ResponseV2)
}
StreamAggregatesSpotExchangeRateV1ResponseV2::StreamAggregatesSpotExchangeRateV1ResponseV2(const StreamAggregatesSpotExchangeRateV1ResponseV2& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  StreamAggregatesSpotExchangeRateV1ResponseV2* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_.assets_){nullptr}
    , decltype(_impl_.timestamp_){nullptr}
    , decltype(_impl_.window_){nullptr}
    , decltype(_impl_.price_){}
    , decltype(_impl_.no_trade_){}
    , /*decltype(_impl_._cached_size_)*/{}};

  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  if (from._internal_has_assets()) {
    _this->_impl_.assets_ = new ::kaikosdk::Assets(*from._impl_.assets_);
  }
  if (from._internal_has_timestamp()) {
    _this->_impl_.timestamp_ = new ::PROTOBUF_NAMESPACE_ID::Timestamp(*from._impl_.timestamp_);
  }
  if (from._internal_has_window()) {
    _this->_impl_.window_ = new ::kaikosdk::Window(*from._impl_.window_);
  }
  ::memcpy(&_impl_.price_, &from._impl_.price_,
    static_cast<size_t>(reinterpret_cast<char*>(&_impl_.no_trade_) -
    reinterpret_cast<char*>(&_impl_.price_)) + sizeof(_impl_.no_trade_));
  // @@protoc_insertion_point(copy_constructor:kaikosdk.StreamAggregatesSpotExchangeRateV1ResponseV2)
}

inline void StreamAggregatesSpotExchangeRateV1ResponseV2::SharedCtor(
    ::_pb::Arena* arena, bool is_message_owned) {
  (void)arena;
  (void)is_message_owned;
  new (&_impl_) Impl_{
      decltype(_impl_.assets_){nullptr}
    , decltype(_impl_.timestamp_){nullptr}
    , decltype(_impl_.window_){nullptr}
    , decltype(_impl_.price_){0}
    , decltype(_impl_.no_trade_){false}
    , /*decltype(_impl_._cached_size_)*/{}
  };
}

StreamAggregatesSpotExchangeRateV1ResponseV2::~StreamAggregatesSpotExchangeRateV1ResponseV2() {
  // @@protoc_insertion_point(destructor:kaikosdk.StreamAggregatesSpotExchangeRateV1ResponseV2)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void StreamAggregatesSpotExchangeRateV1ResponseV2::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  if (this != internal_default_instance()) delete _impl_.assets_;
  if (this != internal_default_instance()) delete _impl_.timestamp_;
  if (this != internal_default_instance()) delete _impl_.window_;
}

void StreamAggregatesSpotExchangeRateV1ResponseV2::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void StreamAggregatesSpotExchangeRateV1ResponseV2::Clear() {
// @@protoc_insertion_point(message_clear_start:kaikosdk.StreamAggregatesSpotExchangeRateV1ResponseV2)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  if (GetArenaForAllocation() == nullptr && _impl_.assets_ != nullptr) {
    delete _impl_.assets_;
  }
  _impl_.assets_ = nullptr;
  if (GetArenaForAllocation() == nullptr && _impl_.timestamp_ != nullptr) {
    delete _impl_.timestamp_;
  }
  _impl_.timestamp_ = nullptr;
  if (GetArenaForAllocation() == nullptr && _impl_.window_ != nullptr) {
    delete _impl_.window_;
  }
  _impl_.window_ = nullptr;
  ::memset(&_impl_.price_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&_impl_.no_trade_) -
      reinterpret_cast<char*>(&_impl_.price_)) + sizeof(_impl_.no_trade_));
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* StreamAggregatesSpotExchangeRateV1ResponseV2::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // .kaikosdk.Assets assets = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 10)) {
          ptr = ctx->ParseMessage(_internal_mutable_assets(), ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // double price = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 17)) {
          _impl_.price_ = ::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<double>(ptr);
          ptr += sizeof(double);
        } else
          goto handle_unusual;
        continue;
      // .google.protobuf.Timestamp timestamp = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 26)) {
          ptr = ctx->ParseMessage(_internal_mutable_timestamp(), ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // .kaikosdk.Window window = 4;
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 34)) {
          ptr = ctx->ParseMessage(_internal_mutable_window(), ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // bool no_trade = 5;
      case 5:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 40)) {
          _impl_.no_trade_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
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

uint8_t* StreamAggregatesSpotExchangeRateV1ResponseV2::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:kaikosdk.StreamAggregatesSpotExchangeRateV1ResponseV2)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // .kaikosdk.Assets assets = 1;
  if (this->_internal_has_assets()) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(1, _Internal::assets(this),
        _Internal::assets(this).GetCachedSize(), target, stream);
  }

  // double price = 2;
  static_assert(sizeof(uint64_t) == sizeof(double), "Code assumes uint64_t and double are the same size.");
  double tmp_price = this->_internal_price();
  uint64_t raw_price;
  memcpy(&raw_price, &tmp_price, sizeof(tmp_price));
  if (raw_price != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteDoubleToArray(2, this->_internal_price(), target);
  }

  // .google.protobuf.Timestamp timestamp = 3;
  if (this->_internal_has_timestamp()) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(3, _Internal::timestamp(this),
        _Internal::timestamp(this).GetCachedSize(), target, stream);
  }

  // .kaikosdk.Window window = 4;
  if (this->_internal_has_window()) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(4, _Internal::window(this),
        _Internal::window(this).GetCachedSize(), target, stream);
  }

  // bool no_trade = 5;
  if (this->_internal_no_trade() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteBoolToArray(5, this->_internal_no_trade(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:kaikosdk.StreamAggregatesSpotExchangeRateV1ResponseV2)
  return target;
}

size_t StreamAggregatesSpotExchangeRateV1ResponseV2::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:kaikosdk.StreamAggregatesSpotExchangeRateV1ResponseV2)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // .kaikosdk.Assets assets = 1;
  if (this->_internal_has_assets()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
        *_impl_.assets_);
  }

  // .google.protobuf.Timestamp timestamp = 3;
  if (this->_internal_has_timestamp()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
        *_impl_.timestamp_);
  }

  // .kaikosdk.Window window = 4;
  if (this->_internal_has_window()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
        *_impl_.window_);
  }

  // double price = 2;
  static_assert(sizeof(uint64_t) == sizeof(double), "Code assumes uint64_t and double are the same size.");
  double tmp_price = this->_internal_price();
  uint64_t raw_price;
  memcpy(&raw_price, &tmp_price, sizeof(tmp_price));
  if (raw_price != 0) {
    total_size += 1 + 8;
  }

  // bool no_trade = 5;
  if (this->_internal_no_trade() != 0) {
    total_size += 1 + 1;
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData StreamAggregatesSpotExchangeRateV1ResponseV2::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    StreamAggregatesSpotExchangeRateV1ResponseV2::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*StreamAggregatesSpotExchangeRateV1ResponseV2::GetClassData() const { return &_class_data_; }


void StreamAggregatesSpotExchangeRateV1ResponseV2::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<StreamAggregatesSpotExchangeRateV1ResponseV2*>(&to_msg);
  auto& from = static_cast<const StreamAggregatesSpotExchangeRateV1ResponseV2&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:kaikosdk.StreamAggregatesSpotExchangeRateV1ResponseV2)
  GOOGLE_DCHECK_NE(&from, _this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  if (from._internal_has_assets()) {
    _this->_internal_mutable_assets()->::kaikosdk::Assets::MergeFrom(
        from._internal_assets());
  }
  if (from._internal_has_timestamp()) {
    _this->_internal_mutable_timestamp()->::PROTOBUF_NAMESPACE_ID::Timestamp::MergeFrom(
        from._internal_timestamp());
  }
  if (from._internal_has_window()) {
    _this->_internal_mutable_window()->::kaikosdk::Window::MergeFrom(
        from._internal_window());
  }
  static_assert(sizeof(uint64_t) == sizeof(double), "Code assumes uint64_t and double are the same size.");
  double tmp_price = from._internal_price();
  uint64_t raw_price;
  memcpy(&raw_price, &tmp_price, sizeof(tmp_price));
  if (raw_price != 0) {
    _this->_internal_set_price(from._internal_price());
  }
  if (from._internal_no_trade() != 0) {
    _this->_internal_set_no_trade(from._internal_no_trade());
  }
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void StreamAggregatesSpotExchangeRateV1ResponseV2::CopyFrom(const StreamAggregatesSpotExchangeRateV1ResponseV2& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:kaikosdk.StreamAggregatesSpotExchangeRateV1ResponseV2)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool StreamAggregatesSpotExchangeRateV1ResponseV2::IsInitialized() const {
  return true;
}

void StreamAggregatesSpotExchangeRateV1ResponseV2::InternalSwap(StreamAggregatesSpotExchangeRateV1ResponseV2* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(StreamAggregatesSpotExchangeRateV1ResponseV2, _impl_.no_trade_)
      + sizeof(StreamAggregatesSpotExchangeRateV1ResponseV2::_impl_.no_trade_)
      - PROTOBUF_FIELD_OFFSET(StreamAggregatesSpotExchangeRateV1ResponseV2, _impl_.assets_)>(
          reinterpret_cast<char*>(&_impl_.assets_),
          reinterpret_cast<char*>(&other->_impl_.assets_));
}

::PROTOBUF_NAMESPACE_ID::Metadata StreamAggregatesSpotExchangeRateV1ResponseV2::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_sdk_2fstream_2faggregates_5fspot_5fexchange_5frate_5fv1_2fresponse_2eproto_getter, &descriptor_table_sdk_2fstream_2faggregates_5fspot_5fexchange_5frate_5fv1_2fresponse_2eproto_once,
      file_level_metadata_sdk_2fstream_2faggregates_5fspot_5fexchange_5frate_5fv1_2fresponse_2eproto[0]);
}

// @@protoc_insertion_point(namespace_scope)
}  // namespace kaikosdk
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::kaikosdk::StreamAggregatesSpotExchangeRateV1ResponseV2*
Arena::CreateMaybeMessage< ::kaikosdk::StreamAggregatesSpotExchangeRateV1ResponseV2 >(Arena* arena) {
  return Arena::CreateMessageInternal< ::kaikosdk::StreamAggregatesSpotExchangeRateV1ResponseV2 >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
