// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: message.proto

#ifndef PROTOBUF_message_2eproto__INCLUDED
#define PROTOBUF_message_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2004000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2004000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/generated_message_reflection.h>
#include "client.pb.h"
// @@protoc_insertion_point(includes)

namespace com {
namespace wlancat {
namespace data {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_message_2eproto();
void protobuf_AssignDesc_message_2eproto();
void protobuf_ShutdownFile_message_2eproto();

class Message;

enum Message_Type {
  Message_Type_REQEST = 0,
  Message_Type_RESPONSE = 1
};
bool Message_Type_IsValid(int value);
const Message_Type Message_Type_Type_MIN = Message_Type_REQEST;
const Message_Type Message_Type_Type_MAX = Message_Type_RESPONSE;
const int Message_Type_Type_ARRAYSIZE = Message_Type_Type_MAX + 1;

const ::google::protobuf::EnumDescriptor* Message_Type_descriptor();
inline const ::std::string& Message_Type_Name(Message_Type value) {
  return ::google::protobuf::internal::NameOfEnum(
    Message_Type_descriptor(), value);
}
inline bool Message_Type_Parse(
    const ::std::string& name, Message_Type* value) {
  return ::google::protobuf::internal::ParseNamedEnum<Message_Type>(
    Message_Type_descriptor(), name, value);
}
// ===================================================================

class Message : public ::google::protobuf::Message {
 public:
  Message();
  virtual ~Message();
  
  Message(const Message& from);
  
  inline Message& operator=(const Message& from) {
    CopyFrom(from);
    return *this;
  }
  
  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }
  
  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }
  
  static const ::google::protobuf::Descriptor* descriptor();
  static const Message& default_instance();
  
  void Swap(Message* other);
  
  // implements Message ----------------------------------------------
  
  Message* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const Message& from);
  void MergeFrom(const Message& from);
  void Clear();
  bool IsInitialized() const;
  
  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:
  
  ::google::protobuf::Metadata GetMetadata() const;
  
  // nested types ----------------------------------------------------
  
  typedef Message_Type Type;
  static const Type REQEST = Message_Type_REQEST;
  static const Type RESPONSE = Message_Type_RESPONSE;
  static inline bool Type_IsValid(int value) {
    return Message_Type_IsValid(value);
  }
  static const Type Type_MIN =
    Message_Type_Type_MIN;
  static const Type Type_MAX =
    Message_Type_Type_MAX;
  static const int Type_ARRAYSIZE =
    Message_Type_Type_ARRAYSIZE;
  static inline const ::google::protobuf::EnumDescriptor*
  Type_descriptor() {
    return Message_Type_descriptor();
  }
  static inline const ::std::string& Type_Name(Type value) {
    return Message_Type_Name(value);
  }
  static inline bool Type_Parse(const ::std::string& name,
      Type* value) {
    return Message_Type_Parse(name, value);
  }
  
  // accessors -------------------------------------------------------
  
  // required .com.wlancat.data.Message.Type type = 1;
  inline bool has_type() const;
  inline void clear_type();
  static const int kTypeFieldNumber = 1;
  inline ::com::wlancat::data::Message_Type type() const;
  inline void set_type(::com::wlancat::data::Message_Type value);
  
  // optional .com.wlancat.data.Client client = 2;
  inline bool has_client() const;
  inline void clear_client();
  static const int kClientFieldNumber = 2;
  inline const ::com::wlancat::data::Client& client() const;
  inline ::com::wlancat::data::Client* mutable_client();
  inline ::com::wlancat::data::Client* release_client();
  
  // @@protoc_insertion_point(class_scope:com.wlancat.data.Message)
 private:
  inline void set_has_type();
  inline void clear_has_type();
  inline void set_has_client();
  inline void clear_has_client();
  
  ::google::protobuf::UnknownFieldSet _unknown_fields_;
  
  ::com::wlancat::data::Client* client_;
  int type_;
  
  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(2 + 31) / 32];
  
  friend void  protobuf_AddDesc_message_2eproto();
  friend void protobuf_AssignDesc_message_2eproto();
  friend void protobuf_ShutdownFile_message_2eproto();
  
  void InitAsDefaultInstance();
  static Message* default_instance_;
};
// ===================================================================


// ===================================================================

// Message

// required .com.wlancat.data.Message.Type type = 1;
inline bool Message::has_type() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void Message::set_has_type() {
  _has_bits_[0] |= 0x00000001u;
}
inline void Message::clear_has_type() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void Message::clear_type() {
  type_ = 0;
  clear_has_type();
}
inline ::com::wlancat::data::Message_Type Message::type() const {
  return static_cast< ::com::wlancat::data::Message_Type >(type_);
}
inline void Message::set_type(::com::wlancat::data::Message_Type value) {
  GOOGLE_DCHECK(::com::wlancat::data::Message_Type_IsValid(value));
  set_has_type();
  type_ = value;
}

// optional .com.wlancat.data.Client client = 2;
inline bool Message::has_client() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void Message::set_has_client() {
  _has_bits_[0] |= 0x00000002u;
}
inline void Message::clear_has_client() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void Message::clear_client() {
  if (client_ != NULL) client_->::com::wlancat::data::Client::Clear();
  clear_has_client();
}
inline const ::com::wlancat::data::Client& Message::client() const {
  return client_ != NULL ? *client_ : *default_instance_->client_;
}
inline ::com::wlancat::data::Client* Message::mutable_client() {
  set_has_client();
  if (client_ == NULL) client_ = new ::com::wlancat::data::Client;
  return client_;
}
inline ::com::wlancat::data::Client* Message::release_client() {
  clear_has_client();
  ::com::wlancat::data::Client* temp = client_;
  client_ = NULL;
  return temp;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace data
}  // namespace wlancat
}  // namespace com

#ifndef SWIG
namespace google {
namespace protobuf {

template <>
inline const EnumDescriptor* GetEnumDescriptor< ::com::wlancat::data::Message_Type>() {
  return ::com::wlancat::data::Message_Type_descriptor();
}

}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_message_2eproto__INCLUDED
