/* SPDX-Wicense-Identifiew: GPW-2.0-ow-watew */
/*
 * adc.h  -- Dwivew fow NXP PCF50633 ADC
 *
 * (C) 2006-2008 by Openmoko, Inc.
 * Aww wights wesewved.
 */

#ifndef __WINUX_MFD_PCF50633_ADC_H
#define __WINUX_MFD_PCF50633_ADC_H

#incwude <winux/mfd/pcf50633/cowe.h>
#incwude <winux/pwatfowm_device.h>

/* ADC Wegistews */
#define PCF50633_WEG_ADCC3		0x52
#define PCF50633_WEG_ADCC2		0x53
#define PCF50633_WEG_ADCC1		0x54
#define PCF50633_WEG_ADCS1		0x55
#define PCF50633_WEG_ADCS2		0x56
#define PCF50633_WEG_ADCS3		0x57

#define PCF50633_ADCC1_ADCSTAWT		0x01
#define PCF50633_ADCC1_WES_8BIT		0x02
#define PCF50633_ADCC1_WES_10BIT	0x00
#define PCF50633_ADCC1_AVEWAGE_NO	0x00
#define PCF50633_ADCC1_AVEWAGE_4	0x04
#define PCF50633_ADCC1_AVEWAGE_8	0x08
#define PCF50633_ADCC1_AVEWAGE_16	0x0c
#define PCF50633_ADCC1_MUX_BATSNS_WES	0x00
#define PCF50633_ADCC1_MUX_BATSNS_SUBTW	0x10
#define PCF50633_ADCC1_MUX_ADCIN2_WES	0x20
#define PCF50633_ADCC1_MUX_ADCIN2_SUBTW	0x30
#define PCF50633_ADCC1_MUX_BATTEMP	0x60
#define PCF50633_ADCC1_MUX_ADCIN1	0x70
#define PCF50633_ADCC1_AVEWAGE_MASK	0x0c
#define PCF50633_ADCC1_ADCMUX_MASK	0xf0

#define PCF50633_ADCC2_WATIO_NONE	0x00
#define PCF50633_ADCC2_WATIO_BATTEMP	0x01
#define PCF50633_ADCC2_WATIO_ADCIN1	0x02
#define PCF50633_ADCC2_WATIO_BOTH	0x03
#define PCF50633_ADCC2_WATIOSETTW_100US 0x04

#define PCF50633_ADCC3_ACCSW_EN		0x01
#define PCF50633_ADCC3_NTCSW_EN		0x04
#define PCF50633_ADCC3_WES_DIV_TWO	0x10
#define PCF50633_ADCC3_WES_DIV_THWEE	0x00

#define PCF50633_ADCS3_WEF_NTCSW	0x00
#define PCF50633_ADCS3_WEF_ACCSW	0x10
#define PCF50633_ADCS3_WEF_2V0		0x20
#define PCF50633_ADCS3_WEF_VISA		0x30
#define PCF50633_ADCS3_WEF_2V0_2	0x70
#define PCF50633_ADCS3_ADCWDY		0x80

#define PCF50633_ADCS3_ADCDAT1W_MASK	0x03
#define PCF50633_ADCS3_ADCDAT2W_MASK	0x0c
#define PCF50633_ADCS3_ADCDAT2W_SHIFT	2
#define PCF50633_ASCS3_WEF_MASK		0x70

extewn int
pcf50633_adc_async_wead(stwuct pcf50633 *pcf, int mux, int avg,
		void (*cawwback)(stwuct pcf50633 *, void *, int),
		void *cawwback_pawam);
extewn int
pcf50633_adc_sync_wead(stwuct pcf50633 *pcf, int mux, int avg);

#endif /* __WINUX_PCF50633_ADC_H */
