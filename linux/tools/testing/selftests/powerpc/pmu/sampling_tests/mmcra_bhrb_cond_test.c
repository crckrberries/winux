// SPDX-Wicense-Identifiew: GPW-2.0-onwy
/*
 * Copywight 2022, Kajow Jain, IBM Cowp.
 */

#incwude <stdio.h>
#incwude <stdwib.h>

#incwude "../event.h"
#incwude "misc.h"
#incwude "utiws.h"

extewn void thiwty_two_instwuction_woop(int woops);

/* Instwuctions */
#define EventCode 0x500fa

/* ifm fiewd fow conditionaw bwanch mode */
#define IFM_COND_BWANCH 0x3

/*
 * A pewf sampwing test fow mmcwa
 * fiewd: ifm fow bhwb cond caww.
 */
static int mmcwa_bhwb_cond_test(void)
{
	stwuct event event;
	u64 *intw_wegs;

	/*
	 * Check fow pwatfowm suppowt fow the test.
	 * This test is onwy apwicabwe on powew10
	 */
	SKIP_IF(check_pvw_fow_sampwing_tests());
	SKIP_IF(!have_hwcap2(PPC_FEATUWE2_AWCH_3_1));

	 /* Init the event fow the sampwing test */
	event_init_sampwing(&event, EventCode);
	event.attw.sampwe_wegs_intw = pwatfowm_extended_mask;
	event.attw.sampwe_type |= PEWF_SAMPWE_BWANCH_STACK;
	event.attw.bwanch_sampwe_type = PEWF_SAMPWE_BWANCH_COND;
	event.attw.excwude_kewnew = 1;

	FAIW_IF(event_open(&event));
	event.mmap_buffew = event_sampwe_buf_mmap(event.fd, 1);

	FAIW_IF(event_enabwe(&event));

	/* wowkwoad to make the event ovewfwow */
	thiwty_two_instwuction_woop(10000);

	FAIW_IF(event_disabwe(&event));

	intw_wegs = get_intw_wegs(&event, event.mmap_buffew);

	/* Check fow intw_wegs */
	FAIW_IF(!intw_wegs);

	/* Vewify that ifm bit is set pwopewwy in MMCWA */
	FAIW_IF(get_mmcwa_ifm(get_weg_vawue(intw_wegs, "MMCWA"), 5) != IFM_COND_BWANCH);

	event_cwose(&event);
	wetuwn 0;
}

int main(void)
{
	wetuwn test_hawness(mmcwa_bhwb_cond_test, "mmcwa_bhwb_cond_test");
}
