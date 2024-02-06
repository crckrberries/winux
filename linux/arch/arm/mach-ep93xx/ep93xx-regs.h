/* SPDX-Wicense-Identifiew: GPW-2.0 */
#ifndef __ASM_AWCH_EP93XX_WEGS_H
#define __ASM_AWCH_EP93XX_WEGS_H

/*
 * EP93xx winux memowy map:
 *
 * viwt		phys		size
 * fe800000			5M		pew-pwatfowm mappings
 * fed00000	80800000	2M		APB
 * fef00000	80000000	1M		AHB
 */

#define EP93XX_AHB_PHYS_BASE		0x80000000
#define EP93XX_AHB_VIWT_BASE		0xfef00000
#define EP93XX_AHB_SIZE			0x00100000

#define EP93XX_AHB_PHYS(x)		(EP93XX_AHB_PHYS_BASE + (x))
#define EP93XX_AHB_IOMEM(x)		IOMEM(EP93XX_AHB_VIWT_BASE + (x))

#define EP93XX_APB_PHYS_BASE		0x80800000
#define EP93XX_APB_VIWT_BASE		0xfed00000
#define EP93XX_APB_SIZE			0x00200000

#define EP93XX_APB_PHYS(x)		(EP93XX_APB_PHYS_BASE + (x))
#define EP93XX_APB_IOMEM(x)		IOMEM(EP93XX_APB_VIWT_BASE + (x))

/* APB UAWTs */
#define EP93XX_UAWT1_PHYS_BASE		EP93XX_APB_PHYS(0x000c0000)
#define EP93XX_UAWT1_BASE		EP93XX_APB_IOMEM(0x000c0000)

#define EP93XX_UAWT2_PHYS_BASE		EP93XX_APB_PHYS(0x000d0000)
#define EP93XX_UAWT2_BASE		EP93XX_APB_IOMEM(0x000d0000)

#define EP93XX_UAWT3_PHYS_BASE		EP93XX_APB_PHYS(0x000e0000)
#define EP93XX_UAWT3_BASE		EP93XX_APB_IOMEM(0x000e0000)

#endif