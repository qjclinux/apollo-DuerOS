// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: CarlifeSubscribeMobileCarLifeInfoListProto.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "CarlifeSubscribeMobileCarLifeInfoListProto.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace com {
namespace baidu {
namespace carlife {
namespace protobuf {

namespace {

const ::google::protobuf::Descriptor* CarlifeSubscribeMobileCarLifeInfoList_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  CarlifeSubscribeMobileCarLifeInfoList_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_CarlifeSubscribeMobileCarLifeInfoListProto_2eproto() {
  protobuf_AddDesc_CarlifeSubscribeMobileCarLifeInfoListProto_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "CarlifeSubscribeMobileCarLifeInfoListProto.proto");
  GOOGLE_CHECK(file != NULL);
  CarlifeSubscribeMobileCarLifeInfoList_descriptor_ = file->message_type(0);
  static const int CarlifeSubscribeMobileCarLifeInfoList_offsets_[2] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CarlifeSubscribeMobileCarLifeInfoList, cnt_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CarlifeSubscribeMobileCarLifeInfoList, subscribemobilecarlifeinfo_),
  };
  CarlifeSubscribeMobileCarLifeInfoList_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      CarlifeSubscribeMobileCarLifeInfoList_descriptor_,
      CarlifeSubscribeMobileCarLifeInfoList::default_instance_,
      CarlifeSubscribeMobileCarLifeInfoList_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CarlifeSubscribeMobileCarLifeInfoList, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CarlifeSubscribeMobileCarLifeInfoList, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(CarlifeSubscribeMobileCarLifeInfoList));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_CarlifeSubscribeMobileCarLifeInfoListProto_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    CarlifeSubscribeMobileCarLifeInfoList_descriptor_, &CarlifeSubscribeMobileCarLifeInfoList::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_CarlifeSubscribeMobileCarLifeInfoListProto_2eproto() {
  delete CarlifeSubscribeMobileCarLifeInfoList::default_instance_;
  delete CarlifeSubscribeMobileCarLifeInfoList_reflection_;
}

void protobuf_AddDesc_CarlifeSubscribeMobileCarLifeInfoListProto_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::com::baidu::carlife::protobuf::protobuf_AddDesc_CarlifeSubscribeMobileCarLifeInfoProto_2eproto();
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n0CarlifeSubscribeMobileCarLifeInfoListP"
    "roto.proto\022\032com.baidu.carlife.protobuf\032,"
    "CarlifeSubscribeMobileCarLifeInfoProto.p"
    "roto\"\227\001\n%CarlifeSubscribeMobileCarLifeIn"
    "foList\022\013\n\003cnt\030\001 \002(\005\022a\n\032subscribemobileCa"
    "rLifeInfo\030\002 \003(\0132=.com.baidu.carlife.prot"
    "obuf.CarlifeSubscribeMobileCarLifeInfo", 278);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "CarlifeSubscribeMobileCarLifeInfoListProto.proto", &protobuf_RegisterTypes);
  CarlifeSubscribeMobileCarLifeInfoList::default_instance_ = new CarlifeSubscribeMobileCarLifeInfoList();
  CarlifeSubscribeMobileCarLifeInfoList::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_CarlifeSubscribeMobileCarLifeInfoListProto_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_CarlifeSubscribeMobileCarLifeInfoListProto_2eproto {
  StaticDescriptorInitializer_CarlifeSubscribeMobileCarLifeInfoListProto_2eproto() {
    protobuf_AddDesc_CarlifeSubscribeMobileCarLifeInfoListProto_2eproto();
  }
} static_descriptor_initializer_CarlifeSubscribeMobileCarLifeInfoListProto_2eproto_;

// ===================================================================

#ifndef _MSC_VER
const int CarlifeSubscribeMobileCarLifeInfoList::kCntFieldNumber;
const int CarlifeSubscribeMobileCarLifeInfoList::kSubscribemobileCarLifeInfoFieldNumber;
#endif  // !_MSC_VER

CarlifeSubscribeMobileCarLifeInfoList::CarlifeSubscribeMobileCarLifeInfoList()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void CarlifeSubscribeMobileCarLifeInfoList::InitAsDefaultInstance() {
}

CarlifeSubscribeMobileCarLifeInfoList::CarlifeSubscribeMobileCarLifeInfoList(const CarlifeSubscribeMobileCarLifeInfoList& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void CarlifeSubscribeMobileCarLifeInfoList::SharedCtor() {
  _cached_size_ = 0;
  cnt_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

CarlifeSubscribeMobileCarLifeInfoList::~CarlifeSubscribeMobileCarLifeInfoList() {
  SharedDtor();
}

void CarlifeSubscribeMobileCarLifeInfoList::SharedDtor() {
  if (this != default_instance_) {
  }
}

void CarlifeSubscribeMobileCarLifeInfoList::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* CarlifeSubscribeMobileCarLifeInfoList::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return CarlifeSubscribeMobileCarLifeInfoList_descriptor_;
}

const CarlifeSubscribeMobileCarLifeInfoList& CarlifeSubscribeMobileCarLifeInfoList::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_CarlifeSubscribeMobileCarLifeInfoListProto_2eproto();
  return *default_instance_;
}

CarlifeSubscribeMobileCarLifeInfoList* CarlifeSubscribeMobileCarLifeInfoList::default_instance_ = NULL;

CarlifeSubscribeMobileCarLifeInfoList* CarlifeSubscribeMobileCarLifeInfoList::New() const {
  return new CarlifeSubscribeMobileCarLifeInfoList;
}

void CarlifeSubscribeMobileCarLifeInfoList::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    cnt_ = 0;
  }
  subscribemobilecarlifeinfo_.Clear();
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool CarlifeSubscribeMobileCarLifeInfoList::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required int32 cnt = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &cnt_)));
          set_has_cnt();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(18)) goto parse_subscribemobileCarLifeInfo;
        break;
      }

      // repeated .com.baidu.carlife.protobuf.CarlifeSubscribeMobileCarLifeInfo subscribemobileCarLifeInfo = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_subscribemobileCarLifeInfo:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
                input, add_subscribemobilecarlifeinfo()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(18)) goto parse_subscribemobileCarLifeInfo;
        if (input->ExpectAtEnd()) return true;
        break;
      }

      default: {
      handle_uninterpreted:
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          return true;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
  return true;
#undef DO_
}

void CarlifeSubscribeMobileCarLifeInfoList::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // required int32 cnt = 1;
  if (has_cnt()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(1, this->cnt(), output);
  }

  // repeated .com.baidu.carlife.protobuf.CarlifeSubscribeMobileCarLifeInfo subscribemobileCarLifeInfo = 2;
  for (int i = 0; i < this->subscribemobilecarlifeinfo_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      2, this->subscribemobilecarlifeinfo(i), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* CarlifeSubscribeMobileCarLifeInfoList::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // required int32 cnt = 1;
  if (has_cnt()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(1, this->cnt(), target);
  }

  // repeated .com.baidu.carlife.protobuf.CarlifeSubscribeMobileCarLifeInfo subscribemobileCarLifeInfo = 2;
  for (int i = 0; i < this->subscribemobilecarlifeinfo_size(); i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteMessageNoVirtualToArray(
        2, this->subscribemobilecarlifeinfo(i), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int CarlifeSubscribeMobileCarLifeInfoList::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required int32 cnt = 1;
    if (has_cnt()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->cnt());
    }

  }
  // repeated .com.baidu.carlife.protobuf.CarlifeSubscribeMobileCarLifeInfo subscribemobileCarLifeInfo = 2;
  total_size += 1 * this->subscribemobilecarlifeinfo_size();
  for (int i = 0; i < this->subscribemobilecarlifeinfo_size(); i++) {
    total_size +=
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        this->subscribemobilecarlifeinfo(i));
  }

  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void CarlifeSubscribeMobileCarLifeInfoList::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const CarlifeSubscribeMobileCarLifeInfoList* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const CarlifeSubscribeMobileCarLifeInfoList*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void CarlifeSubscribeMobileCarLifeInfoList::MergeFrom(const CarlifeSubscribeMobileCarLifeInfoList& from) {
  GOOGLE_CHECK_NE(&from, this);
  subscribemobilecarlifeinfo_.MergeFrom(from.subscribemobilecarlifeinfo_);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_cnt()) {
      set_cnt(from.cnt());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void CarlifeSubscribeMobileCarLifeInfoList::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void CarlifeSubscribeMobileCarLifeInfoList::CopyFrom(const CarlifeSubscribeMobileCarLifeInfoList& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool CarlifeSubscribeMobileCarLifeInfoList::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000001) != 0x00000001) return false;

  for (int i = 0; i < subscribemobilecarlifeinfo_size(); i++) {
    if (!this->subscribemobilecarlifeinfo(i).IsInitialized()) return false;
  }
  return true;
}

void CarlifeSubscribeMobileCarLifeInfoList::Swap(CarlifeSubscribeMobileCarLifeInfoList* other) {
  if (other != this) {
    std::swap(cnt_, other->cnt_);
    subscribemobilecarlifeinfo_.Swap(&other->subscribemobilecarlifeinfo_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata CarlifeSubscribeMobileCarLifeInfoList::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = CarlifeSubscribeMobileCarLifeInfoList_descriptor_;
  metadata.reflection = CarlifeSubscribeMobileCarLifeInfoList_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace protobuf
}  // namespace carlife
}  // namespace baidu
}  // namespace com

// @@protoc_insertion_point(global_scope)
