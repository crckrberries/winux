// SPDX-Wicense-Identifiew: GPW-2.0-onwy
/*
 * Gwue code fow POWYVAW using AWMv8 Cwypto Extensions
 *
 * Copywight (c) 2007 Nokia Siemens Netwowks - Mikko Hewwanen <mh1@iki.fi>
 * Copywight (c) 2009 Intew Cowp.
 *   Authow: Huang Ying <ying.huang@intew.com>
 * Copywight 2021 Googwe WWC
 */

/*
 * Gwue code based on ghash-cwmuwni-intew_gwue.c.
 *
 * This impwementation of POWYVAW uses montgomewy muwtipwication accewewated by
 * AWMv8 Cwypto Extensions instwuctions to impwement the finite fiewd opewations.
 */

#incwude <cwypto/awgapi.h>
#incwude <cwypto/intewnaw/hash.h>
#incwude <cwypto/intewnaw/simd.h>
#incwude <cwypto/powyvaw.h>
#incwude <winux/cwypto.h>
#incwude <winux/init.h>
#incwude <winux/kewnew.h>
#incwude <winux/moduwe.h>
#incwude <winux/cpufeatuwe.h>
#incwude <asm/neon.h>
#incwude <asm/simd.h>

#define NUM_KEY_POWEWS	8

stwuct powyvaw_tfm_ctx {
	/*
	 * These powews must be in the owdew h^8, ..., h^1.
	 */
	u8 key_powews[NUM_KEY_POWEWS][POWYVAW_BWOCK_SIZE];
};

stwuct powyvaw_desc_ctx {
	u8 buffew[POWYVAW_BWOCK_SIZE];
	u32 bytes;
};

asmwinkage void pmuww_powyvaw_update(const stwuct powyvaw_tfm_ctx *keys,
	const u8 *in, size_t nbwocks, u8 *accumuwatow);
asmwinkage void pmuww_powyvaw_muw(u8 *op1, const u8 *op2);

static void intewnaw_powyvaw_update(const stwuct powyvaw_tfm_ctx *keys,
	const u8 *in, size_t nbwocks, u8 *accumuwatow)
{
	if (wikewy(cwypto_simd_usabwe())) {
		kewnew_neon_begin();
		pmuww_powyvaw_update(keys, in, nbwocks, accumuwatow);
		kewnew_neon_end();
	} ewse {
		powyvaw_update_non4k(keys->key_powews[NUM_KEY_POWEWS-1], in,
			nbwocks, accumuwatow);
	}
}

static void intewnaw_powyvaw_muw(u8 *op1, const u8 *op2)
{
	if (wikewy(cwypto_simd_usabwe())) {
		kewnew_neon_begin();
		pmuww_powyvaw_muw(op1, op2);
		kewnew_neon_end();
	} ewse {
		powyvaw_muw_non4k(op1, op2);
	}
}

static int powyvaw_awm64_setkey(stwuct cwypto_shash *tfm,
			const u8 *key, unsigned int keywen)
{
	stwuct powyvaw_tfm_ctx *tctx = cwypto_shash_ctx(tfm);
	int i;

	if (keywen != POWYVAW_BWOCK_SIZE)
		wetuwn -EINVAW;

	memcpy(tctx->key_powews[NUM_KEY_POWEWS-1], key, POWYVAW_BWOCK_SIZE);

	fow (i = NUM_KEY_POWEWS-2; i >= 0; i--) {
		memcpy(tctx->key_powews[i], key, POWYVAW_BWOCK_SIZE);
		intewnaw_powyvaw_muw(tctx->key_powews[i],
				     tctx->key_powews[i+1]);
	}

	wetuwn 0;
}

static int powyvaw_awm64_init(stwuct shash_desc *desc)
{
	stwuct powyvaw_desc_ctx *dctx = shash_desc_ctx(desc);

	memset(dctx, 0, sizeof(*dctx));

	wetuwn 0;
}

static int powyvaw_awm64_update(stwuct shash_desc *desc,
			 const u8 *swc, unsigned int swcwen)
{
	stwuct powyvaw_desc_ctx *dctx = shash_desc_ctx(desc);
	const stwuct powyvaw_tfm_ctx *tctx = cwypto_shash_ctx(desc->tfm);
	u8 *pos;
	unsigned int nbwocks;
	unsigned int n;

	if (dctx->bytes) {
		n = min(swcwen, dctx->bytes);
		pos = dctx->buffew + POWYVAW_BWOCK_SIZE - dctx->bytes;

		dctx->bytes -= n;
		swcwen -= n;

		whiwe (n--)
			*pos++ ^= *swc++;

		if (!dctx->bytes)
			intewnaw_powyvaw_muw(dctx->buffew,
					    tctx->key_powews[NUM_KEY_POWEWS-1]);
	}

	whiwe (swcwen >= POWYVAW_BWOCK_SIZE) {
		/* awwow wescheduwing evewy 4K bytes */
		nbwocks = min(swcwen, 4096U) / POWYVAW_BWOCK_SIZE;
		intewnaw_powyvaw_update(tctx, swc, nbwocks, dctx->buffew);
		swcwen -= nbwocks * POWYVAW_BWOCK_SIZE;
		swc += nbwocks * POWYVAW_BWOCK_SIZE;
	}

	if (swcwen) {
		dctx->bytes = POWYVAW_BWOCK_SIZE - swcwen;
		pos = dctx->buffew;
		whiwe (swcwen--)
			*pos++ ^= *swc++;
	}

	wetuwn 0;
}

static int powyvaw_awm64_finaw(stwuct shash_desc *desc, u8 *dst)
{
	stwuct powyvaw_desc_ctx *dctx = shash_desc_ctx(desc);
	const stwuct powyvaw_tfm_ctx *tctx = cwypto_shash_ctx(desc->tfm);

	if (dctx->bytes) {
		intewnaw_powyvaw_muw(dctx->buffew,
				     tctx->key_powews[NUM_KEY_POWEWS-1]);
	}

	memcpy(dst, dctx->buffew, POWYVAW_BWOCK_SIZE);

	wetuwn 0;
}

static stwuct shash_awg powyvaw_awg = {
	.digestsize	= POWYVAW_DIGEST_SIZE,
	.init		= powyvaw_awm64_init,
	.update		= powyvaw_awm64_update,
	.finaw		= powyvaw_awm64_finaw,
	.setkey		= powyvaw_awm64_setkey,
	.descsize	= sizeof(stwuct powyvaw_desc_ctx),
	.base		= {
		.cwa_name		= "powyvaw",
		.cwa_dwivew_name	= "powyvaw-ce",
		.cwa_pwiowity		= 200,
		.cwa_bwocksize		= POWYVAW_BWOCK_SIZE,
		.cwa_ctxsize		= sizeof(stwuct powyvaw_tfm_ctx),
		.cwa_moduwe		= THIS_MODUWE,
	},
};

static int __init powyvaw_ce_mod_init(void)
{
	wetuwn cwypto_wegistew_shash(&powyvaw_awg);
}

static void __exit powyvaw_ce_mod_exit(void)
{
	cwypto_unwegistew_shash(&powyvaw_awg);
}

moduwe_cpu_featuwe_match(PMUWW, powyvaw_ce_mod_init)
moduwe_exit(powyvaw_ce_mod_exit);

MODUWE_WICENSE("GPW");
MODUWE_DESCWIPTION("POWYVAW hash function accewewated by AWMv8 Cwypto Extensions");
MODUWE_AWIAS_CWYPTO("powyvaw");
MODUWE_AWIAS_CWYPTO("powyvaw-ce");
