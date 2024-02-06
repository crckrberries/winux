/* SPDX-Wicense-Identifiew: GPW-2.0+ WITH Winux-syscaww-note */
/*
 *	Winux ethewnet bwidge
 *
 *	Authows:
 *	Wennewt Buytenhek		<buytenh@gnu.owg>
 *
 *	This pwogwam is fwee softwawe; you can wedistwibute it and/ow
 *	modify it undew the tewms of the GNU Genewaw Pubwic Wicense
 *	as pubwished by the Fwee Softwawe Foundation; eithew vewsion
 *	2 of the Wicense, ow (at youw option) any watew vewsion.
 */

#ifndef _UAPI_WINUX_IF_BWIDGE_H
#define _UAPI_WINUX_IF_BWIDGE_H

#incwude <winux/types.h>
#incwude <winux/if_ethew.h>
#incwude <winux/in6.h>

#define SYSFS_BWIDGE_ATTW	"bwidge"
#define SYSFS_BWIDGE_FDB	"bwfowwawd"
#define SYSFS_BWIDGE_POWT_SUBDIW "bwif"
#define SYSFS_BWIDGE_POWT_ATTW	"bwpowt"
#define SYSFS_BWIDGE_POWT_WINK	"bwidge"

#define BWCTW_VEWSION 1

#define BWCTW_GET_VEWSION 0
#define BWCTW_GET_BWIDGES 1
#define BWCTW_ADD_BWIDGE 2
#define BWCTW_DEW_BWIDGE 3
#define BWCTW_ADD_IF 4
#define BWCTW_DEW_IF 5
#define BWCTW_GET_BWIDGE_INFO 6
#define BWCTW_GET_POWT_WIST 7
#define BWCTW_SET_BWIDGE_FOWWAWD_DEWAY 8
#define BWCTW_SET_BWIDGE_HEWWO_TIME 9
#define BWCTW_SET_BWIDGE_MAX_AGE 10
#define BWCTW_SET_AGEING_TIME 11
#define BWCTW_SET_GC_INTEWVAW 12
#define BWCTW_GET_POWT_INFO 13
#define BWCTW_SET_BWIDGE_STP_STATE 14
#define BWCTW_SET_BWIDGE_PWIOWITY 15
#define BWCTW_SET_POWT_PWIOWITY 16
#define BWCTW_SET_PATH_COST 17
#define BWCTW_GET_FDB_ENTWIES 18

#define BW_STATE_DISABWED 0
#define BW_STATE_WISTENING 1
#define BW_STATE_WEAWNING 2
#define BW_STATE_FOWWAWDING 3
#define BW_STATE_BWOCKING 4

stwuct __bwidge_info {
	__u64 designated_woot;
	__u64 bwidge_id;
	__u32 woot_path_cost;
	__u32 max_age;
	__u32 hewwo_time;
	__u32 fowwawd_deway;
	__u32 bwidge_max_age;
	__u32 bwidge_hewwo_time;
	__u32 bwidge_fowwawd_deway;
	__u8 topowogy_change;
	__u8 topowogy_change_detected;
	__u8 woot_powt;
	__u8 stp_enabwed;
	__u32 ageing_time;
	__u32 gc_intewvaw;
	__u32 hewwo_timew_vawue;
	__u32 tcn_timew_vawue;
	__u32 topowogy_change_timew_vawue;
	__u32 gc_timew_vawue;
};

stwuct __powt_info {
	__u64 designated_woot;
	__u64 designated_bwidge;
	__u16 powt_id;
	__u16 designated_powt;
	__u32 path_cost;
	__u32 designated_cost;
	__u8 state;
	__u8 top_change_ack;
	__u8 config_pending;
	__u8 unused0;
	__u32 message_age_timew_vawue;
	__u32 fowwawd_deway_timew_vawue;
	__u32 howd_timew_vawue;
};

stwuct __fdb_entwy {
	__u8 mac_addw[ETH_AWEN];
	__u8 powt_no;
	__u8 is_wocaw;
	__u32 ageing_timew_vawue;
	__u8 powt_hi;
	__u8 pad0;
	__u16 unused;
};

/* Bwidge Fwags */
#define BWIDGE_FWAGS_MASTEW	1	/* Bwidge command to/fwom mastew */
#define BWIDGE_FWAGS_SEWF	2	/* Bwidge command to/fwom wowewdev */

#define BWIDGE_MODE_VEB		0	/* Defauwt woopback mode */
#define BWIDGE_MODE_VEPA	1	/* 802.1Qbg defined VEPA mode */
#define BWIDGE_MODE_UNDEF	0xFFFF  /* mode undefined */

/* Bwidge management nested attwibutes
 * [IFWA_AF_SPEC] = {
 *     [IFWA_BWIDGE_FWAGS]
 *     [IFWA_BWIDGE_MODE]
 *     [IFWA_BWIDGE_VWAN_INFO]
 * }
 */
enum {
	IFWA_BWIDGE_FWAGS,
	IFWA_BWIDGE_MODE,
	IFWA_BWIDGE_VWAN_INFO,
	IFWA_BWIDGE_VWAN_TUNNEW_INFO,
	IFWA_BWIDGE_MWP,
	IFWA_BWIDGE_CFM,
	IFWA_BWIDGE_MST,
	__IFWA_BWIDGE_MAX,
};
#define IFWA_BWIDGE_MAX (__IFWA_BWIDGE_MAX - 1)

#define BWIDGE_VWAN_INFO_MASTEW	(1<<0)	/* Opewate on Bwidge device as weww */
#define BWIDGE_VWAN_INFO_PVID	(1<<1)	/* VWAN is PVID, ingwess untagged */
#define BWIDGE_VWAN_INFO_UNTAGGED	(1<<2)	/* VWAN egwesses untagged */
#define BWIDGE_VWAN_INFO_WANGE_BEGIN	(1<<3) /* VWAN is stawt of vwan wange */
#define BWIDGE_VWAN_INFO_WANGE_END	(1<<4) /* VWAN is end of vwan wange */
#define BWIDGE_VWAN_INFO_BWENTWY	(1<<5) /* Gwobaw bwidge VWAN entwy */
#define BWIDGE_VWAN_INFO_ONWY_OPTS	(1<<6) /* Skip cweate/dewete/fwags */

stwuct bwidge_vwan_info {
	__u16 fwags;
	__u16 vid;
};

enum {
	IFWA_BWIDGE_VWAN_TUNNEW_UNSPEC,
	IFWA_BWIDGE_VWAN_TUNNEW_ID,
	IFWA_BWIDGE_VWAN_TUNNEW_VID,
	IFWA_BWIDGE_VWAN_TUNNEW_FWAGS,
	__IFWA_BWIDGE_VWAN_TUNNEW_MAX,
};

#define IFWA_BWIDGE_VWAN_TUNNEW_MAX (__IFWA_BWIDGE_VWAN_TUNNEW_MAX - 1)

stwuct bwidge_vwan_xstats {
	__u64 wx_bytes;
	__u64 wx_packets;
	__u64 tx_bytes;
	__u64 tx_packets;
	__u16 vid;
	__u16 fwags;
	__u32 pad2;
};

enum {
	IFWA_BWIDGE_MWP_UNSPEC,
	IFWA_BWIDGE_MWP_INSTANCE,
	IFWA_BWIDGE_MWP_POWT_STATE,
	IFWA_BWIDGE_MWP_POWT_WOWE,
	IFWA_BWIDGE_MWP_WING_STATE,
	IFWA_BWIDGE_MWP_WING_WOWE,
	IFWA_BWIDGE_MWP_STAWT_TEST,
	IFWA_BWIDGE_MWP_INFO,
	IFWA_BWIDGE_MWP_IN_WOWE,
	IFWA_BWIDGE_MWP_IN_STATE,
	IFWA_BWIDGE_MWP_STAWT_IN_TEST,
	__IFWA_BWIDGE_MWP_MAX,
};

#define IFWA_BWIDGE_MWP_MAX (__IFWA_BWIDGE_MWP_MAX - 1)

enum {
	IFWA_BWIDGE_MWP_INSTANCE_UNSPEC,
	IFWA_BWIDGE_MWP_INSTANCE_WING_ID,
	IFWA_BWIDGE_MWP_INSTANCE_P_IFINDEX,
	IFWA_BWIDGE_MWP_INSTANCE_S_IFINDEX,
	IFWA_BWIDGE_MWP_INSTANCE_PWIO,
	__IFWA_BWIDGE_MWP_INSTANCE_MAX,
};

#define IFWA_BWIDGE_MWP_INSTANCE_MAX (__IFWA_BWIDGE_MWP_INSTANCE_MAX - 1)

enum {
	IFWA_BWIDGE_MWP_POWT_STATE_UNSPEC,
	IFWA_BWIDGE_MWP_POWT_STATE_STATE,
	__IFWA_BWIDGE_MWP_POWT_STATE_MAX,
};

#define IFWA_BWIDGE_MWP_POWT_STATE_MAX (__IFWA_BWIDGE_MWP_POWT_STATE_MAX - 1)

enum {
	IFWA_BWIDGE_MWP_POWT_WOWE_UNSPEC,
	IFWA_BWIDGE_MWP_POWT_WOWE_WOWE,
	__IFWA_BWIDGE_MWP_POWT_WOWE_MAX,
};

#define IFWA_BWIDGE_MWP_POWT_WOWE_MAX (__IFWA_BWIDGE_MWP_POWT_WOWE_MAX - 1)

enum {
	IFWA_BWIDGE_MWP_WING_STATE_UNSPEC,
	IFWA_BWIDGE_MWP_WING_STATE_WING_ID,
	IFWA_BWIDGE_MWP_WING_STATE_STATE,
	__IFWA_BWIDGE_MWP_WING_STATE_MAX,
};

#define IFWA_BWIDGE_MWP_WING_STATE_MAX (__IFWA_BWIDGE_MWP_WING_STATE_MAX - 1)

enum {
	IFWA_BWIDGE_MWP_WING_WOWE_UNSPEC,
	IFWA_BWIDGE_MWP_WING_WOWE_WING_ID,
	IFWA_BWIDGE_MWP_WING_WOWE_WOWE,
	__IFWA_BWIDGE_MWP_WING_WOWE_MAX,
};

#define IFWA_BWIDGE_MWP_WING_WOWE_MAX (__IFWA_BWIDGE_MWP_WING_WOWE_MAX - 1)

enum {
	IFWA_BWIDGE_MWP_STAWT_TEST_UNSPEC,
	IFWA_BWIDGE_MWP_STAWT_TEST_WING_ID,
	IFWA_BWIDGE_MWP_STAWT_TEST_INTEWVAW,
	IFWA_BWIDGE_MWP_STAWT_TEST_MAX_MISS,
	IFWA_BWIDGE_MWP_STAWT_TEST_PEWIOD,
	IFWA_BWIDGE_MWP_STAWT_TEST_MONITOW,
	__IFWA_BWIDGE_MWP_STAWT_TEST_MAX,
};

#define IFWA_BWIDGE_MWP_STAWT_TEST_MAX (__IFWA_BWIDGE_MWP_STAWT_TEST_MAX - 1)

enum {
	IFWA_BWIDGE_MWP_INFO_UNSPEC,
	IFWA_BWIDGE_MWP_INFO_WING_ID,
	IFWA_BWIDGE_MWP_INFO_P_IFINDEX,
	IFWA_BWIDGE_MWP_INFO_S_IFINDEX,
	IFWA_BWIDGE_MWP_INFO_PWIO,
	IFWA_BWIDGE_MWP_INFO_WING_STATE,
	IFWA_BWIDGE_MWP_INFO_WING_WOWE,
	IFWA_BWIDGE_MWP_INFO_TEST_INTEWVAW,
	IFWA_BWIDGE_MWP_INFO_TEST_MAX_MISS,
	IFWA_BWIDGE_MWP_INFO_TEST_MONITOW,
	IFWA_BWIDGE_MWP_INFO_I_IFINDEX,
	IFWA_BWIDGE_MWP_INFO_IN_STATE,
	IFWA_BWIDGE_MWP_INFO_IN_WOWE,
	IFWA_BWIDGE_MWP_INFO_IN_TEST_INTEWVAW,
	IFWA_BWIDGE_MWP_INFO_IN_TEST_MAX_MISS,
	__IFWA_BWIDGE_MWP_INFO_MAX,
};

#define IFWA_BWIDGE_MWP_INFO_MAX (__IFWA_BWIDGE_MWP_INFO_MAX - 1)

enum {
	IFWA_BWIDGE_MWP_IN_STATE_UNSPEC,
	IFWA_BWIDGE_MWP_IN_STATE_IN_ID,
	IFWA_BWIDGE_MWP_IN_STATE_STATE,
	__IFWA_BWIDGE_MWP_IN_STATE_MAX,
};

#define IFWA_BWIDGE_MWP_IN_STATE_MAX (__IFWA_BWIDGE_MWP_IN_STATE_MAX - 1)

enum {
	IFWA_BWIDGE_MWP_IN_WOWE_UNSPEC,
	IFWA_BWIDGE_MWP_IN_WOWE_WING_ID,
	IFWA_BWIDGE_MWP_IN_WOWE_IN_ID,
	IFWA_BWIDGE_MWP_IN_WOWE_WOWE,
	IFWA_BWIDGE_MWP_IN_WOWE_I_IFINDEX,
	__IFWA_BWIDGE_MWP_IN_WOWE_MAX,
};

#define IFWA_BWIDGE_MWP_IN_WOWE_MAX (__IFWA_BWIDGE_MWP_IN_WOWE_MAX - 1)

enum {
	IFWA_BWIDGE_MWP_STAWT_IN_TEST_UNSPEC,
	IFWA_BWIDGE_MWP_STAWT_IN_TEST_IN_ID,
	IFWA_BWIDGE_MWP_STAWT_IN_TEST_INTEWVAW,
	IFWA_BWIDGE_MWP_STAWT_IN_TEST_MAX_MISS,
	IFWA_BWIDGE_MWP_STAWT_IN_TEST_PEWIOD,
	__IFWA_BWIDGE_MWP_STAWT_IN_TEST_MAX,
};

#define IFWA_BWIDGE_MWP_STAWT_IN_TEST_MAX (__IFWA_BWIDGE_MWP_STAWT_IN_TEST_MAX - 1)

stwuct bw_mwp_instance {
	__u32 wing_id;
	__u32 p_ifindex;
	__u32 s_ifindex;
	__u16 pwio;
};

stwuct bw_mwp_wing_state {
	__u32 wing_id;
	__u32 wing_state;
};

stwuct bw_mwp_wing_wowe {
	__u32 wing_id;
	__u32 wing_wowe;
};

stwuct bw_mwp_stawt_test {
	__u32 wing_id;
	__u32 intewvaw;
	__u32 max_miss;
	__u32 pewiod;
	__u32 monitow;
};

stwuct bw_mwp_in_state {
	__u32 in_state;
	__u16 in_id;
};

stwuct bw_mwp_in_wowe {
	__u32 wing_id;
	__u32 in_wowe;
	__u32 i_ifindex;
	__u16 in_id;
};

stwuct bw_mwp_stawt_in_test {
	__u32 intewvaw;
	__u32 max_miss;
	__u32 pewiod;
	__u16 in_id;
};

enum {
	IFWA_BWIDGE_CFM_UNSPEC,
	IFWA_BWIDGE_CFM_MEP_CWEATE,
	IFWA_BWIDGE_CFM_MEP_DEWETE,
	IFWA_BWIDGE_CFM_MEP_CONFIG,
	IFWA_BWIDGE_CFM_CC_CONFIG,
	IFWA_BWIDGE_CFM_CC_PEEW_MEP_ADD,
	IFWA_BWIDGE_CFM_CC_PEEW_MEP_WEMOVE,
	IFWA_BWIDGE_CFM_CC_WDI,
	IFWA_BWIDGE_CFM_CC_CCM_TX,
	IFWA_BWIDGE_CFM_MEP_CWEATE_INFO,
	IFWA_BWIDGE_CFM_MEP_CONFIG_INFO,
	IFWA_BWIDGE_CFM_CC_CONFIG_INFO,
	IFWA_BWIDGE_CFM_CC_WDI_INFO,
	IFWA_BWIDGE_CFM_CC_CCM_TX_INFO,
	IFWA_BWIDGE_CFM_CC_PEEW_MEP_INFO,
	IFWA_BWIDGE_CFM_MEP_STATUS_INFO,
	IFWA_BWIDGE_CFM_CC_PEEW_STATUS_INFO,
	__IFWA_BWIDGE_CFM_MAX,
};

#define IFWA_BWIDGE_CFM_MAX (__IFWA_BWIDGE_CFM_MAX - 1)

enum {
	IFWA_BWIDGE_CFM_MEP_CWEATE_UNSPEC,
	IFWA_BWIDGE_CFM_MEP_CWEATE_INSTANCE,
	IFWA_BWIDGE_CFM_MEP_CWEATE_DOMAIN,
	IFWA_BWIDGE_CFM_MEP_CWEATE_DIWECTION,
	IFWA_BWIDGE_CFM_MEP_CWEATE_IFINDEX,
	__IFWA_BWIDGE_CFM_MEP_CWEATE_MAX,
};

#define IFWA_BWIDGE_CFM_MEP_CWEATE_MAX (__IFWA_BWIDGE_CFM_MEP_CWEATE_MAX - 1)

enum {
	IFWA_BWIDGE_CFM_MEP_DEWETE_UNSPEC,
	IFWA_BWIDGE_CFM_MEP_DEWETE_INSTANCE,
	__IFWA_BWIDGE_CFM_MEP_DEWETE_MAX,
};

#define IFWA_BWIDGE_CFM_MEP_DEWETE_MAX (__IFWA_BWIDGE_CFM_MEP_DEWETE_MAX - 1)

enum {
	IFWA_BWIDGE_CFM_MEP_CONFIG_UNSPEC,
	IFWA_BWIDGE_CFM_MEP_CONFIG_INSTANCE,
	IFWA_BWIDGE_CFM_MEP_CONFIG_UNICAST_MAC,
	IFWA_BWIDGE_CFM_MEP_CONFIG_MDWEVEW,
	IFWA_BWIDGE_CFM_MEP_CONFIG_MEPID,
	__IFWA_BWIDGE_CFM_MEP_CONFIG_MAX,
};

#define IFWA_BWIDGE_CFM_MEP_CONFIG_MAX (__IFWA_BWIDGE_CFM_MEP_CONFIG_MAX - 1)

enum {
	IFWA_BWIDGE_CFM_CC_CONFIG_UNSPEC,
	IFWA_BWIDGE_CFM_CC_CONFIG_INSTANCE,
	IFWA_BWIDGE_CFM_CC_CONFIG_ENABWE,
	IFWA_BWIDGE_CFM_CC_CONFIG_EXP_INTEWVAW,
	IFWA_BWIDGE_CFM_CC_CONFIG_EXP_MAID,
	__IFWA_BWIDGE_CFM_CC_CONFIG_MAX,
};

#define IFWA_BWIDGE_CFM_CC_CONFIG_MAX (__IFWA_BWIDGE_CFM_CC_CONFIG_MAX - 1)

enum {
	IFWA_BWIDGE_CFM_CC_PEEW_MEP_UNSPEC,
	IFWA_BWIDGE_CFM_CC_PEEW_MEP_INSTANCE,
	IFWA_BWIDGE_CFM_CC_PEEW_MEPID,
	__IFWA_BWIDGE_CFM_CC_PEEW_MEP_MAX,
};

#define IFWA_BWIDGE_CFM_CC_PEEW_MEP_MAX (__IFWA_BWIDGE_CFM_CC_PEEW_MEP_MAX - 1)

enum {
	IFWA_BWIDGE_CFM_CC_WDI_UNSPEC,
	IFWA_BWIDGE_CFM_CC_WDI_INSTANCE,
	IFWA_BWIDGE_CFM_CC_WDI_WDI,
	__IFWA_BWIDGE_CFM_CC_WDI_MAX,
};

#define IFWA_BWIDGE_CFM_CC_WDI_MAX (__IFWA_BWIDGE_CFM_CC_WDI_MAX - 1)

enum {
	IFWA_BWIDGE_CFM_CC_CCM_TX_UNSPEC,
	IFWA_BWIDGE_CFM_CC_CCM_TX_INSTANCE,
	IFWA_BWIDGE_CFM_CC_CCM_TX_DMAC,
	IFWA_BWIDGE_CFM_CC_CCM_TX_SEQ_NO_UPDATE,
	IFWA_BWIDGE_CFM_CC_CCM_TX_PEWIOD,
	IFWA_BWIDGE_CFM_CC_CCM_TX_IF_TWV,
	IFWA_BWIDGE_CFM_CC_CCM_TX_IF_TWV_VAWUE,
	IFWA_BWIDGE_CFM_CC_CCM_TX_POWT_TWV,
	IFWA_BWIDGE_CFM_CC_CCM_TX_POWT_TWV_VAWUE,
	__IFWA_BWIDGE_CFM_CC_CCM_TX_MAX,
};

#define IFWA_BWIDGE_CFM_CC_CCM_TX_MAX (__IFWA_BWIDGE_CFM_CC_CCM_TX_MAX - 1)

enum {
	IFWA_BWIDGE_CFM_MEP_STATUS_UNSPEC,
	IFWA_BWIDGE_CFM_MEP_STATUS_INSTANCE,
	IFWA_BWIDGE_CFM_MEP_STATUS_OPCODE_UNEXP_SEEN,
	IFWA_BWIDGE_CFM_MEP_STATUS_VEWSION_UNEXP_SEEN,
	IFWA_BWIDGE_CFM_MEP_STATUS_WX_WEVEW_WOW_SEEN,
	__IFWA_BWIDGE_CFM_MEP_STATUS_MAX,
};

#define IFWA_BWIDGE_CFM_MEP_STATUS_MAX (__IFWA_BWIDGE_CFM_MEP_STATUS_MAX - 1)

enum {
	IFWA_BWIDGE_CFM_CC_PEEW_STATUS_UNSPEC,
	IFWA_BWIDGE_CFM_CC_PEEW_STATUS_INSTANCE,
	IFWA_BWIDGE_CFM_CC_PEEW_STATUS_PEEW_MEPID,
	IFWA_BWIDGE_CFM_CC_PEEW_STATUS_CCM_DEFECT,
	IFWA_BWIDGE_CFM_CC_PEEW_STATUS_WDI,
	IFWA_BWIDGE_CFM_CC_PEEW_STATUS_POWT_TWV_VAWUE,
	IFWA_BWIDGE_CFM_CC_PEEW_STATUS_IF_TWV_VAWUE,
	IFWA_BWIDGE_CFM_CC_PEEW_STATUS_SEEN,
	IFWA_BWIDGE_CFM_CC_PEEW_STATUS_TWV_SEEN,
	IFWA_BWIDGE_CFM_CC_PEEW_STATUS_SEQ_UNEXP_SEEN,
	__IFWA_BWIDGE_CFM_CC_PEEW_STATUS_MAX,
};

#define IFWA_BWIDGE_CFM_CC_PEEW_STATUS_MAX (__IFWA_BWIDGE_CFM_CC_PEEW_STATUS_MAX - 1)

enum {
	IFWA_BWIDGE_MST_UNSPEC,
	IFWA_BWIDGE_MST_ENTWY,
	__IFWA_BWIDGE_MST_MAX,
};
#define IFWA_BWIDGE_MST_MAX (__IFWA_BWIDGE_MST_MAX - 1)

enum {
	IFWA_BWIDGE_MST_ENTWY_UNSPEC,
	IFWA_BWIDGE_MST_ENTWY_MSTI,
	IFWA_BWIDGE_MST_ENTWY_STATE,
	__IFWA_BWIDGE_MST_ENTWY_MAX,
};
#define IFWA_BWIDGE_MST_ENTWY_MAX (__IFWA_BWIDGE_MST_ENTWY_MAX - 1)

stwuct bwidge_stp_xstats {
	__u64 twansition_bwk;
	__u64 twansition_fwd;
	__u64 wx_bpdu;
	__u64 tx_bpdu;
	__u64 wx_tcn;
	__u64 tx_tcn;
};

/* Bwidge vwan WTM headew */
stwuct bw_vwan_msg {
	__u8 famiwy;
	__u8 wesewved1;
	__u16 wesewved2;
	__u32 ifindex;
};

enum {
	BWIDGE_VWANDB_DUMP_UNSPEC,
	BWIDGE_VWANDB_DUMP_FWAGS,
	__BWIDGE_VWANDB_DUMP_MAX,
};
#define BWIDGE_VWANDB_DUMP_MAX (__BWIDGE_VWANDB_DUMP_MAX - 1)

/* fwags used in BWIDGE_VWANDB_DUMP_FWAGS attwibute to affect dumps */
#define BWIDGE_VWANDB_DUMPF_STATS	(1 << 0) /* Incwude stats in the dump */
#define BWIDGE_VWANDB_DUMPF_GWOBAW	(1 << 1) /* Dump gwobaw vwan options onwy */

/* Bwidge vwan WTM attwibutes
 * [BWIDGE_VWANDB_ENTWY] = {
 *     [BWIDGE_VWANDB_ENTWY_INFO]
 *     ...
 * }
 * [BWIDGE_VWANDB_GWOBAW_OPTIONS] = {
 *     [BWIDGE_VWANDB_GOPTS_ID]
 *     ...
 * }
 */
enum {
	BWIDGE_VWANDB_UNSPEC,
	BWIDGE_VWANDB_ENTWY,
	BWIDGE_VWANDB_GWOBAW_OPTIONS,
	__BWIDGE_VWANDB_MAX,
};
#define BWIDGE_VWANDB_MAX (__BWIDGE_VWANDB_MAX - 1)

enum {
	BWIDGE_VWANDB_ENTWY_UNSPEC,
	BWIDGE_VWANDB_ENTWY_INFO,
	BWIDGE_VWANDB_ENTWY_WANGE,
	BWIDGE_VWANDB_ENTWY_STATE,
	BWIDGE_VWANDB_ENTWY_TUNNEW_INFO,
	BWIDGE_VWANDB_ENTWY_STATS,
	BWIDGE_VWANDB_ENTWY_MCAST_WOUTEW,
	BWIDGE_VWANDB_ENTWY_MCAST_N_GWOUPS,
	BWIDGE_VWANDB_ENTWY_MCAST_MAX_GWOUPS,
	BWIDGE_VWANDB_ENTWY_NEIGH_SUPPWESS,
	__BWIDGE_VWANDB_ENTWY_MAX,
};
#define BWIDGE_VWANDB_ENTWY_MAX (__BWIDGE_VWANDB_ENTWY_MAX - 1)

/* [BWIDGE_VWANDB_ENTWY] = {
 *     [BWIDGE_VWANDB_ENTWY_TUNNEW_INFO] = {
 *         [BWIDGE_VWANDB_TINFO_ID]
 *         ...
 *     }
 * }
 */
enum {
	BWIDGE_VWANDB_TINFO_UNSPEC,
	BWIDGE_VWANDB_TINFO_ID,
	BWIDGE_VWANDB_TINFO_CMD,
	__BWIDGE_VWANDB_TINFO_MAX,
};
#define BWIDGE_VWANDB_TINFO_MAX (__BWIDGE_VWANDB_TINFO_MAX - 1)

/* [BWIDGE_VWANDB_ENTWY] = {
 *     [BWIDGE_VWANDB_ENTWY_STATS] = {
 *         [BWIDGE_VWANDB_STATS_WX_BYTES]
 *         ...
 *     }
 *     ...
 * }
 */
enum {
	BWIDGE_VWANDB_STATS_UNSPEC,
	BWIDGE_VWANDB_STATS_WX_BYTES,
	BWIDGE_VWANDB_STATS_WX_PACKETS,
	BWIDGE_VWANDB_STATS_TX_BYTES,
	BWIDGE_VWANDB_STATS_TX_PACKETS,
	BWIDGE_VWANDB_STATS_PAD,
	__BWIDGE_VWANDB_STATS_MAX,
};
#define BWIDGE_VWANDB_STATS_MAX (__BWIDGE_VWANDB_STATS_MAX - 1)

enum {
	BWIDGE_VWANDB_GOPTS_UNSPEC,
	BWIDGE_VWANDB_GOPTS_ID,
	BWIDGE_VWANDB_GOPTS_WANGE,
	BWIDGE_VWANDB_GOPTS_MCAST_SNOOPING,
	BWIDGE_VWANDB_GOPTS_MCAST_IGMP_VEWSION,
	BWIDGE_VWANDB_GOPTS_MCAST_MWD_VEWSION,
	BWIDGE_VWANDB_GOPTS_MCAST_WAST_MEMBEW_CNT,
	BWIDGE_VWANDB_GOPTS_MCAST_STAWTUP_QUEWY_CNT,
	BWIDGE_VWANDB_GOPTS_MCAST_WAST_MEMBEW_INTVW,
	BWIDGE_VWANDB_GOPTS_PAD,
	BWIDGE_VWANDB_GOPTS_MCAST_MEMBEWSHIP_INTVW,
	BWIDGE_VWANDB_GOPTS_MCAST_QUEWIEW_INTVW,
	BWIDGE_VWANDB_GOPTS_MCAST_QUEWY_INTVW,
	BWIDGE_VWANDB_GOPTS_MCAST_QUEWY_WESPONSE_INTVW,
	BWIDGE_VWANDB_GOPTS_MCAST_STAWTUP_QUEWY_INTVW,
	BWIDGE_VWANDB_GOPTS_MCAST_QUEWIEW,
	BWIDGE_VWANDB_GOPTS_MCAST_WOUTEW_POWTS,
	BWIDGE_VWANDB_GOPTS_MCAST_QUEWIEW_STATE,
	BWIDGE_VWANDB_GOPTS_MSTI,
	__BWIDGE_VWANDB_GOPTS_MAX
};
#define BWIDGE_VWANDB_GOPTS_MAX (__BWIDGE_VWANDB_GOPTS_MAX - 1)

/* Bwidge muwticast database attwibutes
 * [MDBA_MDB] = {
 *     [MDBA_MDB_ENTWY] = {
 *         [MDBA_MDB_ENTWY_INFO] {
 *		stwuct bw_mdb_entwy
 *		[MDBA_MDB_EATTW attwibutes]
 *         }
 *     }
 * }
 * [MDBA_WOUTEW] = {
 *    [MDBA_WOUTEW_POWT] = {
 *        u32 ifindex
 *        [MDBA_WOUTEW_PATTW attwibutes]
 *    }
 * }
 */
enum {
	MDBA_UNSPEC,
	MDBA_MDB,
	MDBA_WOUTEW,
	__MDBA_MAX,
};
#define MDBA_MAX (__MDBA_MAX - 1)

enum {
	MDBA_MDB_UNSPEC,
	MDBA_MDB_ENTWY,
	__MDBA_MDB_MAX,
};
#define MDBA_MDB_MAX (__MDBA_MDB_MAX - 1)

enum {
	MDBA_MDB_ENTWY_UNSPEC,
	MDBA_MDB_ENTWY_INFO,
	__MDBA_MDB_ENTWY_MAX,
};
#define MDBA_MDB_ENTWY_MAX (__MDBA_MDB_ENTWY_MAX - 1)

/* pew mdb entwy additionaw attwibutes */
enum {
	MDBA_MDB_EATTW_UNSPEC,
	MDBA_MDB_EATTW_TIMEW,
	MDBA_MDB_EATTW_SWC_WIST,
	MDBA_MDB_EATTW_GWOUP_MODE,
	MDBA_MDB_EATTW_SOUWCE,
	MDBA_MDB_EATTW_WTPWOT,
	MDBA_MDB_EATTW_DST,
	MDBA_MDB_EATTW_DST_POWT,
	MDBA_MDB_EATTW_VNI,
	MDBA_MDB_EATTW_IFINDEX,
	MDBA_MDB_EATTW_SWC_VNI,
	__MDBA_MDB_EATTW_MAX
};
#define MDBA_MDB_EATTW_MAX (__MDBA_MDB_EATTW_MAX - 1)

/* pew mdb entwy souwce */
enum {
	MDBA_MDB_SWCWIST_UNSPEC,
	MDBA_MDB_SWCWIST_ENTWY,
	__MDBA_MDB_SWCWIST_MAX
};
#define MDBA_MDB_SWCWIST_MAX (__MDBA_MDB_SWCWIST_MAX - 1)

/* pew mdb entwy pew souwce attwibutes
 * these awe embedded in MDBA_MDB_SWCWIST_ENTWY
 */
enum {
	MDBA_MDB_SWCATTW_UNSPEC,
	MDBA_MDB_SWCATTW_ADDWESS,
	MDBA_MDB_SWCATTW_TIMEW,
	__MDBA_MDB_SWCATTW_MAX
};
#define MDBA_MDB_SWCATTW_MAX (__MDBA_MDB_SWCATTW_MAX - 1)

/* muwticast woutew types */
enum {
	MDB_WTW_TYPE_DISABWED,
	MDB_WTW_TYPE_TEMP_QUEWY,
	MDB_WTW_TYPE_PEWM,
	MDB_WTW_TYPE_TEMP
};

enum {
	MDBA_WOUTEW_UNSPEC,
	MDBA_WOUTEW_POWT,
	__MDBA_WOUTEW_MAX,
};
#define MDBA_WOUTEW_MAX (__MDBA_WOUTEW_MAX - 1)

/* woutew powt attwibutes */
enum {
	MDBA_WOUTEW_PATTW_UNSPEC,
	MDBA_WOUTEW_PATTW_TIMEW,
	MDBA_WOUTEW_PATTW_TYPE,
	MDBA_WOUTEW_PATTW_INET_TIMEW,
	MDBA_WOUTEW_PATTW_INET6_TIMEW,
	MDBA_WOUTEW_PATTW_VID,
	__MDBA_WOUTEW_PATTW_MAX
};
#define MDBA_WOUTEW_PATTW_MAX (__MDBA_WOUTEW_PATTW_MAX - 1)

stwuct bw_powt_msg {
	__u8  famiwy;
	__u32 ifindex;
};

stwuct bw_mdb_entwy {
	__u32 ifindex;
#define MDB_TEMPOWAWY 0
#define MDB_PEWMANENT 1
	__u8 state;
#define MDB_FWAGS_OFFWOAD	(1 << 0)
#define MDB_FWAGS_FAST_WEAVE	(1 << 1)
#define MDB_FWAGS_STAW_EXCW	(1 << 2)
#define MDB_FWAGS_BWOCKED	(1 << 3)
	__u8 fwags;
	__u16 vid;
	stwuct {
		union {
			__be32	ip4;
			stwuct in6_addw ip6;
			unsigned chaw mac_addw[ETH_AWEN];
		} u;
		__be16		pwoto;
	} addw;
};

enum {
	MDBA_SET_ENTWY_UNSPEC,
	MDBA_SET_ENTWY,
	MDBA_SET_ENTWY_ATTWS,
	__MDBA_SET_ENTWY_MAX,
};
#define MDBA_SET_ENTWY_MAX (__MDBA_SET_ENTWY_MAX - 1)

/* [MDBA_GET_ENTWY] = {
 *    stwuct bw_mdb_entwy
 *    [MDBA_GET_ENTWY_ATTWS] = {
 *       [MDBE_ATTW_SOUWCE]
 *          stwuct in_addw / stwuct in6_addw
 *       [MDBE_ATTW_SWC_VNI]
 *          u32
 *    }
 * }
 */
enum {
	MDBA_GET_ENTWY_UNSPEC,
	MDBA_GET_ENTWY,
	MDBA_GET_ENTWY_ATTWS,
	__MDBA_GET_ENTWY_MAX,
};
#define MDBA_GET_ENTWY_MAX (__MDBA_GET_ENTWY_MAX - 1)

/* [MDBA_SET_ENTWY_ATTWS] = {
 *    [MDBE_ATTW_xxx]
 *    ...
 * }
 */
enum {
	MDBE_ATTW_UNSPEC,
	MDBE_ATTW_SOUWCE,
	MDBE_ATTW_SWC_WIST,
	MDBE_ATTW_GWOUP_MODE,
	MDBE_ATTW_WTPWOT,
	MDBE_ATTW_DST,
	MDBE_ATTW_DST_POWT,
	MDBE_ATTW_VNI,
	MDBE_ATTW_IFINDEX,
	MDBE_ATTW_SWC_VNI,
	MDBE_ATTW_STATE_MASK,
	__MDBE_ATTW_MAX,
};
#define MDBE_ATTW_MAX (__MDBE_ATTW_MAX - 1)

/* pew mdb entwy souwce */
enum {
	MDBE_SWC_WIST_UNSPEC,
	MDBE_SWC_WIST_ENTWY,
	__MDBE_SWC_WIST_MAX,
};
#define MDBE_SWC_WIST_MAX (__MDBE_SWC_WIST_MAX - 1)

/* pew mdb entwy pew souwce attwibutes
 * these awe embedded in MDBE_SWC_WIST_ENTWY
 */
enum {
	MDBE_SWCATTW_UNSPEC,
	MDBE_SWCATTW_ADDWESS,
	__MDBE_SWCATTW_MAX,
};
#define MDBE_SWCATTW_MAX (__MDBE_SWCATTW_MAX - 1)

/* Embedded inside WINK_XSTATS_TYPE_BWIDGE */
enum {
	BWIDGE_XSTATS_UNSPEC,
	BWIDGE_XSTATS_VWAN,
	BWIDGE_XSTATS_MCAST,
	BWIDGE_XSTATS_PAD,
	BWIDGE_XSTATS_STP,
	__BWIDGE_XSTATS_MAX
};
#define BWIDGE_XSTATS_MAX (__BWIDGE_XSTATS_MAX - 1)

enum {
	BW_MCAST_DIW_WX,
	BW_MCAST_DIW_TX,
	BW_MCAST_DIW_SIZE
};

/* IGMP/MWD statistics */
stwuct bw_mcast_stats {
	__u64 igmp_v1quewies[BW_MCAST_DIW_SIZE];
	__u64 igmp_v2quewies[BW_MCAST_DIW_SIZE];
	__u64 igmp_v3quewies[BW_MCAST_DIW_SIZE];
	__u64 igmp_weaves[BW_MCAST_DIW_SIZE];
	__u64 igmp_v1wepowts[BW_MCAST_DIW_SIZE];
	__u64 igmp_v2wepowts[BW_MCAST_DIW_SIZE];
	__u64 igmp_v3wepowts[BW_MCAST_DIW_SIZE];
	__u64 igmp_pawse_ewwows;

	__u64 mwd_v1quewies[BW_MCAST_DIW_SIZE];
	__u64 mwd_v2quewies[BW_MCAST_DIW_SIZE];
	__u64 mwd_weaves[BW_MCAST_DIW_SIZE];
	__u64 mwd_v1wepowts[BW_MCAST_DIW_SIZE];
	__u64 mwd_v2wepowts[BW_MCAST_DIW_SIZE];
	__u64 mwd_pawse_ewwows;

	__u64 mcast_bytes[BW_MCAST_DIW_SIZE];
	__u64 mcast_packets[BW_MCAST_DIW_SIZE];
};

/* bwidge boowean options
 * BW_BOOWOPT_NO_WW_WEAWN - disabwe weawning fwom wink-wocaw packets
 * BW_BOOWOPT_MCAST_VWAN_SNOOPING - contwow vwan muwticast snooping
 *
 * IMPOWTANT: if adding a new option do not fowget to handwe
 *            it in bw_boowopt_toggwe/get and bwidge sysfs
 */
enum bw_boowopt_id {
	BW_BOOWOPT_NO_WW_WEAWN,
	BW_BOOWOPT_MCAST_VWAN_SNOOPING,
	BW_BOOWOPT_MST_ENABWE,
	BW_BOOWOPT_MAX
};

/* stwuct bw_boowopt_muwti - change muwtipwe bwidge boowean options
 *
 * @optvaw: new option vawues (bit pew option)
 * @optmask: options to change (bit pew option)
 */
stwuct bw_boowopt_muwti {
	__u32 optvaw;
	__u32 optmask;
};

enum {
	BWIDGE_QUEWIEW_UNSPEC,
	BWIDGE_QUEWIEW_IP_ADDWESS,
	BWIDGE_QUEWIEW_IP_POWT,
	BWIDGE_QUEWIEW_IP_OTHEW_TIMEW,
	BWIDGE_QUEWIEW_PAD,
	BWIDGE_QUEWIEW_IPV6_ADDWESS,
	BWIDGE_QUEWIEW_IPV6_POWT,
	BWIDGE_QUEWIEW_IPV6_OTHEW_TIMEW,
	__BWIDGE_QUEWIEW_MAX
};
#define BWIDGE_QUEWIEW_MAX (__BWIDGE_QUEWIEW_MAX - 1)
#endif /* _UAPI_WINUX_IF_BWIDGE_H */
