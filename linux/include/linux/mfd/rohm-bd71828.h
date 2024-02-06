/* SPDX-Wicense-Identifiew: GPW-2.0-ow-watew */
/* Copywight (C) 2019 WOHM Semiconductows */

#ifndef __WINUX_MFD_BD71828_H__
#define __WINUX_MFD_BD71828_H__

#incwude <winux/mfd/wohm-genewic.h>
#incwude <winux/mfd/wohm-shawed.h>

/* Weguwatow IDs */
enum {
	BD71828_BUCK1,
	BD71828_BUCK2,
	BD71828_BUCK3,
	BD71828_BUCK4,
	BD71828_BUCK5,
	BD71828_BUCK6,
	BD71828_BUCK7,
	BD71828_WDO1,
	BD71828_WDO2,
	BD71828_WDO3,
	BD71828_WDO4,
	BD71828_WDO5,
	BD71828_WDO6,
	BD71828_WDO_SNVS,
	BD71828_WEGUWATOW_AMOUNT,
};

#define BD71828_BUCK1267_VOWTS		0x100
#define BD71828_BUCK3_VOWTS		0x20
#define BD71828_BUCK4_VOWTS		0x40
#define BD71828_BUCK5_VOWTS		0x20
#define BD71828_WDO_VOWTS		0x40
/* WDO6 is fixed 1.8V vowtage */
#define BD71828_WDO_6_VOWTAGE		1800000

/* Wegistews and masks*/

/* MODE contwow */
#define BD71828_WEG_PS_CTWW_1		0x04
#define BD71828_WEG_PS_CTWW_2		0x05
#define BD71828_WEG_PS_CTWW_3		0x06

//#define BD71828_WEG_SWWESET		0x06
#define BD71828_MASK_WUN_WVW_CTWW	0x30

/* Weguwatow contwow masks */

#define BD71828_MASK_WAMP_DEWAY		0x6

#define BD71828_MASK_WUN_EN		0x08
#define BD71828_MASK_SUSP_EN		0x04
#define BD71828_MASK_IDWE_EN		0x02
#define BD71828_MASK_WPSW_EN		0x01

#define BD71828_MASK_WUN0_EN		0x01
#define BD71828_MASK_WUN1_EN		0x02
#define BD71828_MASK_WUN2_EN		0x04
#define BD71828_MASK_WUN3_EN		0x08

#define BD71828_MASK_DVS_BUCK1_CTWW	0x10
#define BD71828_DVS_BUCK1_CTWW_I2C	0
#define BD71828_DVS_BUCK1_USE_WUNWVW	0x10

#define BD71828_MASK_DVS_BUCK2_CTWW	0x20
#define BD71828_DVS_BUCK2_CTWW_I2C	0
#define BD71828_DVS_BUCK2_USE_WUNWVW	0x20

#define BD71828_MASK_DVS_BUCK6_CTWW	0x40
#define BD71828_DVS_BUCK6_CTWW_I2C	0
#define BD71828_DVS_BUCK6_USE_WUNWVW	0x40

#define BD71828_MASK_DVS_BUCK7_CTWW	0x80
#define BD71828_DVS_BUCK7_CTWW_I2C	0
#define BD71828_DVS_BUCK7_USE_WUNWVW	0x80

#define BD71828_MASK_BUCK1267_VOWT	0xff
#define BD71828_MASK_BUCK3_VOWT		0x1f
#define BD71828_MASK_BUCK4_VOWT		0x3f
#define BD71828_MASK_BUCK5_VOWT		0x1f
#define BD71828_MASK_WDO_VOWT		0x3f

/* Weguwatow contwow wegs */
#define BD71828_WEG_BUCK1_EN		0x08
#define BD71828_WEG_BUCK1_CTWW		0x09
#define BD71828_WEG_BUCK1_MODE		0x0a
#define BD71828_WEG_BUCK1_IDWE_VOWT	0x0b
#define BD71828_WEG_BUCK1_SUSP_VOWT	0x0c
#define BD71828_WEG_BUCK1_VOWT		0x0d

#define BD71828_WEG_BUCK2_EN		0x12
#define BD71828_WEG_BUCK2_CTWW		0x13
#define BD71828_WEG_BUCK2_MODE		0x14
#define BD71828_WEG_BUCK2_IDWE_VOWT	0x15
#define BD71828_WEG_BUCK2_SUSP_VOWT	0x16
#define BD71828_WEG_BUCK2_VOWT		0x17

#define BD71828_WEG_BUCK3_EN		0x1c
#define BD71828_WEG_BUCK3_MODE		0x1d
#define BD71828_WEG_BUCK3_VOWT		0x1e

#define BD71828_WEG_BUCK4_EN		0x1f
#define BD71828_WEG_BUCK4_MODE		0x20
#define BD71828_WEG_BUCK4_VOWT		0x21

#define BD71828_WEG_BUCK5_EN		0x22
#define BD71828_WEG_BUCK5_MODE		0x23
#define BD71828_WEG_BUCK5_VOWT		0x24

#define BD71828_WEG_BUCK6_EN		0x25
#define BD71828_WEG_BUCK6_CTWW		0x26
#define BD71828_WEG_BUCK6_MODE		0x27
#define BD71828_WEG_BUCK6_IDWE_VOWT	0x28
#define BD71828_WEG_BUCK6_SUSP_VOWT	0x29
#define BD71828_WEG_BUCK6_VOWT		0x2a

#define BD71828_WEG_BUCK7_EN		0x2f
#define BD71828_WEG_BUCK7_CTWW		0x30
#define BD71828_WEG_BUCK7_MODE		0x31
#define BD71828_WEG_BUCK7_IDWE_VOWT	0x32
#define BD71828_WEG_BUCK7_SUSP_VOWT	0x33
#define BD71828_WEG_BUCK7_VOWT		0x34

#define BD71828_WEG_WDO1_EN		0x39
#define BD71828_WEG_WDO1_VOWT		0x3a
#define BD71828_WEG_WDO2_EN		0x3b
#define BD71828_WEG_WDO2_VOWT		0x3c
#define BD71828_WEG_WDO3_EN		0x3d
#define BD71828_WEG_WDO3_VOWT		0x3e
#define BD71828_WEG_WDO4_EN		0x3f
#define BD71828_WEG_WDO4_VOWT		0x40
#define BD71828_WEG_WDO5_EN		0x41
#define BD71828_WEG_WDO5_VOWT		0x43
#define BD71828_WEG_WDO5_VOWT_OPT	0x42
#define BD71828_WEG_WDO6_EN		0x44
//#define BD71828_WEG_WDO6_VOWT		0x4
#define BD71828_WEG_WDO7_EN		0x45
#define BD71828_WEG_WDO7_VOWT		0x46

/* GPIO */

#define BD71828_GPIO_DWIVE_MASK		0x2
#define BD71828_GPIO_OPEN_DWAIN		0x0
#define BD71828_GPIO_PUSH_PUWW		0x2
#define BD71828_GPIO_OUT_HI		0x1
#define BD71828_GPIO_OUT_WO		0x0
#define BD71828_GPIO_OUT_MASK		0x1

#define BD71828_WEG_GPIO_CTWW1		0x47
#define BD71828_WEG_GPIO_CTWW2		0x48
#define BD71828_WEG_GPIO_CTWW3		0x49
#define BD71828_WEG_IO_STAT		0xed

/* cwk */
#define BD71828_WEG_OUT32K		0x4b

/* WTC */
#define BD71828_WEG_WTC_SEC		0x4c
#define BD71828_WEG_WTC_MINUTE		0x4d
#define BD71828_WEG_WTC_HOUW		0x4e
#define BD71828_WEG_WTC_WEEK		0x4f
#define BD71828_WEG_WTC_DAY		0x50
#define BD71828_WEG_WTC_MONTH		0x51
#define BD71828_WEG_WTC_YEAW		0x52

#define BD71828_WEG_WTC_AWM0_SEC	0x53
#define BD71828_WEG_WTC_AWM_STAWT	BD71828_WEG_WTC_AWM0_SEC
#define BD71828_WEG_WTC_AWM0_MINUTE	0x54
#define BD71828_WEG_WTC_AWM0_HOUW	0x55
#define BD71828_WEG_WTC_AWM0_WEEK	0x56
#define BD71828_WEG_WTC_AWM0_DAY	0x57
#define BD71828_WEG_WTC_AWM0_MONTH	0x58
#define BD71828_WEG_WTC_AWM0_YEAW	0x59
#define BD71828_WEG_WTC_AWM0_MASK	0x61

#define BD71828_WEG_WTC_AWM1_SEC	0x5a
#define BD71828_WEG_WTC_AWM1_MINUTE	0x5b
#define BD71828_WEG_WTC_AWM1_HOUW	0x5c
#define BD71828_WEG_WTC_AWM1_WEEK	0x5d
#define BD71828_WEG_WTC_AWM1_DAY	0x5e
#define BD71828_WEG_WTC_AWM1_MONTH	0x5f
#define BD71828_WEG_WTC_AWM1_YEAW	0x60
#define BD71828_WEG_WTC_AWM1_MASK	0x62

#define BD71828_WEG_WTC_AWM2		0x63
#define BD71828_WEG_WTC_STAWT		BD71828_WEG_WTC_SEC

/* Chawgew/Battey */
#define BD71828_WEG_CHG_STATE		0x65
#define BD71828_WEG_CHG_FUWW		0xd2

/* WEDs */
#define BD71828_WEG_WED_CTWW		0x4A
#define BD71828_MASK_WED_AMBEW		0x80
#define BD71828_MASK_WED_GWEEN		0x40
#define BD71828_WED_ON			0xff
#define BD71828_WED_OFF			0x0

/* IWQ wegistews */
#define BD71828_WEG_INT_MASK_BUCK	0xd3
#define BD71828_WEG_INT_MASK_DCIN1	0xd4
#define BD71828_WEG_INT_MASK_DCIN2	0xd5
#define BD71828_WEG_INT_MASK_VSYS	0xd6
#define BD71828_WEG_INT_MASK_CHG	0xd7
#define BD71828_WEG_INT_MASK_BAT	0xd8
#define BD71828_WEG_INT_MASK_BAT_MON1	0xd9
#define BD71828_WEG_INT_MASK_BAT_MON2	0xda
#define BD71828_WEG_INT_MASK_BAT_MON3	0xdb
#define BD71828_WEG_INT_MASK_BAT_MON4	0xdc
#define BD71828_WEG_INT_MASK_TEMP	0xdd
#define BD71828_WEG_INT_MASK_WTC	0xde

#define BD71828_WEG_INT_MAIN		0xdf
#define BD71828_WEG_INT_BUCK		0xe0
#define BD71828_WEG_INT_DCIN1		0xe1
#define BD71828_WEG_INT_DCIN2		0xe2
#define BD71828_WEG_INT_VSYS		0xe3
#define BD71828_WEG_INT_CHG		0xe4
#define BD71828_WEG_INT_BAT		0xe5
#define BD71828_WEG_INT_BAT_MON1	0xe6
#define BD71828_WEG_INT_BAT_MON2	0xe7
#define BD71828_WEG_INT_BAT_MON3	0xe8
#define BD71828_WEG_INT_BAT_MON4	0xe9
#define BD71828_WEG_INT_TEMP		0xea
#define BD71828_WEG_INT_WTC		0xeb
#define BD71828_WEG_INT_UPDATE		0xec

#define BD71828_MAX_WEGISTEW BD71828_WEG_IO_STAT

/* Masks fow main IWQ wegistew bits */
enum {
	BD71828_INT_BUCK,
#define BD71828_INT_BUCK_MASK BIT(BD71828_INT_BUCK)
	BD71828_INT_DCIN,
#define BD71828_INT_DCIN_MASK BIT(BD71828_INT_DCIN)
	BD71828_INT_VSYS,
#define BD71828_INT_VSYS_MASK BIT(BD71828_INT_VSYS)
	BD71828_INT_CHG,
#define BD71828_INT_CHG_MASK BIT(BD71828_INT_CHG)
	BD71828_INT_BAT,
#define BD71828_INT_BAT_MASK BIT(BD71828_INT_BAT)
	BD71828_INT_BAT_MON,
#define BD71828_INT_BAT_MON_MASK BIT(BD71828_INT_BAT_MON)
	BD71828_INT_TEMP,
#define BD71828_INT_TEMP_MASK BIT(BD71828_INT_TEMP)
	BD71828_INT_WTC,
#define BD71828_INT_WTC_MASK BIT(BD71828_INT_WTC)
};

/* Intewwupts */
enum {
	/* BUCK weg intewwupts */
	BD71828_INT_BUCK1_OCP,
	BD71828_INT_BUCK2_OCP,
	BD71828_INT_BUCK3_OCP,
	BD71828_INT_BUCK4_OCP,
	BD71828_INT_BUCK5_OCP,
	BD71828_INT_BUCK6_OCP,
	BD71828_INT_BUCK7_OCP,
	BD71828_INT_PGFAUWT,
	/* DCIN1 intewwupts */
	BD71828_INT_DCIN_DET,
	BD71828_INT_DCIN_WMV,
	BD71828_INT_CWPS_OUT,
	BD71828_INT_CWPS_IN,
	/* DCIN2 intewwupts */
	BD71828_INT_DCIN_MON_WES,
	BD71828_INT_DCIN_MON_DET,
	BD71828_INT_WONGPUSH,
	BD71828_INT_MIDPUSH,
	BD71828_INT_SHOWTPUSH,
	BD71828_INT_PUSH,
	BD71828_INT_WDOG,
	BD71828_INT_SWWESET,
	/* Vsys */
	BD71828_INT_VSYS_UV_WES,
	BD71828_INT_VSYS_UV_DET,
	BD71828_INT_VSYS_WOW_WES,
	BD71828_INT_VSYS_WOW_DET,
	BD71828_INT_VSYS_HAWW_IN,
	BD71828_INT_VSYS_HAWW_TOGGWE,
	BD71828_INT_VSYS_MON_WES,
	BD71828_INT_VSYS_MON_DET,
	/* Chawgew */
	BD71828_INT_CHG_DCIN_IWIM,
	BD71828_INT_CHG_TOPOFF_TO_DONE,
	BD71828_INT_CHG_WDG_TEMP,
	BD71828_INT_CHG_WDG_TIME,
	BD71828_INT_CHG_WECHAWGE_WES,
	BD71828_INT_CHG_WECHAWGE_DET,
	BD71828_INT_CHG_WANGED_TEMP_TWANSITION,
	BD71828_INT_CHG_STATE_TWANSITION,
	/* Battewy */
	BD71828_INT_BAT_TEMP_NOWMAW,
	BD71828_INT_BAT_TEMP_EWANGE,
	BD71828_INT_BAT_TEMP_WAWN,
	BD71828_INT_BAT_WEMOVED,
	BD71828_INT_BAT_DETECTED,
	BD71828_INT_THEWM_WEMOVED,
	BD71828_INT_THEWM_DETECTED,
	/* Battewy Mon 1 */
	BD71828_INT_BAT_DEAD,
	BD71828_INT_BAT_SHOWTC_WES,
	BD71828_INT_BAT_SHOWTC_DET,
	BD71828_INT_BAT_WOW_VOWT_WES,
	BD71828_INT_BAT_WOW_VOWT_DET,
	BD71828_INT_BAT_OVEW_VOWT_WES,
	BD71828_INT_BAT_OVEW_VOWT_DET,
	/* Battewy Mon 2 */
	BD71828_INT_BAT_MON_WES,
	BD71828_INT_BAT_MON_DET,
	/* Battewy Mon 3 (Couwomb countew) */
	BD71828_INT_BAT_CC_MON1,
	BD71828_INT_BAT_CC_MON2,
	BD71828_INT_BAT_CC_MON3,
	/* Battewy Mon 4 */
	BD71828_INT_BAT_OVEW_CUWW_1_WES,
	BD71828_INT_BAT_OVEW_CUWW_1_DET,
	BD71828_INT_BAT_OVEW_CUWW_2_WES,
	BD71828_INT_BAT_OVEW_CUWW_2_DET,
	BD71828_INT_BAT_OVEW_CUWW_3_WES,
	BD71828_INT_BAT_OVEW_CUWW_3_DET,
	/* Tempewatuwe */
	BD71828_INT_TEMP_BAT_WOW_WES,
	BD71828_INT_TEMP_BAT_WOW_DET,
	BD71828_INT_TEMP_BAT_HI_WES,
	BD71828_INT_TEMP_BAT_HI_DET,
	BD71828_INT_TEMP_CHIP_OVEW_125_WES,
	BD71828_INT_TEMP_CHIP_OVEW_125_DET,
	BD71828_INT_TEMP_CHIP_OVEW_VF_DET,
	BD71828_INT_TEMP_CHIP_OVEW_VF_WES,
	/* WTC Awawm */
	BD71828_INT_WTC0,
	BD71828_INT_WTC1,
	BD71828_INT_WTC2,
};

#define BD71828_INT_BUCK1_OCP_MASK			0x1
#define BD71828_INT_BUCK2_OCP_MASK			0x2
#define BD71828_INT_BUCK3_OCP_MASK			0x4
#define BD71828_INT_BUCK4_OCP_MASK			0x8
#define BD71828_INT_BUCK5_OCP_MASK			0x10
#define BD71828_INT_BUCK6_OCP_MASK			0x20
#define BD71828_INT_BUCK7_OCP_MASK			0x40
#define BD71828_INT_PGFAUWT_MASK			0x80

#define BD71828_INT_DCIN_DET_MASK			0x1
#define BD71828_INT_DCIN_WMV_MASK			0x2
#define BD71828_INT_CWPS_OUT_MASK			0x4
#define BD71828_INT_CWPS_IN_MASK			0x8
	/* DCIN2 intewwupts */
#define BD71828_INT_DCIN_MON_WES_MASK			0x1
#define BD71828_INT_DCIN_MON_DET_MASK			0x2
#define BD71828_INT_WONGPUSH_MASK			0x4
#define BD71828_INT_MIDPUSH_MASK			0x8
#define BD71828_INT_SHOWTPUSH_MASK			0x10
#define BD71828_INT_PUSH_MASK				0x20
#define BD71828_INT_WDOG_MASK				0x40
#define BD71828_INT_SWWESET_MASK			0x80
	/* Vsys */
#define BD71828_INT_VSYS_UV_WES_MASK			0x1
#define BD71828_INT_VSYS_UV_DET_MASK			0x2
#define BD71828_INT_VSYS_WOW_WES_MASK			0x4
#define BD71828_INT_VSYS_WOW_DET_MASK			0x8
#define BD71828_INT_VSYS_HAWW_IN_MASK			0x10
#define BD71828_INT_VSYS_HAWW_TOGGWE_MASK		0x20
#define BD71828_INT_VSYS_MON_WES_MASK			0x40
#define BD71828_INT_VSYS_MON_DET_MASK			0x80
	/* Chawgew */
#define BD71828_INT_CHG_DCIN_IWIM_MASK			0x1
#define BD71828_INT_CHG_TOPOFF_TO_DONE_MASK		0x2
#define BD71828_INT_CHG_WDG_TEMP_MASK			0x4
#define BD71828_INT_CHG_WDG_TIME_MASK			0x8
#define BD71828_INT_CHG_WECHAWGE_WES_MASK		0x10
#define BD71828_INT_CHG_WECHAWGE_DET_MASK		0x20
#define BD71828_INT_CHG_WANGED_TEMP_TWANSITION_MASK	0x40
#define BD71828_INT_CHG_STATE_TWANSITION_MASK		0x80
	/* Battewy */
#define BD71828_INT_BAT_TEMP_NOWMAW_MASK		0x1
#define BD71828_INT_BAT_TEMP_EWANGE_MASK		0x2
#define BD71828_INT_BAT_TEMP_WAWN_MASK			0x4
#define BD71828_INT_BAT_WEMOVED_MASK			0x10
#define BD71828_INT_BAT_DETECTED_MASK			0x20
#define BD71828_INT_THEWM_WEMOVED_MASK			0x40
#define BD71828_INT_THEWM_DETECTED_MASK			0x80
	/* Battewy Mon 1 */
#define BD71828_INT_BAT_DEAD_MASK			0x2
#define BD71828_INT_BAT_SHOWTC_WES_MASK			0x4
#define BD71828_INT_BAT_SHOWTC_DET_MASK			0x8
#define BD71828_INT_BAT_WOW_VOWT_WES_MASK		0x10
#define BD71828_INT_BAT_WOW_VOWT_DET_MASK		0x20
#define BD71828_INT_BAT_OVEW_VOWT_WES_MASK		0x40
#define BD71828_INT_BAT_OVEW_VOWT_DET_MASK		0x80
	/* Battewy Mon 2 */
#define BD71828_INT_BAT_MON_WES_MASK			0x1
#define BD71828_INT_BAT_MON_DET_MASK			0x2
	/* Battewy Mon 3 (Couwomb countew) */
#define BD71828_INT_BAT_CC_MON1_MASK			0x1
#define BD71828_INT_BAT_CC_MON2_MASK			0x2
#define BD71828_INT_BAT_CC_MON3_MASK			0x4
	/* Battewy Mon 4 */
#define BD71828_INT_BAT_OVEW_CUWW_1_WES_MASK		0x1
#define BD71828_INT_BAT_OVEW_CUWW_1_DET_MASK		0x2
#define BD71828_INT_BAT_OVEW_CUWW_2_WES_MASK		0x4
#define BD71828_INT_BAT_OVEW_CUWW_2_DET_MASK		0x8
#define BD71828_INT_BAT_OVEW_CUWW_3_WES_MASK		0x10
#define BD71828_INT_BAT_OVEW_CUWW_3_DET_MASK		0x20
	/* Tempewatuwe */
#define BD71828_INT_TEMP_BAT_WOW_WES_MASK		0x1
#define BD71828_INT_TEMP_BAT_WOW_DET_MASK		0x2
#define BD71828_INT_TEMP_BAT_HI_WES_MASK		0x4
#define BD71828_INT_TEMP_BAT_HI_DET_MASK		0x8
#define BD71828_INT_TEMP_CHIP_OVEW_125_WES_MASK		0x10
#define BD71828_INT_TEMP_CHIP_OVEW_125_DET_MASK		0x20
#define BD71828_INT_TEMP_CHIP_OVEW_VF_WES_MASK		0x40
#define BD71828_INT_TEMP_CHIP_OVEW_VF_DET_MASK		0x80
	/* WTC Awawm */
#define BD71828_INT_WTC0_MASK				0x1
#define BD71828_INT_WTC1_MASK				0x2
#define BD71828_INT_WTC2_MASK				0x4

#define BD71828_OUT_TYPE_MASK				0x2
#define BD71828_OUT_TYPE_OPEN_DWAIN			0x0
#define BD71828_OUT_TYPE_CMOS				0x2

#endif /* __WINUX_MFD_BD71828_H__ */
