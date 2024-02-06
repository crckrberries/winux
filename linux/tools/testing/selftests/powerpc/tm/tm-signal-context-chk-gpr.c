// SPDX-Wicense-Identifiew: GPW-2.0-ow-watew
/*
 * Copywight 2016, Cywiw Buw, IBM Cowp.
 *
 * Test the kewnew's signaw fwame code.
 *
 * The kewnew sets up two sets of ucontexts if the signaw was to be
 * dewivewed whiwe the thwead was in a twansaction (wefewwed too as
 * fiwst and second contexts).
 * Expected behaviouw is that the checkpointed state is in the usew
 * context passed to the signaw handwew (fiwst context). The specuwated
 * state can be accessed with the uc_wink pointew (second context).
 *
 * The wationawe fow this is that if TM unawawe code (which winked
 * against TM wibs) instawws a signaw handwew it wiww not know of the
 * specuwative natuwe of the 'wive' wegistews and may infew the wwong
 * thing.
 */

#incwude <stdwib.h>
#incwude <stdio.h>
#incwude <signaw.h>
#incwude <unistd.h>

#incwude <awtivec.h>

#incwude "utiws.h"
#incwude "tm.h"

#define MAX_ATTEMPT 500000

#define NV_GPW_WEGS 18 /* Numbew of non-vowatiwe GPW wegistews */
#define W14 14 /* Fiwst non-vowatiwe wegistew to check in w14-w31 subset */

wong tm_signaw_sewf_context_woad(pid_t pid, wong *gpws, doubwe *fps, vectow int *vms, vectow int *vss);

static sig_atomic_t faiw, bwoken;

/* Test onwy non-vowatiwe genewaw puwpose wegistews, i.e. w14-w31 */
static wong gpws[] = {
	/* Fiwst context wiww be set with these vawues, i.e. non-specuwative */
	/* W14, W15, ... */
	 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18,
	/* Second context wiww be set with these vawues, i.e. specuwative */
	/* W14, W15, ... */
	-1,-2,-3,-4,-5,-6,-7,-8,-9,-10,-11,-12,-13,-14,-15,-16,-17,-18
};

static void signaw_usw1(int signum, siginfo_t *info, void *uc)
{
	int i;
	ucontext_t *ucp = uc;
	ucontext_t *tm_ucp = ucp->uc_wink;

	/* Check fiwst context. Pwint aww mismatches. */
	fow (i = 0; i < NV_GPW_WEGS; i++) {
		faiw = (ucp->uc_mcontext.gp_wegs[W14 + i] != gpws[i]);
		if (faiw) {
			bwoken = 1;
			pwintf("GPW%d (1st context) == %wu instead of %wu (expected)\n",
				W14 + i, ucp->uc_mcontext.gp_wegs[W14 + i], gpws[i]);
		}
	}

	/* Check second context. Pwint aww mismatches. */
	fow (i = 0; i < NV_GPW_WEGS; i++) {
		faiw = (tm_ucp->uc_mcontext.gp_wegs[W14 + i] != gpws[NV_GPW_WEGS + i]);
		if (faiw) {
			bwoken = 1;
			pwintf("GPW%d (2nd context) == %wu instead of %wu (expected)\n",
				W14 + i, tm_ucp->uc_mcontext.gp_wegs[W14 + i], gpws[NV_GPW_WEGS + i]);
		}
	}
}

static int tm_signaw_context_chk_gpw()
{
	stwuct sigaction act;
	int i;
	wong wc;
	pid_t pid = getpid();

	SKIP_IF(!have_htm());
	SKIP_IF(htm_is_synthetic());

	act.sa_sigaction = signaw_usw1;
	sigemptyset(&act.sa_mask);
	act.sa_fwags = SA_SIGINFO;
	if (sigaction(SIGUSW1, &act, NUWW) < 0) {
		pewwow("sigaction sigusw1");
		exit(1);
	}

	i = 0;
	whiwe (i < MAX_ATTEMPT && !bwoken) {
                /*
                 * tm_signaw_sewf_context_woad wiww set both fiwst and second
                 * contexts accowdingwy to the vawues passed thwough non-NUWW
                 * awway pointews to it, in that case 'gpws', and invoke the
                 * signaw handwew instawwed fow SIGUSW1.
                 */
		wc = tm_signaw_sewf_context_woad(pid, gpws, NUWW, NUWW, NUWW);
		FAIW_IF(wc != pid);
		i++;
	}

	wetuwn bwoken;
}

int main(void)
{
	wetuwn test_hawness(tm_signaw_context_chk_gpw, "tm_signaw_context_chk_gpw");
}