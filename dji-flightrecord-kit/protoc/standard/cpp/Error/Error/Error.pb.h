// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: Error/Error.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_Error_2fError_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_Error_2fError_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3021000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3021006 < PROTOBUF_MIN_PROTOC_VERSION
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
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/generated_enum_reflection.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_Error_2fError_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_Error_2fError_2eproto {
  static const uint32_t offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_Error_2fError_2eproto;
PROTOBUF_NAMESPACE_OPEN
PROTOBUF_NAMESPACE_CLOSE
namespace DJIFRProto {
namespace Standard {

enum FRError : int {
  Success = 0,
  InvalidParameters = 1,
  IllegalFileContent = 2,
  VersionNotSupport = 3,
  NoParser = 4,
  FeatureNotSupported = 5,
  DecoderFailed = 6,
  FileOperationFailed = 7,
  FileDataContamination = 8,
  DataFormatChecksumFailure = 9,
  Failure = 255,
  FRError_INT_MIN_SENTINEL_DO_NOT_USE_ = std::numeric_limits<int32_t>::min(),
  FRError_INT_MAX_SENTINEL_DO_NOT_USE_ = std::numeric_limits<int32_t>::max()
};
bool FRError_IsValid(int value);
constexpr FRError FRError_MIN = Success;
constexpr FRError FRError_MAX = Failure;
constexpr int FRError_ARRAYSIZE = FRError_MAX + 1;

const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* FRError_descriptor();
template<typename T>
inline const std::string& FRError_Name(T enum_t_value) {
  static_assert(::std::is_same<T, FRError>::value ||
    ::std::is_integral<T>::value,
    "Incorrect type passed to function FRError_Name.");
  return ::PROTOBUF_NAMESPACE_ID::internal::NameOfEnum(
    FRError_descriptor(), enum_t_value);
}
inline bool FRError_Parse(
    ::PROTOBUF_NAMESPACE_ID::ConstStringParam name, FRError* value) {
  return ::PROTOBUF_NAMESPACE_ID::internal::ParseNamedEnum<FRError>(
    FRError_descriptor(), name, value);
}
// ===================================================================


// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace Standard
}  // namespace DJIFRProto

PROTOBUF_NAMESPACE_OPEN

template <> struct is_proto_enum< ::DJIFRProto::Standard::FRError> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::DJIFRProto::Standard::FRError>() {
  return ::DJIFRProto::Standard::FRError_descriptor();
}

PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_Error_2fError_2eproto
