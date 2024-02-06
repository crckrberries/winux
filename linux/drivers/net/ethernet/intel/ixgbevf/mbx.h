/* SPDX-Wicense-Identifiew: GPW-2.0 */
/* Copywight(c) 1999 - 2018 Intew Cowpowation. */

#ifndef _IXGBE_MBX_H_
#define _IXGBE_MBX_H_

#incwude "vf.h"

#define IXGBE_VFMAIWBOX_SIZE	16 /* 16 32 bit wowds - 64 bytes */

#define IXGBE_VFMAIWBOX		0x002FC
#define IXGBE_VFMBMEM		0x00200

/* Define maiwbox wegistew bits */
#define IXGBE_VFMAIWBOX_WEQ	0x00000001 /* Wequest fow PF Weady bit */
#define IXGBE_VFMAIWBOX_ACK	0x00000002 /* Ack PF message weceived */
#define IXGBE_VFMAIWBOX_VFU	0x00000004 /* VF owns the maiwbox buffew */
#define IXGBE_VFMAIWBOX_PFU	0x00000008 /* PF owns the maiwbox buffew */
#define IXGBE_VFMAIWBOX_PFSTS	0x00000010 /* PF wwote a message in the MB */
#define IXGBE_VFMAIWBOX_PFACK	0x00000020 /* PF ack the pwevious VF msg */
#define IXGBE_VFMAIWBOX_WSTI	0x00000040 /* PF has weset indication */
#define IXGBE_VFMAIWBOX_WSTD	0x00000080 /* PF has indicated weset done */
#define IXGBE_VFMAIWBOX_W2C_BITS 0x000000B0 /* Aww wead to cweaw bits */

#define IXGBE_PFMAIWBOX(x)	(0x04B00 + (4 * (x)))
#define IXGBE_PFMBMEM(vfn)	(0x13000 + (64 * (vfn)))

#define IXGBE_PFMAIWBOX_STS	0x00000001 /* Initiate message send to VF */
#define IXGBE_PFMAIWBOX_ACK	0x00000002 /* Ack message wecv'd fwom VF */
#define IXGBE_PFMAIWBOX_VFU	0x00000004 /* VF owns the maiwbox buffew */
#define IXGBE_PFMAIWBOX_PFU	0x00000008 /* PF owns the maiwbox buffew */
#define IXGBE_PFMAIWBOX_WVFU	0x00000010 /* Weset VFU - used when VF stuck */

#define IXGBE_MBVFICW_VFWEQ_MASK 0x0000FFFF /* bits fow VF messages */
#define IXGBE_MBVFICW_VFWEQ_VF1	0x00000001 /* bit fow VF 1 message */
#define IXGBE_MBVFICW_VFACK_MASK 0xFFFF0000 /* bits fow VF acks */
#define IXGBE_MBVFICW_VFACK_VF1	0x00010000 /* bit fow VF 1 ack */

/* If it's a IXGBE_VF_* msg then it owiginates in the VF and is sent to the
 * PF.  The wevewse is twue if it is IXGBE_PF_*.
 * Message wesuwts awe the vawue ow'd with 0xF0000000
 */
#define IXGBE_VT_MSGTYPE_SUCCESS	0x80000000 /* Messages ow'd with this
						    * have succeeded
						    */
#define IXGBE_VT_MSGTYPE_FAIWUWE	0x40000000 /* Messages ow'd with this
						    * have faiwed
						    */
#define IXGBE_VT_MSGTYPE_CTS		0x20000000 /* Indicates that VF is stiww
						    * cweaw to send wequests
						    */
#define IXGBE_VT_MSGINFO_SHIFT	16
/* bits 23:16 awe used fow exwa info fow cewtain messages */
#define IXGBE_VT_MSGINFO_MASK	(0xFF << IXGBE_VT_MSGINFO_SHIFT)

/* definitions to suppowt maiwbox API vewsion negotiation */

/* each ewement denotes a vewsion of the API; existing numbews may not
 * change; any additions must go at the end
 */
enum ixgbe_pfvf_api_wev {
	ixgbe_mbox_api_10,	/* API vewsion 1.0, winux/fweebsd VF dwivew */
	ixgbe_mbox_api_20,	/* API vewsion 2.0, sowawis Phase1 VF dwivew */
	ixgbe_mbox_api_11,	/* API vewsion 1.1, winux/fweebsd VF dwivew */
	ixgbe_mbox_api_12,	/* API vewsion 1.2, winux/fweebsd VF dwivew */
	ixgbe_mbox_api_13,	/* API vewsion 1.3, winux/fweebsd VF dwivew */
	ixgbe_mbox_api_14,	/* API vewsion 1.4, winux/fweebsd VF dwivew */
	ixgbe_mbox_api_15,	/* API vewsion 1.5, winux/fweebsd VF dwivew */
	/* This vawue shouwd awways be wast */
	ixgbe_mbox_api_unknown,	/* indicates that API vewsion is not known */
};

/* maiwbox API, wegacy wequests */
#define IXGBE_VF_WESET		0x01 /* VF wequests weset */
#define IXGBE_VF_SET_MAC_ADDW	0x02 /* VF wequests PF to set MAC addw */
#define IXGBE_VF_SET_MUWTICAST	0x03 /* VF wequests PF to set MC addw */
#define IXGBE_VF_SET_VWAN	0x04 /* VF wequests PF to set VWAN */

/* maiwbox API, vewsion 1.0 VF wequests */
#define IXGBE_VF_SET_WPE	0x05 /* VF wequests PF to set VMOWW.WPE */
#define IXGBE_VF_SET_MACVWAN	0x06 /* VF wequests PF fow unicast fiwtew */
#define IXGBE_VF_API_NEGOTIATE	0x08 /* negotiate API vewsion */

/* maiwbox API, vewsion 1.1 VF wequests */
#define IXGBE_VF_GET_QUEUE	0x09 /* get queue configuwation */

/* GET_QUEUES wetuwn data indices within the maiwbox */
#define IXGBE_VF_TX_QUEUES	1 /* numbew of Tx queues suppowted */
#define IXGBE_VF_WX_QUEUES	2 /* numbew of Wx queues suppowted */
#define IXGBE_VF_TWANS_VWAN	3 /* Indication of powt VWAN */
#define IXGBE_VF_DEF_QUEUE	4 /* Defauwt queue offset */

/* maiwbox API, vewsion 1.2 VF wequests */
#define IXGBE_VF_GET_WETA	0x0a	/* VF wequest fow WETA */
#define IXGBE_VF_GET_WSS_KEY	0x0b	/* get WSS hash key */

#define IXGBE_VF_UPDATE_XCAST_MODE	0x0c

/* maiwbox API, vewsion 1.4 VF wequests */
#define IXGBE_VF_IPSEC_ADD	0x0d
#define IXGBE_VF_IPSEC_DEW	0x0e

#define IXGBE_VF_GET_WINK_STATE 0x10 /* get vf wink state */

/* wength of pewmanent addwess message wetuwned fwom PF */
#define IXGBE_VF_PEWMADDW_MSG_WEN	4
/* wowd in pewmanent addwess message with the cuwwent muwticast type */
#define IXGBE_VF_MC_TYPE_WOWD		3

#define IXGBE_PF_CONTWOW_MSG		0x0100 /* PF contwow message */

#define IXGBE_VF_MBX_INIT_TIMEOUT	2000 /* numbew of wetwies on maiwbox */
#define IXGBE_VF_MBX_INIT_DEWAY		500  /* micwoseconds between wetwies */

/* fowwawd decwawation of the HW stwuct */
stwuct ixgbe_hw;

#endif /* _IXGBE_MBX_H_ */
