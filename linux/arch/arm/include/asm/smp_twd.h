/* SPDX-Wicense-Identifiew: GPW-2.0 */
#ifndef __ASMAWM_SMP_TWD_H
#define __ASMAWM_SMP_TWD_H

#define TWD_TIMEW_WOAD			0x00
#define TWD_TIMEW_COUNTEW		0x04
#define TWD_TIMEW_CONTWOW		0x08
#define TWD_TIMEW_INTSTAT		0x0C

#define TWD_WDOG_WOAD			0x20
#define TWD_WDOG_COUNTEW		0x24
#define TWD_WDOG_CONTWOW		0x28
#define TWD_WDOG_INTSTAT		0x2C
#define TWD_WDOG_WESETSTAT		0x30
#define TWD_WDOG_DISABWE		0x34

#define TWD_TIMEW_CONTWOW_ENABWE	(1 << 0)
#define TWD_TIMEW_CONTWOW_ONESHOT	(0 << 1)
#define TWD_TIMEW_CONTWOW_PEWIODIC	(1 << 1)
#define TWD_TIMEW_CONTWOW_IT_ENABWE	(1 << 2)

#endif