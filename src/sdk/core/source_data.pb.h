// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: sdk/core/source_data.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_sdk_2fcore_2fsource_5fdata_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_sdk_2fcore_2fsource_5fdata_2eproto

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
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_sdk_2fcore_2fsource_5fdata_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_sdk_2fcore_2fsource_5fdata_2eproto {
  static const uint32_t offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_sdk_2fcore_2fsource_5fdata_2eproto;
namespace kaikosdk {
class SourceData;
struct SourceDataDefaultTypeInternal;
extern SourceDataDefaultTypeInternal _SourceData_default_instance_;
}  // namespace kaikosdk
PROTOBUF_NAMESPACE_OPEN
template<> ::kaikosdk::SourceData* Arena::CreateMaybeMessage<::kaikosdk::SourceData>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace kaikosdk {

// ===================================================================

class SourceData final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:kaikosdk.SourceData) */ {
 public:
  inline SourceData() : SourceData(nullptr) {}
  ~SourceData() override;
  explicit PROTOBUF_CONSTEXPR SourceData(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  SourceData(const SourceData& from);
  SourceData(SourceData&& from) noexcept
    : SourceData() {
    *this = ::std::move(from);
  }

  inline SourceData& operator=(const SourceData& from) {
    CopyFrom(from);
    return *this;
  }
  inline SourceData& operator=(SourceData&& from) noexcept {
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
  static const SourceData& default_instance() {
    return *internal_default_instance();
  }
  static inline const SourceData* internal_default_instance() {
    return reinterpret_cast<const SourceData*>(
               &_SourceData_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(SourceData& a, SourceData& b) {
    a.Swap(&b);
  }
  inline void Swap(SourceData* other) {
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
  void UnsafeArenaSwap(SourceData* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  SourceData* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<SourceData>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const SourceData& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const SourceData& from) {
    SourceData::MergeImpl(*this, from);
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
  void InternalSwap(SourceData* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "kaikosdk.SourceData";
  }
  protected:
  explicit SourceData(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kExchangeCodeFieldNumber = 1,
    kPriceFieldNumber = 3,
    kVolumeFieldNumber = 4,
    kCountFieldNumber = 2,
  };
  // string exchange_code = 1;
  void clear_exchange_code();
  const std::string& exchange_code() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_exchange_code(ArgT0&& arg0, ArgT... args);
  std::string* mutable_exchange_code();
  PROTOBUF_NODISCARD std::string* release_exchange_code();
  void set_allocated_exchange_code(std::string* exchange_code);
  private:
  const std::string& _internal_exchange_code() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_exchange_code(const std::string& value);
  std::string* _internal_mutable_exchange_code();
  public:

  // string price = 3;
  void clear_price();
  const std::string& price() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_price(ArgT0&& arg0, ArgT... args);
  std::string* mutable_price();
  PROTOBUF_NODISCARD std::string* release_price();
  void set_allocated_price(std::string* price);
  private:
  const std::string& _internal_price() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_price(const std::string& value);
  std::string* _internal_mutable_price();
  public:

  // string volume = 4;
  void clear_volume();
  const std::string& volume() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_volume(ArgT0&& arg0, ArgT... args);
  std::string* mutable_volume();
  PROTOBUF_NODISCARD std::string* release_volume();
  void set_allocated_volume(std::string* volume);
  private:
  const std::string& _internal_volume() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_volume(const std::string& value);
  std::string* _internal_mutable_volume();
  public:

  // int64 count = 2;
  void clear_count();
  int64_t count() const;
  void set_count(int64_t value);
  private:
  int64_t _internal_count() const;
  void _internal_set_count(int64_t value);
  public:

  // @@protoc_insertion_point(class_scope:kaikosdk.SourceData)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr exchange_code_;
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr price_;
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr volume_;
    int64_t count_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_sdk_2fcore_2fsource_5fdata_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// SourceData

// string exchange_code = 1;
inline void SourceData::clear_exchange_code() {
  _impl_.exchange_code_.ClearToEmpty();
}
inline const std::string& SourceData::exchange_code() const {
  // @@protoc_insertion_point(field_get:kaikosdk.SourceData.exchange_code)
  return _internal_exchange_code();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void SourceData::set_exchange_code(ArgT0&& arg0, ArgT... args) {
 
 _impl_.exchange_code_.Set(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:kaikosdk.SourceData.exchange_code)
}
inline std::string* SourceData::mutable_exchange_code() {
  std::string* _s = _internal_mutable_exchange_code();
  // @@protoc_insertion_point(field_mutable:kaikosdk.SourceData.exchange_code)
  return _s;
}
inline const std::string& SourceData::_internal_exchange_code() const {
  return _impl_.exchange_code_.Get();
}
inline void SourceData::_internal_set_exchange_code(const std::string& value) {
  
  _impl_.exchange_code_.Set(value, GetArenaForAllocation());
}
inline std::string* SourceData::_internal_mutable_exchange_code() {
  
  return _impl_.exchange_code_.Mutable(GetArenaForAllocation());
}
inline std::string* SourceData::release_exchange_code() {
  // @@protoc_insertion_point(field_release:kaikosdk.SourceData.exchange_code)
  return _impl_.exchange_code_.Release();
}
inline void SourceData::set_allocated_exchange_code(std::string* exchange_code) {
  if (exchange_code != nullptr) {
    
  } else {
    
  }
  _impl_.exchange_code_.SetAllocated(exchange_code, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (_impl_.exchange_code_.IsDefault()) {
    _impl_.exchange_code_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:kaikosdk.SourceData.exchange_code)
}

// int64 count = 2;
inline void SourceData::clear_count() {
  _impl_.count_ = int64_t{0};
}
inline int64_t SourceData::_internal_count() const {
  return _impl_.count_;
}
inline int64_t SourceData::count() const {
  // @@protoc_insertion_point(field_get:kaikosdk.SourceData.count)
  return _internal_count();
}
inline void SourceData::_internal_set_count(int64_t value) {
  
  _impl_.count_ = value;
}
inline void SourceData::set_count(int64_t value) {
  _internal_set_count(value);
  // @@protoc_insertion_point(field_set:kaikosdk.SourceData.count)
}

// string price = 3;
inline void SourceData::clear_price() {
  _impl_.price_.ClearToEmpty();
}
inline const std::string& SourceData::price() const {
  // @@protoc_insertion_point(field_get:kaikosdk.SourceData.price)
  return _internal_price();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void SourceData::set_price(ArgT0&& arg0, ArgT... args) {
 
 _impl_.price_.Set(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:kaikosdk.SourceData.price)
}
inline std::string* SourceData::mutable_price() {
  std::string* _s = _internal_mutable_price();
  // @@protoc_insertion_point(field_mutable:kaikosdk.SourceData.price)
  return _s;
}
inline const std::string& SourceData::_internal_price() const {
  return _impl_.price_.Get();
}
inline void SourceData::_internal_set_price(const std::string& value) {
  
  _impl_.price_.Set(value, GetArenaForAllocation());
}
inline std::string* SourceData::_internal_mutable_price() {
  
  return _impl_.price_.Mutable(GetArenaForAllocation());
}
inline std::string* SourceData::release_price() {
  // @@protoc_insertion_point(field_release:kaikosdk.SourceData.price)
  return _impl_.price_.Release();
}
inline void SourceData::set_allocated_price(std::string* price) {
  if (price != nullptr) {
    
  } else {
    
  }
  _impl_.price_.SetAllocated(price, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (_impl_.price_.IsDefault()) {
    _impl_.price_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:kaikosdk.SourceData.price)
}

// string volume = 4;
inline void SourceData::clear_volume() {
  _impl_.volume_.ClearToEmpty();
}
inline const std::string& SourceData::volume() const {
  // @@protoc_insertion_point(field_get:kaikosdk.SourceData.volume)
  return _internal_volume();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void SourceData::set_volume(ArgT0&& arg0, ArgT... args) {
 
 _impl_.volume_.Set(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:kaikosdk.SourceData.volume)
}
inline std::string* SourceData::mutable_volume() {
  std::string* _s = _internal_mutable_volume();
  // @@protoc_insertion_point(field_mutable:kaikosdk.SourceData.volume)
  return _s;
}
inline const std::string& SourceData::_internal_volume() const {
  return _impl_.volume_.Get();
}
inline void SourceData::_internal_set_volume(const std::string& value) {
  
  _impl_.volume_.Set(value, GetArenaForAllocation());
}
inline std::string* SourceData::_internal_mutable_volume() {
  
  return _impl_.volume_.Mutable(GetArenaForAllocation());
}
inline std::string* SourceData::release_volume() {
  // @@protoc_insertion_point(field_release:kaikosdk.SourceData.volume)
  return _impl_.volume_.Release();
}
inline void SourceData::set_allocated_volume(std::string* volume) {
  if (volume != nullptr) {
    
  } else {
    
  }
  _impl_.volume_.SetAllocated(volume, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (_impl_.volume_.IsDefault()) {
    _impl_.volume_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:kaikosdk.SourceData.volume)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace kaikosdk

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_sdk_2fcore_2fsource_5fdata_2eproto
