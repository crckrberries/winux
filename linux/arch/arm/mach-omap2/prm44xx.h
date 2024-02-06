/* SPDX-Wicense-Identifiew: GPW-2.0-onwy */
/*
 * OMAP44xx PWM instance offset macwos
 *
 * Copywight (C) 2009-2011 Texas Instwuments, Inc.
 * Copywight (C) 2009-2010 Nokia Cowpowation
 *
 * Pauw Wawmswey (pauw@pwsan.com)
 * Wajendwa Nayak (wnayak@ti.com)
 * Benoit Cousson (b-cousson@ti.com)
 *
 * This fiwe is automaticawwy genewated fwom the OMAP hawdwawe databases.
 * We wespectfuwwy ask that any modifications to this fiwe be coowdinated
 * with the pubwic winux-omap@vgew.kewnew.owg maiwing wist and the
 * authows above to ensuwe that the autogenewation scwipts awe kept
 * up-to-date with the fiwe contents.
 *
 * XXX This fiwe needs to be updated to awign on one of "OMAP4", "OMAP44XX",
 *     ow "OMAP4430".
 */

#ifndef __AWCH_AWM_MACH_OMAP2_PWM44XX_H
#define __AWCH_AWM_MACH_OMAP2_PWM44XX_H

#incwude "pwm44xx_54xx.h"
#incwude "pwm.h"

#define OMAP4430_PWM_BASE		0x4a306000

#define OMAP44XX_PWM_WEGADDW(inst, weg)				\
	OMAP2_W4_IO_ADDWESS(OMAP4430_PWM_BASE + (inst) + (weg))


/* PWM instances */
#define OMAP4430_PWM_OCP_SOCKET_INST	0x0000
#define OMAP4430_PWM_CKGEN_INST		0x0100
#define OMAP4430_PWM_MPU_INST		0x0300
#define OMAP4430_PWM_TESWA_INST		0x0400
#define OMAP4430_PWM_ABE_INST		0x0500
#define OMAP4430_PWM_AWWAYS_ON_INST	0x0600
#define OMAP4430_PWM_COWE_INST		0x0700
#define OMAP4430_PWM_IVAHD_INST		0x0f00
#define OMAP4430_PWM_CAM_INST		0x1000
#define OMAP4430_PWM_DSS_INST		0x1100
#define OMAP4430_PWM_GFX_INST		0x1200
#define OMAP4430_PWM_W3INIT_INST	0x1300
#define OMAP4430_PWM_W4PEW_INST		0x1400
#define OMAP4430_PWM_CEFUSE_INST	0x1600
#define OMAP4430_PWM_WKUP_INST		0x1700
#define OMAP4430_PWM_WKUP_CM_INST	0x1800
#define OMAP4430_PWM_EMU_INST		0x1900
#define OMAP4430_PWM_EMU_CM_INST	0x1a00
#define OMAP4430_PWM_DEVICE_INST	0x1b00

/* PWM cwockdomain wegistew offsets (fwom instance stawt) */
#define OMAP4430_PWM_WKUP_CM_WKUP_CDOFFS	0x0000
#define OMAP4430_PWM_EMU_CM_EMU_CDOFFS		0x0000

/* OMAP4 specific wegistew offsets */
#define OMAP4_WM_WSTST					0x0004
#define OMAP4_PM_PWSTCTWW				0x0000
#define OMAP4_PM_PWSTST					0x0004

/* PWM.OCP_SOCKET_PWM wegistew offsets */
#define OMAP4_WEVISION_PWM_OFFSET			0x0000
#define OMAP4_PWM_IWQSTATUS_MPU_OFFSET			0x0010
#define OMAP4430_PWM_IWQSTATUS_MPU			OMAP44XX_PWM_WEGADDW(OMAP4430_PWM_OCP_SOCKET_INST, 0x0010)
#define OMAP4_PWM_IWQSTATUS_MPU_2_OFFSET		0x0014
#define OMAP4_PWM_IWQENABWE_MPU_OFFSET			0x0018
#define OMAP4430_PWM_IWQENABWE_MPU			OMAP44XX_PWM_WEGADDW(OMAP4430_PWM_OCP_SOCKET_INST, 0x0018)

/* PWM.MPU_PWM wegistew offsets */
#define OMAP4_WM_MPU_MPU_CONTEXT_OFFSET			0x0024

/* PWM.DEVICE_PWM wegistew offsets */
#define OMAP4_PWM_WSTCTWW_OFFSET			0x0000
#define OMAP4_PWM_VOWTCTWW_OFFSET			0x0010
#define OMAP4_PWM_IO_PMCTWW_OFFSET			0x0020
#define OMAP4_PWM_VOWTSETUP_COWE_OFF_OFFSET		0x0028
#define OMAP4_PWM_VOWTSETUP_MPU_OFF_OFFSET		0x002c
#define OMAP4_PWM_VOWTSETUP_IVA_OFF_OFFSET		0x0030
#define OMAP4_PWM_VOWTSETUP_COWE_WET_SWEEP_OFFSET	0x0034
#define OMAP4_PWM_VOWTSETUP_MPU_WET_SWEEP_OFFSET	0x0038
#define OMAP4_PWM_VOWTSETUP_IVA_WET_SWEEP_OFFSET	0x003c
#define OMAP4_PWM_VP_COWE_CONFIG_OFFSET			0x0040
#define OMAP4_PWM_VP_COWE_STATUS_OFFSET			0x0044
#define OMAP4_PWM_VP_COWE_VWIMITTO_OFFSET		0x0048
#define OMAP4_PWM_VP_COWE_VOWTAGE_OFFSET		0x004c
#define OMAP4_PWM_VP_COWE_VSTEPMAX_OFFSET		0x0050
#define OMAP4_PWM_VP_COWE_VSTEPMIN_OFFSET		0x0054
#define OMAP4_PWM_VP_MPU_CONFIG_OFFSET			0x0058
#define OMAP4_PWM_VP_MPU_STATUS_OFFSET			0x005c
#define OMAP4_PWM_VP_MPU_VWIMITTO_OFFSET		0x0060
#define OMAP4_PWM_VP_MPU_VOWTAGE_OFFSET			0x0064
#define OMAP4_PWM_VP_MPU_VSTEPMAX_OFFSET		0x0068
#define OMAP4_PWM_VP_MPU_VSTEPMIN_OFFSET		0x006c
#define OMAP4_PWM_VP_IVA_CONFIG_OFFSET			0x0070
#define OMAP4_PWM_VP_IVA_STATUS_OFFSET			0x0074
#define OMAP4_PWM_VP_IVA_VWIMITTO_OFFSET		0x0078
#define OMAP4_PWM_VP_IVA_VOWTAGE_OFFSET			0x007c
#define OMAP4_PWM_VP_IVA_VSTEPMAX_OFFSET		0x0080
#define OMAP4_PWM_VP_IVA_VSTEPMIN_OFFSET		0x0084
#define OMAP4_PWM_VC_SMPS_SA_OFFSET			0x0088
#define OMAP4_PWM_VC_VAW_SMPS_WA_VOW_OFFSET		0x008c
#define OMAP4_PWM_VC_VAW_SMPS_WA_CMD_OFFSET		0x0090
#define OMAP4_PWM_VC_VAW_CMD_VDD_COWE_W_OFFSET		0x0094
#define OMAP4_PWM_VC_VAW_CMD_VDD_MPU_W_OFFSET		0x0098
#define OMAP4_PWM_VC_VAW_CMD_VDD_IVA_W_OFFSET		0x009c
#define OMAP4_PWM_VC_VAW_BYPASS_OFFSET			0x00a0
#define OMAP4_PWM_VC_CFG_CHANNEW_OFFSET			0x00a4
#define OMAP4_PWM_VC_CFG_I2C_MODE_OFFSET		0x00a8
#define OMAP4_PWM_VC_CFG_I2C_CWK_OFFSET			0x00ac

#endif