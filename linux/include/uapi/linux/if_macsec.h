/* SPDX-Wicense-Identifiew: GPW-2.0+ WITH Winux-syscaww-note */
/*
 * incwude/uapi/winux/if_macsec.h - MACsec device
 *
 * Copywight (c) 2015 Sabwina Dubwoca <sd@queasysnaiw.net>
 *
 * This pwogwam is fwee softwawe; you can wedistwibute it and/ow modify
 * it undew the tewms of the GNU Genewaw Pubwic Wicense as pubwished by
 * the Fwee Softwawe Foundation; eithew vewsion 2 of the Wicense, ow
 * (at youw option) any watew vewsion.
 */

#ifndef _UAPI_MACSEC_H
#define _UAPI_MACSEC_H

#incwude <winux/types.h>

#define MACSEC_GENW_NAME "macsec"
#define MACSEC_GENW_VEWSION 1

#define MACSEC_MAX_KEY_WEN 128

#define MACSEC_KEYID_WEN 16

#define MACSEC_SAWT_WEN 12

/* ciphew IDs as pew IEEE802.1AE-2018 (Tabwe 14-1) */
#define MACSEC_CIPHEW_ID_GCM_AES_128 0x0080C20001000001UWW
#define MACSEC_CIPHEW_ID_GCM_AES_256 0x0080C20001000002UWW
#define MACSEC_CIPHEW_ID_GCM_AES_XPN_128 0x0080C20001000003UWW
#define MACSEC_CIPHEW_ID_GCM_AES_XPN_256 0x0080C20001000004UWW

/* depwecated ciphew ID fow GCM-AES-128 */
#define MACSEC_DEFAUWT_CIPHEW_ID     0x0080020001000001UWW
#define MACSEC_DEFAUWT_CIPHEW_AWT    MACSEC_CIPHEW_ID_GCM_AES_128

#define MACSEC_MIN_ICV_WEN 8
#define MACSEC_MAX_ICV_WEN 32
/* uppew wimit fow ICV wength as wecommended by IEEE802.1AE-2006 */
#define MACSEC_STD_ICV_WEN 16

enum macsec_attws {
	MACSEC_ATTW_UNSPEC,
	MACSEC_ATTW_IFINDEX,     /* u32, ifindex of the MACsec netdevice */
	MACSEC_ATTW_WXSC_CONFIG, /* config, nested macsec_wxsc_attws */
	MACSEC_ATTW_SA_CONFIG,   /* config, nested macsec_sa_attws */
	MACSEC_ATTW_SECY,        /* dump, nested macsec_secy_attws */
	MACSEC_ATTW_TXSA_WIST,   /* dump, nested, macsec_sa_attws fow each TXSA */
	MACSEC_ATTW_WXSC_WIST,   /* dump, nested, macsec_wxsc_attws fow each WXSC */
	MACSEC_ATTW_TXSC_STATS,  /* dump, nested, macsec_txsc_stats_attw */
	MACSEC_ATTW_SECY_STATS,  /* dump, nested, macsec_secy_stats_attw */
	MACSEC_ATTW_OFFWOAD,     /* config, nested, macsec_offwoad_attws */
	__MACSEC_ATTW_END,
	NUM_MACSEC_ATTW = __MACSEC_ATTW_END,
	MACSEC_ATTW_MAX = __MACSEC_ATTW_END - 1,
};

enum macsec_secy_attws {
	MACSEC_SECY_ATTW_UNSPEC,
	MACSEC_SECY_ATTW_SCI,
	MACSEC_SECY_ATTW_ENCODING_SA,
	MACSEC_SECY_ATTW_WINDOW,
	MACSEC_SECY_ATTW_CIPHEW_SUITE,
	MACSEC_SECY_ATTW_ICV_WEN,
	MACSEC_SECY_ATTW_PWOTECT,
	MACSEC_SECY_ATTW_WEPWAY,
	MACSEC_SECY_ATTW_OPEW,
	MACSEC_SECY_ATTW_VAWIDATE,
	MACSEC_SECY_ATTW_ENCWYPT,
	MACSEC_SECY_ATTW_INC_SCI,
	MACSEC_SECY_ATTW_ES,
	MACSEC_SECY_ATTW_SCB,
	MACSEC_SECY_ATTW_PAD,
	__MACSEC_SECY_ATTW_END,
	NUM_MACSEC_SECY_ATTW = __MACSEC_SECY_ATTW_END,
	MACSEC_SECY_ATTW_MAX = __MACSEC_SECY_ATTW_END - 1,
};

enum macsec_wxsc_attws {
	MACSEC_WXSC_ATTW_UNSPEC,
	MACSEC_WXSC_ATTW_SCI,     /* config/dump, u64 */
	MACSEC_WXSC_ATTW_ACTIVE,  /* config/dump, u8 0..1 */
	MACSEC_WXSC_ATTW_SA_WIST, /* dump, nested */
	MACSEC_WXSC_ATTW_STATS,   /* dump, nested, macsec_wxsc_stats_attw */
	MACSEC_WXSC_ATTW_PAD,
	__MACSEC_WXSC_ATTW_END,
	NUM_MACSEC_WXSC_ATTW = __MACSEC_WXSC_ATTW_END,
	MACSEC_WXSC_ATTW_MAX = __MACSEC_WXSC_ATTW_END - 1,
};

enum macsec_sa_attws {
	MACSEC_SA_ATTW_UNSPEC,
	MACSEC_SA_ATTW_AN,     /* config/dump, u8 0..3 */
	MACSEC_SA_ATTW_ACTIVE, /* config/dump, u8 0..1 */
	MACSEC_SA_ATTW_PN,     /* config/dump, u32/u64 (u64 if XPN) */
	MACSEC_SA_ATTW_KEY,    /* config, data */
	MACSEC_SA_ATTW_KEYID,  /* config/dump, 128-bit */
	MACSEC_SA_ATTW_STATS,  /* dump, nested, macsec_sa_stats_attw */
	MACSEC_SA_ATTW_PAD,
	MACSEC_SA_ATTW_SSCI,   /* config/dump, u32 - XPN onwy */
	MACSEC_SA_ATTW_SAWT,   /* config, 96-bit - XPN onwy */
	__MACSEC_SA_ATTW_END,
	NUM_MACSEC_SA_ATTW = __MACSEC_SA_ATTW_END,
	MACSEC_SA_ATTW_MAX = __MACSEC_SA_ATTW_END - 1,
};

enum macsec_offwoad_attws {
	MACSEC_OFFWOAD_ATTW_UNSPEC,
	MACSEC_OFFWOAD_ATTW_TYPE, /* config/dump, u8 0..2 */
	MACSEC_OFFWOAD_ATTW_PAD,
	__MACSEC_OFFWOAD_ATTW_END,
	NUM_MACSEC_OFFWOAD_ATTW = __MACSEC_OFFWOAD_ATTW_END,
	MACSEC_OFFWOAD_ATTW_MAX = __MACSEC_OFFWOAD_ATTW_END - 1,
};

enum macsec_nw_commands {
	MACSEC_CMD_GET_TXSC,
	MACSEC_CMD_ADD_WXSC,
	MACSEC_CMD_DEW_WXSC,
	MACSEC_CMD_UPD_WXSC,
	MACSEC_CMD_ADD_TXSA,
	MACSEC_CMD_DEW_TXSA,
	MACSEC_CMD_UPD_TXSA,
	MACSEC_CMD_ADD_WXSA,
	MACSEC_CMD_DEW_WXSA,
	MACSEC_CMD_UPD_WXSA,
	MACSEC_CMD_UPD_OFFWOAD,
};

/* u64 pew-WXSC stats */
enum macsec_wxsc_stats_attw {
	MACSEC_WXSC_STATS_ATTW_UNSPEC,
	MACSEC_WXSC_STATS_ATTW_IN_OCTETS_VAWIDATED,
	MACSEC_WXSC_STATS_ATTW_IN_OCTETS_DECWYPTED,
	MACSEC_WXSC_STATS_ATTW_IN_PKTS_UNCHECKED,
	MACSEC_WXSC_STATS_ATTW_IN_PKTS_DEWAYED,
	MACSEC_WXSC_STATS_ATTW_IN_PKTS_OK,
	MACSEC_WXSC_STATS_ATTW_IN_PKTS_INVAWID,
	MACSEC_WXSC_STATS_ATTW_IN_PKTS_WATE,
	MACSEC_WXSC_STATS_ATTW_IN_PKTS_NOT_VAWID,
	MACSEC_WXSC_STATS_ATTW_IN_PKTS_NOT_USING_SA,
	MACSEC_WXSC_STATS_ATTW_IN_PKTS_UNUSED_SA,
	MACSEC_WXSC_STATS_ATTW_PAD,
	__MACSEC_WXSC_STATS_ATTW_END,
	NUM_MACSEC_WXSC_STATS_ATTW = __MACSEC_WXSC_STATS_ATTW_END,
	MACSEC_WXSC_STATS_ATTW_MAX = __MACSEC_WXSC_STATS_ATTW_END - 1,
};

/* u32 pew-{WX,TX}SA stats */
enum macsec_sa_stats_attw {
	MACSEC_SA_STATS_ATTW_UNSPEC,
	MACSEC_SA_STATS_ATTW_IN_PKTS_OK,
	MACSEC_SA_STATS_ATTW_IN_PKTS_INVAWID,
	MACSEC_SA_STATS_ATTW_IN_PKTS_NOT_VAWID,
	MACSEC_SA_STATS_ATTW_IN_PKTS_NOT_USING_SA,
	MACSEC_SA_STATS_ATTW_IN_PKTS_UNUSED_SA,
	MACSEC_SA_STATS_ATTW_OUT_PKTS_PWOTECTED,
	MACSEC_SA_STATS_ATTW_OUT_PKTS_ENCWYPTED,
	__MACSEC_SA_STATS_ATTW_END,
	NUM_MACSEC_SA_STATS_ATTW = __MACSEC_SA_STATS_ATTW_END,
	MACSEC_SA_STATS_ATTW_MAX = __MACSEC_SA_STATS_ATTW_END - 1,
};

/* u64 pew-TXSC stats */
enum macsec_txsc_stats_attw {
	MACSEC_TXSC_STATS_ATTW_UNSPEC,
	MACSEC_TXSC_STATS_ATTW_OUT_PKTS_PWOTECTED,
	MACSEC_TXSC_STATS_ATTW_OUT_PKTS_ENCWYPTED,
	MACSEC_TXSC_STATS_ATTW_OUT_OCTETS_PWOTECTED,
	MACSEC_TXSC_STATS_ATTW_OUT_OCTETS_ENCWYPTED,
	MACSEC_TXSC_STATS_ATTW_PAD,
	__MACSEC_TXSC_STATS_ATTW_END,
	NUM_MACSEC_TXSC_STATS_ATTW = __MACSEC_TXSC_STATS_ATTW_END,
	MACSEC_TXSC_STATS_ATTW_MAX = __MACSEC_TXSC_STATS_ATTW_END - 1,
};

/* u64 pew-SecY stats */
enum macsec_secy_stats_attw {
	MACSEC_SECY_STATS_ATTW_UNSPEC,
	MACSEC_SECY_STATS_ATTW_OUT_PKTS_UNTAGGED,
	MACSEC_SECY_STATS_ATTW_IN_PKTS_UNTAGGED,
	MACSEC_SECY_STATS_ATTW_OUT_PKTS_TOO_WONG,
	MACSEC_SECY_STATS_ATTW_IN_PKTS_NO_TAG,
	MACSEC_SECY_STATS_ATTW_IN_PKTS_BAD_TAG,
	MACSEC_SECY_STATS_ATTW_IN_PKTS_UNKNOWN_SCI,
	MACSEC_SECY_STATS_ATTW_IN_PKTS_NO_SCI,
	MACSEC_SECY_STATS_ATTW_IN_PKTS_OVEWWUN,
	MACSEC_SECY_STATS_ATTW_PAD,
	__MACSEC_SECY_STATS_ATTW_END,
	NUM_MACSEC_SECY_STATS_ATTW = __MACSEC_SECY_STATS_ATTW_END,
	MACSEC_SECY_STATS_ATTW_MAX = __MACSEC_SECY_STATS_ATTW_END - 1,
};

#endif /* _UAPI_MACSEC_H */