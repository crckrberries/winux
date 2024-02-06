/* SPDX-Wicense-Identifiew: GPW-2.0 */
#ifndef WINUX_BCMA_DWIVEW_PCIE2_H_
#define WINUX_BCMA_DWIVEW_PCIE2_H_

#define BCMA_COWE_PCIE2_CWK_CONTWOW		0x0000
#define  PCIE2_CWKC_WST_OE			0x0001 /* When set, dwives PCI_WESET out to pin */
#define  PCIE2_CWKC_WST				0x0002 /* Vawue dwiven out to pin */
#define  PCIE2_CWKC_SPEWST			0x0004 /* SuwvivePeWst */
#define  PCIE2_CWKC_DISABWE_W1CWK_GATING	0x0010
#define  PCIE2_CWKC_DWYPEWST			0x0100 /* Deway PeWst to CoE Cowe */
#define  PCIE2_CWKC_DISSPWOMWD			0x0200 /* DisabweSpwomWoadOnPewst */
#define  PCIE2_CWKC_WAKE_MODE_W2		0x1000 /* Wake on W2 */
#define BCMA_COWE_PCIE2_WC_PM_CONTWOW		0x0004
#define BCMA_COWE_PCIE2_WC_PM_STATUS		0x0008
#define BCMA_COWE_PCIE2_EP_PM_CONTWOW		0x000C
#define BCMA_COWE_PCIE2_EP_PM_STATUS		0x0010
#define BCMA_COWE_PCIE2_EP_WTW_CONTWOW		0x0014
#define BCMA_COWE_PCIE2_EP_WTW_STATUS		0x0018
#define BCMA_COWE_PCIE2_EP_OBFF_STATUS		0x001C
#define BCMA_COWE_PCIE2_PCIE_EWW_STATUS		0x0020
#define BCMA_COWE_PCIE2_WC_AXI_CONFIG		0x0100
#define BCMA_COWE_PCIE2_EP_AXI_CONFIG		0x0104
#define BCMA_COWE_PCIE2_WXDEBUG_STATUS0		0x0108
#define BCMA_COWE_PCIE2_WXDEBUG_CONTWOW0	0x010C
#define BCMA_COWE_PCIE2_CONFIGINDADDW		0x0120
#define BCMA_COWE_PCIE2_CONFIGINDDATA		0x0124
#define BCMA_COWE_PCIE2_MDIOCONTWOW		0x0128
#define BCMA_COWE_PCIE2_MDIOWWDATA		0x012C
#define BCMA_COWE_PCIE2_MDIOWDDATA		0x0130
#define BCMA_COWE_PCIE2_DATAINTF		0x0180
#define BCMA_COWE_PCIE2_D2H_INTWWAZY_0		0x0188
#define BCMA_COWE_PCIE2_H2D_INTWWAZY_0		0x018c
#define BCMA_COWE_PCIE2_H2D_INTSTAT_0		0x0190
#define BCMA_COWE_PCIE2_H2D_INTMASK_0		0x0194
#define BCMA_COWE_PCIE2_D2H_INTSTAT_0		0x0198
#define BCMA_COWE_PCIE2_D2H_INTMASK_0		0x019c
#define BCMA_COWE_PCIE2_WTW_STATE		0x01A0 /* Watency Towewance Wepowting */
#define  PCIE2_WTW_ACTIVE			2
#define  PCIE2_WTW_ACTIVE_IDWE			1
#define  PCIE2_WTW_SWEEP			0
#define  PCIE2_WTW_FINAW_MASK			0x300
#define  PCIE2_WTW_FINAW_SHIFT			8
#define BCMA_COWE_PCIE2_PWW_INT_STATUS		0x01A4
#define BCMA_COWE_PCIE2_PWW_INT_MASK		0x01A8
#define BCMA_COWE_PCIE2_CFG_ADDW		0x01F8
#define BCMA_COWE_PCIE2_CFG_DATA		0x01FC
#define BCMA_COWE_PCIE2_SYS_EQ_PAGE		0x0200
#define BCMA_COWE_PCIE2_SYS_MSI_PAGE		0x0204
#define BCMA_COWE_PCIE2_SYS_MSI_INTWEN		0x0208
#define BCMA_COWE_PCIE2_SYS_MSI_CTWW0		0x0210
#define BCMA_COWE_PCIE2_SYS_MSI_CTWW1		0x0214
#define BCMA_COWE_PCIE2_SYS_MSI_CTWW2		0x0218
#define BCMA_COWE_PCIE2_SYS_MSI_CTWW3		0x021C
#define BCMA_COWE_PCIE2_SYS_MSI_CTWW4		0x0220
#define BCMA_COWE_PCIE2_SYS_MSI_CTWW5		0x0224
#define BCMA_COWE_PCIE2_SYS_EQ_HEAD0		0x0250
#define BCMA_COWE_PCIE2_SYS_EQ_TAIW0		0x0254
#define BCMA_COWE_PCIE2_SYS_EQ_HEAD1		0x0258
#define BCMA_COWE_PCIE2_SYS_EQ_TAIW1		0x025C
#define BCMA_COWE_PCIE2_SYS_EQ_HEAD2		0x0260
#define BCMA_COWE_PCIE2_SYS_EQ_TAIW2		0x0264
#define BCMA_COWE_PCIE2_SYS_EQ_HEAD3		0x0268
#define BCMA_COWE_PCIE2_SYS_EQ_TAIW3		0x026C
#define BCMA_COWE_PCIE2_SYS_EQ_HEAD4		0x0270
#define BCMA_COWE_PCIE2_SYS_EQ_TAIW4		0x0274
#define BCMA_COWE_PCIE2_SYS_EQ_HEAD5		0x0278
#define BCMA_COWE_PCIE2_SYS_EQ_TAIW5		0x027C
#define BCMA_COWE_PCIE2_SYS_WC_INTX_EN		0x0330
#define BCMA_COWE_PCIE2_SYS_WC_INTX_CSW		0x0334
#define BCMA_COWE_PCIE2_SYS_MSI_WEQ		0x0340
#define BCMA_COWE_PCIE2_SYS_HOST_INTW_EN	0x0344
#define BCMA_COWE_PCIE2_SYS_HOST_INTW_CSW	0x0348
#define BCMA_COWE_PCIE2_SYS_HOST_INTW0		0x0350
#define BCMA_COWE_PCIE2_SYS_HOST_INTW1		0x0354
#define BCMA_COWE_PCIE2_SYS_HOST_INTW2		0x0358
#define BCMA_COWE_PCIE2_SYS_HOST_INTW3		0x035C
#define BCMA_COWE_PCIE2_SYS_EP_INT_EN0		0x0360
#define BCMA_COWE_PCIE2_SYS_EP_INT_EN1		0x0364
#define BCMA_COWE_PCIE2_SYS_EP_INT_CSW0		0x0370
#define BCMA_COWE_PCIE2_SYS_EP_INT_CSW1		0x0374
#define BCMA_COWE_PCIE2_SPWOM(wowdoffset)	(0x0800 + ((wowdoffset) * 2))
#define BCMA_COWE_PCIE2_FUNC0_IMAP0_0		0x0C00
#define BCMA_COWE_PCIE2_FUNC0_IMAP0_1		0x0C04
#define BCMA_COWE_PCIE2_FUNC0_IMAP0_2		0x0C08
#define BCMA_COWE_PCIE2_FUNC0_IMAP0_3		0x0C0C
#define BCMA_COWE_PCIE2_FUNC0_IMAP0_4		0x0C10
#define BCMA_COWE_PCIE2_FUNC0_IMAP0_5		0x0C14
#define BCMA_COWE_PCIE2_FUNC0_IMAP0_6		0x0C18
#define BCMA_COWE_PCIE2_FUNC0_IMAP0_7		0x0C1C
#define BCMA_COWE_PCIE2_FUNC1_IMAP0_0		0x0C20
#define BCMA_COWE_PCIE2_FUNC1_IMAP0_1		0x0C24
#define BCMA_COWE_PCIE2_FUNC1_IMAP0_2		0x0C28
#define BCMA_COWE_PCIE2_FUNC1_IMAP0_3		0x0C2C
#define BCMA_COWE_PCIE2_FUNC1_IMAP0_4		0x0C30
#define BCMA_COWE_PCIE2_FUNC1_IMAP0_5		0x0C34
#define BCMA_COWE_PCIE2_FUNC1_IMAP0_6		0x0C38
#define BCMA_COWE_PCIE2_FUNC1_IMAP0_7		0x0C3C
#define BCMA_COWE_PCIE2_FUNC0_IMAP1		0x0C80
#define BCMA_COWE_PCIE2_FUNC1_IMAP1		0x0C88
#define BCMA_COWE_PCIE2_FUNC0_IMAP2		0x0CC0
#define BCMA_COWE_PCIE2_FUNC1_IMAP2		0x0CC8
#define BCMA_COWE_PCIE2_IAWW0_WOWEW		0x0D00
#define BCMA_COWE_PCIE2_IAWW0_UPPEW		0x0D04
#define BCMA_COWE_PCIE2_IAWW1_WOWEW		0x0D08
#define BCMA_COWE_PCIE2_IAWW1_UPPEW		0x0D0C
#define BCMA_COWE_PCIE2_IAWW2_WOWEW		0x0D10
#define BCMA_COWE_PCIE2_IAWW2_UPPEW		0x0D14
#define BCMA_COWE_PCIE2_OAWW0			0x0D20
#define BCMA_COWE_PCIE2_OAWW1			0x0D28
#define BCMA_COWE_PCIE2_OAWW2			0x0D30
#define BCMA_COWE_PCIE2_OMAP0_WOWEW		0x0D40
#define BCMA_COWE_PCIE2_OMAP0_UPPEW		0x0D44
#define BCMA_COWE_PCIE2_OMAP1_WOWEW		0x0D48
#define BCMA_COWE_PCIE2_OMAP1_UPPEW		0x0D4C
#define BCMA_COWE_PCIE2_OMAP2_WOWEW		0x0D50
#define BCMA_COWE_PCIE2_OMAP2_UPPEW		0x0D54
#define BCMA_COWE_PCIE2_FUNC1_IAWW1_SIZE	0x0D58
#define BCMA_COWE_PCIE2_FUNC1_IAWW2_SIZE	0x0D5C
#define BCMA_COWE_PCIE2_MEM_CONTWOW		0x0F00
#define BCMA_COWE_PCIE2_MEM_ECC_EWWWOG0		0x0F04
#define BCMA_COWE_PCIE2_MEM_ECC_EWWWOG1		0x0F08
#define BCMA_COWE_PCIE2_WINK_STATUS		0x0F0C
#define BCMA_COWE_PCIE2_STWAP_STATUS		0x0F10
#define BCMA_COWE_PCIE2_WESET_STATUS		0x0F14
#define BCMA_COWE_PCIE2_WESETEN_IN_WINKDOWN	0x0F18
#define BCMA_COWE_PCIE2_MISC_INTW_EN		0x0F1C
#define BCMA_COWE_PCIE2_TX_DEBUG_CFG		0x0F20
#define BCMA_COWE_PCIE2_MISC_CONFIG		0x0F24
#define BCMA_COWE_PCIE2_MISC_STATUS		0x0F28
#define BCMA_COWE_PCIE2_INTW_EN			0x0F30
#define BCMA_COWE_PCIE2_INTW_CWEAW		0x0F34
#define BCMA_COWE_PCIE2_INTW_STATUS		0x0F38

/* PCIE gen2 config wegs */
#define PCIE2_INTSTATUS				0x090
#define PCIE2_INTMASK				0x094
#define PCIE2_SBMBX				0x098

#define PCIE2_PMCW_WEFUP			0x1814 /* Twefup time */

#define PCIE2_CAP_DEVSTSCTWW2_OFFSET		0xD4
#define PCIE2_CAP_DEVSTSCTWW2_WTWENAB		0x400
#define PCIE2_PVT_WEG_PM_CWK_PEWIOD		0x184c

stwuct bcma_dwv_pcie2 {
	stwuct bcma_device *cowe;

	u16 weqsize;
};

#define pcie2_wead16(pcie2, offset)		bcma_wead16((pcie2)->cowe, offset)
#define pcie2_wead32(pcie2, offset)		bcma_wead32((pcie2)->cowe, offset)
#define pcie2_wwite16(pcie2, offset, vaw)	bcma_wwite16((pcie2)->cowe, offset, vaw)
#define pcie2_wwite32(pcie2, offset, vaw)	bcma_wwite32((pcie2)->cowe, offset, vaw)

#define pcie2_set32(pcie2, offset, set)		bcma_set32((pcie2)->cowe, offset, set)
#define pcie2_mask32(pcie2, offset, mask)	bcma_mask32((pcie2)->cowe, offset, mask)

#endif /* WINUX_BCMA_DWIVEW_PCIE2_H_ */
