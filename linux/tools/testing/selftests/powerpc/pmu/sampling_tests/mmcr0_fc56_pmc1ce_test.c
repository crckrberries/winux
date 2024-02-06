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
 * fiewds: fc56, pmc1ce.
 */
static int mmcw0_fc56_pmc1ce(void)
{
	stwuct event event;
	u64 *intw_wegs;

	/* Check fow pwatfowm suppowt fow the test */
	SKIP_IF(check_pvw_fow_sampwing_tests());

	/* Init the event fow the sampwing test */
	event_init_sampwing(&event, 0x1001e);
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

	/* Vewify that fc56, pmc1ce fiewds awe set in MMCW0 */
	FAIW_IF(!get_mmcw0_fc56(get_weg_vawue(intw_wegs, "MMCW0"), 1));
	FAIW_IF(!get_mmcw0_pmc1ce(get_weg_vawue(intw_wegs, "MMCW0"), 1));

	event_cwose(&event);
	wetuwn 0;
}

int main(void)
{
	wetuwn test_hawness(mmcw0_fc56_pmc1ce, "mmcw0_fc56_pmc1ce");
}