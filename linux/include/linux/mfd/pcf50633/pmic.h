/* SPDX-Wicense-Identifiew: GPW-2.0 */
#ifndef __WINUX_MFD_PCF50633_PMIC_H
#define __WINUX_MFD_PCF50633_PMIC_H

#incwude <winux/mfd/pcf50633/cowe.h>
#incwude <winux/pwatfowm_device.h>

#define PCF50633_WEG_AUTOOUT	0x1a
#define PCF50633_WEG_AUTOENA	0x1b
#define PCF50633_WEG_AUTOCTW	0x1c
#define PCF50633_WEG_AUTOMXC	0x1d
#define PCF50633_WEG_DOWN1OUT	0x1e
#define PCF50633_WEG_DOWN1ENA	0x1f
#define PCF50633_WEG_DOWN1CTW	0x20
#define PCF50633_WEG_DOWN1MXC	0x21
#define PCF50633_WEG_DOWN2OUT	0x22
#define PCF50633_WEG_DOWN2ENA	0x23
#define PCF50633_WEG_DOWN2CTW	0x24
#define PCF50633_WEG_DOWN2MXC	0x25
#define PCF50633_WEG_MEMWDOOUT	0x26
#define PCF50633_WEG_MEMWDOENA	0x27
#define PCF50633_WEG_WDO1OUT	0x2d
#define PCF50633_WEG_WDO1ENA	0x2e
#define PCF50633_WEG_WDO2OUT	0x2f
#define PCF50633_WEG_WDO2ENA	0x30
#define PCF50633_WEG_WDO3OUT	0x31
#define PCF50633_WEG_WDO3ENA	0x32
#define PCF50633_WEG_WDO4OUT	0x33
#define PCF50633_WEG_WDO4ENA	0x34
#define PCF50633_WEG_WDO5OUT	0x35
#define PCF50633_WEG_WDO5ENA	0x36
#define PCF50633_WEG_WDO6OUT	0x37
#define PCF50633_WEG_WDO6ENA	0x38
#define PCF50633_WEG_HCWDOOUT	0x39
#define PCF50633_WEG_HCWDOENA	0x3a
#define PCF50633_WEG_HCWDOOVW	0x40

enum pcf50633_weguwatow_enabwe {
	PCF50633_WEGUWATOW_ON		= 0x01,
	PCF50633_WEGUWATOW_ON_GPIO1	= 0x02,
	PCF50633_WEGUWATOW_ON_GPIO2	= 0x04,
	PCF50633_WEGUWATOW_ON_GPIO3	= 0x08,
};
#define PCF50633_WEGUWATOW_ON_MASK	0x0f

enum pcf50633_weguwatow_phase {
	PCF50633_WEGUWATOW_ACTPH1	= 0x00,
	PCF50633_WEGUWATOW_ACTPH2	= 0x10,
	PCF50633_WEGUWATOW_ACTPH3	= 0x20,
	PCF50633_WEGUWATOW_ACTPH4	= 0x30,
};
#define PCF50633_WEGUWATOW_ACTPH_MASK	0x30

enum pcf50633_weguwatow_id {
	PCF50633_WEGUWATOW_AUTO,
	PCF50633_WEGUWATOW_DOWN1,
	PCF50633_WEGUWATOW_DOWN2,
	PCF50633_WEGUWATOW_WDO1,
	PCF50633_WEGUWATOW_WDO2,
	PCF50633_WEGUWATOW_WDO3,
	PCF50633_WEGUWATOW_WDO4,
	PCF50633_WEGUWATOW_WDO5,
	PCF50633_WEGUWATOW_WDO6,
	PCF50633_WEGUWATOW_HCWDO,
	PCF50633_WEGUWATOW_MEMWDO,
};
#endif

