// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: sdk/stream/index_forex_rate_v1/request.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_sdk_2fstream_2findex_5fforex_5frate_5fv1_2frequest_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_sdk_2fstream_2findex_5fforex_5frate_5fv1_2frequest_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3021000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3021012 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata_lite.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
#include "sdk/core/data_interval.pb.h"
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_sdk_2fstream_2findex_5fforex_5frate_5fv1_2frequest_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_sdk_2fstream_2findex_5fforex_5frate_5fv1_2frequest_2eproto {
  static const uint32_t offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_sdk_2fstream_2findex_5fforex_5frate_5fv1_2frequest_2eproto;
namespace kaikosdk {
class StreamIndexForexRateServiceRequestV1;
struct StreamIndexForexRateServiceRequestV1DefaultTypeInternal;
extern StreamIndexForexRateServiceRequestV1DefaultTypeInternal _StreamIndexForexRateServiceRequestV1_default_instance_;
}  // namespace kaikosdk
PROTOBUF_NAMESPACE_OPEN
template<> ::kaikosdk::StreamIndexForexRateServiceRequestV1* Arena::CreateMaybeMessage<::kaikosdk::StreamIndexForexRateServiceRequestV1>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace kaikosdk {

// ===================================================================

class StreamIndexForexRateServiceRequestV1 final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:kaikosdk.StreamIndexForexRateServiceRequestV1) */ {
 public:
  inline StreamIndexForexRateServiceRequestV1() : StreamIndexForexRateServiceRequestV1(nullptr) {}
  ~StreamIndexForexRateServiceRequestV1() override;
  explicit PROTOBUF_CONSTEXPR StreamIndexForexRateServiceRequestV1(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  StreamIndexForexRateServiceRequestV1(const StreamIndexForexRateServiceRequestV1& from);
  StreamIndexForexRateServiceRequestV1(StreamIndexForexRateServiceRequestV1&& from) noexcept
    : StreamIndexForexRateServiceRequestV1() {
    *this = ::std::move(from);
  }

  inline StreamIndexForexRateServiceRequestV1& operator=(const StreamIndexForexRateServiceRequestV1& from) {
    CopyFrom(from);
    return *this;
  }
  inline StreamIndexForexRateServiceRequestV1& operator=(StreamIndexForexRateServiceRequestV1&& from) noexcept {
    if (this == &from) return *this;
    if (GetOwningArena() == from.GetOwningArena()
  #ifdef PROTOBUF_FORCE_COPY_IN_MOVE
        && GetOwningArena() != nullptr
  #endif  // !PROTOBUF_FORCE_COPY_IN_MOVE
    ) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const StreamIndexForexRateServiceRequestV1& default_instance() {
    return *internal_default_instance();
  }
  static inline const StreamIndexForexRateServiceRequestV1* internal_default_instance() {
    return reinterpret_cast<const StreamIndexForexRateServiceRequestV1*>(
               &_StreamIndexForexRateServiceRequestV1_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(StreamIndexForexRateServiceRequestV1& a, StreamIndexForexRateServiceRequestV1& b) {
    a.Swap(&b);
  }
  inline void Swap(StreamIndexForexRateServiceRequestV1* other) {
    if (other == this) return;
  #ifdef PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() != nullptr &&
        GetOwningArena() == other->GetOwningArena()) {
   #else  // PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() == other->GetOwningArena()) {
  #endif  // !PROTOBUF_FORCE_COPY_IN_SWAP
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(StreamIndexForexRateServiceRequestV1* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  StreamIndexForexRateServiceRequestV1* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<StreamIndexForexRateServiceRequestV1>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const StreamIndexForexRateServiceRequestV1& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const StreamIndexForexRateServiceRequestV1& from) {
    StreamIndexForexRateServiceRequestV1::MergeImpl(*this, from);
  }
  private:
  static void MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg);
  public:
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  uint8_t* _InternalSerialize(
      uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _impl_._cached_size_.Get(); }

  private:
  void SharedCtor(::PROTOBUF_NAMESPACE_ID::Arena* arena, bool is_message_owned);
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(StreamIndexForexRateServiceRequestV1* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "kaikosdk.StreamIndexForexRateServiceRequestV1";
  }
  protected:
  explicit StreamIndexForexRateServiceRequestV1(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kIndexCodeFieldNumber = 1,
    kIntervalFieldNumber = 2,
  };
  // string index_code = 1;
  void clear_index_code();
  const std::string& index_code() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_index_code(ArgT0&& arg0, ArgT... args);
  std::string* mutable_index_code();
  PROTOBUF_NODISCARD std::string* release_index_code();
  void set_allocated_index_code(std::string* index_code);
  private:
  const std::string& _internal_index_code() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_index_code(const std::string& value);
  std::string* _internal_mutable_index_code();
  public:

  // .kaikosdk.DataInterval interval = 2;
  bool has_interval() const;
  private:
  bool _internal_has_interval() const;
  public:
  void clear_interval();
  const ::kaikosdk::DataInterval& interval() const;
  PROTOBUF_NODISCARD ::kaikosdk::DataInterval* release_interval();
  ::kaikosdk::DataInterval* mutable_interval();
  void set_allocated_interval(::kaikosdk::DataInterval* interval);
  private:
  const ::kaikosdk::DataInterval& _internal_interval() const;
  ::kaikosdk::DataInterval* _internal_mutable_interval();
  public:
  void unsafe_arena_set_allocated_interval(
      ::kaikosdk::DataInterval* interval);
  ::kaikosdk::DataInterval* unsafe_arena_release_interval();

  // @@protoc_insertion_point(class_scope:kaikosdk.StreamIndexForexRateServiceRequestV1)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr index_code_;
    ::kaikosdk::DataInterval* interval_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_sdk_2fstream_2findex_5fforex_5frate_5fv1_2frequest_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// StreamIndexForexRateServiceRequestV1

// string index_code = 1;
inline void StreamIndexForexRateServiceRequestV1::clear_index_code() {
  _impl_.index_code_.ClearToEmpty();
}
inline const std::string& StreamIndexForexRateServiceRequestV1::index_code() const {
  // @@protoc_insertion_point(field_get:kaikosdk.StreamIndexForexRateServiceRequestV1.index_code)
  return _internal_index_code();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void StreamIndexForexRateServiceRequestV1::set_index_code(ArgT0&& arg0, ArgT... args) {
 
 _impl_.index_code_.Set(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:kaikosdk.StreamIndexForexRateServiceRequestV1.index_code)
}
inline std::string* StreamIndexForexRateServiceRequestV1::mutable_index_code() {
  std::string* _s = _internal_mutable_index_code();
  // @@protoc_insertion_point(field_mutable:kaikosdk.StreamIndexForexRateServiceRequestV1.index_code)
  return _s;
}
inline const std::string& StreamIndexForexRateServiceRequestV1::_internal_index_code() const {
  return _impl_.index_code_.Get();
}
inline void StreamIndexForexRateServiceRequestV1::_internal_set_index_code(const std::string& value) {
  
  _impl_.index_code_.Set(value, GetArenaForAllocation());
}
inline std::string* StreamIndexForexRateServiceRequestV1::_internal_mutable_index_code() {
  
  return _impl_.index_code_.Mutable(GetArenaForAllocation());
}
inline std::string* StreamIndexForexRateServiceRequestV1::release_index_code() {
  // @@protoc_insertion_point(field_release:kaikosdk.StreamIndexForexRateServiceRequestV1.index_code)
  return _impl_.index_code_.Release();
}
inline void StreamIndexForexRateServiceRequestV1::set_allocated_index_code(std::string* index_code) {
  if (index_code != nullptr) {
    
  } else {
    
  }
  _impl_.index_code_.SetAllocated(index_code, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (_impl_.index_code_.IsDefault()) {
    _impl_.index_code_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:kaikosdk.StreamIndexForexRateServiceRequestV1.index_code)
}

// .kaikosdk.DataInterval interval = 2;
inline bool StreamIndexForexRateServiceRequestV1::_internal_has_interval() const {
  return this != internal_default_instance() && _impl_.interval_ != nullptr;
}
inline bool StreamIndexForexRateServiceRequestV1::has_interval() const {
  return _internal_has_interval();
}
inline const ::kaikosdk::DataInterval& StreamIndexForexRateServiceRequestV1::_internal_interval() const {
  const ::kaikosdk::DataInterval* p = _impl_.interval_;
  return p != nullptr ? *p : reinterpret_cast<const ::kaikosdk::DataInterval&>(
      ::kaikosdk::_DataInterval_default_instance_);
}
inline const ::kaikosdk::DataInterval& StreamIndexForexRateServiceRequestV1::interval() const {
  // @@protoc_insertion_point(field_get:kaikosdk.StreamIndexForexRateServiceRequestV1.interval)
  return _internal_interval();
}
inline void StreamIndexForexRateServiceRequestV1::unsafe_arena_set_allocated_interval(
    ::kaikosdk::DataInterval* interval) {
  if (GetArenaForAllocation() == nullptr) {
    delete reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(_impl_.interval_);
  }
  _impl_.interval_ = interval;
  if (interval) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:kaikosdk.StreamIndexForexRateServiceRequestV1.interval)
}
inline ::kaikosdk::DataInterval* StreamIndexForexRateServiceRequestV1::release_interval() {
  
  ::kaikosdk::DataInterval* temp = _impl_.interval_;
  _impl_.interval_ = nullptr;
#ifdef PROTOBUF_FORCE_COPY_IN_RELEASE
  auto* old =  reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(temp);
  temp = ::PROTOBUF_NAMESPACE_ID::internal::DuplicateIfNonNull(temp);
  if (GetArenaForAllocation() == nullptr) { delete old; }
#else  // PROTOBUF_FORCE_COPY_IN_RELEASE
  if (GetArenaForAllocation() != nullptr) {
    temp = ::PROTOBUF_NAMESPACE_ID::internal::DuplicateIfNonNull(temp);
  }
#endif  // !PROTOBUF_FORCE_COPY_IN_RELEASE
  return temp;
}
inline ::kaikosdk::DataInterval* StreamIndexForexRateServiceRequestV1::unsafe_arena_release_interval() {
  // @@protoc_insertion_point(field_release:kaikosdk.StreamIndexForexRateServiceRequestV1.interval)
  
  ::kaikosdk::DataInterval* temp = _impl_.interval_;
  _impl_.interval_ = nullptr;
  return temp;
}
inline ::kaikosdk::DataInterval* StreamIndexForexRateServiceRequestV1::_internal_mutable_interval() {
  
  if (_impl_.interval_ == nullptr) {
    auto* p = CreateMaybeMessage<::kaikosdk::DataInterval>(GetArenaForAllocation());
    _impl_.interval_ = p;
  }
  return _impl_.interval_;
}
inline ::kaikosdk::DataInterval* StreamIndexForexRateServiceRequestV1::mutable_interval() {
  ::kaikosdk::DataInterval* _msg = _internal_mutable_interval();
  // @@protoc_insertion_point(field_mutable:kaikosdk.StreamIndexForexRateServiceRequestV1.interval)
  return _msg;
}
inline void StreamIndexForexRateServiceRequestV1::set_allocated_interval(::kaikosdk::DataInterval* interval) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaForAllocation();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(_impl_.interval_);
  }
  if (interval) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena =
        ::PROTOBUF_NAMESPACE_ID::Arena::InternalGetOwningArena(
                reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(interval));
    if (message_arena != submessage_arena) {
      interval = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, interval, submessage_arena);
    }
    
  } else {
    
  }
  _impl_.interval_ = interval;
  // @@protoc_insertion_point(field_set_allocated:kaikosdk.StreamIndexForexRateServiceRequestV1.interval)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace kaikosdk

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_sdk_2fstream_2findex_5fforex_5frate_5fv1_2frequest_2eproto