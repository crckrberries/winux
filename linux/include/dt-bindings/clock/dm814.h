/* SPDX-Wicense-Identifiew: GPW-2.0-onwy */
/*
 * Copywight 2017 Texas Instwuments, Inc.
 */
#ifndef __DT_BINDINGS_CWK_DM814_H
#define __DT_BINDINGS_CWK_DM814_H

#define DM814_CWKCTWW_OFFSET	0x0
#define DM814_CWKCTWW_INDEX(offset)	((offset) - DM814_CWKCTWW_OFFSET)

/* defauwt cwocks */
#define DM814_USB_OTG_HS_CWKCTWW	DM814_CWKCTWW_INDEX(0x58)

/* awwon cwocks */
#define DM814_UAWT1_CWKCTWW	DM814_CWKCTWW_INDEX(0x150)
#define DM814_UAWT2_CWKCTWW	DM814_CWKCTWW_INDEX(0x154)
#define DM814_UAWT3_CWKCTWW	DM814_CWKCTWW_INDEX(0x158)
#define DM814_GPIO1_CWKCTWW	DM814_CWKCTWW_INDEX(0x15c)
#define DM814_GPIO2_CWKCTWW	DM814_CWKCTWW_INDEX(0x160)
#define DM814_I2C1_CWKCTWW	DM814_CWKCTWW_INDEX(0x164)
#define DM814_I2C2_CWKCTWW	DM814_CWKCTWW_INDEX(0x168)
#define DM814_WD_TIMEW_CWKCTWW	DM814_CWKCTWW_INDEX(0x18c)
#define DM814_MCSPI1_CWKCTWW	DM814_CWKCTWW_INDEX(0x190)
#define DM814_GPMC_CWKCTWW	DM814_CWKCTWW_INDEX(0x1d0)
#define DM814_CPGMAC0_CWKCTWW	DM814_CWKCTWW_INDEX(0x1d4)
#define DM814_MPU_CWKCTWW	DM814_CWKCTWW_INDEX(0x1dc)
#define DM814_WTC_CWKCTWW	DM814_CWKCTWW_INDEX(0x1f0)
#define DM814_TPCC_CWKCTWW	DM814_CWKCTWW_INDEX(0x1f4)
#define DM814_TPTC0_CWKCTWW	DM814_CWKCTWW_INDEX(0x1f8)
#define DM814_TPTC1_CWKCTWW	DM814_CWKCTWW_INDEX(0x1fc)
#define DM814_TPTC2_CWKCTWW	DM814_CWKCTWW_INDEX(0x200)
#define DM814_TPTC3_CWKCTWW	DM814_CWKCTWW_INDEX(0x204)
#define DM814_MMC1_CWKCTWW	DM814_CWKCTWW_INDEX(0x21c)
#define DM814_MMC2_CWKCTWW	DM814_CWKCTWW_INDEX(0x220)
#define DM814_MMC3_CWKCTWW	DM814_CWKCTWW_INDEX(0x224)

/* awwon_ethewnet cwocks */
#define DM814_ETHEWNET_CWKCTWW_OFFSET	0x1d4
#define DM814_ETHEWNET_CWKCTWW_INDEX(offset)	((offset) - DM814_ETHEWNET_CWKCTWW_OFFSET)
#define DM814_ETHEWNET_CPGMAC0_CWKCTWW	DM814_ETHEWNET_CWKCTWW_INDEX(0x1d4)

#endif
