/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "HOZON"
 * 	found in "HOZON_PRIV_v1.0.asn"
 * 	`asn1c -gen-PER`
 */

#ifndef	_CfgCheckRespInfo_H_
#define	_CfgCheckRespInfo_H_


#include <asn_application.h>

/* Including external dependencies */
#include <BOOLEAN.h>
#include <OCTET_STRING.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* CfgCheckRespInfo */
typedef struct CfgCheckRespInfo {
	BOOLEAN_t	 needUpdate;
	OCTET_STRING_t	*cfgVersion	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} CfgCheckRespInfo_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_CfgCheckRespInfo;

#ifdef __cplusplus
}
#endif

#endif	/* _CfgCheckRespInfo_H_ */
#include <asn_internal.h>
