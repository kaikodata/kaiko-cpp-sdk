// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: sdk/core/wrappers.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_sdk_2fcore_2fwrappers_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_sdk_2fcore_2fwrappers_2eproto

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
#include <google/protobuf/timestamp.pb.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_sdk_2fcore_2fwrappers_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_sdk_2fcore_2fwrappers_2eproto {
  static const uint32_t offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_sdk_2fcore_2fwrappers_2eproto;
namespace kaikosdk {
class TimestampValue;
struct TimestampValueDefaultTypeInternal;
extern TimestampValueDefaultTypeInternal _TimestampValue_default_instance_;
}  // namespace kaikosdk
PROTOBUF_NAMESPACE_OPEN
template<> ::kaikosdk::TimestampValue* Arena::CreateMaybeMessage<::kaikosdk::TimestampValue>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace kaikosdk {

// ===================================================================

class TimestampValue final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:kaikosdk.TimestampValue) */ {
 public:
  inline TimestampValue() : TimestampValue(nullptr) {}
  ~TimestampValue() override;
  explicit PROTOBUF_CONSTEXPR TimestampValue(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  TimestampValue(const TimestampValue& from);
  TimestampValue(TimestampValue&& from) noexcept
    : TimestampValue() {
    *this = ::std::move(from);
  }

  inline TimestampValue& operator=(const TimestampValue& from) {
    CopyFrom(from);
    return *this;
  }
  inline TimestampValue& operator=(TimestampValue&& from) noexcept {
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
  static const TimestampValue& default_instance() {
    return *internal_default_instance();
  }
  static inline const TimestampValue* internal_default_instance() {
    return reinterpret_cast<const TimestampValue*>(
               &_TimestampValue_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(TimestampValue& a, TimestampValue& b) {
    a.Swap(&b);
  }
  inline void Swap(TimestampValue* other) {
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
  void UnsafeArenaSwap(TimestampValue* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  TimestampValue* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<TimestampValue>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const TimestampValue& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const TimestampValue& from) {
    TimestampValue::MergeImpl(*this, from);
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
  void InternalSwap(TimestampValue* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "kaikosdk.TimestampValue";
  }
  protected:
  explicit TimestampValue(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kValueFieldNumber = 1,
  };
  // .google.protobuf.Timestamp value = 1;
  bool has_value() const;
  private:
  bool _internal_has_value() const;
  public:
  void clear_value();
  const ::PROTOBUF_NAMESPACE_ID::Timestamp& value() const;
  PROTOBUF_NODISCARD ::PROTOBUF_NAMESPACE_ID::Timestamp* release_value();
  ::PROTOBUF_NAMESPACE_ID::Timestamp* mutable_value();
  void set_allocated_value(::PROTOBUF_NAMESPACE_ID::Timestamp* value);
  private:
  const ::PROTOBUF_NAMESPACE_ID::Timestamp& _internal_value() const;
  ::PROTOBUF_NAMESPACE_ID::Timestamp* _internal_mutable_value();
  public:
  void unsafe_arena_set_allocated_value(
      ::PROTOBUF_NAMESPACE_ID::Timestamp* value);
  ::PROTOBUF_NAMESPACE_ID::Timestamp* unsafe_arena_release_value();

  // @@protoc_insertion_point(class_scope:kaikosdk.TimestampValue)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::PROTOBUF_NAMESPACE_ID::Timestamp* value_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_sdk_2fcore_2fwrappers_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// TimestampValue

// .google.protobuf.Timestamp value = 1;
inline bool TimestampValue::_internal_has_value() const {
  return this != internal_default_instance() && _impl_.value_ != nullptr;
}
inline bool TimestampValue::has_value() const {
  return _internal_has_value();
}
inline const ::PROTOBUF_NAMESPACE_ID::Timestamp& TimestampValue::_internal_value() const {
  const ::PROTOBUF_NAMESPACE_ID::Timestamp* p = _impl_.value_;
  return p != nullptr ? *p : reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Timestamp&>(
      ::PROTOBUF_NAMESPACE_ID::_Timestamp_default_instance_);
}
inline const ::PROTOBUF_NAMESPACE_ID::Timestamp& TimestampValue::value() const {
  // @@protoc_insertion_point(field_get:kaikosdk.TimestampValue.value)
  return _internal_value();
}
inline void TimestampValue::unsafe_arena_set_allocated_value(
    ::PROTOBUF_NAMESPACE_ID::Timestamp* value) {
  if (GetArenaForAllocation() == nullptr) {
    delete reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(_impl_.value_);
  }
  _impl_.value_ = value;
  if (value) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:kaikosdk.TimestampValue.value)
}
inline ::PROTOBUF_NAMESPACE_ID::Timestamp* TimestampValue::release_value() {
  
  ::PROTOBUF_NAMESPACE_ID::Timestamp* temp = _impl_.value_;
  _impl_.value_ = nullptr;
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
inline ::PROTOBUF_NAMESPACE_ID::Timestamp* TimestampValue::unsafe_arena_release_value() {
  // @@protoc_insertion_point(field_release:kaikosdk.TimestampValue.value)
  
  ::PROTOBUF_NAMESPACE_ID::Timestamp* temp = _impl_.value_;
  _impl_.value_ = nullptr;
  return temp;
}
inline ::PROTOBUF_NAMESPACE_ID::Timestamp* TimestampValue::_internal_mutable_value() {
  
  if (_impl_.value_ == nullptr) {
    auto* p = CreateMaybeMessage<::PROTOBUF_NAMESPACE_ID::Timestamp>(GetArenaForAllocation());
    _impl_.value_ = p;
  }
  return _impl_.value_;
}
inline ::PROTOBUF_NAMESPACE_ID::Timestamp* TimestampValue::mutable_value() {
  ::PROTOBUF_NAMESPACE_ID::Timestamp* _msg = _internal_mutable_value();
  // @@protoc_insertion_point(field_mutable:kaikosdk.TimestampValue.value)
  return _msg;
}
inline void TimestampValue::set_allocated_value(::PROTOBUF_NAMESPACE_ID::Timestamp* value) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaForAllocation();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(_impl_.value_);
  }
  if (value) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena =
        ::PROTOBUF_NAMESPACE_ID::Arena::InternalGetOwningArena(
                reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(value));
    if (message_arena != submessage_arena) {
      value = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, value, submessage_arena);
    }
    
  } else {
    
  }
  _impl_.value_ = value;
  // @@protoc_insertion_point(field_set_allocated:kaikosdk.TimestampValue.value)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace kaikosdk

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_sdk_2fcore_2fwrappers_2eproto
