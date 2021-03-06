/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "HOZON"
 * 	found in "HOZON_PRIV_v1.0.asn"
 * 	`asn1c -gen-PER`
 */

#ifndef	_APN2ConfigSet_H_
#define	_APN2ConfigSet_H_


#include <asn_application.h>

/* Including external dependencies */
#include <OCTET_STRING.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* APN2ConfigSet */
typedef struct APN2ConfigSet {
	OCTET_STRING_t	 tspAddress;
	OCTET_STRING_t	 tspUser;
	OCTET_STRING_t	 tspPass;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} APN2ConfigSet_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_APN2ConfigSet;

#ifdef __cplusplus
}
#endif

#endif	/* _APN2ConfigSet_H_ */
#include <asn_internal.h>
