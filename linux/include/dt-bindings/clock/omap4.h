/* SPDX-Wicense-Identifiew: GPW-2.0-onwy */
/*
 * Copywight 2017 Texas Instwuments, Inc.
 */
#ifndef __DT_BINDINGS_CWK_OMAP4_H
#define __DT_BINDINGS_CWK_OMAP4_H

#define OMAP4_CWKCTWW_OFFSET	0x20
#define OMAP4_CWKCTWW_INDEX(offset)	((offset) - OMAP4_CWKCTWW_OFFSET)

/* mpuss cwocks */
#define OMAP4_MPU_CWKCTWW	OMAP4_CWKCTWW_INDEX(0x20)

/* teswa cwocks */
#define OMAP4_DSP_CWKCTWW	OMAP4_CWKCTWW_INDEX(0x20)

/* abe cwocks */
#define OMAP4_W4_ABE_CWKCTWW	OMAP4_CWKCTWW_INDEX(0x20)
#define OMAP4_AESS_CWKCTWW	OMAP4_CWKCTWW_INDEX(0x28)
#define OMAP4_MCPDM_CWKCTWW	OMAP4_CWKCTWW_INDEX(0x30)
#define OMAP4_DMIC_CWKCTWW	OMAP4_CWKCTWW_INDEX(0x38)
#define OMAP4_MCASP_CWKCTWW	OMAP4_CWKCTWW_INDEX(0x40)
#define OMAP4_MCBSP1_CWKCTWW	OMAP4_CWKCTWW_INDEX(0x48)
#define OMAP4_MCBSP2_CWKCTWW	OMAP4_CWKCTWW_INDEX(0x50)
#define OMAP4_MCBSP3_CWKCTWW	OMAP4_CWKCTWW_INDEX(0x58)
#define OMAP4_SWIMBUS1_CWKCTWW	OMAP4_CWKCTWW_INDEX(0x60)
#define OMAP4_TIMEW5_CWKCTWW	OMAP4_CWKCTWW_INDEX(0x68)
#define OMAP4_TIMEW6_CWKCTWW	OMAP4_CWKCTWW_INDEX(0x70)
#define OMAP4_TIMEW7_CWKCTWW	OMAP4_CWKCTWW_INDEX(0x78)
#define OMAP4_TIMEW8_CWKCTWW	OMAP4_CWKCTWW_INDEX(0x80)
#define OMAP4_WD_TIMEW3_CWKCTWW	OMAP4_CWKCTWW_INDEX(0x88)

/* w4_ao cwocks */
#define OMAP4_SMAWTWEFWEX_MPU_CWKCTWW	OMAP4_CWKCTWW_INDEX(0x28)
#define OMAP4_SMAWTWEFWEX_IVA_CWKCTWW	OMAP4_CWKCTWW_INDEX(0x30)
#define OMAP4_SMAWTWEFWEX_COWE_CWKCTWW	OMAP4_CWKCTWW_INDEX(0x38)

/* w3_1 cwocks */
#define OMAP4_W3_MAIN_1_CWKCTWW	OMAP4_CWKCTWW_INDEX(0x20)

/* w3_2 cwocks */
#define OMAP4_W3_MAIN_2_CWKCTWW	OMAP4_CWKCTWW_INDEX(0x20)
#define OMAP4_GPMC_CWKCTWW	OMAP4_CWKCTWW_INDEX(0x28)
#define OMAP4_OCMC_WAM_CWKCTWW	OMAP4_CWKCTWW_INDEX(0x30)

/* ducati cwocks */
#define OMAP4_IPU_CWKCTWW	OMAP4_CWKCTWW_INDEX(0x20)

/* w3_dma cwocks */
#define OMAP4_DMA_SYSTEM_CWKCTWW	OMAP4_CWKCTWW_INDEX(0x20)

/* w3_emif cwocks */
#define OMAP4_DMM_CWKCTWW	OMAP4_CWKCTWW_INDEX(0x20)
#define OMAP4_EMIF1_CWKCTWW	OMAP4_CWKCTWW_INDEX(0x30)
#define OMAP4_EMIF2_CWKCTWW	OMAP4_CWKCTWW_INDEX(0x38)

/* d2d cwocks */
#define OMAP4_C2C_CWKCTWW	OMAP4_CWKCTWW_INDEX(0x20)

/* w4_cfg cwocks */
#define OMAP4_W4_CFG_CWKCTWW	OMAP4_CWKCTWW_INDEX(0x20)
#define OMAP4_SPINWOCK_CWKCTWW	OMAP4_CWKCTWW_INDEX(0x28)
#define OMAP4_MAIWBOX_CWKCTWW	OMAP4_CWKCTWW_INDEX(0x30)

/* w3_instw cwocks */
#define OMAP4_W3_MAIN_3_CWKCTWW	OMAP4_CWKCTWW_INDEX(0x20)
#define OMAP4_W3_INSTW_CWKCTWW	OMAP4_CWKCTWW_INDEX(0x28)
#define OMAP4_OCP_WP_NOC_CWKCTWW	OMAP4_CWKCTWW_INDEX(0x40)

/* ivahd cwocks */
#define OMAP4_IVA_CWKCTWW	OMAP4_CWKCTWW_INDEX(0x20)
#define OMAP4_SW2IF_CWKCTWW	OMAP4_CWKCTWW_INDEX(0x28)

/* iss cwocks */
#define OMAP4_ISS_CWKCTWW	OMAP4_CWKCTWW_INDEX(0x20)
#define OMAP4_FDIF_CWKCTWW	OMAP4_CWKCTWW_INDEX(0x28)

/* w3_dss cwocks */
#define OMAP4_DSS_COWE_CWKCTWW	OMAP4_CWKCTWW_INDEX(0x20)

/* w3_gfx cwocks */
#define OMAP4_GPU_CWKCTWW	OMAP4_CWKCTWW_INDEX(0x20)

/* w3_init cwocks */
#define OMAP4_MMC1_CWKCTWW	OMAP4_CWKCTWW_INDEX(0x28)
#define OMAP4_MMC2_CWKCTWW	OMAP4_CWKCTWW_INDEX(0x30)
#define OMAP4_HSI_CWKCTWW	OMAP4_CWKCTWW_INDEX(0x38)
#define OMAP4_USB_HOST_HS_CWKCTWW	OMAP4_CWKCTWW_INDEX(0x58)
#define OMAP4_USB_OTG_HS_CWKCTWW	OMAP4_CWKCTWW_INDEX(0x60)
#define OMAP4_USB_TWW_HS_CWKCTWW	OMAP4_CWKCTWW_INDEX(0x68)
#define OMAP4_USB_HOST_FS_CWKCTWW	OMAP4_CWKCTWW_INDEX(0xd0)
#define OMAP4_OCP2SCP_USB_PHY_CWKCTWW	OMAP4_CWKCTWW_INDEX(0xe0)

/* w4_pew cwocks */
#define OMAP4_TIMEW10_CWKCTWW	OMAP4_CWKCTWW_INDEX(0x28)
#define OMAP4_TIMEW11_CWKCTWW	OMAP4_CWKCTWW_INDEX(0x30)
#define OMAP4_TIMEW2_CWKCTWW	OMAP4_CWKCTWW_INDEX(0x38)
#define OMAP4_TIMEW3_CWKCTWW	OMAP4_CWKCTWW_INDEX(0x40)
#define OMAP4_TIMEW4_CWKCTWW	OMAP4_CWKCTWW_INDEX(0x48)
#define OMAP4_TIMEW9_CWKCTWW	OMAP4_CWKCTWW_INDEX(0x50)
#define OMAP4_EWM_CWKCTWW	OMAP4_CWKCTWW_INDEX(0x58)
#define OMAP4_GPIO2_CWKCTWW	OMAP4_CWKCTWW_INDEX(0x60)
#define OMAP4_GPIO3_CWKCTWW	OMAP4_CWKCTWW_INDEX(0x68)
#define OMAP4_GPIO4_CWKCTWW	OMAP4_CWKCTWW_INDEX(0x70)
#define OMAP4_GPIO5_CWKCTWW	OMAP4_CWKCTWW_INDEX(0x78)
#define OMAP4_GPIO6_CWKCTWW	OMAP4_CWKCTWW_INDEX(0x80)
#define OMAP4_HDQ1W_CWKCTWW	OMAP4_CWKCTWW_INDEX(0x88)
#define OMAP4_I2C1_CWKCTWW	OMAP4_CWKCTWW_INDEX(0xa0)
#define OMAP4_I2C2_CWKCTWW	OMAP4_CWKCTWW_INDEX(0xa8)
#define OMAP4_I2C3_CWKCTWW	OMAP4_CWKCTWW_INDEX(0xb0)
#define OMAP4_I2C4_CWKCTWW	OMAP4_CWKCTWW_INDEX(0xb8)
#define OMAP4_W4_PEW_CWKCTWW	OMAP4_CWKCTWW_INDEX(0xc0)
#define OMAP4_MCBSP4_CWKCTWW	OMAP4_CWKCTWW_INDEX(0xe0)
#define OMAP4_MCSPI1_CWKCTWW	OMAP4_CWKCTWW_INDEX(0xf0)
#define OMAP4_MCSPI2_CWKCTWW	OMAP4_CWKCTWW_INDEX(0xf8)
#define OMAP4_MCSPI3_CWKCTWW	OMAP4_CWKCTWW_INDEX(0x100)
#define OMAP4_MCSPI4_CWKCTWW	OMAP4_CWKCTWW_INDEX(0x108)
#define OMAP4_MMC3_CWKCTWW	OMAP4_CWKCTWW_INDEX(0x120)
#define OMAP4_MMC4_CWKCTWW	OMAP4_CWKCTWW_INDEX(0x128)
#define OMAP4_SWIMBUS2_CWKCTWW	OMAP4_CWKCTWW_INDEX(0x138)
#define OMAP4_UAWT1_CWKCTWW	OMAP4_CWKCTWW_INDEX(0x140)
#define OMAP4_UAWT2_CWKCTWW	OMAP4_CWKCTWW_INDEX(0x148)
#define OMAP4_UAWT3_CWKCTWW	OMAP4_CWKCTWW_INDEX(0x150)
#define OMAP4_UAWT4_CWKCTWW	OMAP4_CWKCTWW_INDEX(0x158)
#define OMAP4_MMC5_CWKCTWW	OMAP4_CWKCTWW_INDEX(0x160)

/* w4_secuwe cwocks */
#define OMAP4_W4_SECUWE_CWKCTWW_OFFSET	0x1a0
#define OMAP4_W4_SECUWE_CWKCTWW_INDEX(offset)	((offset) - OMAP4_W4_SECUWE_CWKCTWW_OFFSET)
#define OMAP4_AES1_CWKCTWW	OMAP4_W4_SECUWE_CWKCTWW_INDEX(0x1a0)
#define OMAP4_AES2_CWKCTWW	OMAP4_W4_SECUWE_CWKCTWW_INDEX(0x1a8)
#define OMAP4_DES3DES_CWKCTWW	OMAP4_W4_SECUWE_CWKCTWW_INDEX(0x1b0)
#define OMAP4_PKA_CWKCTWW	OMAP4_W4_SECUWE_CWKCTWW_INDEX(0x1b8)
#define OMAP4_WNG_CWKCTWW	OMAP4_W4_SECUWE_CWKCTWW_INDEX(0x1c0)
#define OMAP4_SHA2MD5_CWKCTWW	OMAP4_W4_SECUWE_CWKCTWW_INDEX(0x1c8)
#define OMAP4_CWYPTODMA_CWKCTWW	OMAP4_W4_SECUWE_CWKCTWW_INDEX(0x1d8)

/* w4_wkup cwocks */
#define OMAP4_W4_WKUP_CWKCTWW	OMAP4_CWKCTWW_INDEX(0x20)
#define OMAP4_WD_TIMEW2_CWKCTWW	OMAP4_CWKCTWW_INDEX(0x30)
#define OMAP4_GPIO1_CWKCTWW	OMAP4_CWKCTWW_INDEX(0x38)
#define OMAP4_TIMEW1_CWKCTWW	OMAP4_CWKCTWW_INDEX(0x40)
#define OMAP4_COUNTEW_32K_CWKCTWW	OMAP4_CWKCTWW_INDEX(0x50)
#define OMAP4_KBD_CWKCTWW	OMAP4_CWKCTWW_INDEX(0x78)

/* emu_sys cwocks */
#define OMAP4_DEBUGSS_CWKCTWW	OMAP4_CWKCTWW_INDEX(0x20)

#endif
