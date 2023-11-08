// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: sdk/core/assets.proto

#include "sdk/core/assets.pb.h"

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
PROTOBUF_CONSTEXPR Assets::Assets(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_.base_)*/{&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{}}
  , /*decltype(_impl_.quote_)*/{&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{}}
  , /*decltype(_impl_._cached_size_)*/{}} {}
struct AssetsDefaultTypeInternal {
  PROTOBUF_CONSTEXPR AssetsDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~AssetsDefaultTypeInternal() {}
  union {
    Assets _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 AssetsDefaultTypeInternal _Assets_default_instance_;
}  // namespace kaikosdk
static ::_pb::Metadata file_level_metadata_sdk_2fcore_2fassets_2eproto[1];
static constexpr ::_pb::EnumDescriptor const** file_level_enum_descriptors_sdk_2fcore_2fassets_2eproto = nullptr;
static constexpr ::_pb::ServiceDescriptor const** file_level_service_descriptors_sdk_2fcore_2fassets_2eproto = nullptr;

const uint32_t TableStruct_sdk_2fcore_2fassets_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::kaikosdk::Assets, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::kaikosdk::Assets, _impl_.base_),
  PROTOBUF_FIELD_OFFSET(::kaikosdk::Assets, _impl_.quote_),
};
static const ::_pbi::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, -1, sizeof(::kaikosdk::Assets)},
};

static const ::_pb::Message* const file_default_instances[] = {
  &::kaikosdk::_Assets_default_instance_._instance,
};

const char descriptor_table_protodef_sdk_2fcore_2fassets_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\025sdk/core/assets.proto\022\010kaikosdk\"%\n\006Ass"
  "ets\022\014\n\004base\030\001 \001(\t\022\r\n\005quote\030\002 \001(\tBS\n\022com."
  "kaiko.sdk.coreP\001Z+github.com/kaikodata/k"
  "aiko-go-sdk/core;core\252\002\rKaikoSdk.Coreb\006p"
  "roto3"
  ;
static ::_pbi::once_flag descriptor_table_sdk_2fcore_2fassets_2eproto_once;
const ::_pbi::DescriptorTable descriptor_table_sdk_2fcore_2fassets_2eproto = {
    false, false, 165, descriptor_table_protodef_sdk_2fcore_2fassets_2eproto,
    "sdk/core/assets.proto",
    &descriptor_table_sdk_2fcore_2fassets_2eproto_once, nullptr, 0, 1,
    schemas, file_default_instances, TableStruct_sdk_2fcore_2fassets_2eproto::offsets,
    file_level_metadata_sdk_2fcore_2fassets_2eproto, file_level_enum_descriptors_sdk_2fcore_2fassets_2eproto,
    file_level_service_descriptors_sdk_2fcore_2fassets_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::_pbi::DescriptorTable* descriptor_table_sdk_2fcore_2fassets_2eproto_getter() {
  return &descriptor_table_sdk_2fcore_2fassets_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2 static ::_pbi::AddDescriptorsRunner dynamic_init_dummy_sdk_2fcore_2fassets_2eproto(&descriptor_table_sdk_2fcore_2fassets_2eproto);
namespace kaikosdk {

// ===================================================================

class Assets::_Internal {
 public:
};

Assets::Assets(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor(arena, is_message_owned);
  // @@protoc_insertion_point(arena_constructor:kaikosdk.Assets)
}
Assets::Assets(const Assets& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  Assets* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_.base_){}
    , decltype(_impl_.quote_){}
    , /*decltype(_impl_._cached_size_)*/{}};

  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  _impl_.base_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.base_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (!from._internal_base().empty()) {
    _this->_impl_.base_.Set(from._internal_base(), 
      _this->GetArenaForAllocation());
  }
  _impl_.quote_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.quote_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (!from._internal_quote().empty()) {
    _this->_impl_.quote_.Set(from._internal_quote(), 
      _this->GetArenaForAllocation());
  }
  // @@protoc_insertion_point(copy_constructor:kaikosdk.Assets)
}

inline void Assets::SharedCtor(
    ::_pb::Arena* arena, bool is_message_owned) {
  (void)arena;
  (void)is_message_owned;
  new (&_impl_) Impl_{
      decltype(_impl_.base_){}
    , decltype(_impl_.quote_){}
    , /*decltype(_impl_._cached_size_)*/{}
  };
  _impl_.base_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.base_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  _impl_.quote_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.quote_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
}

Assets::~Assets() {
  // @@protoc_insertion_point(destructor:kaikosdk.Assets)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void Assets::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  _impl_.base_.Destroy();
  _impl_.quote_.Destroy();
}

void Assets::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void Assets::Clear() {
// @@protoc_insertion_point(message_clear_start:kaikosdk.Assets)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _impl_.base_.ClearToEmpty();
  _impl_.quote_.ClearToEmpty();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* Assets::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // string base = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 10)) {
          auto str = _internal_mutable_base();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
          CHK_(::_pbi::VerifyUTF8(str, "kaikosdk.Assets.base"));
        } else
          goto handle_unusual;
        continue;
      // string quote = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 18)) {
          auto str = _internal_mutable_quote();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
          CHK_(::_pbi::VerifyUTF8(str, "kaikosdk.Assets.quote"));
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

uint8_t* Assets::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:kaikosdk.Assets)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // string base = 1;
  if (!this->_internal_base().empty()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_base().data(), static_cast<int>(this->_internal_base().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "kaikosdk.Assets.base");
    target = stream->WriteStringMaybeAliased(
        1, this->_internal_base(), target);
  }

  // string quote = 2;
  if (!this->_internal_quote().empty()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_quote().data(), static_cast<int>(this->_internal_quote().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "kaikosdk.Assets.quote");
    target = stream->WriteStringMaybeAliased(
        2, this->_internal_quote(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:kaikosdk.Assets)
  return target;
}

size_t Assets::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:kaikosdk.Assets)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // string base = 1;
  if (!this->_internal_base().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_base());
  }

  // string quote = 2;
  if (!this->_internal_quote().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_quote());
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData Assets::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    Assets::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*Assets::GetClassData() const { return &_class_data_; }


void Assets::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<Assets*>(&to_msg);
  auto& from = static_cast<const Assets&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:kaikosdk.Assets)
  GOOGLE_DCHECK_NE(&from, _this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  if (!from._internal_base().empty()) {
    _this->_internal_set_base(from._internal_base());
  }
  if (!from._internal_quote().empty()) {
    _this->_internal_set_quote(from._internal_quote());
  }
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void Assets::CopyFrom(const Assets& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:kaikosdk.Assets)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Assets::IsInitialized() const {
  return true;
}

void Assets::InternalSwap(Assets* other) {
  using std::swap;
  auto* lhs_arena = GetArenaForAllocation();
  auto* rhs_arena = other->GetArenaForAllocation();
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &_impl_.base_, lhs_arena,
      &other->_impl_.base_, rhs_arena
  );
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &_impl_.quote_, lhs_arena,
      &other->_impl_.quote_, rhs_arena
  );
}

::PROTOBUF_NAMESPACE_ID::Metadata Assets::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_sdk_2fcore_2fassets_2eproto_getter, &descriptor_table_sdk_2fcore_2fassets_2eproto_once,
      file_level_metadata_sdk_2fcore_2fassets_2eproto[0]);
}

// @@protoc_insertion_point(namespace_scope)
}  // namespace kaikosdk
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::kaikosdk::Assets*
Arena::CreateMaybeMessage< ::kaikosdk::Assets >(Arena* arena) {
  return Arena::CreateMessageInternal< ::kaikosdk::Assets >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
