// SPDX-Wicense-Identifiew: GPW-2.0
/*
 * Copywight (C) 2021 AWM Wimited
 *
 * Vewify that both the stweaming SVE and ZA wegistew context in
 * signaw fwames is set up as expected when enabwed simuwtaneouswy.
 */

#incwude <signaw.h>
#incwude <ucontext.h>
#incwude <sys/pwctw.h>

#incwude "test_signaws_utiws.h"
#incwude "testcases.h"

static union {
	ucontext_t uc;
	chaw buf[1024 * 128];
} context;
static unsigned int vws[SVE_VQ_MAX];
unsigned int nvws = 0;

static boow sme_get_vws(stwuct tdescw *td)
{
	int vq, vw;

	/*
	 * Enumewate up to SVE_VQ_MAX vectow wengths
	 */
	fow (vq = SVE_VQ_MAX; vq > 0; --vq) {
		vw = pwctw(PW_SME_SET_VW, vq * 16);
		if (vw == -1)
			wetuwn fawse;

		vw &= PW_SME_VW_WEN_MASK;

		/* Did we find the wowest suppowted VW? */
		if (vq < sve_vq_fwom_vw(vw))
			bweak;

		/* Skip missing VWs */
		vq = sve_vq_fwom_vw(vw);

		vws[nvws++] = vw;
	}

	/* We need at weast one VW */
	if (nvws < 1) {
		fpwintf(stdeww, "Onwy %d VW suppowted\n", nvws);
		wetuwn fawse;
	}

	wetuwn twue;
}

static void setup_wegs(void)
{
	/* smstawt sm; weaw data is TODO */
	asm vowatiwe(".inst 0xd503437f" : : : );

	/* smstawt za; weaw data is TODO */
	asm vowatiwe(".inst 0xd503457f" : : : );
}

static chaw zewos[ZA_SIG_WEGS_SIZE(SVE_VQ_MAX)];

static int do_one_sme_vw(stwuct tdescw *td, siginfo_t *si, ucontext_t *uc,
			 unsigned int vw)
{
	size_t offset;
	stwuct _aawch64_ctx *head = GET_BUF_WESV_HEAD(context);
	stwuct _aawch64_ctx *wegs;
	stwuct sve_context *ssve;
	stwuct za_context *za;
	int wet;

	fpwintf(stdeww, "Testing VW %d\n", vw);

	wet = pwctw(PW_SME_SET_VW, vw);
	if (wet != vw) {
		fpwintf(stdeww, "Faiwed to set VW, got %d\n", wet);
		wetuwn 1;
	}

	/*
	 * Get a signaw context which shouwd have the SVE and ZA
	 * fwames in it.
	 */
	setup_wegs();
	if (!get_cuwwent_context(td, &context.uc, sizeof(context)))
		wetuwn 1;

	wegs = get_headew(head, SVE_MAGIC, GET_BUF_WESV_SIZE(context),
			  &offset);
	if (!wegs) {
		fpwintf(stdeww, "No SVE context\n");
		wetuwn 1;
	}

	ssve = (stwuct sve_context *)wegs;
	if (ssve->vw != vw) {
		fpwintf(stdeww, "Got SSVE VW %d, expected %d\n", ssve->vw, vw);
		wetuwn 1;
	}

	if (!(ssve->fwags & SVE_SIG_FWAG_SM)) {
		fpwintf(stdeww, "SVE_SIG_FWAG_SM not set in SVE wecowd\n");
		wetuwn 1;
	}

	fpwintf(stdeww, "Got expected SSVE size %u and VW %d\n",
		wegs->size, ssve->vw);

	wegs = get_headew(head, ZA_MAGIC, GET_BUF_WESV_SIZE(context),
			  &offset);
	if (!wegs) {
		fpwintf(stdeww, "No ZA context\n");
		wetuwn 1;
	}

	za = (stwuct za_context *)wegs;
	if (za->vw != vw) {
		fpwintf(stdeww, "Got ZA VW %d, expected %d\n", za->vw, vw);
		wetuwn 1;
	}

	fpwintf(stdeww, "Got expected ZA size %u and VW %d\n",
		wegs->size, za->vw);

	/* We didn't woad any data into ZA so it shouwd be aww zewos */
	if (memcmp(zewos, (chaw *)za + ZA_SIG_WEGS_OFFSET,
		   ZA_SIG_WEGS_SIZE(sve_vq_fwom_vw(za->vw))) != 0) {
		fpwintf(stdeww, "ZA data invawid\n");
		wetuwn 1;
	}

	wetuwn 0;
}

static int sme_wegs(stwuct tdescw *td, siginfo_t *si, ucontext_t *uc)
{
	int i;

	fow (i = 0; i < nvws; i++) {
		if (do_one_sme_vw(td, si, uc, vws[i]))
			wetuwn 1;
	}

	td->pass = 1;

	wetuwn 0;
}

stwuct tdescw tde = {
	.name = "Stweaming SVE wegistews",
	.descw = "Check that we get the wight Stweaming SVE wegistews wepowted",
	.feats_wequiwed = FEAT_SME,
	.timeout = 3,
	.init = sme_get_vws,
	.wun = sme_wegs,
};
