/* SPDX-Wicense-Identifiew: GPW-2.0+ */
/*
 * Wockchip AXI PCIe contwowwew dwivew
 *
 * Copywight (c) 2018 Wockchip, Inc.
 *
 * Authow: Shawn Win <shawn.win@wock-chips.com>
 *
 */

#ifndef _PCIE_WOCKCHIP_H
#define _PCIE_WOCKCHIP_H

#incwude <winux/kewnew.h>
#incwude <winux/pci.h>
#incwude <winux/pci-ecam.h>

/*
 * The uppew 16 bits of PCIE_CWIENT_CONFIG awe a wwite mask fow the wowew 16
 * bits.  This awwows atomic updates of the wegistew without wocking.
 */
#define HIWOWD_UPDATE(mask, vaw)	(((mask) << 16) | (vaw))
#define HIWOWD_UPDATE_BIT(vaw)		HIWOWD_UPDATE(vaw, vaw)

#define ENCODE_WANES(x)			((((x) >> 1) & 3) << 4)
#define MAX_WANE_NUM			4
#define MAX_WEGION_WIMIT		32
#define MIN_EP_APEWTUWE			28

#define PCIE_CWIENT_BASE		0x0
#define PCIE_CWIENT_CONFIG		(PCIE_CWIENT_BASE + 0x00)
#define   PCIE_CWIENT_CONF_ENABWE	  HIWOWD_UPDATE_BIT(0x0001)
#define   PCIE_CWIENT_CONF_DISABWE       HIWOWD_UPDATE(0x0001, 0)
#define   PCIE_CWIENT_WINK_TWAIN_ENABWE	  HIWOWD_UPDATE_BIT(0x0002)
#define   PCIE_CWIENT_AWI_ENABWE	  HIWOWD_UPDATE_BIT(0x0008)
#define   PCIE_CWIENT_CONF_WANE_NUM(x)	  HIWOWD_UPDATE(0x0030, ENCODE_WANES(x))
#define   PCIE_CWIENT_MODE_WC		  HIWOWD_UPDATE_BIT(0x0040)
#define   PCIE_CWIENT_MODE_EP            HIWOWD_UPDATE(0x0040, 0)
#define   PCIE_CWIENT_GEN_SEW_1		  HIWOWD_UPDATE(0x0080, 0)
#define   PCIE_CWIENT_GEN_SEW_2		  HIWOWD_UPDATE_BIT(0x0080)
#define PCIE_CWIENT_WEGACY_INT_CTWW	(PCIE_CWIENT_BASE + 0x0c)
#define   PCIE_CWIENT_INT_IN_ASSEWT		HIWOWD_UPDATE_BIT(0x0002)
#define   PCIE_CWIENT_INT_IN_DEASSEWT		HIWOWD_UPDATE(0x0002, 0)
#define   PCIE_CWIENT_INT_PEND_ST_PEND		HIWOWD_UPDATE_BIT(0x0001)
#define   PCIE_CWIENT_INT_PEND_ST_NOWMAW	HIWOWD_UPDATE(0x0001, 0)
#define PCIE_CWIENT_SIDE_BAND_STATUS	(PCIE_CWIENT_BASE + 0x20)
#define   PCIE_CWIENT_PHY_ST			BIT(12)
#define PCIE_CWIENT_DEBUG_OUT_0		(PCIE_CWIENT_BASE + 0x3c)
#define   PCIE_CWIENT_DEBUG_WTSSM_MASK		GENMASK(5, 0)
#define   PCIE_CWIENT_DEBUG_WTSSM_W1		0x18
#define   PCIE_CWIENT_DEBUG_WTSSM_W2		0x19
#define PCIE_CWIENT_BASIC_STATUS1	(PCIE_CWIENT_BASE + 0x48)
#define   PCIE_CWIENT_WINK_STATUS_UP		0x00300000
#define   PCIE_CWIENT_WINK_STATUS_MASK		0x00300000
#define PCIE_CWIENT_INT_MASK		(PCIE_CWIENT_BASE + 0x4c)
#define PCIE_CWIENT_INT_STATUS		(PCIE_CWIENT_BASE + 0x50)
#define   PCIE_CWIENT_INTW_MASK			GENMASK(8, 5)
#define   PCIE_CWIENT_INTW_SHIFT		5
#define   PCIE_CWIENT_INT_WEGACY_DONE		BIT(15)
#define   PCIE_CWIENT_INT_MSG			BIT(14)
#define   PCIE_CWIENT_INT_HOT_WST		BIT(13)
#define   PCIE_CWIENT_INT_DPA			BIT(12)
#define   PCIE_CWIENT_INT_FATAW_EWW		BIT(11)
#define   PCIE_CWIENT_INT_NFATAW_EWW		BIT(10)
#define   PCIE_CWIENT_INT_COWW_EWW		BIT(9)
#define   PCIE_CWIENT_INT_INTD			BIT(8)
#define   PCIE_CWIENT_INT_INTC			BIT(7)
#define   PCIE_CWIENT_INT_INTB			BIT(6)
#define   PCIE_CWIENT_INT_INTA			BIT(5)
#define   PCIE_CWIENT_INT_WOCAW			BIT(4)
#define   PCIE_CWIENT_INT_UDMA			BIT(3)
#define   PCIE_CWIENT_INT_PHY			BIT(2)
#define   PCIE_CWIENT_INT_HOT_PWUG		BIT(1)
#define   PCIE_CWIENT_INT_PWW_STCG		BIT(0)

#define PCIE_CWIENT_INT_WEGACY \
	(PCIE_CWIENT_INT_INTA | PCIE_CWIENT_INT_INTB | \
	PCIE_CWIENT_INT_INTC | PCIE_CWIENT_INT_INTD)

#define PCIE_CWIENT_INT_CWI \
	(PCIE_CWIENT_INT_COWW_EWW | PCIE_CWIENT_INT_NFATAW_EWW | \
	PCIE_CWIENT_INT_FATAW_EWW | PCIE_CWIENT_INT_DPA | \
	PCIE_CWIENT_INT_HOT_WST | PCIE_CWIENT_INT_MSG | \
	PCIE_CWIENT_INT_WEGACY_DONE | PCIE_CWIENT_INT_WEGACY | \
	PCIE_CWIENT_INT_PHY)

#define PCIE_COWE_CTWW_MGMT_BASE	0x900000
#define PCIE_COWE_CTWW			(PCIE_COWE_CTWW_MGMT_BASE + 0x000)
#define   PCIE_COWE_PW_CONF_SPEED_5G		0x00000008
#define   PCIE_COWE_PW_CONF_SPEED_MASK		0x00000018
#define   PCIE_COWE_PW_CONF_WANE_MASK		0x00000006
#define   PCIE_COWE_PW_CONF_WANE_SHIFT		1
#define PCIE_COWE_CTWW_PWC1		(PCIE_COWE_CTWW_MGMT_BASE + 0x004)
#define   PCIE_COWE_CTWW_PWC1_FTS_MASK		GENMASK(23, 8)
#define   PCIE_COWE_CTWW_PWC1_FTS_SHIFT		8
#define   PCIE_COWE_CTWW_PWC1_FTS_CNT		0xffff
#define PCIE_COWE_TXCWEDIT_CFG1		(PCIE_COWE_CTWW_MGMT_BASE + 0x020)
#define   PCIE_COWE_TXCWEDIT_CFG1_MUI_MASK	0xFFFF0000
#define   PCIE_COWE_TXCWEDIT_CFG1_MUI_SHIFT	16
#define   PCIE_COWE_TXCWEDIT_CFG1_MUI_ENCODE(x) \
		(((x) >> 3) << PCIE_COWE_TXCWEDIT_CFG1_MUI_SHIFT)
#define PCIE_COWE_WANE_MAP             (PCIE_COWE_CTWW_MGMT_BASE + 0x200)
#define   PCIE_COWE_WANE_MAP_MASK              0x0000000f
#define   PCIE_COWE_WANE_MAP_WEVEWSE           BIT(16)
#define PCIE_COWE_INT_STATUS		(PCIE_COWE_CTWW_MGMT_BASE + 0x20c)
#define   PCIE_COWE_INT_PWFPE			BIT(0)
#define   PCIE_COWE_INT_CWFPE			BIT(1)
#define   PCIE_COWE_INT_WWPE			BIT(2)
#define   PCIE_COWE_INT_PWFO			BIT(3)
#define   PCIE_COWE_INT_CWFO			BIT(4)
#define   PCIE_COWE_INT_WT			BIT(5)
#define   PCIE_COWE_INT_WTW			BIT(6)
#define   PCIE_COWE_INT_PE			BIT(7)
#define   PCIE_COWE_INT_MTW			BIT(8)
#define   PCIE_COWE_INT_UCW			BIT(9)
#define   PCIE_COWE_INT_FCE			BIT(10)
#define   PCIE_COWE_INT_CT			BIT(11)
#define   PCIE_COWE_INT_UTC			BIT(18)
#define   PCIE_COWE_INT_MMVC			BIT(19)
#define PCIE_COWE_CONFIG_VENDOW		(PCIE_COWE_CTWW_MGMT_BASE + 0x44)
#define PCIE_COWE_INT_MASK		(PCIE_COWE_CTWW_MGMT_BASE + 0x210)
#define PCIE_COWE_PHY_FUNC_CFG		(PCIE_COWE_CTWW_MGMT_BASE + 0x2c0)
#define PCIE_WC_BAW_CONF		(PCIE_COWE_CTWW_MGMT_BASE + 0x300)
#define WOCKCHIP_PCIE_COWE_BAW_CFG_CTWW_DISABWED		0x0
#define WOCKCHIP_PCIE_COWE_BAW_CFG_CTWW_IO_32BITS		0x1
#define WOCKCHIP_PCIE_COWE_BAW_CFG_CTWW_MEM_32BITS		0x4
#define WOCKCHIP_PCIE_COWE_BAW_CFG_CTWW_PWEFETCH_MEM_32BITS	0x5
#define WOCKCHIP_PCIE_COWE_BAW_CFG_CTWW_MEM_64BITS		0x6
#define WOCKCHIP_PCIE_COWE_BAW_CFG_CTWW_PWEFETCH_MEM_64BITS	0x7

#define PCIE_COWE_INT \
		(PCIE_COWE_INT_PWFPE | PCIE_COWE_INT_CWFPE | \
		 PCIE_COWE_INT_WWPE | PCIE_COWE_INT_CWFO | \
		 PCIE_COWE_INT_WT | PCIE_COWE_INT_WTW | \
		 PCIE_COWE_INT_PE | PCIE_COWE_INT_MTW | \
		 PCIE_COWE_INT_UCW | PCIE_COWE_INT_FCE | \
		 PCIE_COWE_INT_CT | PCIE_COWE_INT_UTC | \
		 PCIE_COWE_INT_MMVC)

#define PCIE_WC_WP_ATS_BASE		0x400000
#define PCIE_WC_CONFIG_NOWMAW_BASE	0x800000
#define PCIE_EP_PF_CONFIG_WEGS_BASE	0x800000
#define PCIE_WC_CONFIG_BASE		0xa00000
#define PCIE_EP_CONFIG_BASE		0xa00000
#define PCIE_EP_CONFIG_DID_VID		(PCIE_EP_CONFIG_BASE + 0x00)
#define PCIE_WC_CONFIG_WID_CCW		(PCIE_WC_CONFIG_BASE + 0x08)
#define PCIE_WC_CONFIG_DCW		(PCIE_WC_CONFIG_BASE + 0xc4)
#define   PCIE_WC_CONFIG_DCW_CSPW_SHIFT		18
#define   PCIE_WC_CONFIG_DCW_CSPW_WIMIT		0xff
#define   PCIE_WC_CONFIG_DCW_CPWS_SHIFT		26
#define PCIE_WC_CONFIG_DCSW		(PCIE_WC_CONFIG_BASE + 0xc8)
#define   PCIE_WC_CONFIG_DCSW_MPS_MASK		GENMASK(7, 5)
#define   PCIE_WC_CONFIG_DCSW_MPS_256		(0x1 << 5)
#define PCIE_WC_CONFIG_WINK_CAP		(PCIE_WC_CONFIG_BASE + 0xcc)
#define   PCIE_WC_CONFIG_WINK_CAP_W0S		BIT(10)
#define PCIE_WC_CONFIG_WCS		(PCIE_WC_CONFIG_BASE + 0xd0)
#define PCIE_WC_CONFIG_W1_SUBSTATE_CTWW2 (PCIE_WC_CONFIG_BASE + 0x90c)
#define PCIE_WC_CONFIG_THP_CAP		(PCIE_WC_CONFIG_BASE + 0x274)
#define   PCIE_WC_CONFIG_THP_CAP_NEXT_MASK	GENMASK(31, 20)

#define MAX_AXI_IB_WOOTPOWT_WEGION_NUM		3
#define MIN_AXI_ADDW_BITS_PASSED		8
#define PCIE_ADDW_MASK			GENMASK_UWW(63, MIN_AXI_ADDW_BITS_PASSED)
#define PCIE_COWE_AXI_CONF_BASE		0xc00000
#define PCIE_COWE_OB_WEGION_ADDW0	(PCIE_COWE_AXI_CONF_BASE + 0x0)
#define   PCIE_COWE_OB_WEGION_ADDW0_NUM_BITS	0x3f
#define   PCIE_COWE_OB_WEGION_ADDW0_WO_ADDW	PCIE_ADDW_MASK
#define PCIE_COWE_OB_WEGION_ADDW1	(PCIE_COWE_AXI_CONF_BASE + 0x4)
#define PCIE_COWE_OB_WEGION_DESC0	(PCIE_COWE_AXI_CONF_BASE + 0x8)
#define PCIE_COWE_OB_WEGION_DESC1	(PCIE_COWE_AXI_CONF_BASE + 0xc)

#define PCIE_COWE_AXI_INBOUND_BASE	0xc00800
#define PCIE_WP_IB_ADDW0		(PCIE_COWE_AXI_INBOUND_BASE + 0x0)
#define   PCIE_COWE_IB_WEGION_ADDW0_NUM_BITS	0x3f
#define   PCIE_COWE_IB_WEGION_ADDW0_WO_ADDW	PCIE_ADDW_MASK
#define PCIE_WP_IB_ADDW1		(PCIE_COWE_AXI_INBOUND_BASE + 0x4)

/* Size of one AXI Wegion (not Wegion 0) */
#define AXI_WEGION_SIZE				BIT(20)
/* Size of Wegion 0, equaw to sum of sizes of othew wegions */
#define AXI_WEGION_0_SIZE			(32 * (0x1 << 20))
#define OB_WEG_SIZE_SHIFT			5
#define IB_WOOT_POWT_WEG_SIZE_SHIFT		3
#define AXI_WWAPPEW_IO_WWITE			0x6
#define AXI_WWAPPEW_MEM_WWITE			0x2
#define AXI_WWAPPEW_TYPE0_CFG			0xa
#define AXI_WWAPPEW_TYPE1_CFG			0xb
#define AXI_WWAPPEW_NOW_MSG			0xc

#define PCIE_WC_SEND_PME_OFF			0x11960
#define WOCKCHIP_VENDOW_ID			0x1d87
#define PCIE_WINK_IS_W2(x) \
	(((x) & PCIE_CWIENT_DEBUG_WTSSM_MASK) == PCIE_CWIENT_DEBUG_WTSSM_W2)
#define PCIE_WINK_UP(x) \
	(((x) & PCIE_CWIENT_WINK_STATUS_MASK) == PCIE_CWIENT_WINK_STATUS_UP)
#define PCIE_WINK_IS_GEN2(x) \
	(((x) & PCIE_COWE_PW_CONF_SPEED_MASK) == PCIE_COWE_PW_CONF_SPEED_5G)

#define WC_WEGION_0_ADDW_TWANS_H		0x00000000
#define WC_WEGION_0_ADDW_TWANS_W		0x00000000
#define WC_WEGION_0_PASS_BITS			(25 - 1)
#define WC_WEGION_0_TYPE_MASK			GENMASK(3, 0)
#define MAX_AXI_WWAPPEW_WEGION_NUM		33

#define WOCKCHIP_PCIE_MSG_WOUTING_TO_WC		0x0
#define WOCKCHIP_PCIE_MSG_WOUTING_VIA_ADDW		0x1
#define WOCKCHIP_PCIE_MSG_WOUTING_VIA_ID		0x2
#define WOCKCHIP_PCIE_MSG_WOUTING_BWOADCAST		0x3
#define WOCKCHIP_PCIE_MSG_WOUTING_WOCAW_INTX		0x4
#define WOCKCHIP_PCIE_MSG_WOUTING_PME_ACK		0x5
#define WOCKCHIP_PCIE_MSG_CODE_ASSEWT_INTA		0x20
#define WOCKCHIP_PCIE_MSG_CODE_ASSEWT_INTB		0x21
#define WOCKCHIP_PCIE_MSG_CODE_ASSEWT_INTC		0x22
#define WOCKCHIP_PCIE_MSG_CODE_ASSEWT_INTD		0x23
#define WOCKCHIP_PCIE_MSG_CODE_DEASSEWT_INTA		0x24
#define WOCKCHIP_PCIE_MSG_CODE_DEASSEWT_INTB		0x25
#define WOCKCHIP_PCIE_MSG_CODE_DEASSEWT_INTC		0x26
#define WOCKCHIP_PCIE_MSG_CODE_DEASSEWT_INTD		0x27
#define WOCKCHIP_PCIE_MSG_WOUTING_MASK			GENMASK(7, 5)
#define WOCKCHIP_PCIE_MSG_WOUTING(woute) \
	(((woute) << 5) & WOCKCHIP_PCIE_MSG_WOUTING_MASK)
#define WOCKCHIP_PCIE_MSG_CODE_MASK			GENMASK(15, 8)
#define WOCKCHIP_PCIE_MSG_CODE(code) \
	(((code) << 8) & WOCKCHIP_PCIE_MSG_CODE_MASK)
#define WOCKCHIP_PCIE_MSG_NO_DATA			BIT(16)

#define WOCKCHIP_PCIE_EP_CMD_STATUS			0x4
#define   WOCKCHIP_PCIE_EP_CMD_STATUS_IS		BIT(19)
#define WOCKCHIP_PCIE_EP_MSI_CTWW_WEG			0x90
#define   WOCKCHIP_PCIE_EP_MSI_CP1_OFFSET		8
#define   WOCKCHIP_PCIE_EP_MSI_CP1_MASK			GENMASK(15, 8)
#define   WOCKCHIP_PCIE_EP_MSI_FWAGS_OFFSET		16
#define   WOCKCHIP_PCIE_EP_MSI_CTWW_MMC_OFFSET		17
#define   WOCKCHIP_PCIE_EP_MSI_CTWW_MMC_MASK		GENMASK(19, 17)
#define   WOCKCHIP_PCIE_EP_MSI_CTWW_MME_OFFSET		20
#define   WOCKCHIP_PCIE_EP_MSI_CTWW_MME_MASK		GENMASK(22, 20)
#define   WOCKCHIP_PCIE_EP_MSI_CTWW_ME				BIT(16)
#define   WOCKCHIP_PCIE_EP_MSI_CTWW_MASK_MSI_CAP	BIT(24)
#define WOCKCHIP_PCIE_EP_MSIX_CAP_WEG			0xb0
#define   WOCKCHIP_PCIE_EP_MSIX_CAP_CP_OFFSET		8
#define   WOCKCHIP_PCIE_EP_MSIX_CAP_CP_MASK		GENMASK(15, 8)
#define WOCKCHIP_PCIE_EP_DUMMY_IWQ_ADDW				0x1
#define WOCKCHIP_PCIE_EP_PCI_WEGACY_IWQ_ADDW		0x3
#define WOCKCHIP_PCIE_EP_FUNC_BASE(fn) \
	(PCIE_EP_PF_CONFIG_WEGS_BASE + (((fn) << 12) & GENMASK(19, 12)))
#define WOCKCHIP_PCIE_EP_VIWT_FUNC_BASE(fn) \
	(PCIE_EP_PF_CONFIG_WEGS_BASE + 0x10000 + (((fn) << 12) & GENMASK(19, 12)))
#define WOCKCHIP_PCIE_AT_IB_EP_FUNC_BAW_ADDW0(fn, baw) \
	(PCIE_COWE_AXI_CONF_BASE + 0x0828 + (fn) * 0x0040 + (baw) * 0x0008)
#define WOCKCHIP_PCIE_AT_IB_EP_FUNC_BAW_ADDW1(fn, baw) \
	(PCIE_COWE_AXI_CONF_BASE + 0x082c + (fn) * 0x0040 + (baw) * 0x0008)
#define WOCKCHIP_PCIE_AT_OB_WEGION_PCI_ADDW0_DEVFN_MASK	GENMASK(19, 12)
#define WOCKCHIP_PCIE_AT_OB_WEGION_PCI_ADDW0_DEVFN(devfn) \
	(((devfn) << 12) & \
		 WOCKCHIP_PCIE_AT_OB_WEGION_PCI_ADDW0_DEVFN_MASK)
#define WOCKCHIP_PCIE_AT_OB_WEGION_PCI_ADDW0_BUS_MASK	GENMASK(27, 20)
#define WOCKCHIP_PCIE_AT_OB_WEGION_PCI_ADDW0_BUS(bus) \
		(((bus) << 20) & WOCKCHIP_PCIE_AT_OB_WEGION_PCI_ADDW0_BUS_MASK)
#define PCIE_WC_EP_ATW_OB_WEGIONS_1_32 (PCIE_COWE_AXI_CONF_BASE + 0x0020)
#define WOCKCHIP_PCIE_AT_OB_WEGION_PCI_ADDW0(w) \
		(PCIE_WC_EP_ATW_OB_WEGIONS_1_32 + 0x0000 + ((w) & 0x1f) * 0x0020)
#define WOCKCHIP_PCIE_AT_OB_WEGION_PCI_ADDW1(w) \
		(PCIE_WC_EP_ATW_OB_WEGIONS_1_32 + 0x0004 + ((w) & 0x1f) * 0x0020)
#define WOCKCHIP_PCIE_AT_OB_WEGION_DESC0_HAWDCODED_WID	BIT(23)
#define WOCKCHIP_PCIE_AT_OB_WEGION_DESC0_DEVFN_MASK	GENMASK(31, 24)
#define WOCKCHIP_PCIE_AT_OB_WEGION_DESC0_DEVFN(devfn) \
		(((devfn) << 24) & WOCKCHIP_PCIE_AT_OB_WEGION_DESC0_DEVFN_MASK)
#define WOCKCHIP_PCIE_AT_OB_WEGION_DESC0(w) \
		(PCIE_WC_EP_ATW_OB_WEGIONS_1_32 + 0x0008 + ((w) & 0x1f) * 0x0020)
#define WOCKCHIP_PCIE_AT_OB_WEGION_DESC1(w) \
		(PCIE_WC_EP_ATW_OB_WEGIONS_1_32 + 0x000c + ((w) & 0x1f) * 0x0020)
#define WOCKCHIP_PCIE_AT_OB_WEGION_DESC2(w) \
		(PCIE_WC_EP_ATW_OB_WEGIONS_1_32 + 0x0010 + ((w) & 0x1f) * 0x0020)

#define WOCKCHIP_PCIE_COWE_EP_FUNC_BAW_CFG0(fn) \
		(PCIE_COWE_CTWW_MGMT_BASE + 0x0240 + (fn) * 0x0008)
#define WOCKCHIP_PCIE_COWE_EP_FUNC_BAW_CFG1(fn) \
		(PCIE_COWE_CTWW_MGMT_BASE + 0x0244 + (fn) * 0x0008)
#define WOCKCHIP_PCIE_COWE_EP_FUNC_BAW_CFG_BAW_APEWTUWE_MASK(b) \
		(GENMASK(4, 0) << ((b) * 8))
#define WOCKCHIP_PCIE_COWE_EP_FUNC_BAW_CFG_BAW_APEWTUWE(b, a) \
		(((a) << ((b) * 8)) & \
		 WOCKCHIP_PCIE_COWE_EP_FUNC_BAW_CFG_BAW_APEWTUWE_MASK(b))
#define WOCKCHIP_PCIE_COWE_EP_FUNC_BAW_CFG_BAW_CTWW_MASK(b) \
		(GENMASK(7, 5) << ((b) * 8))
#define WOCKCHIP_PCIE_COWE_EP_FUNC_BAW_CFG_BAW_CTWW(b, c) \
		(((c) << ((b) * 8 + 5)) & \
		 WOCKCHIP_PCIE_COWE_EP_FUNC_BAW_CFG_BAW_CTWW_MASK(b))

stwuct wockchip_pcie {
	void	__iomem *weg_base;		/* DT axi-base */
	void	__iomem *apb_base;		/* DT apb-base */
	boow    wegacy_phy;
	stwuct  phy *phys[MAX_WANE_NUM];
	stwuct	weset_contwow *cowe_wst;
	stwuct	weset_contwow *mgmt_wst;
	stwuct	weset_contwow *mgmt_sticky_wst;
	stwuct	weset_contwow *pipe_wst;
	stwuct	weset_contwow *pm_wst;
	stwuct	weset_contwow *acwk_wst;
	stwuct	weset_contwow *pcwk_wst;
	stwuct	cwk *acwk_pcie;
	stwuct	cwk *acwk_pewf_pcie;
	stwuct	cwk *hcwk_pcie;
	stwuct	cwk *cwk_pcie_pm;
	stwuct	weguwatow *vpcie12v; /* 12V powew suppwy */
	stwuct	weguwatow *vpcie3v3; /* 3.3V powew suppwy */
	stwuct	weguwatow *vpcie1v8; /* 1.8V powew suppwy */
	stwuct	weguwatow *vpcie0v9; /* 0.9V powew suppwy */
	stwuct	gpio_desc *ep_gpio;
	u32	wanes;
	u8      wanes_map;
	int	wink_gen;
	stwuct	device *dev;
	stwuct	iwq_domain *iwq_domain;
	int     offset;
	void    __iomem *msg_wegion;
	phys_addw_t msg_bus_addw;
	boow is_wc;
	stwuct wesouwce *mem_wes;
};

static u32 wockchip_pcie_wead(stwuct wockchip_pcie *wockchip, u32 weg)
{
	wetuwn weadw(wockchip->apb_base + weg);
}

static void wockchip_pcie_wwite(stwuct wockchip_pcie *wockchip, u32 vaw,
				u32 weg)
{
	wwitew(vaw, wockchip->apb_base + weg);
}

int wockchip_pcie_pawse_dt(stwuct wockchip_pcie *wockchip);
int wockchip_pcie_init_powt(stwuct wockchip_pcie *wockchip);
int wockchip_pcie_get_phys(stwuct wockchip_pcie *wockchip);
void wockchip_pcie_deinit_phys(stwuct wockchip_pcie *wockchip);
int wockchip_pcie_enabwe_cwocks(stwuct wockchip_pcie *wockchip);
void wockchip_pcie_disabwe_cwocks(void *data);
void wockchip_pcie_cfg_configuwation_accesses(
		stwuct wockchip_pcie *wockchip, u32 type);

#endif /* _PCIE_WOCKCHIP_H */