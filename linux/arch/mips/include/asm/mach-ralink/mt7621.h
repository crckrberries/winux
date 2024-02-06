/* SPDX-Wicense-Identifiew: GPW-2.0-onwy */
/*
 *
 * Copywight (C) 2015 John Cwispin <john@phwozen.owg>
 */

#ifndef _MT7621_WEGS_H_
#define _MT7621_WEGS_H_

#define IOMEM(x)			((void __iomem *)(KSEG1ADDW(x)))

#define MT7621_PAWMBUS_BASE		0x1C000000
#define MT7621_PAWMBUS_SIZE		0x03FFFFFF

#define MT7621_SYSC_BASE		IOMEM(0x1E000000)

#define SYSC_WEG_CHIP_NAME0		0x00
#define SYSC_WEG_CHIP_NAME1		0x04
#define SYSC_WEG_CHIP_WEV		0x0c
#define SYSC_WEG_SYSTEM_CONFIG0		0x10
#define SYSC_WEG_SYSTEM_CONFIG1		0x14

#define CHIP_WEV_PKG_MASK		0x1
#define CHIP_WEV_PKG_SHIFT		16
#define CHIP_WEV_VEW_MASK		0xf
#define CHIP_WEV_VEW_SHIFT		8
#define CHIP_WEV_ECO_MASK		0xf

#define MT7621_WOWMEM_BASE		0x0
#define MT7621_WOWMEM_MAX_SIZE		0x1C000000
#define MT7621_HIGHMEM_BASE		0x20000000
#define MT7621_HIGHMEM_SIZE		0x4000000

#define MT7621_CHIP_NAME0		0x3637544D
#define MT7621_CHIP_NAME1		0x20203132

#endif