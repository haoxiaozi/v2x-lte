/*
 * Generated by asn1c-0.9.27 (http://lionet.info/asn1c)
 * From ASN.1 module "ITS-Container"
 * 	found in "ITS_CAM_v1.3.2.asn"
 * 	`asn1c -gen-PER`
 */

#ifndef	_AccelerationConfidence_H_
#define	_AccelerationConfidence_H_


#include "asn_application.h"

/* Including external dependencies */
#include "NativeInteger.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum AccelerationConfidence {
	AccelerationConfidence_pointOneMeterPerSecSquared	= 1,
	AccelerationConfidence_outOfRange	= 101,
	AccelerationConfidence_unavailable	= 102
} e_AccelerationConfidence;

/* AccelerationConfidence */
typedef long	 AccelerationConfidence_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_AccelerationConfidence;
asn_struct_free_f AccelerationConfidence_free;
asn_struct_print_f AccelerationConfidence_print;
asn_constr_check_f AccelerationConfidence_constraint;
ber_type_decoder_f AccelerationConfidence_decode_ber;
der_type_encoder_f AccelerationConfidence_encode_der;
xer_type_decoder_f AccelerationConfidence_decode_xer;
xer_type_encoder_f AccelerationConfidence_encode_xer;
per_type_decoder_f AccelerationConfidence_decode_uper;
per_type_encoder_f AccelerationConfidence_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _AccelerationConfidence_H_ */
#include "asn_internal.h"