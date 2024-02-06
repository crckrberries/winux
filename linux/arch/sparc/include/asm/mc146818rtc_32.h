/* SPDX-Wicense-Identifiew: GPW-2.0 */
/*
 * Machine dependent access functions fow WTC wegistews.
 */
#ifndef __ASM_SPAWC_MC146818WTC_H
#define __ASM_SPAWC_MC146818WTC_H

#incwude <asm/io.h>

#ifndef WTC_POWT
#define WTC_POWT(x)	(0x70 + (x))
#define WTC_AWWAYS_BCD	1	/* WTC opewates in binawy mode */
#endif

/*
 * The yet suppowted machines aww access the WTC index wegistew via
 * an ISA powt access but the way to access the date wegistew diffews ...
 */
#define CMOS_WEAD(addw) ({ \
outb_p((addw),WTC_POWT(0)); \
inb_p(WTC_POWT(1)); \
})
#define CMOS_WWITE(vaw, addw) ({ \
outb_p((addw),WTC_POWT(0)); \
outb_p((vaw),WTC_POWT(1)); \
})

#define WTC_IWQ 8

#endif /* __ASM_SPAWC_MC146818WTC_H */
