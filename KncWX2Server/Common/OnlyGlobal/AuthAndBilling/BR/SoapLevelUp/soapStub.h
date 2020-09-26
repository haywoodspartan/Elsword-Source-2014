/* soapStub.h
   Generated by gSOAP 2.8.0 from lv_soap.h
   Copyright(C) 2000-2010, Robert van Engelen, Genivia Inc. All Rights Reserved.
   The generated code is released under one of the following licenses:
   GPL, the gSOAP public license, or Genivia's license for commercial use.
*/

#ifndef soapStub_H
#define soapStub_H
#define SOAP_NAMESPACE_OF_ns2	"http://tempuri.org/Imports"
#define SOAP_NAMESPACE_OF_ns1	"http://tempuri.org/"
#define SOAP_NAMESPACE_OF_ns3	"http://schemas.microsoft.com/2003/10/Serialization/"
#define SOAP_NAMESPACE_OF_ns4	"http://schemas.datacontract.org/2004/07/LevelUpGames.Framework.Authentication.Service.Contract"
#include "stdsoap2.h"
#ifdef __cplusplus
extern "C" {
#endif

/******************************************************************************\
 *                                                                            *
 * Enumerations                                                               *
 *                                                                            *
\******************************************************************************/


#ifndef SOAP_TYPE_xsd__boolean
#define SOAP_TYPE_xsd__boolean (14)
/* xsd:boolean */
enum xsd__boolean {xsd__boolean__false_ = 0, xsd__boolean__true_ = 1};
#endif

/******************************************************************************\
 *                                                                            *
 * Types with Custom Serializers                                              *
 *                                                                            *
\******************************************************************************/


/******************************************************************************\
 *                                                                            *
 * Classes and Structs                                                        *
 *                                                                            *
\******************************************************************************/


#if 0 /* volatile type: do not declare here, declared elsewhere */

#endif

#ifndef SOAP_TYPE_xsd__base64Binary
#define SOAP_TYPE_xsd__base64Binary (10)
/* Base64 schema type: */
struct xsd__base64Binary
{
	unsigned char *__ptr;
	int __size;
	char *id;	/* optional element of type xsd:string */
	char *type;	/* optional element of type xsd:string */
	char *options;	/* optional element of type xsd:string */
};
#endif

#ifndef SOAP_TYPE__ns1__Authenticate
#define SOAP_TYPE__ns1__Authenticate (22)
/* ns1:Authenticate */
struct _ns1__Authenticate
{
	char *username;	/* optional element of type xsd:string */
	char *password;	/* optional element of type xsd:string */
	char *ipaddress;	/* optional element of type xsd:string */
};
#endif

#ifndef SOAP_TYPE__ns1__AuthenticateResponse
#define SOAP_TYPE__ns1__AuthenticateResponse (23)
/* ns1:AuthenticateResponse */
struct _ns1__AuthenticateResponse
{
	struct ns4__AuthenticationResult *AuthenticateResult;	/* SOAP 1.2 RPC return element (when namespace qualified) */	/* optional element of type ns4:AuthenticationResult */
};
#endif

#ifndef SOAP_TYPE__ns1__Block
#define SOAP_TYPE__ns1__Block (26)
/* ns1:Block */
struct _ns1__Block
{
	char *username;	/* optional element of type xsd:string */
	char *reason;	/* optional element of type xsd:string */
};
#endif

#ifndef SOAP_TYPE__ns1__BlockResponse
#define SOAP_TYPE__ns1__BlockResponse (27)
/* ns1:BlockResponse */
struct _ns1__BlockResponse
{
	struct ns4__BlockResult *BlockResult;	/* SOAP 1.2 RPC return element (when namespace qualified) */	/* optional element of type ns4:BlockResult */
};
#endif

#ifndef SOAP_TYPE__ns1__BlockLockAccount
#define SOAP_TYPE__ns1__BlockLockAccount (30)
/* ns1:BlockLockAccount */
struct _ns1__BlockLockAccount
{
	char *username;	/* optional element of type xsd:string */
	char *reason;	/* optional element of type xsd:string */
};
#endif

#ifndef SOAP_TYPE__ns1__BlockLockAccountResponse
#define SOAP_TYPE__ns1__BlockLockAccountResponse (31)
/* ns1:BlockLockAccountResponse */
struct _ns1__BlockLockAccountResponse
{
	struct ns4__BlockResult *BlockLockAccountResult;	/* SOAP 1.2 RPC return element (when namespace qualified) */	/* optional element of type ns4:BlockResult */
};
#endif

#ifndef SOAP_TYPE__ns1__BlockWithExpiration
#define SOAP_TYPE__ns1__BlockWithExpiration (32)
/* ns1:BlockWithExpiration */
struct _ns1__BlockWithExpiration
{
	char *username;	/* optional element of type xsd:string */
	char *reason;	/* optional element of type xsd:string */
	time_t *expirationblock;	/* optional element of type xsd:dateTime */
};
#endif

#ifndef SOAP_TYPE__ns1__BlockWithExpirationResponse
#define SOAP_TYPE__ns1__BlockWithExpirationResponse (35)
/* ns1:BlockWithExpirationResponse */
struct _ns1__BlockWithExpirationResponse
{
	struct ns4__BlockResult *BlockWithExpirationResult;	/* SOAP 1.2 RPC return element (when namespace qualified) */	/* optional element of type ns4:BlockResult */
};
#endif

#ifndef SOAP_TYPE__ns1__Unblock
#define SOAP_TYPE__ns1__Unblock (36)
/* ns1:Unblock */
struct _ns1__Unblock
{
	char *username;	/* optional element of type xsd:string */
	char *reason;	/* optional element of type xsd:string */
};
#endif

#ifndef SOAP_TYPE__ns1__UnblockResponse
#define SOAP_TYPE__ns1__UnblockResponse (37)
/* ns1:UnblockResponse */
struct _ns1__UnblockResponse
{
	struct ns4__BlockResult *UnblockResult;	/* SOAP 1.2 RPC return element (when namespace qualified) */	/* optional element of type ns4:BlockResult */
};
#endif

#ifndef SOAP_TYPE__ns1__UnblockLockAccount
#define SOAP_TYPE__ns1__UnblockLockAccount (38)
/* ns1:UnblockLockAccount */
struct _ns1__UnblockLockAccount
{
	char *username;	/* optional element of type xsd:string */
	char *reason;	/* optional element of type xsd:string */
};
#endif

#ifndef SOAP_TYPE__ns1__UnblockLockAccountResponse
#define SOAP_TYPE__ns1__UnblockLockAccountResponse (39)
/* ns1:UnblockLockAccountResponse */
struct _ns1__UnblockLockAccountResponse
{
	struct ns4__BlockResult *UnblockLockAccountResult;	/* SOAP 1.2 RPC return element (when namespace qualified) */	/* optional element of type ns4:BlockResult */
};
#endif

#ifndef SOAP_TYPE__ns1__GetSalt
#define SOAP_TYPE__ns1__GetSalt (40)
/* ns1:GetSalt */
struct _ns1__GetSalt
{
	char *username;	/* optional element of type xsd:string */
};
#endif

#ifndef SOAP_TYPE__ns1__GetSaltResponse
#define SOAP_TYPE__ns1__GetSaltResponse (41)
/* ns1:GetSaltResponse */
struct _ns1__GetSaltResponse
{
	struct ns4__SaltResult *GetSaltResult;	/* SOAP 1.2 RPC return element (when namespace qualified) */	/* optional element of type ns4:SaltResult */
};
#endif

#ifndef SOAP_TYPE__ns1__IsBlocked
#define SOAP_TYPE__ns1__IsBlocked (44)
/* ns1:IsBlocked */
struct _ns1__IsBlocked
{
	char *username;	/* optional element of type xsd:string */
};
#endif

#ifndef SOAP_TYPE__ns1__IsBlockedResponse
#define SOAP_TYPE__ns1__IsBlockedResponse (45)
/* ns1:IsBlockedResponse */
struct _ns1__IsBlockedResponse
{
	struct ns4__AccountResult *IsBlockedResult;	/* SOAP 1.2 RPC return element (when namespace qualified) */	/* optional element of type ns4:AccountResult */
};
#endif

#ifndef SOAP_TYPE_ns4__Result
#define SOAP_TYPE_ns4__Result (48)
/* ns4:Result */
struct ns4__Result
{
	int *ErrorCode;	/* optional element of type xsd:int */
	char *Message;	/* optional element of type xsd:string */
	enum xsd__boolean *Succeeded;	/* optional element of type xsd:boolean */
};
#endif

#ifndef SOAP_TYPE_ns4__AuthenticationResult
#define SOAP_TYPE_ns4__AuthenticationResult (24)
/* ns4:AuthenticationResult */
struct ns4__AuthenticationResult
{
	int *ErrorCode;	/* optional element of type xsd:int */
	char *Message;	/* optional element of type xsd:string */
	enum xsd__boolean *Succeeded;	/* optional element of type xsd:boolean */
	enum xsd__boolean *IsGMAccount;	/* optional element of type xsd:boolean */
	enum xsd__boolean *IsMessageUrl;	/* optional element of type xsd:boolean */
	char *Message_;	/* optional element of type xsd:string */
	char *UniqueAuthenticationKey;	/* optional element of type ns3:guid */
	int *UniqueUserKey;	/* optional element of type xsd:int */
};
#endif

#ifndef SOAP_TYPE_ns4__BlockResult
#define SOAP_TYPE_ns4__BlockResult (28)
/* ns4:BlockResult */
struct ns4__BlockResult
{
	int *ErrorCode;	/* optional element of type xsd:int */
	char *Message;	/* optional element of type xsd:string */
	enum xsd__boolean *Succeeded;	/* optional element of type xsd:boolean */
};
#endif

#ifndef SOAP_TYPE_ns4__SaltResult
#define SOAP_TYPE_ns4__SaltResult (42)
/* ns4:SaltResult */
struct ns4__SaltResult
{
	int *ErrorCode;	/* optional element of type xsd:int */
	char *Message;	/* optional element of type xsd:string */
	enum xsd__boolean *Succeeded;	/* optional element of type xsd:boolean */
	char *Message_;	/* optional element of type xsd:string */
	char *Salt;	/* optional element of type xsd:string */
};
#endif

#ifndef SOAP_TYPE_ns4__AccountResult
#define SOAP_TYPE_ns4__AccountResult (46)
/* ns4:AccountResult */
struct ns4__AccountResult
{
	int *ErrorCode;	/* optional element of type xsd:int */
	char *Message;	/* optional element of type xsd:string */
	enum xsd__boolean *Succeeded;	/* optional element of type xsd:boolean */
	enum xsd__boolean *Blocked;	/* optional element of type xsd:boolean */
	time_t *ExpirationBlock;	/* optional element of type xsd:dateTime */
	time_t *FirstAuthenticated;	/* optional element of type xsd:dateTime */
	char *IP;	/* optional element of type xsd:string */
	enum xsd__boolean *IsGMAccount;	/* optional element of type xsd:boolean */
	char *Username;	/* optional element of type xsd:string */
};
#endif

#ifndef SOAP_TYPE___ns1__Authenticate
#define SOAP_TYPE___ns1__Authenticate (54)
/* Operation wrapper: */
struct __ns1__Authenticate
{
	struct _ns1__Authenticate *ns1__Authenticate;	/* optional element of type ns1:Authenticate */
};
#endif

#ifndef SOAP_TYPE___ns1__Block
#define SOAP_TYPE___ns1__Block (58)
/* Operation wrapper: */
struct __ns1__Block
{
	struct _ns1__Block *ns1__Block;	/* optional element of type ns1:Block */
};
#endif

#ifndef SOAP_TYPE___ns1__BlockLockAccount
#define SOAP_TYPE___ns1__BlockLockAccount (62)
/* Operation wrapper: */
struct __ns1__BlockLockAccount
{
	struct _ns1__BlockLockAccount *ns1__BlockLockAccount;	/* optional element of type ns1:BlockLockAccount */
};
#endif

#ifndef SOAP_TYPE___ns1__BlockWithExpiration
#define SOAP_TYPE___ns1__BlockWithExpiration (66)
/* Operation wrapper: */
struct __ns1__BlockWithExpiration
{
	struct _ns1__BlockWithExpiration *ns1__BlockWithExpiration;	/* optional element of type ns1:BlockWithExpiration */
};
#endif

#ifndef SOAP_TYPE___ns1__Unblock
#define SOAP_TYPE___ns1__Unblock (70)
/* Operation wrapper: */
struct __ns1__Unblock
{
	struct _ns1__Unblock *ns1__Unblock;	/* optional element of type ns1:Unblock */
};
#endif

#ifndef SOAP_TYPE___ns1__UnblockLockAccount
#define SOAP_TYPE___ns1__UnblockLockAccount (74)
/* Operation wrapper: */
struct __ns1__UnblockLockAccount
{
	struct _ns1__UnblockLockAccount *ns1__UnblockLockAccount;	/* optional element of type ns1:UnblockLockAccount */
};
#endif

#ifndef SOAP_TYPE___ns1__GetSalt
#define SOAP_TYPE___ns1__GetSalt (78)
/* Operation wrapper: */
struct __ns1__GetSalt
{
	struct _ns1__GetSalt *ns1__GetSalt;	/* optional element of type ns1:GetSalt */
};
#endif

#ifndef SOAP_TYPE___ns1__IsBlocked
#define SOAP_TYPE___ns1__IsBlocked (82)
/* Operation wrapper: */
struct __ns1__IsBlocked
{
	struct _ns1__IsBlocked *ns1__IsBlocked;	/* optional element of type ns1:IsBlocked */
};
#endif

#ifndef SOAP_TYPE_SOAP_ENV__Header
#define SOAP_TYPE_SOAP_ENV__Header (83)
/* SOAP Header: */
struct SOAP_ENV__Header
{
#ifdef WITH_NOEMPTYSTRUCT
	char dummy;	/* dummy member to enable compilation */
#endif
};
#endif

#ifndef SOAP_TYPE_SOAP_ENV__Code
#define SOAP_TYPE_SOAP_ENV__Code (84)
/* SOAP Fault Code: */
struct SOAP_ENV__Code
{
	char *SOAP_ENV__Value;	/* optional element of type xsd:QName */
	struct SOAP_ENV__Code *SOAP_ENV__Subcode;	/* optional element of type SOAP-ENV:Code */
};
#endif

#ifndef SOAP_TYPE_SOAP_ENV__Detail
#define SOAP_TYPE_SOAP_ENV__Detail (86)
/* SOAP-ENV:Detail */
struct SOAP_ENV__Detail
{
	int __type;	/* any type of element <fault> (defined below) */
	void *fault;	/* transient */
	char *__any;
};
#endif

#ifndef SOAP_TYPE_SOAP_ENV__Reason
#define SOAP_TYPE_SOAP_ENV__Reason (89)
/* SOAP-ENV:Reason */
struct SOAP_ENV__Reason
{
	char *SOAP_ENV__Text;	/* optional element of type xsd:string */
};
#endif

#ifndef SOAP_TYPE_SOAP_ENV__Fault
#define SOAP_TYPE_SOAP_ENV__Fault (90)
/* SOAP Fault: */
struct SOAP_ENV__Fault
{
	char *faultcode;	/* optional element of type xsd:QName */
	char *faultstring;	/* optional element of type xsd:string */
	char *faultactor;	/* optional element of type xsd:string */
	struct SOAP_ENV__Detail *detail;	/* optional element of type SOAP-ENV:Detail */
	struct SOAP_ENV__Code *SOAP_ENV__Code;	/* optional element of type SOAP-ENV:Code */
	struct SOAP_ENV__Reason *SOAP_ENV__Reason;	/* optional element of type SOAP-ENV:Reason */
	char *SOAP_ENV__Node;	/* optional element of type xsd:string */
	char *SOAP_ENV__Role;	/* optional element of type xsd:string */
	struct SOAP_ENV__Detail *SOAP_ENV__Detail;	/* optional element of type SOAP-ENV:Detail */
};
#endif

/******************************************************************************\
 *                                                                            *
 * Typedefs                                                                   *
 *                                                                            *
\******************************************************************************/

#ifndef SOAP_TYPE__QName
#define SOAP_TYPE__QName (5)
typedef char *_QName;
#endif

#ifndef SOAP_TYPE__XML
#define SOAP_TYPE__XML (6)
typedef char *_XML;
#endif

#ifndef SOAP_TYPE_xsd__ID
#define SOAP_TYPE_xsd__ID (7)
typedef char *xsd__ID;
#endif

#ifndef SOAP_TYPE_xsd__IDREF
#define SOAP_TYPE_xsd__IDREF (8)
typedef char *xsd__IDREF;
#endif

#ifndef SOAP_TYPE_xsd__anyURI
#define SOAP_TYPE_xsd__anyURI (9)
typedef char *xsd__anyURI;
#endif

#ifndef SOAP_TYPE_xsd__byte
#define SOAP_TYPE_xsd__byte (15)
typedef char xsd__byte;
#endif

#ifndef SOAP_TYPE_xsd__decimal
#define SOAP_TYPE_xsd__decimal (16)
typedef char *xsd__decimal;
#endif

#ifndef SOAP_TYPE_xsd__duration
#define SOAP_TYPE_xsd__duration (17)
typedef char *xsd__duration;
#endif

#ifndef SOAP_TYPE_xsd__unsignedByte
#define SOAP_TYPE_xsd__unsignedByte (18)
typedef unsigned char xsd__unsignedByte;
#endif

#ifndef SOAP_TYPE_ns3__char
#define SOAP_TYPE_ns3__char (19)
typedef int ns3__char;
#endif

#ifndef SOAP_TYPE_ns3__duration
#define SOAP_TYPE_ns3__duration (20)
typedef char *ns3__duration;
#endif

#ifndef SOAP_TYPE_ns3__guid
#define SOAP_TYPE_ns3__guid (21)
typedef char *ns3__guid;
#endif


/******************************************************************************\
 *                                                                            *
 * Externals                                                                  *
 *                                                                            *
\******************************************************************************/


/******************************************************************************\
 *                                                                            *
 * Client-Side Call Stubs                                                     *
 *                                                                            *
\******************************************************************************/


SOAP_FMAC5 int SOAP_FMAC6 soap_call___ns1__Authenticate(struct soap *soap, const char *soap_endpoint, const char *soap_action, struct _ns1__Authenticate *ns1__Authenticate, struct _ns1__AuthenticateResponse *ns1__AuthenticateResponse);

SOAP_FMAC5 int SOAP_FMAC6 soap_call___ns1__Block(struct soap *soap, const char *soap_endpoint, const char *soap_action, struct _ns1__Block *ns1__Block, struct _ns1__BlockResponse *ns1__BlockResponse);

SOAP_FMAC5 int SOAP_FMAC6 soap_call___ns1__BlockLockAccount(struct soap *soap, const char *soap_endpoint, const char *soap_action, struct _ns1__BlockLockAccount *ns1__BlockLockAccount, struct _ns1__BlockLockAccountResponse *ns1__BlockLockAccountResponse);

SOAP_FMAC5 int SOAP_FMAC6 soap_call___ns1__BlockWithExpiration(struct soap *soap, const char *soap_endpoint, const char *soap_action, struct _ns1__BlockWithExpiration *ns1__BlockWithExpiration, struct _ns1__BlockWithExpirationResponse *ns1__BlockWithExpirationResponse);

SOAP_FMAC5 int SOAP_FMAC6 soap_call___ns1__Unblock(struct soap *soap, const char *soap_endpoint, const char *soap_action, struct _ns1__Unblock *ns1__Unblock, struct _ns1__UnblockResponse *ns1__UnblockResponse);

SOAP_FMAC5 int SOAP_FMAC6 soap_call___ns1__UnblockLockAccount(struct soap *soap, const char *soap_endpoint, const char *soap_action, struct _ns1__UnblockLockAccount *ns1__UnblockLockAccount, struct _ns1__UnblockLockAccountResponse *ns1__UnblockLockAccountResponse);

SOAP_FMAC5 int SOAP_FMAC6 soap_call___ns1__GetSalt(struct soap *soap, const char *soap_endpoint, const char *soap_action, struct _ns1__GetSalt *ns1__GetSalt, struct _ns1__GetSaltResponse *ns1__GetSaltResponse);

SOAP_FMAC5 int SOAP_FMAC6 soap_call___ns1__IsBlocked(struct soap *soap, const char *soap_endpoint, const char *soap_action, struct _ns1__IsBlocked *ns1__IsBlocked, struct _ns1__IsBlockedResponse *ns1__IsBlockedResponse);

#ifdef __cplusplus
}
#endif

#endif

/* End of soapStub.h */