/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "HOZON"
 * 	found in "HOZON_PRIV_v1.0.asn"
 * 	`asn1c -gen-PER`
 */

#ifndef	_ExtendConfigSettings_H_
#define	_ExtendConfigSettings_H_


#include <asn_application.h>

/* Including external dependencies */
#include <OCTET_STRING.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* ExtendConfigSettings */
typedef struct ExtendConfigSettings {
	OCTET_STRING_t	 ecallNO;
	OCTET_STRING_t	 bcallNO;
	OCTET_STRING_t	 icallNO;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ExtendConfigSettings_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_ExtendConfigSettings;

#ifdef __cplusplus
}
#endif

#endif	/* _ExtendConfigSettings_H_ */
#include <asn_internal.h>
