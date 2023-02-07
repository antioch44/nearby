// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: internal/proto/metadata.proto

#include "internal/proto/metadata.pb.h"

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
namespace nearby {
namespace internal {
constexpr Metadata::Metadata(
  ::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized)
  : device_id_(&::PROTOBUF_NAMESPACE_ID::internal::fixed_address_empty_string)
  , account_name_(&::PROTOBUF_NAMESPACE_ID::internal::fixed_address_empty_string)
  , device_name_(&::PROTOBUF_NAMESPACE_ID::internal::fixed_address_empty_string)
  , user_name_(&::PROTOBUF_NAMESPACE_ID::internal::fixed_address_empty_string)
  , device_profile_url_(&::PROTOBUF_NAMESPACE_ID::internal::fixed_address_empty_string)
  , bluetooth_mac_address_(&::PROTOBUF_NAMESPACE_ID::internal::fixed_address_empty_string){}
struct MetadataDefaultTypeInternal {
  constexpr MetadataDefaultTypeInternal()
    : _instance(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized{}) {}
  ~MetadataDefaultTypeInternal() {}
  union {
    Metadata _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT MetadataDefaultTypeInternal _Metadata_default_instance_;
}  // namespace internal
}  // namespace nearby
static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_internal_2fproto_2fmetadata_2eproto[1];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_internal_2fproto_2fmetadata_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_internal_2fproto_2fmetadata_2eproto = nullptr;

const uint32_t TableStruct_internal_2fproto_2fmetadata_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::nearby::internal::Metadata, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::nearby::internal::Metadata, device_id_),
  PROTOBUF_FIELD_OFFSET(::nearby::internal::Metadata, account_name_),
  PROTOBUF_FIELD_OFFSET(::nearby::internal::Metadata, device_name_),
  PROTOBUF_FIELD_OFFSET(::nearby::internal::Metadata, user_name_),
  PROTOBUF_FIELD_OFFSET(::nearby::internal::Metadata, device_profile_url_),
  PROTOBUF_FIELD_OFFSET(::nearby::internal::Metadata, bluetooth_mac_address_),
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, -1, sizeof(::nearby::internal::Metadata)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::nearby::internal::_Metadata_default_instance_),
};

const char descriptor_table_protodef_internal_2fproto_2fmetadata_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\035internal/proto/metadata.proto\022\017nearby."
  "internal\"\226\001\n\010Metadata\022\021\n\tdevice_id\030\001 \001(\t"
  "\022\024\n\014account_name\030\002 \001(\t\022\023\n\013device_name\030\003 "
  "\001(\t\022\021\n\tuser_name\030\004 \001(\t\022\032\n\022device_profile"
  "_url\030\005 \001(\t\022\035\n\025bluetooth_mac_address\030\006 \001("
  "\014b\006proto3"
  ;
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_internal_2fproto_2fmetadata_2eproto_once;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_internal_2fproto_2fmetadata_2eproto = {
  false, false, 209, descriptor_table_protodef_internal_2fproto_2fmetadata_2eproto, "internal/proto/metadata.proto", 
  &descriptor_table_internal_2fproto_2fmetadata_2eproto_once, nullptr, 0, 1,
  schemas, file_default_instances, TableStruct_internal_2fproto_2fmetadata_2eproto::offsets,
  file_level_metadata_internal_2fproto_2fmetadata_2eproto, file_level_enum_descriptors_internal_2fproto_2fmetadata_2eproto, file_level_service_descriptors_internal_2fproto_2fmetadata_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable* descriptor_table_internal_2fproto_2fmetadata_2eproto_getter() {
  return &descriptor_table_internal_2fproto_2fmetadata_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY static ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptorsRunner dynamic_init_dummy_internal_2fproto_2fmetadata_2eproto(&descriptor_table_internal_2fproto_2fmetadata_2eproto);
namespace nearby {
namespace internal {

// ===================================================================

class Metadata::_Internal {
 public:
};

Metadata::Metadata(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor();
  if (!is_message_owned) {
    RegisterArenaDtor(arena);
  }
  // @@protoc_insertion_point(arena_constructor:nearby.internal.Metadata)
}
Metadata::Metadata(const Metadata& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  device_id_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    device_id_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), "", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (!from._internal_device_id().empty()) {
    device_id_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, from._internal_device_id(), 
      GetArenaForAllocation());
  }
  account_name_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    account_name_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), "", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (!from._internal_account_name().empty()) {
    account_name_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, from._internal_account_name(), 
      GetArenaForAllocation());
  }
  device_name_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    device_name_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), "", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (!from._internal_device_name().empty()) {
    device_name_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, from._internal_device_name(), 
      GetArenaForAllocation());
  }
  user_name_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    user_name_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), "", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (!from._internal_user_name().empty()) {
    user_name_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, from._internal_user_name(), 
      GetArenaForAllocation());
  }
  device_profile_url_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    device_profile_url_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), "", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (!from._internal_device_profile_url().empty()) {
    device_profile_url_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, from._internal_device_profile_url(), 
      GetArenaForAllocation());
  }
  bluetooth_mac_address_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    bluetooth_mac_address_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), "", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (!from._internal_bluetooth_mac_address().empty()) {
    bluetooth_mac_address_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, from._internal_bluetooth_mac_address(), 
      GetArenaForAllocation());
  }
  // @@protoc_insertion_point(copy_constructor:nearby.internal.Metadata)
}

inline void Metadata::SharedCtor() {
device_id_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  device_id_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), "", GetArenaForAllocation());
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
account_name_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  account_name_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), "", GetArenaForAllocation());
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
device_name_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  device_name_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), "", GetArenaForAllocation());
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
user_name_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  user_name_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), "", GetArenaForAllocation());
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
device_profile_url_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  device_profile_url_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), "", GetArenaForAllocation());
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
bluetooth_mac_address_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  bluetooth_mac_address_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), "", GetArenaForAllocation());
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
}

Metadata::~Metadata() {
  // @@protoc_insertion_point(destructor:nearby.internal.Metadata)
  if (GetArenaForAllocation() != nullptr) return;
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

inline void Metadata::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  device_id_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  account_name_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  device_name_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  user_name_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  device_profile_url_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  bluetooth_mac_address_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}

void Metadata::ArenaDtor(void* object) {
  Metadata* _this = reinterpret_cast< Metadata* >(object);
  (void)_this;
}
void Metadata::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void Metadata::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}

void Metadata::Clear() {
// @@protoc_insertion_point(message_clear_start:nearby.internal.Metadata)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  device_id_.ClearToEmpty();
  account_name_.ClearToEmpty();
  device_name_.ClearToEmpty();
  user_name_.ClearToEmpty();
  device_profile_url_.ClearToEmpty();
  bluetooth_mac_address_.ClearToEmpty();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* Metadata::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // string device_id = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 10)) {
          auto str = _internal_mutable_device_id();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "nearby.internal.Metadata.device_id"));
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // string account_name = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 18)) {
          auto str = _internal_mutable_account_name();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "nearby.internal.Metadata.account_name"));
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // string device_name = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 26)) {
          auto str = _internal_mutable_device_name();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "nearby.internal.Metadata.device_name"));
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // string user_name = 4;
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 34)) {
          auto str = _internal_mutable_user_name();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "nearby.internal.Metadata.user_name"));
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // string device_profile_url = 5;
      case 5:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 42)) {
          auto str = _internal_mutable_device_profile_url();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "nearby.internal.Metadata.device_profile_url"));
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // bytes bluetooth_mac_address = 6;
      case 6:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 50)) {
          auto str = _internal_mutable_bluetooth_mac_address();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
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

uint8_t* Metadata::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:nearby.internal.Metadata)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // string device_id = 1;
  if (!this->_internal_device_id().empty()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_device_id().data(), static_cast<int>(this->_internal_device_id().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "nearby.internal.Metadata.device_id");
    target = stream->WriteStringMaybeAliased(
        1, this->_internal_device_id(), target);
  }

  // string account_name = 2;
  if (!this->_internal_account_name().empty()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_account_name().data(), static_cast<int>(this->_internal_account_name().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "nearby.internal.Metadata.account_name");
    target = stream->WriteStringMaybeAliased(
        2, this->_internal_account_name(), target);
  }

  // string device_name = 3;
  if (!this->_internal_device_name().empty()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_device_name().data(), static_cast<int>(this->_internal_device_name().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "nearby.internal.Metadata.device_name");
    target = stream->WriteStringMaybeAliased(
        3, this->_internal_device_name(), target);
  }

  // string user_name = 4;
  if (!this->_internal_user_name().empty()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_user_name().data(), static_cast<int>(this->_internal_user_name().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "nearby.internal.Metadata.user_name");
    target = stream->WriteStringMaybeAliased(
        4, this->_internal_user_name(), target);
  }

  // string device_profile_url = 5;
  if (!this->_internal_device_profile_url().empty()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_device_profile_url().data(), static_cast<int>(this->_internal_device_profile_url().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "nearby.internal.Metadata.device_profile_url");
    target = stream->WriteStringMaybeAliased(
        5, this->_internal_device_profile_url(), target);
  }

  // bytes bluetooth_mac_address = 6;
  if (!this->_internal_bluetooth_mac_address().empty()) {
    target = stream->WriteBytesMaybeAliased(
        6, this->_internal_bluetooth_mac_address(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:nearby.internal.Metadata)
  return target;
}

size_t Metadata::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:nearby.internal.Metadata)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // string device_id = 1;
  if (!this->_internal_device_id().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_device_id());
  }

  // string account_name = 2;
  if (!this->_internal_account_name().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_account_name());
  }

  // string device_name = 3;
  if (!this->_internal_device_name().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_device_name());
  }

  // string user_name = 4;
  if (!this->_internal_user_name().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_user_name());
  }

  // string device_profile_url = 5;
  if (!this->_internal_device_profile_url().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_device_profile_url());
  }

  // bytes bluetooth_mac_address = 6;
  if (!this->_internal_bluetooth_mac_address().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::BytesSize(
        this->_internal_bluetooth_mac_address());
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData Metadata::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSizeCheck,
    Metadata::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*Metadata::GetClassData() const { return &_class_data_; }

void Metadata::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message* to,
                      const ::PROTOBUF_NAMESPACE_ID::Message& from) {
  static_cast<Metadata *>(to)->MergeFrom(
      static_cast<const Metadata &>(from));
}


void Metadata::MergeFrom(const Metadata& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:nearby.internal.Metadata)
  GOOGLE_DCHECK_NE(&from, this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  if (!from._internal_device_id().empty()) {
    _internal_set_device_id(from._internal_device_id());
  }
  if (!from._internal_account_name().empty()) {
    _internal_set_account_name(from._internal_account_name());
  }
  if (!from._internal_device_name().empty()) {
    _internal_set_device_name(from._internal_device_name());
  }
  if (!from._internal_user_name().empty()) {
    _internal_set_user_name(from._internal_user_name());
  }
  if (!from._internal_device_profile_url().empty()) {
    _internal_set_device_profile_url(from._internal_device_profile_url());
  }
  if (!from._internal_bluetooth_mac_address().empty()) {
    _internal_set_bluetooth_mac_address(from._internal_bluetooth_mac_address());
  }
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void Metadata::CopyFrom(const Metadata& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:nearby.internal.Metadata)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Metadata::IsInitialized() const {
  return true;
}

void Metadata::InternalSwap(Metadata* other) {
  using std::swap;
  auto* lhs_arena = GetArenaForAllocation();
  auto* rhs_arena = other->GetArenaForAllocation();
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      &device_id_, lhs_arena,
      &other->device_id_, rhs_arena
  );
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      &account_name_, lhs_arena,
      &other->account_name_, rhs_arena
  );
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      &device_name_, lhs_arena,
      &other->device_name_, rhs_arena
  );
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      &user_name_, lhs_arena,
      &other->user_name_, rhs_arena
  );
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      &device_profile_url_, lhs_arena,
      &other->device_profile_url_, rhs_arena
  );
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      &bluetooth_mac_address_, lhs_arena,
      &other->bluetooth_mac_address_, rhs_arena
  );
}

::PROTOBUF_NAMESPACE_ID::Metadata Metadata::GetMetadata() const {
  return ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(
      &descriptor_table_internal_2fproto_2fmetadata_2eproto_getter, &descriptor_table_internal_2fproto_2fmetadata_2eproto_once,
      file_level_metadata_internal_2fproto_2fmetadata_2eproto[0]);
}

// @@protoc_insertion_point(namespace_scope)
}  // namespace internal
}  // namespace nearby
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::nearby::internal::Metadata* Arena::CreateMaybeMessage< ::nearby::internal::Metadata >(Arena* arena) {
  return Arena::CreateMessageInternal< ::nearby::internal::Metadata >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>