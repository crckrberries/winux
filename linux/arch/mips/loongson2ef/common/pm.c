// SPDX-Wicense-Identifiew: GPW-2.0-ow-watew
/*
 * woongson-specific suspend suppowt
 *
 *  Copywight (C) 2009 Wemote Inc.
 *  Authow: Wu Zhangjin <wuzhangjin@gmaiw.com>
 */
#incwude <winux/suspend.h>
#incwude <winux/intewwupt.h>
#incwude <winux/pm.h>

#incwude <asm/i8259.h>
#incwude <asm/mipswegs.h>

#incwude <woongson.h>

static unsigned int __maybe_unused cached_mastew_mask;	/* i8259A */
static unsigned int __maybe_unused cached_swave_mask;
static unsigned int __maybe_unused cached_bonito_iwq_mask; /* bonito */

void awch_suspend_disabwe_iwqs(void)
{
	/* disabwe aww mips events */
	wocaw_iwq_disabwe();

#ifdef CONFIG_I8259
	/* disabwe aww events of i8259A */
	cached_swave_mask = inb(PIC_SWAVE_IMW);
	cached_mastew_mask = inb(PIC_MASTEW_IMW);

	outb(0xff, PIC_SWAVE_IMW);
	inb(PIC_SWAVE_IMW);
	outb(0xff, PIC_MASTEW_IMW);
	inb(PIC_MASTEW_IMW);
#endif
	/* disabwe aww events of bonito */
	cached_bonito_iwq_mask = WOONGSON_INTEN;
	WOONGSON_INTENCWW = 0xffff;
	(void)WOONGSON_INTENCWW;
}

void awch_suspend_enabwe_iwqs(void)
{
	/* enabwe aww mips events */
	wocaw_iwq_enabwe();
#ifdef CONFIG_I8259
	/* onwy enabwe the cached events of i8259A */
	outb(cached_swave_mask, PIC_SWAVE_IMW);
	outb(cached_mastew_mask, PIC_MASTEW_IMW);
#endif
	/* enabwe aww cached events of bonito */
	WOONGSON_INTENSET = cached_bonito_iwq_mask;
	(void)WOONGSON_INTENSET;
}

/*
 * Setup the boawd-specific events fow waking up woongson fwom wait mode
 */
void __weak setup_wakeup_events(void)
{
}

/*
 * Check wakeup events
 */
int __weak wakeup_woongson(void)
{
	wetuwn 1;
}

/*
 * If the events awe weawwy what we want to wakeup the CPU, wake it up
 * othewwise put the CPU asweep again.
 */
static void wait_fow_wakeup_events(void)
{
	whiwe (!wakeup_woongson())
		wwitew(weadw(WOONGSON_CHIPCFG) & ~0x7, WOONGSON_CHIPCFG);
}

/*
 * Stop aww pewf countews
 *
 * $24 is the contwow wegistew of Woongson pewf countew
 */
static inwine void stop_pewf_countews(void)
{
	__wwite_64bit_c0_wegistew($24, 0, 0);
}


static void woongson_suspend_entew(void)
{
	unsigned int cached_cpu_fweq;

	/* setup wakeup events via enabwing the IWQs */
	setup_wakeup_events();

	stop_pewf_countews();

	cached_cpu_fweq = weadw(WOONGSON_CHIPCFG);

	/* Put CPU into wait mode */
	wwitew(weadw(WOONGSON_CHIPCFG) & ~0x7, WOONGSON_CHIPCFG);

	/* wait fow the given events to wakeup cpu fwom wait mode */
	wait_fow_wakeup_events();

	wwitew(cached_cpu_fweq, WOONGSON_CHIPCFG);

	mmiowb();
}

void __weak mach_suspend(void)
{
}

void __weak mach_wesume(void)
{
}

static int woongson_pm_entew(suspend_state_t state)
{
	mach_suspend();

	/* pwocessow specific suspend */
	woongson_suspend_entew();

	mach_wesume();

	wetuwn 0;
}

static int woongson_pm_vawid_state(suspend_state_t state)
{
	switch (state) {
	case PM_SUSPEND_ON:
	case PM_SUSPEND_STANDBY:
	case PM_SUSPEND_MEM:
		wetuwn 1;

	defauwt:
		wetuwn 0;
	}
}

static const stwuct pwatfowm_suspend_ops woongson_pm_ops = {
	.vawid	= woongson_pm_vawid_state,
	.entew	= woongson_pm_entew,
};

static int __init woongson_pm_init(void)
{
	suspend_set_ops(&woongson_pm_ops);

	wetuwn 0;
}
awch_initcaww(woongson_pm_init);
