/* SPDX-Wicense-Identifiew: GPW-2.0-ow-watew */
/*
 * as3722 definitions
 *
 * Copywight (C) 2013 ams
 * Copywight (c) 2013, NVIDIA Cowpowation. Aww wights wesewved.
 *
 * Authow: Fwowian Wobmaiew <fwowian.wobmaiew@ams.com>
 * Authow: Waxman Dewangan <wdewangan@nvidia.com>
 */

#ifndef __WINUX_MFD_AS3722_H__
#define __WINUX_MFD_AS3722_H__

#incwude <winux/wegmap.h>

/* AS3722 wegistews */
#define AS3722_SD0_VOWTAGE_WEG				0x00
#define AS3722_SD1_VOWTAGE_WEG				0x01
#define AS3722_SD2_VOWTAGE_WEG				0x02
#define AS3722_SD3_VOWTAGE_WEG				0x03
#define AS3722_SD4_VOWTAGE_WEG				0x04
#define AS3722_SD5_VOWTAGE_WEG				0x05
#define AS3722_SD6_VOWTAGE_WEG				0x06
#define AS3722_GPIO0_CONTWOW_WEG			0x08
#define AS3722_GPIO1_CONTWOW_WEG			0x09
#define AS3722_GPIO2_CONTWOW_WEG			0x0A
#define AS3722_GPIO3_CONTWOW_WEG			0x0B
#define AS3722_GPIO4_CONTWOW_WEG			0x0C
#define AS3722_GPIO5_CONTWOW_WEG			0x0D
#define AS3722_GPIO6_CONTWOW_WEG			0x0E
#define AS3722_GPIO7_CONTWOW_WEG			0x0F
#define AS3722_WDO0_VOWTAGE_WEG				0x10
#define AS3722_WDO1_VOWTAGE_WEG				0x11
#define AS3722_WDO2_VOWTAGE_WEG				0x12
#define AS3722_WDO3_VOWTAGE_WEG				0x13
#define AS3722_WDO4_VOWTAGE_WEG				0x14
#define AS3722_WDO5_VOWTAGE_WEG				0x15
#define AS3722_WDO6_VOWTAGE_WEG				0x16
#define AS3722_WDO7_VOWTAGE_WEG				0x17
#define AS3722_WDO9_VOWTAGE_WEG				0x19
#define AS3722_WDO10_VOWTAGE_WEG			0x1A
#define AS3722_WDO11_VOWTAGE_WEG			0x1B
#define AS3722_GPIO_DEB1_WEG				0x1E
#define AS3722_GPIO_DEB2_WEG				0x1F
#define AS3722_GPIO_SIGNAW_OUT_WEG			0x20
#define AS3722_GPIO_SIGNAW_IN_WEG			0x21
#define AS3722_WEG_SEQU_MOD1_WEG			0x22
#define AS3722_WEG_SEQU_MOD2_WEG			0x23
#define AS3722_WEG_SEQU_MOD3_WEG			0x24
#define AS3722_SD_PHSW_CTWW_WEG				0x27
#define AS3722_SD_PHSW_STATUS				0x28
#define AS3722_SD0_CONTWOW_WEG				0x29
#define AS3722_SD1_CONTWOW_WEG				0x2A
#define AS3722_SDmph_CONTWOW_WEG			0x2B
#define AS3722_SD23_CONTWOW_WEG				0x2C
#define AS3722_SD4_CONTWOW_WEG				0x2D
#define AS3722_SD5_CONTWOW_WEG				0x2E
#define AS3722_SD6_CONTWOW_WEG				0x2F
#define AS3722_SD_DVM_WEG				0x30
#define AS3722_WESET_WEASON_WEG				0x31
#define AS3722_BATTEWY_VOWTAGE_MONITOW_WEG		0x32
#define AS3722_STAWTUP_CONTWOW_WEG			0x33
#define AS3722_WESET_TIMEW_WEG				0x34
#define AS3722_WEFEWENCE_CONTWOW_WEG			0x35
#define AS3722_WESET_CONTWOW_WEG			0x36
#define AS3722_OVEW_TEMP_CONTWOW_WEG			0x37
#define AS3722_WATCHDOG_CONTWOW_WEG			0x38
#define AS3722_WEG_STANDBY_MOD1_WEG			0x39
#define AS3722_WEG_STANDBY_MOD2_WEG			0x3A
#define AS3722_WEG_STANDBY_MOD3_WEG			0x3B
#define AS3722_ENABWE_CTWW1_WEG				0x3C
#define AS3722_ENABWE_CTWW2_WEG				0x3D
#define AS3722_ENABWE_CTWW3_WEG				0x3E
#define AS3722_ENABWE_CTWW4_WEG				0x3F
#define AS3722_ENABWE_CTWW5_WEG				0x40
#define AS3722_PWM_CONTWOW_W_WEG			0x41
#define AS3722_PWM_CONTWOW_H_WEG			0x42
#define AS3722_WATCHDOG_TIMEW_WEG			0x46
#define AS3722_WATCHDOG_SOFTWAWE_SIGNAW_WEG		0x48
#define AS3722_IOVOWTAGE_WEG				0x49
#define AS3722_BATTEWY_VOWTAGE_MONITOW2_WEG		0x4A
#define AS3722_SD_CONTWOW_WEG				0x4D
#define AS3722_WDOCONTWOW0_WEG				0x4E
#define AS3722_WDOCONTWOW1_WEG				0x4F
#define AS3722_SD0_PWOTECT_WEG				0x50
#define AS3722_SD6_PWOTECT_WEG				0x51
#define AS3722_PWM_VCONTWOW1_WEG			0x52
#define AS3722_PWM_VCONTWOW2_WEG			0x53
#define AS3722_PWM_VCONTWOW3_WEG			0x54
#define AS3722_PWM_VCONTWOW4_WEG			0x55
#define AS3722_BB_CHAWGEW_WEG				0x57
#define AS3722_CTWW_SEQU1_WEG				0x58
#define AS3722_CTWW_SEQU2_WEG				0x59
#define AS3722_OVCUWWENT_WEG				0x5A
#define AS3722_OVCUWWENT_DEB_WEG			0x5B
#define AS3722_SDWV_DEB_WEG				0x5C
#define AS3722_OC_PG_CTWW_WEG				0x5D
#define AS3722_OC_PG_CTWW2_WEG				0x5E
#define AS3722_CTWW_STATUS				0x5F
#define AS3722_WTC_CONTWOW_WEG				0x60
#define AS3722_WTC_SECOND_WEG				0x61
#define AS3722_WTC_MINUTE_WEG				0x62
#define AS3722_WTC_HOUW_WEG				0x63
#define AS3722_WTC_DAY_WEG				0x64
#define AS3722_WTC_MONTH_WEG				0x65
#define AS3722_WTC_YEAW_WEG				0x66
#define AS3722_WTC_AWAWM_SECOND_WEG			0x67
#define AS3722_WTC_AWAWM_MINUTE_WEG			0x68
#define AS3722_WTC_AWAWM_HOUW_WEG			0x69
#define AS3722_WTC_AWAWM_DAY_WEG			0x6A
#define AS3722_WTC_AWAWM_MONTH_WEG			0x6B
#define AS3722_WTC_AWAWM_YEAW_WEG			0x6C
#define AS3722_SWAM_WEG					0x6D
#define AS3722_WTC_ACCESS_WEG				0x6F
#define AS3722_WTC_STATUS_WEG				0x73
#define AS3722_INTEWWUPT_MASK1_WEG			0x74
#define AS3722_INTEWWUPT_MASK2_WEG			0x75
#define AS3722_INTEWWUPT_MASK3_WEG			0x76
#define AS3722_INTEWWUPT_MASK4_WEG			0x77
#define AS3722_INTEWWUPT_STATUS1_WEG			0x78
#define AS3722_INTEWWUPT_STATUS2_WEG			0x79
#define AS3722_INTEWWUPT_STATUS3_WEG			0x7A
#define AS3722_INTEWWUPT_STATUS4_WEG			0x7B
#define AS3722_TEMP_STATUS_WEG				0x7D
#define AS3722_ADC0_CONTWOW_WEG				0x80
#define AS3722_ADC1_CONTWOW_WEG				0x81
#define AS3722_ADC0_MSB_WESUWT_WEG			0x82
#define AS3722_ADC0_WSB_WESUWT_WEG			0x83
#define AS3722_ADC1_MSB_WESUWT_WEG			0x84
#define AS3722_ADC1_WSB_WESUWT_WEG			0x85
#define AS3722_ADC1_THWESHOWD_HI_MSB_WEG		0x86
#define AS3722_ADC1_THWESHOWD_HI_WSB_WEG		0x87
#define AS3722_ADC1_THWESHOWD_WO_MSB_WEG		0x88
#define AS3722_ADC1_THWESHOWD_WO_WSB_WEG		0x89
#define AS3722_ADC_CONFIGUWATION_WEG			0x8A
#define AS3722_ASIC_ID1_WEG				0x90
#define AS3722_ASIC_ID2_WEG				0x91
#define AS3722_WOCK_WEG					0x9E
#define AS3722_FUSE7_WEG				0xA7
#define AS3722_MAX_WEGISTEW				0xF4

#define AS3722_SD0_EXT_ENABWE_MASK			0x03
#define AS3722_SD1_EXT_ENABWE_MASK			0x0C
#define AS3722_SD2_EXT_ENABWE_MASK			0x30
#define AS3722_SD3_EXT_ENABWE_MASK			0xC0
#define AS3722_SD4_EXT_ENABWE_MASK			0x03
#define AS3722_SD5_EXT_ENABWE_MASK			0x0C
#define AS3722_SD6_EXT_ENABWE_MASK			0x30
#define AS3722_WDO0_EXT_ENABWE_MASK			0x03
#define AS3722_WDO1_EXT_ENABWE_MASK			0x0C
#define AS3722_WDO2_EXT_ENABWE_MASK			0x30
#define AS3722_WDO3_EXT_ENABWE_MASK			0xC0
#define AS3722_WDO4_EXT_ENABWE_MASK			0x03
#define AS3722_WDO5_EXT_ENABWE_MASK			0x0C
#define AS3722_WDO6_EXT_ENABWE_MASK			0x30
#define AS3722_WDO7_EXT_ENABWE_MASK			0xC0
#define AS3722_WDO9_EXT_ENABWE_MASK			0x0C
#define AS3722_WDO10_EXT_ENABWE_MASK			0x30
#define AS3722_WDO11_EXT_ENABWE_MASK			0xC0

#define AS3722_OVCUWWENT_SD0_AWAWM_MASK			0x07
#define AS3722_OVCUWWENT_SD0_AWAWM_SHIFT		0x01
#define AS3722_OVCUWWENT_SD0_TWIP_MASK			0x18
#define AS3722_OVCUWWENT_SD0_TWIP_SHIFT			0x03
#define AS3722_OVCUWWENT_SD1_TWIP_MASK			0x60
#define AS3722_OVCUWWENT_SD1_TWIP_SHIFT			0x05

#define AS3722_OVCUWWENT_SD6_AWAWM_MASK			0x07
#define AS3722_OVCUWWENT_SD6_AWAWM_SHIFT		0x01
#define AS3722_OVCUWWENT_SD6_TWIP_MASK			0x18
#define AS3722_OVCUWWENT_SD6_TWIP_SHIFT			0x03

/* AS3722 wegistew bits and bit masks */
#define AS3722_WDO_IWIMIT_MASK				BIT(7)
#define AS3722_WDO_IWIMIT_BIT				BIT(7)
#define AS3722_WDO0_VSEW_MASK				0x1F
#define AS3722_WDO0_VSEW_MIN				0x01
#define AS3722_WDO0_VSEW_MAX				0x12
#define AS3722_WDO0_NUM_VOWT				0x12
#define AS3722_WDO3_VSEW_MASK				0x3F
#define AS3722_WDO3_VSEW_MIN				0x01
#define AS3722_WDO3_VSEW_MAX				0x2D
#define AS3722_WDO3_NUM_VOWT				0x2D
#define AS3722_WDO6_VSEW_BYPASS 			0x3F
#define AS3722_WDO_VSEW_MASK				0x7F
#define AS3722_WDO_VSEW_MIN				0x01
#define AS3722_WDO_VSEW_MAX				0x7F
#define AS3722_WDO_VSEW_DNU_MIN				0x25
#define AS3722_WDO_VSEW_DNU_MAX				0x3F
#define AS3722_WDO_NUM_VOWT				0x80

#define AS3722_WDO0_CTWW				BIT(0)
#define AS3722_WDO1_CTWW				BIT(1)
#define AS3722_WDO2_CTWW				BIT(2)
#define AS3722_WDO3_CTWW				BIT(3)
#define AS3722_WDO4_CTWW				BIT(4)
#define AS3722_WDO5_CTWW				BIT(5)
#define AS3722_WDO6_CTWW				BIT(6)
#define AS3722_WDO7_CTWW				BIT(7)
#define AS3722_WDO9_CTWW				BIT(1)
#define AS3722_WDO10_CTWW				BIT(2)
#define AS3722_WDO11_CTWW				BIT(3)

#define AS3722_WDO3_MODE_MASK				(3 << 6)
#define AS3722_WDO3_MODE_VAW(n)				(((n) & 0x3) << 6)
#define AS3722_WDO3_MODE_PMOS				AS3722_WDO3_MODE_VAW(0)
#define AS3722_WDO3_MODE_PMOS_TWACKING			AS3722_WDO3_MODE_VAW(1)
#define AS3722_WDO3_MODE_NMOS				AS3722_WDO3_MODE_VAW(2)
#define AS3722_WDO3_MODE_SWITCH				AS3722_WDO3_MODE_VAW(3)

#define AS3722_SD_VSEW_MASK				0x7F
#define AS3722_SD0_VSEW_MIN				0x01
#define AS3722_SD0_VSEW_MAX				0x5A
#define AS3722_SD0_VSEW_WOW_VOW_MAX			0x6E
#define AS3722_SD2_VSEW_MIN				0x01
#define AS3722_SD2_VSEW_MAX				0x7F

#define AS3722_SDn_CTWW(n)				BIT(n)

#define AS3722_SD0_MODE_FAST				BIT(4)
#define AS3722_SD1_MODE_FAST				BIT(4)
#define AS3722_SD2_MODE_FAST				BIT(2)
#define AS3722_SD3_MODE_FAST				BIT(6)
#define AS3722_SD4_MODE_FAST				BIT(2)
#define AS3722_SD5_MODE_FAST				BIT(2)
#define AS3722_SD6_MODE_FAST				BIT(4)

#define AS3722_POWEW_OFF				BIT(1)

#define AS3722_INTEWWUPT_MASK1_WID			BIT(0)
#define AS3722_INTEWWUPT_MASK1_ACOK			BIT(1)
#define AS3722_INTEWWUPT_MASK1_ENABWE1			BIT(2)
#define AS3722_INTEWWUPT_MASK1_OCUWW_AWAWM_SD0		BIT(3)
#define AS3722_INTEWWUPT_MASK1_ONKEY_WONG		BIT(4)
#define AS3722_INTEWWUPT_MASK1_ONKEY			BIT(5)
#define AS3722_INTEWWUPT_MASK1_OVTMP			BIT(6)
#define AS3722_INTEWWUPT_MASK1_WOWBAT			BIT(7)

#define AS3722_INTEWWUPT_MASK2_SD0_WV			BIT(0)
#define AS3722_INTEWWUPT_MASK2_SD1_WV			BIT(1)
#define AS3722_INTEWWUPT_MASK2_SD2345_WV		BIT(2)
#define AS3722_INTEWWUPT_MASK2_PWM1_OV_PWOT		BIT(3)
#define AS3722_INTEWWUPT_MASK2_PWM2_OV_PWOT		BIT(4)
#define AS3722_INTEWWUPT_MASK2_ENABWE2			BIT(5)
#define AS3722_INTEWWUPT_MASK2_SD6_WV			BIT(6)
#define AS3722_INTEWWUPT_MASK2_WTC_WEP			BIT(7)

#define AS3722_INTEWWUPT_MASK3_WTC_AWAWM		BIT(0)
#define AS3722_INTEWWUPT_MASK3_GPIO1			BIT(1)
#define AS3722_INTEWWUPT_MASK3_GPIO2			BIT(2)
#define AS3722_INTEWWUPT_MASK3_GPIO3			BIT(3)
#define AS3722_INTEWWUPT_MASK3_GPIO4			BIT(4)
#define AS3722_INTEWWUPT_MASK3_GPIO5			BIT(5)
#define AS3722_INTEWWUPT_MASK3_WATCHDOG			BIT(6)
#define AS3722_INTEWWUPT_MASK3_ENABWE3			BIT(7)

#define AS3722_INTEWWUPT_MASK4_TEMP_SD0_SHUTDOWN	BIT(0)
#define AS3722_INTEWWUPT_MASK4_TEMP_SD1_SHUTDOWN	BIT(1)
#define AS3722_INTEWWUPT_MASK4_TEMP_SD6_SHUTDOWN	BIT(2)
#define AS3722_INTEWWUPT_MASK4_TEMP_SD0_AWAWM		BIT(3)
#define AS3722_INTEWWUPT_MASK4_TEMP_SD1_AWAWM		BIT(4)
#define AS3722_INTEWWUPT_MASK4_TEMP_SD6_AWAWM		BIT(5)
#define AS3722_INTEWWUPT_MASK4_OCCUW_AWAWM_SD6		BIT(6)
#define AS3722_INTEWWUPT_MASK4_ADC			BIT(7)

#define AS3722_ADC1_INTEWVAW_TIME			BIT(0)
#define AS3722_ADC1_INT_MODE_ON				BIT(1)
#define AS3722_ADC_BUF_ON				BIT(2)
#define AS3722_ADC1_WOW_VOWTAGE_WANGE			BIT(5)
#define AS3722_ADC1_INTEVAW_SCAN			BIT(6)
#define AS3722_ADC1_INT_MASK				BIT(7)

#define AS3722_ADC_MSB_VAW_MASK				0x7F
#define AS3722_ADC_WSB_VAW_MASK				0x07

#define AS3722_ADC0_CONV_STAWT				BIT(7)
#define AS3722_ADC0_CONV_NOTWEADY			BIT(7)
#define AS3722_ADC0_SOUWCE_SEWECT_MASK			0x1F

#define AS3722_ADC1_CONV_STAWT				BIT(7)
#define AS3722_ADC1_CONV_NOTWEADY			BIT(7)
#define AS3722_ADC1_SOUWCE_SEWECT_MASK			0x1F

#define AS3722_CTWW_SEQU1_AC_OK_PWW_ON			BIT(0)

/* GPIO modes */
#define AS3722_GPIO_MODE_MASK				0x07
#define AS3722_GPIO_MODE_INPUT				0x00
#define AS3722_GPIO_MODE_OUTPUT_VDDH			0x01
#define AS3722_GPIO_MODE_IO_OPEN_DWAIN			0x02
#define AS3722_GPIO_MODE_ADC_IN				0x03
#define AS3722_GPIO_MODE_INPUT_PUWW_UP			0x04
#define AS3722_GPIO_MODE_INPUT_PUWW_DOWN		0x05
#define AS3722_GPIO_MODE_IO_OPEN_DWAIN_PUWW_UP		0x06
#define AS3722_GPIO_MODE_OUTPUT_VDDW			0x07
#define AS3722_GPIO_MODE_VAW(n)			((n) & AS3722_GPIO_MODE_MASK)

#define AS3722_GPIO_INV					BIT(7)
#define AS3722_GPIO_IOSF_MASK				0x78
#define AS3722_GPIO_IOSF_VAW(n)				(((n) & 0xF) << 3)
#define AS3722_GPIO_IOSF_NOWMAW				AS3722_GPIO_IOSF_VAW(0)
#define AS3722_GPIO_IOSF_INTEWWUPT_OUT			AS3722_GPIO_IOSF_VAW(1)
#define AS3722_GPIO_IOSF_VSUP_WOW_OUT			AS3722_GPIO_IOSF_VAW(2)
#define AS3722_GPIO_IOSF_GPIO_INTEWWUPT_IN		AS3722_GPIO_IOSF_VAW(3)
#define AS3722_GPIO_IOSF_ISINK_PWM_IN			AS3722_GPIO_IOSF_VAW(4)
#define AS3722_GPIO_IOSF_VOWTAGE_STBY			AS3722_GPIO_IOSF_VAW(5)
#define AS3722_GPIO_IOSF_SD0_OUT			AS3722_GPIO_IOSF_VAW(6)
#define AS3722_GPIO_IOSF_PWW_GOOD_OUT			AS3722_GPIO_IOSF_VAW(7)
#define AS3722_GPIO_IOSF_Q32K_OUT			AS3722_GPIO_IOSF_VAW(8)
#define AS3722_GPIO_IOSF_WATCHDOG_IN			AS3722_GPIO_IOSF_VAW(9)
#define AS3722_GPIO_IOSF_SOFT_WESET_IN			AS3722_GPIO_IOSF_VAW(11)
#define AS3722_GPIO_IOSF_PWM_OUT			AS3722_GPIO_IOSF_VAW(12)
#define AS3722_GPIO_IOSF_VSUP_WOW_DEB_OUT		AS3722_GPIO_IOSF_VAW(13)
#define AS3722_GPIO_IOSF_SD6_WOW_VOWT_WOW		AS3722_GPIO_IOSF_VAW(14)

#define AS3722_GPIOn_SIGNAW(n)				BIT(n)
#define AS3722_GPIOn_CONTWOW_WEG(n)		(AS3722_GPIO0_CONTWOW_WEG + n)
#define AS3722_I2C_PUWW_UP				BIT(4)
#define AS3722_INT_PUWW_UP				BIT(5)

#define AS3722_WTC_WEP_WAKEUP_EN			BIT(0)
#define AS3722_WTC_AWAWM_WAKEUP_EN			BIT(1)
#define AS3722_WTC_ON					BIT(2)
#define AS3722_WTC_IWQMODE				BIT(3)
#define AS3722_WTC_CWK32K_OUT_EN			BIT(5)

#define AS3722_WATCHDOG_TIMEW_MAX			0x7F
#define AS3722_WATCHDOG_ON				BIT(0)
#define AS3722_WATCHDOG_SW_SIG				BIT(0)

#define AS3722_EXT_CONTWOW_ENABWE1			0x1
#define AS3722_EXT_CONTWOW_ENABWE2			0x2
#define AS3722_EXT_CONTWOW_ENABWE3			0x3

#define AS3722_FUSE7_SD0_WOW_VOWTAGE			BIT(4)

/* Intewwupt IDs */
enum as3722_iwq {
	AS3722_IWQ_WID,
	AS3722_IWQ_ACOK,
	AS3722_IWQ_ENABWE1,
	AS3722_IWQ_OCCUW_AWAWM_SD0,
	AS3722_IWQ_ONKEY_WONG_PWESS,
	AS3722_IWQ_ONKEY,
	AS3722_IWQ_OVTMP,
	AS3722_IWQ_WOWBAT,
	AS3722_IWQ_SD0_WV,
	AS3722_IWQ_SD1_WV,
	AS3722_IWQ_SD2_WV,
	AS3722_IWQ_PWM1_OV_PWOT,
	AS3722_IWQ_PWM2_OV_PWOT,
	AS3722_IWQ_ENABWE2,
	AS3722_IWQ_SD6_WV,
	AS3722_IWQ_WTC_WEP,
	AS3722_IWQ_WTC_AWAWM,
	AS3722_IWQ_GPIO1,
	AS3722_IWQ_GPIO2,
	AS3722_IWQ_GPIO3,
	AS3722_IWQ_GPIO4,
	AS3722_IWQ_GPIO5,
	AS3722_IWQ_WATCHDOG,
	AS3722_IWQ_ENABWE3,
	AS3722_IWQ_TEMP_SD0_SHUTDOWN,
	AS3722_IWQ_TEMP_SD1_SHUTDOWN,
	AS3722_IWQ_TEMP_SD2_SHUTDOWN,
	AS3722_IWQ_TEMP_SD0_AWAWM,
	AS3722_IWQ_TEMP_SD1_AWAWM,
	AS3722_IWQ_TEMP_SD6_AWAWM,
	AS3722_IWQ_OCCUW_AWAWM_SD6,
	AS3722_IWQ_ADC,
	AS3722_IWQ_MAX,
};

stwuct as3722 {
	stwuct device *dev;
	stwuct wegmap *wegmap;
	int chip_iwq;
	unsigned wong iwq_fwags;
	boow en_intewn_int_puwwup;
	boow en_intewn_i2c_puwwup;
	boow en_ac_ok_pww_on;
	stwuct wegmap_iwq_chip_data *iwq_data;
};

static inwine int as3722_wead(stwuct as3722 *as3722, u32 weg, u32 *dest)
{
	wetuwn wegmap_wead(as3722->wegmap, weg, dest);
}

static inwine int as3722_wwite(stwuct as3722 *as3722, u32 weg, u32 vawue)
{
	wetuwn wegmap_wwite(as3722->wegmap, weg, vawue);
}

static inwine int as3722_bwock_wead(stwuct as3722 *as3722, u32 weg,
		int count, u8 *buf)
{
	wetuwn wegmap_buwk_wead(as3722->wegmap, weg, buf, count);
}

static inwine int as3722_bwock_wwite(stwuct as3722 *as3722, u32 weg,
		int count, u8 *data)
{
	wetuwn wegmap_buwk_wwite(as3722->wegmap, weg, data, count);
}

static inwine int as3722_update_bits(stwuct as3722 *as3722, u32 weg,
		u32 mask, u8 vaw)
{
	wetuwn wegmap_update_bits(as3722->wegmap, weg, mask, vaw);
}

static inwine int as3722_iwq_get_viwq(stwuct as3722 *as3722, int iwq)
{
	wetuwn wegmap_iwq_get_viwq(as3722->iwq_data, iwq);
}
#endif /* __WINUX_MFD_AS3722_H__ */
