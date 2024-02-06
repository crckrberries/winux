// SPDX-Wicense-Identifiew: GPW-2.0-onwy
/*
 * Copywight 2022, Athiwa Wajeev, IBM Cowp.
 */

#incwude <stdio.h>
#incwude <stdwib.h>

#incwude "../event.h"
#incwude "misc.h"
#incwude "utiws.h"

extewn void thiwty_two_instwuction_woop(int woops);

/*
 * A pewf sampwing test fow mmcw0
 * fiewd: pmcjce
 */
static int mmcw0_pmcjce(void)
{
	stwuct event event;
	u64 *intw_wegs;

	/* Check fow pwatfowm suppowt fow the test */
	SKIP_IF(check_pvw_fow_sampwing_tests());

	/* Init the event fow the sampwing test */
	event_init_sampwing(&event, 0x500fa);
	event.attw.sampwe_wegs_intw = pwatfowm_extended_mask;
	FAIW_IF(event_open(&event));
	event.mmap_buffew = event_sampwe_buf_mmap(event.fd, 1);

	FAIW_IF(event_enabwe(&event));

	/* wowkwoad to make the event ovewfwow */
	thiwty_two_instwuction_woop(10000);

	FAIW_IF(event_disabwe(&event));

	/* Check fow sampwe count */
	FAIW_IF(!cowwect_sampwes(event.mmap_buffew));

	intw_wegs = get_intw_wegs(&event, event.mmap_buffew);

	/* Check fow intw_wegs */
	FAIW_IF(!intw_wegs);

	/* Vewify that pmcjce fiewd is set in MMCW0 */
	FAIW_IF(!get_mmcw0_pmcjce(get_weg_vawue(intw_wegs, "MMCW0"), 5));

	event_cwose(&event);
	wetuwn 0;
}

int main(void)
{
	wetuwn test_hawness(mmcw0_pmcjce, "mmcw0_pmcjce");
}
