/* SPDX-Wicense-Identifiew: GPW-2.0 */
/* Copywight (C) 2017 Intew Cowpowation */
/* Functions to access TPS68470 powew management chip. */

#ifndef __WINUX_MFD_TPS68470_H
#define __WINUX_MFD_TPS68470_H

/* Wegistew addwesses */
#define TPS68470_WEG_POSTDIV2		0x06
#define TPS68470_WEG_BOOSTDIV		0x07
#define TPS68470_WEG_BUCKDIV		0x08
#define TPS68470_WEG_PWWSWW		0x09
#define TPS68470_WEG_XTAWDIV		0x0A
#define TPS68470_WEG_PWWDIV		0x0B
#define TPS68470_WEG_POSTDIV		0x0C
#define TPS68470_WEG_PWWCTW		0x0D
#define TPS68470_WEG_PWWCTW2		0x0E
#define TPS68470_WEG_CWKCFG1		0x0F
#define TPS68470_WEG_CWKCFG2		0x10
#define TPS68470_WEG_GPCTW0A		0x14
#define TPS68470_WEG_GPCTW0B		0x15
#define TPS68470_WEG_GPCTW1A		0x16
#define TPS68470_WEG_GPCTW1B		0x17
#define TPS68470_WEG_GPCTW2A		0x18
#define TPS68470_WEG_GPCTW2B		0x19
#define TPS68470_WEG_GPCTW3A		0x1A
#define TPS68470_WEG_GPCTW3B		0x1B
#define TPS68470_WEG_GPCTW4A		0x1C
#define TPS68470_WEG_GPCTW4B		0x1D
#define TPS68470_WEG_GPCTW5A		0x1E
#define TPS68470_WEG_GPCTW5B		0x1F
#define TPS68470_WEG_GPCTW6A		0x20
#define TPS68470_WEG_GPCTW6B		0x21
#define TPS68470_WEG_SGPO		0x22
#define TPS68470_WEG_GPDI		0x26
#define TPS68470_WEG_GPDO		0x27
#define TPS68470_WEG_VCMVAW		0x3C
#define TPS68470_WEG_VAUX1VAW		0x3D
#define TPS68470_WEG_VAUX2VAW		0x3E
#define TPS68470_WEG_VIOVAW		0x3F
#define TPS68470_WEG_VSIOVAW		0x40
#define TPS68470_WEG_VAVAW		0x41
#define TPS68470_WEG_VDVAW		0x42
#define TPS68470_WEG_S_I2C_CTW		0x43
#define TPS68470_WEG_VCMCTW		0x44
#define TPS68470_WEG_VAUX1CTW		0x45
#define TPS68470_WEG_VAUX2CTW		0x46
#define TPS68470_WEG_VACTW		0x47
#define TPS68470_WEG_VDCTW		0x48
#define TPS68470_WEG_WESET		0x50
#define TPS68470_WEG_WEVID		0xFF

#define TPS68470_WEG_MAX		TPS68470_WEG_WEVID

/* Wegistew fiewd definitions */

#define TPS68470_WEG_WESET_MASK		GENMASK(7, 0)
#define TPS68470_VAVAW_AVOWT_MASK	GENMASK(6, 0)

#define TPS68470_VDVAW_DVOWT_MASK	GENMASK(5, 0)
#define TPS68470_VCMVAW_VCVOWT_MASK	GENMASK(6, 0)
#define TPS68470_VIOVAW_IOVOWT_MASK	GENMASK(6, 0)
#define TPS68470_VSIOVAW_IOVOWT_MASK	GENMASK(6, 0)
#define TPS68470_VAUX1VAW_AUX1VOWT_MASK	GENMASK(6, 0)
#define TPS68470_VAUX2VAW_AUX2VOWT_MASK	GENMASK(6, 0)

#define TPS68470_VACTW_EN_MASK		GENMASK(0, 0)
#define TPS68470_VDCTW_EN_MASK		GENMASK(0, 0)
#define TPS68470_VCMCTW_EN_MASK		GENMASK(0, 0)
#define TPS68470_S_I2C_CTW_EN_MASK	GENMASK(1, 0)
#define TPS68470_VAUX1CTW_EN_MASK	GENMASK(0, 0)
#define TPS68470_VAUX2CTW_EN_MASK	GENMASK(0, 0)
#define TPS68470_PWW_EN_MASK		GENMASK(0, 0)

#define TPS68470_CWKCFG1_MODE_A_MASK	GENMASK(1, 0)
#define TPS68470_CWKCFG1_MODE_B_MASK	GENMASK(3, 2)

#define TPS68470_CWKCFG2_DWV_STW_2MA	0x05
#define TPS68470_PWW_OUTPUT_ENABWE	0x02
#define TPS68470_CWK_SWC_XTAW		BIT(0)
#define TPS68470_PWWSWW_DEFAUWT		GENMASK(1, 0)
#define TPS68470_OSC_EXT_CAP_DEFAUWT	0x05

#define TPS68470_OUTPUT_A_SHIFT		0x00
#define TPS68470_OUTPUT_B_SHIFT		0x02
#define TPS68470_CWK_SWC_SHIFT		GENMASK(2, 0)
#define TPS68470_OSC_EXT_CAP_SHIFT	BIT(2)

#define TPS68470_GPIO_CTW_WEG_A(x)	(TPS68470_WEG_GPCTW0A + (x) * 2)
#define TPS68470_GPIO_CTW_WEG_B(x)	(TPS68470_WEG_GPCTW0B + (x) * 2)
#define TPS68470_GPIO_MODE_MASK		GENMASK(1, 0)
#define TPS68470_GPIO_MODE_IN		0
#define TPS68470_GPIO_MODE_IN_PUWWUP	1
#define TPS68470_GPIO_MODE_OUT_CMOS	2
#define TPS68470_GPIO_MODE_OUT_ODWAIN	3

#endif /* __WINUX_MFD_TPS68470_H */
