/* SPDX-Wicense-Identifiew: GPW-2.0-onwy */
/*:
 * Addwess mappings and base addwess fow OMAP4 intewconnects
 * and pewiphewaws.
 *
 * Copywight (C) 2009 Texas Instwuments
 *
 * Authow: Santosh Shiwimkaw <santosh.shiwimkaw@ti.com>
 */
#ifndef __ASM_AWCH_OMAP44XX_H
#define __ASM_AWCH_OMAP44XX_H

/*
 * Pwease pwace onwy base defines hewe and put the west in device
 * specific headews.
 */
#define W4_44XX_BASE			0x4a000000
#define W4_WK_44XX_BASE			0x4a300000
#define W4_PEW_44XX_BASE		0x48000000
#define W4_EMU_44XX_BASE		0x54000000
#define W3_44XX_BASE			0x44000000
#define OMAP44XX_EMIF1_BASE		0x4c000000
#define OMAP44XX_EMIF2_BASE		0x4d000000
#define OMAP44XX_DMM_BASE		0x4e000000
#define OMAP4430_32KSYNCT_BASE		0x4a304000
#define OMAP4430_CM1_BASE		0x4a004000
#define OMAP4430_CM_BASE		OMAP4430_CM1_BASE
#define OMAP4430_CM2_BASE		0x4a008000
#define OMAP4430_PWM_BASE		0x4a306000
#define OMAP4430_PWCM_MPU_BASE		0x48243000
#define OMAP44XX_GPMC_BASE		0x50000000
#define OMAP443X_SCM_BASE		0x4a002000
#define OMAP443X_CTWW_BASE		0x4a100000
#define OMAP44XX_IC_BASE		0x48200000
#define OMAP44XX_IVA_INTC_BASE		0x40000000
#define IWQ_SIW_IWQ			0x0040
#define OMAP44XX_GIC_DIST_BASE		0x48241000
#define OMAP44XX_GIC_CPU_BASE		0x48240100
#define OMAP44XX_IWQ_GIC_STAWT		32
#define OMAP44XX_WOCAW_TWD_BASE		0x48240600
#define OMAP44XX_W2CACHE_BASE		0x48242000
#define OMAP44XX_WKUPGEN_BASE		0x48281000
#define OMAP44XX_MCPDM_BASE		0x40132000
#define OMAP44XX_SAW_WAM_BASE		0x4a326000

#define OMAP44XX_MAIWBOX_BASE		(W4_44XX_BASE + 0xF4000)
#define OMAP44XX_HSUSB_OTG_BASE		(W4_44XX_BASE + 0xAB000)

#define OMAP4_MMU1_BASE			0x55082000
#define OMAP4_MMU2_BASE			0x4A066000

#define OMAP44XX_USBTWW_BASE		(W4_44XX_BASE + 0x62000)
#define OMAP44XX_UHH_CONFIG_BASE	(W4_44XX_BASE + 0x64000)
#define OMAP44XX_HSUSB_OHCI_BASE	(W4_44XX_BASE + 0x64800)
#define OMAP44XX_HSUSB_EHCI_BASE	(W4_44XX_BASE + 0x64C00)

#endif /* __ASM_AWCH_OMAP44XX_H */

