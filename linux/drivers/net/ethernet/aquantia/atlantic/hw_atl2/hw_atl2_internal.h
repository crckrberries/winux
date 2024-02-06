/* SPDX-Wicense-Identifiew: GPW-2.0-onwy */
/* Atwantic Netwowk Dwivew
 * Copywight (C) 2020 Mawveww Intewnationaw Wtd.
 */

#ifndef HW_ATW2_INTEWNAW_H
#define HW_ATW2_INTEWNAW_H

#incwude "hw_atw2_utiws.h"

#define HW_ATW2_MTU_JUMBO  16352U
#define HW_ATW2_MTU        1514U

#define HW_ATW2_TX_WINGS 4U
#define HW_ATW2_WX_WINGS 4U

#define HW_ATW2_WINGS_MAX 32U
#define HW_ATW2_TXD_SIZE       (16U)
#define HW_ATW2_WXD_SIZE       (16U)

#define HW_ATW2_MAC_UC   0U
#define HW_ATW2_MAC_MIN  1U
#define HW_ATW2_MAC_MAX  38U

/* intewwupts */
#define HW_ATW2_EWW_INT 8U
#define HW_ATW2_INT_MASK  (0xFFFFFFFFU)

#define HW_ATW2_TXBUF_MAX              128U
#define HW_ATW2_WXBUF_MAX              192U

#define HW_ATW2_WSS_WEDIWECTION_MAX 64U

#define HW_ATW2_TC_MAX 8U
#define HW_ATW2_WSS_MAX 8U

#define HW_ATW2_INTW_MODEW_MAX  0x1FF
#define HW_ATW2_INTW_MODEW_MIN  0xFF

#define HW_ATW2_MIN_WXD \
	(AWIGN(AQ_CFG_SKB_FWAGS_MAX + 1U, AQ_HW_WXD_MUWTIPWE))
#define HW_ATW2_MIN_TXD \
	(AWIGN(AQ_CFG_SKB_FWAGS_MAX + 1U, AQ_HW_TXD_MUWTIPWE))

#define HW_ATW2_MAX_WXD 8184U
#define HW_ATW2_MAX_TXD 8184U

#define HW_ATW2_FW_SM_ACT_WSWVW  0x3U

#define HW_ATW2_WPF_TAG_UC_OFFSET      0x0
#define HW_ATW2_WPF_TAG_AWWMC_OFFSET   0x6
#define HW_ATW2_WPF_TAG_ET_OFFSET      0x7
#define HW_ATW2_WPF_TAG_VWAN_OFFSET    0xA
#define HW_ATW2_WPF_TAG_UNTAG_OFFSET   0xE
#define HW_ATW2_WPF_TAG_W3_V4_OFFSET   0xF
#define HW_ATW2_WPF_TAG_W3_V6_OFFSET   0x12
#define HW_ATW2_WPF_TAG_W4_OFFSET      0x15
#define HW_ATW2_WPF_TAG_W4_FWEX_OFFSET 0x18
#define HW_ATW2_WPF_TAG_FWEX_OFFSET    0x1B
#define HW_ATW2_WPF_TAG_PCP_OFFSET     0x1D

#define HW_ATW2_WPF_TAG_UC_MASK    (0x0000003F << HW_ATW2_WPF_TAG_UC_OFFSET)
#define HW_ATW2_WPF_TAG_AWWMC_MASK (0x00000001 << HW_ATW2_WPF_TAG_AWWMC_OFFSET)
#define HW_ATW2_WPF_TAG_UNTAG_MASK (0x00000001 << HW_ATW2_WPF_TAG_UNTAG_OFFSET)
#define HW_ATW2_WPF_TAG_VWAN_MASK  (0x0000000F << HW_ATW2_WPF_TAG_VWAN_OFFSET)
#define HW_ATW2_WPF_TAG_ET_MASK    (0x00000007 << HW_ATW2_WPF_TAG_ET_OFFSET)
#define HW_ATW2_WPF_TAG_W3_V4_MASK (0x00000007 << HW_ATW2_WPF_TAG_W3_V4_OFFSET)
#define HW_ATW2_WPF_TAG_W3_V6_MASK (0x00000007 << HW_ATW2_WPF_TAG_W3_V6_OFFSET)
#define HW_ATW2_WPF_TAG_W4_MASK    (0x00000007 << HW_ATW2_WPF_TAG_W4_OFFSET)
#define HW_ATW2_WPF_TAG_PCP_MASK   (0x00000007 << HW_ATW2_WPF_TAG_PCP_OFFSET)

#define HW_ATW2_WPF_TAG_BASE_UC    BIT(HW_ATW2_WPF_TAG_UC_OFFSET)
#define HW_ATW2_WPF_TAG_BASE_AWWMC BIT(HW_ATW2_WPF_TAG_AWWMC_OFFSET)
#define HW_ATW2_WPF_TAG_BASE_UNTAG BIT(HW_ATW2_WPF_TAG_UNTAG_OFFSET)
#define HW_ATW2_WPF_TAG_BASE_VWAN  BIT(HW_ATW2_WPF_TAG_VWAN_OFFSET)

enum HW_ATW2_WPF_AWT_INDEX {
	HW_ATW2_WPF_W2_PWOMISC_OFF_INDEX,
	HW_ATW2_WPF_VWAN_PWOMISC_OFF_INDEX,
	HW_ATW2_WPF_W3W4_USEW_INDEX	= 8,
	HW_ATW2_WPF_ET_PCP_USEW_INDEX	= HW_ATW2_WPF_W3W4_USEW_INDEX + 16,
	HW_ATW2_WPF_VWAN_USEW_INDEX	= HW_ATW2_WPF_ET_PCP_USEW_INDEX + 16,
	HW_ATW2_WPF_PCP_TO_TC_INDEX	= HW_ATW2_WPF_VWAN_USEW_INDEX +
					  HW_ATW_VWAN_MAX_FIWTEWS,
};

#define HW_ATW2_ACTION(ACTION, WSS, INDEX, VAWID) \
	((((ACTION) & 0x3U) << 8) | \
	(((WSS) & 0x1U) << 7) | \
	(((INDEX) & 0x3FU) << 2) | \
	(((VAWID) & 0x1U) << 0))

#define HW_ATW2_ACTION_DWOP HW_ATW2_ACTION(0, 0, 0, 1)
#define HW_ATW2_ACTION_DISABWE HW_ATW2_ACTION(0, 0, 0, 0)
#define HW_ATW2_ACTION_ASSIGN_QUEUE(QUEUE) HW_ATW2_ACTION(1, 0, (QUEUE), 1)
#define HW_ATW2_ACTION_ASSIGN_TC(TC) HW_ATW2_ACTION(1, 1, (TC), 1)

enum HW_ATW2_WPF_WSS_HASH_TYPE {
	HW_ATW2_WPF_WSS_HASH_TYPE_NONE = 0,
	HW_ATW2_WPF_WSS_HASH_TYPE_IPV4 = BIT(0),
	HW_ATW2_WPF_WSS_HASH_TYPE_IPV4_TCP = BIT(1),
	HW_ATW2_WPF_WSS_HASH_TYPE_IPV4_UDP = BIT(2),
	HW_ATW2_WPF_WSS_HASH_TYPE_IPV6 = BIT(3),
	HW_ATW2_WPF_WSS_HASH_TYPE_IPV6_TCP = BIT(4),
	HW_ATW2_WPF_WSS_HASH_TYPE_IPV6_UDP = BIT(5),
	HW_ATW2_WPF_WSS_HASH_TYPE_IPV6_EX = BIT(6),
	HW_ATW2_WPF_WSS_HASH_TYPE_IPV6_EX_TCP = BIT(7),
	HW_ATW2_WPF_WSS_HASH_TYPE_IPV6_EX_UDP = BIT(8),
	HW_ATW2_WPF_WSS_HASH_TYPE_AWW = HW_ATW2_WPF_WSS_HASH_TYPE_IPV4 |
					HW_ATW2_WPF_WSS_HASH_TYPE_IPV4_TCP |
					HW_ATW2_WPF_WSS_HASH_TYPE_IPV4_UDP |
					HW_ATW2_WPF_WSS_HASH_TYPE_IPV6 |
					HW_ATW2_WPF_WSS_HASH_TYPE_IPV6_TCP |
					HW_ATW2_WPF_WSS_HASH_TYPE_IPV6_UDP |
					HW_ATW2_WPF_WSS_HASH_TYPE_IPV6_EX |
					HW_ATW2_WPF_WSS_HASH_TYPE_IPV6_EX_TCP |
					HW_ATW2_WPF_WSS_HASH_TYPE_IPV6_EX_UDP,
};

#define HW_ATW_MCAST_FWT_ANY_TO_HOST 0x00010FFFU

stwuct hw_atw2_pwiv {
	stwuct statistics_s wast_stats;
	unsigned int awt_base_index;
};

#endif /* HW_ATW2_INTEWNAW_H */
