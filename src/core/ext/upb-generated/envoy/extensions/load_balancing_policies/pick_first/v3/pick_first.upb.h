/* This file was generated by upbc (the upb compiler) from the input
 * file:
 *
 *     envoy/extensions/load_balancing_policies/pick_first/v3/pick_first.proto
 *
 * Do not edit -- your changes will be discarded when the file is
 * regenerated. */

#ifndef ENVOY_EXTENSIONS_LOAD_BALANCING_POLICIES_PICK_FIRST_V3_PICK_FIRST_PROTO_UPB_H_
#define ENVOY_EXTENSIONS_LOAD_BALANCING_POLICIES_PICK_FIRST_V3_PICK_FIRST_PROTO_UPB_H_

#include "upb/collections/array_internal.h"
#include "upb/collections/map_gencode_util.h"
#include "upb/message/accessors.h"
#include "upb/message/internal.h"
#include "upb/mini_table/enum_internal.h"
#include "upb/wire/decode.h"
#include "upb/wire/decode_fast.h"
#include "upb/wire/encode.h"

// Must be last. 
#include "upb/port/def.inc"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct envoy_extensions_load_balancing_policies_pick_first_v3_PickFirst envoy_extensions_load_balancing_policies_pick_first_v3_PickFirst;
extern const upb_MiniTable envoy_extensions_load_balancing_policies_pick_first_v3_PickFirst_msg_init;



/* envoy.extensions.load_balancing_policies.pick_first.v3.PickFirst */

UPB_INLINE envoy_extensions_load_balancing_policies_pick_first_v3_PickFirst* envoy_extensions_load_balancing_policies_pick_first_v3_PickFirst_new(upb_Arena* arena) {
  return (envoy_extensions_load_balancing_policies_pick_first_v3_PickFirst*)_upb_Message_New(&envoy_extensions_load_balancing_policies_pick_first_v3_PickFirst_msg_init, arena);
}
UPB_INLINE envoy_extensions_load_balancing_policies_pick_first_v3_PickFirst* envoy_extensions_load_balancing_policies_pick_first_v3_PickFirst_parse(const char* buf, size_t size, upb_Arena* arena) {
  envoy_extensions_load_balancing_policies_pick_first_v3_PickFirst* ret = envoy_extensions_load_balancing_policies_pick_first_v3_PickFirst_new(arena);
  if (!ret) return NULL;
  if (upb_Decode(buf, size, ret, &envoy_extensions_load_balancing_policies_pick_first_v3_PickFirst_msg_init, NULL, 0, arena) != kUpb_DecodeStatus_Ok) {
    return NULL;
  }
  return ret;
}
UPB_INLINE envoy_extensions_load_balancing_policies_pick_first_v3_PickFirst* envoy_extensions_load_balancing_policies_pick_first_v3_PickFirst_parse_ex(const char* buf, size_t size,
                           const upb_ExtensionRegistry* extreg,
                           int options, upb_Arena* arena) {
  envoy_extensions_load_balancing_policies_pick_first_v3_PickFirst* ret = envoy_extensions_load_balancing_policies_pick_first_v3_PickFirst_new(arena);
  if (!ret) return NULL;
  if (upb_Decode(buf, size, ret, &envoy_extensions_load_balancing_policies_pick_first_v3_PickFirst_msg_init, extreg, options, arena) !=
      kUpb_DecodeStatus_Ok) {
    return NULL;
  }
  return ret;
}
UPB_INLINE char* envoy_extensions_load_balancing_policies_pick_first_v3_PickFirst_serialize(const envoy_extensions_load_balancing_policies_pick_first_v3_PickFirst* msg, upb_Arena* arena, size_t* len) {
  char* ptr;
  (void)upb_Encode(msg, &envoy_extensions_load_balancing_policies_pick_first_v3_PickFirst_msg_init, 0, arena, &ptr, len);
  return ptr;
}
UPB_INLINE char* envoy_extensions_load_balancing_policies_pick_first_v3_PickFirst_serialize_ex(const envoy_extensions_load_balancing_policies_pick_first_v3_PickFirst* msg, int options,
                                 upb_Arena* arena, size_t* len) {
  char* ptr;
  (void)upb_Encode(msg, &envoy_extensions_load_balancing_policies_pick_first_v3_PickFirst_msg_init, options, arena, &ptr, len);
  return ptr;
}
UPB_INLINE void envoy_extensions_load_balancing_policies_pick_first_v3_PickFirst_clear_shuffle_address_list(envoy_extensions_load_balancing_policies_pick_first_v3_PickFirst* msg) {
  const upb_MiniTableField field = {1, 0, 0, kUpb_NoSub, 8, kUpb_FieldMode_Scalar | (kUpb_FieldRep_1Byte << kUpb_FieldRep_Shift)};
  _upb_Message_ClearNonExtensionField(msg, &field);
}
UPB_INLINE bool envoy_extensions_load_balancing_policies_pick_first_v3_PickFirst_shuffle_address_list(const envoy_extensions_load_balancing_policies_pick_first_v3_PickFirst* msg) {
  bool default_val = false;
  bool ret;
  const upb_MiniTableField field = {1, 0, 0, kUpb_NoSub, 8, kUpb_FieldMode_Scalar | (kUpb_FieldRep_1Byte << kUpb_FieldRep_Shift)};
  _upb_Message_GetNonExtensionField(msg, &field, &default_val, &ret);
  return ret;
}

UPB_INLINE void envoy_extensions_load_balancing_policies_pick_first_v3_PickFirst_set_shuffle_address_list(envoy_extensions_load_balancing_policies_pick_first_v3_PickFirst *msg, bool value) {
  const upb_MiniTableField field = {1, 0, 0, kUpb_NoSub, 8, kUpb_FieldMode_Scalar | (kUpb_FieldRep_1Byte << kUpb_FieldRep_Shift)};
  _upb_Message_SetNonExtensionField(msg, &field, &value);
}

extern const upb_MiniTableFile envoy_extensions_load_balancing_policies_pick_first_v3_pick_first_proto_upb_file_layout;

#ifdef __cplusplus
}  /* extern "C" */
#endif

#include "upb/port/undef.inc"

#endif  /* ENVOY_EXTENSIONS_LOAD_BALANCING_POLICIES_PICK_FIRST_V3_PICK_FIRST_PROTO_UPB_H_ */
