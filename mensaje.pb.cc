// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: mensaje.proto

#include "mensaje.pb.h"

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
extern PROTOBUF_INTERNAL_EXPORT_mensaje_2eproto ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_MiInfoRequest_mensaje_2eproto;
namespace chat {
class MiInfoRequestDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<MiInfoRequest> _instance;
} _MiInfoRequest_default_instance_;
class MensajeDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<Mensaje> _instance;
} _Mensaje_default_instance_;
}  // namespace chat
static void InitDefaultsscc_info_Mensaje_mensaje_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::chat::_Mensaje_default_instance_;
    new (ptr) ::chat::Mensaje();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::chat::Mensaje::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<1> scc_info_Mensaje_mensaje_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 1, 0, InitDefaultsscc_info_Mensaje_mensaje_2eproto}, {
      &scc_info_MiInfoRequest_mensaje_2eproto.base,}};

static void InitDefaultsscc_info_MiInfoRequest_mensaje_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::chat::_MiInfoRequest_default_instance_;
    new (ptr) ::chat::MiInfoRequest();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::chat::MiInfoRequest::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_MiInfoRequest_mensaje_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 0, 0, InitDefaultsscc_info_MiInfoRequest_mensaje_2eproto}, {}};

static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_mensaje_2eproto[2];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_mensaje_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_mensaje_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_mensaje_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  PROTOBUF_FIELD_OFFSET(::chat::MiInfoRequest, _has_bits_),
  PROTOBUF_FIELD_OFFSET(::chat::MiInfoRequest, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::chat::MiInfoRequest, username_),
  PROTOBUF_FIELD_OFFSET(::chat::MiInfoRequest, ip_),
  0,
  1,
  PROTOBUF_FIELD_OFFSET(::chat::Mensaje, _has_bits_),
  PROTOBUF_FIELD_OFFSET(::chat::Mensaje, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::chat::Mensaje, option_),
  PROTOBUF_FIELD_OFFSET(::chat::Mensaje, miinforeq_),
  0,
  1,
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, 7, sizeof(::chat::MiInfoRequest)},
  { 9, 16, sizeof(::chat::Mensaje)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::chat::_MiInfoRequest_default_instance_),
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::chat::_Mensaje_default_instance_),
};

const char descriptor_table_protodef_mensaje_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\rmensaje.proto\022\004chat\"-\n\rMiInfoRequest\022\020"
  "\n\010username\030\001 \002(\t\022\n\n\002ip\030\002 \002(\t\"A\n\007Mensaje\022"
  "\016\n\006option\030\001 \002(\t\022&\n\tmiInfoReq\030\002 \001(\0132\023.cha"
  "t.MiInfoRequest"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_mensaje_2eproto_deps[1] = {
};
static ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase*const descriptor_table_mensaje_2eproto_sccs[2] = {
  &scc_info_Mensaje_mensaje_2eproto.base,
  &scc_info_MiInfoRequest_mensaje_2eproto.base,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_mensaje_2eproto_once;
static bool descriptor_table_mensaje_2eproto_initialized = false;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_mensaje_2eproto = {
  &descriptor_table_mensaje_2eproto_initialized, descriptor_table_protodef_mensaje_2eproto, "mensaje.proto", 135,
  &descriptor_table_mensaje_2eproto_once, descriptor_table_mensaje_2eproto_sccs, descriptor_table_mensaje_2eproto_deps, 2, 0,
  schemas, file_default_instances, TableStruct_mensaje_2eproto::offsets,
  file_level_metadata_mensaje_2eproto, 2, file_level_enum_descriptors_mensaje_2eproto, file_level_service_descriptors_mensaje_2eproto,
};

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_mensaje_2eproto = (  ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptors(&descriptor_table_mensaje_2eproto), true);
namespace chat {

// ===================================================================

void MiInfoRequest::InitAsDefaultInstance() {
}
class MiInfoRequest::_Internal {
 public:
  using HasBits = decltype(std::declval<MiInfoRequest>()._has_bits_);
  static void set_has_username(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
  static void set_has_ip(HasBits* has_bits) {
    (*has_bits)[0] |= 2u;
  }
};

MiInfoRequest::MiInfoRequest()
  : ::PROTOBUF_NAMESPACE_ID::Message(), _internal_metadata_(nullptr) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:chat.MiInfoRequest)
}
MiInfoRequest::MiInfoRequest(const MiInfoRequest& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _internal_metadata_(nullptr),
      _has_bits_(from._has_bits_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  username_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (from._internal_has_username()) {
    username_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.username_);
  }
  ip_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (from._internal_has_ip()) {
    ip_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.ip_);
  }
  // @@protoc_insertion_point(copy_constructor:chat.MiInfoRequest)
}

void MiInfoRequest::SharedCtor() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&scc_info_MiInfoRequest_mensaje_2eproto.base);
  username_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  ip_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}

MiInfoRequest::~MiInfoRequest() {
  // @@protoc_insertion_point(destructor:chat.MiInfoRequest)
  SharedDtor();
}

void MiInfoRequest::SharedDtor() {
  username_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  ip_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}

void MiInfoRequest::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const MiInfoRequest& MiInfoRequest::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_MiInfoRequest_mensaje_2eproto.base);
  return *internal_default_instance();
}


void MiInfoRequest::Clear() {
// @@protoc_insertion_point(message_clear_start:chat.MiInfoRequest)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x00000003u) {
    if (cached_has_bits & 0x00000001u) {
      username_.ClearNonDefaultToEmptyNoArena();
    }
    if (cached_has_bits & 0x00000002u) {
      ip_.ClearNonDefaultToEmptyNoArena();
    }
  }
  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

const char* MiInfoRequest::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  _Internal::HasBits has_bits{};
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // required string username = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 10)) {
          auto str = _internal_mutable_username();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          #ifndef NDEBUG
          ::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "chat.MiInfoRequest.username");
          #endif  // !NDEBUG
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // required string ip = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 18)) {
          auto str = _internal_mutable_ip();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          #ifndef NDEBUG
          ::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "chat.MiInfoRequest.ip");
          #endif  // !NDEBUG
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      default: {
      handle_unusual:
        if ((tag & 7) == 4 || tag == 0) {
          ctx->SetLastTag(tag);
          goto success;
        }
        ptr = UnknownFieldParse(tag, &_internal_metadata_, ptr, ctx);
        CHK_(ptr != nullptr);
        continue;
      }
    }  // switch
  }  // while
success:
  _has_bits_.Or(has_bits);
  return ptr;
failure:
  ptr = nullptr;
  goto success;
#undef CHK_
}

::PROTOBUF_NAMESPACE_ID::uint8* MiInfoRequest::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:chat.MiInfoRequest)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // required string username = 1;
  if (cached_has_bits & 0x00000001u) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::VerifyUTF8StringNamedField(
      this->_internal_username().data(), static_cast<int>(this->_internal_username().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::SERIALIZE,
      "chat.MiInfoRequest.username");
    target = stream->WriteStringMaybeAliased(
        1, this->_internal_username(), target);
  }

  // required string ip = 2;
  if (cached_has_bits & 0x00000002u) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::VerifyUTF8StringNamedField(
      this->_internal_ip().data(), static_cast<int>(this->_internal_ip().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::SERIALIZE,
      "chat.MiInfoRequest.ip");
    target = stream->WriteStringMaybeAliased(
        2, this->_internal_ip(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:chat.MiInfoRequest)
  return target;
}

size_t MiInfoRequest::RequiredFieldsByteSizeFallback() const {
// @@protoc_insertion_point(required_fields_byte_size_fallback_start:chat.MiInfoRequest)
  size_t total_size = 0;

  if (_internal_has_username()) {
    // required string username = 1;
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_username());
  }

  if (_internal_has_ip()) {
    // required string ip = 2;
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_ip());
  }

  return total_size;
}
size_t MiInfoRequest::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:chat.MiInfoRequest)
  size_t total_size = 0;

  if (((_has_bits_[0] & 0x00000003) ^ 0x00000003) == 0) {  // All required fields are present.
    // required string username = 1;
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_username());

    // required string ip = 2;
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_ip());

  } else {
    total_size += RequiredFieldsByteSizeFallback();
  }
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void MiInfoRequest::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:chat.MiInfoRequest)
  GOOGLE_DCHECK_NE(&from, this);
  const MiInfoRequest* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<MiInfoRequest>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:chat.MiInfoRequest)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:chat.MiInfoRequest)
    MergeFrom(*source);
  }
}

void MiInfoRequest::MergeFrom(const MiInfoRequest& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:chat.MiInfoRequest)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._has_bits_[0];
  if (cached_has_bits & 0x00000003u) {
    if (cached_has_bits & 0x00000001u) {
      _has_bits_[0] |= 0x00000001u;
      username_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.username_);
    }
    if (cached_has_bits & 0x00000002u) {
      _has_bits_[0] |= 0x00000002u;
      ip_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.ip_);
    }
  }
}

void MiInfoRequest::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:chat.MiInfoRequest)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void MiInfoRequest::CopyFrom(const MiInfoRequest& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:chat.MiInfoRequest)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool MiInfoRequest::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000003) != 0x00000003) return false;
  return true;
}

void MiInfoRequest::InternalSwap(MiInfoRequest* other) {
  using std::swap;
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  username_.Swap(&other->username_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  ip_.Swap(&other->ip_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
}

::PROTOBUF_NAMESPACE_ID::Metadata MiInfoRequest::GetMetadata() const {
  return GetMetadataStatic();
}


// ===================================================================

void Mensaje::InitAsDefaultInstance() {
  ::chat::_Mensaje_default_instance_._instance.get_mutable()->miinforeq_ = const_cast< ::chat::MiInfoRequest*>(
      ::chat::MiInfoRequest::internal_default_instance());
}
class Mensaje::_Internal {
 public:
  using HasBits = decltype(std::declval<Mensaje>()._has_bits_);
  static void set_has_option(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
  static const ::chat::MiInfoRequest& miinforeq(const Mensaje* msg);
  static void set_has_miinforeq(HasBits* has_bits) {
    (*has_bits)[0] |= 2u;
  }
};

const ::chat::MiInfoRequest&
Mensaje::_Internal::miinforeq(const Mensaje* msg) {
  return *msg->miinforeq_;
}
Mensaje::Mensaje()
  : ::PROTOBUF_NAMESPACE_ID::Message(), _internal_metadata_(nullptr) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:chat.Mensaje)
}
Mensaje::Mensaje(const Mensaje& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _internal_metadata_(nullptr),
      _has_bits_(from._has_bits_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  option_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (from._internal_has_option()) {
    option_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.option_);
  }
  if (from._internal_has_miinforeq()) {
    miinforeq_ = new ::chat::MiInfoRequest(*from.miinforeq_);
  } else {
    miinforeq_ = nullptr;
  }
  // @@protoc_insertion_point(copy_constructor:chat.Mensaje)
}

void Mensaje::SharedCtor() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&scc_info_Mensaje_mensaje_2eproto.base);
  option_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  miinforeq_ = nullptr;
}

Mensaje::~Mensaje() {
  // @@protoc_insertion_point(destructor:chat.Mensaje)
  SharedDtor();
}

void Mensaje::SharedDtor() {
  option_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (this != internal_default_instance()) delete miinforeq_;
}

void Mensaje::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const Mensaje& Mensaje::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_Mensaje_mensaje_2eproto.base);
  return *internal_default_instance();
}


void Mensaje::Clear() {
// @@protoc_insertion_point(message_clear_start:chat.Mensaje)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x00000003u) {
    if (cached_has_bits & 0x00000001u) {
      option_.ClearNonDefaultToEmptyNoArena();
    }
    if (cached_has_bits & 0x00000002u) {
      GOOGLE_DCHECK(miinforeq_ != nullptr);
      miinforeq_->Clear();
    }
  }
  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

const char* Mensaje::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  _Internal::HasBits has_bits{};
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // required string option = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 10)) {
          auto str = _internal_mutable_option();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          #ifndef NDEBUG
          ::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "chat.Mensaje.option");
          #endif  // !NDEBUG
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // optional .chat.MiInfoRequest miInfoReq = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 18)) {
          ptr = ctx->ParseMessage(_internal_mutable_miinforeq(), ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      default: {
      handle_unusual:
        if ((tag & 7) == 4 || tag == 0) {
          ctx->SetLastTag(tag);
          goto success;
        }
        ptr = UnknownFieldParse(tag, &_internal_metadata_, ptr, ctx);
        CHK_(ptr != nullptr);
        continue;
      }
    }  // switch
  }  // while
success:
  _has_bits_.Or(has_bits);
  return ptr;
failure:
  ptr = nullptr;
  goto success;
#undef CHK_
}

::PROTOBUF_NAMESPACE_ID::uint8* Mensaje::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:chat.Mensaje)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // required string option = 1;
  if (cached_has_bits & 0x00000001u) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::VerifyUTF8StringNamedField(
      this->_internal_option().data(), static_cast<int>(this->_internal_option().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::SERIALIZE,
      "chat.Mensaje.option");
    target = stream->WriteStringMaybeAliased(
        1, this->_internal_option(), target);
  }

  // optional .chat.MiInfoRequest miInfoReq = 2;
  if (cached_has_bits & 0x00000002u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(
        2, _Internal::miinforeq(this), target, stream);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:chat.Mensaje)
  return target;
}

size_t Mensaje::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:chat.Mensaje)
  size_t total_size = 0;

  // required string option = 1;
  if (_internal_has_option()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_option());
  }
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // optional .chat.MiInfoRequest miInfoReq = 2;
  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x00000002u) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
        *miinforeq_);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void Mensaje::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:chat.Mensaje)
  GOOGLE_DCHECK_NE(&from, this);
  const Mensaje* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<Mensaje>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:chat.Mensaje)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:chat.Mensaje)
    MergeFrom(*source);
  }
}

void Mensaje::MergeFrom(const Mensaje& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:chat.Mensaje)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._has_bits_[0];
  if (cached_has_bits & 0x00000003u) {
    if (cached_has_bits & 0x00000001u) {
      _has_bits_[0] |= 0x00000001u;
      option_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.option_);
    }
    if (cached_has_bits & 0x00000002u) {
      _internal_mutable_miinforeq()->::chat::MiInfoRequest::MergeFrom(from._internal_miinforeq());
    }
  }
}

void Mensaje::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:chat.Mensaje)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Mensaje::CopyFrom(const Mensaje& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:chat.Mensaje)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Mensaje::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000001) != 0x00000001) return false;
  if (_internal_has_miinforeq()) {
    if (!miinforeq_->IsInitialized()) return false;
  }
  return true;
}

void Mensaje::InternalSwap(Mensaje* other) {
  using std::swap;
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  option_.Swap(&other->option_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  swap(miinforeq_, other->miinforeq_);
}

::PROTOBUF_NAMESPACE_ID::Metadata Mensaje::GetMetadata() const {
  return GetMetadataStatic();
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace chat
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::chat::MiInfoRequest* Arena::CreateMaybeMessage< ::chat::MiInfoRequest >(Arena* arena) {
  return Arena::CreateInternal< ::chat::MiInfoRequest >(arena);
}
template<> PROTOBUF_NOINLINE ::chat::Mensaje* Arena::CreateMaybeMessage< ::chat::Mensaje >(Arena* arena) {
  return Arena::CreateInternal< ::chat::Mensaje >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
