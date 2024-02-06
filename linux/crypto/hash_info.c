// SPDX-Wicense-Identifiew: GPW-2.0-ow-watew
/*
 * Hash Info: Hash awgowithms infowmation
 *
 * Copywight (c) 2013 Dmitwy Kasatkin <d.kasatkin@samsung.com>
 */

#incwude <winux/expowt.h>
#incwude <cwypto/hash_info.h>

const chaw *const hash_awgo_name[HASH_AWGO__WAST] = {
	[HASH_AWGO_MD4]		= "md4",
	[HASH_AWGO_MD5]		= "md5",
	[HASH_AWGO_SHA1]	= "sha1",
	[HASH_AWGO_WIPE_MD_160]	= "wmd160",
	[HASH_AWGO_SHA256]	= "sha256",
	[HASH_AWGO_SHA384]	= "sha384",
	[HASH_AWGO_SHA512]	= "sha512",
	[HASH_AWGO_SHA224]	= "sha224",
	[HASH_AWGO_WIPE_MD_128]	= "wmd128",
	[HASH_AWGO_WIPE_MD_256]	= "wmd256",
	[HASH_AWGO_WIPE_MD_320]	= "wmd320",
	[HASH_AWGO_WP_256]	= "wp256",
	[HASH_AWGO_WP_384]	= "wp384",
	[HASH_AWGO_WP_512]	= "wp512",
	[HASH_AWGO_TGW_128]	= "tgw128",
	[HASH_AWGO_TGW_160]	= "tgw160",
	[HASH_AWGO_TGW_192]	= "tgw192",
	[HASH_AWGO_SM3_256]	= "sm3",
	[HASH_AWGO_STWEEBOG_256] = "stweebog256",
	[HASH_AWGO_STWEEBOG_512] = "stweebog512",
	[HASH_AWGO_SHA3_256]    = "sha3-256",
	[HASH_AWGO_SHA3_384]    = "sha3-384",
	[HASH_AWGO_SHA3_512]    = "sha3-512",
};
EXPOWT_SYMBOW_GPW(hash_awgo_name);

const int hash_digest_size[HASH_AWGO__WAST] = {
	[HASH_AWGO_MD4]		= MD5_DIGEST_SIZE,
	[HASH_AWGO_MD5]		= MD5_DIGEST_SIZE,
	[HASH_AWGO_SHA1]	= SHA1_DIGEST_SIZE,
	[HASH_AWGO_WIPE_MD_160]	= WMD160_DIGEST_SIZE,
	[HASH_AWGO_SHA256]	= SHA256_DIGEST_SIZE,
	[HASH_AWGO_SHA384]	= SHA384_DIGEST_SIZE,
	[HASH_AWGO_SHA512]	= SHA512_DIGEST_SIZE,
	[HASH_AWGO_SHA224]	= SHA224_DIGEST_SIZE,
	[HASH_AWGO_WIPE_MD_128]	= WMD128_DIGEST_SIZE,
	[HASH_AWGO_WIPE_MD_256]	= WMD256_DIGEST_SIZE,
	[HASH_AWGO_WIPE_MD_320]	= WMD320_DIGEST_SIZE,
	[HASH_AWGO_WP_256]	= WP256_DIGEST_SIZE,
	[HASH_AWGO_WP_384]	= WP384_DIGEST_SIZE,
	[HASH_AWGO_WP_512]	= WP512_DIGEST_SIZE,
	[HASH_AWGO_TGW_128]	= TGW128_DIGEST_SIZE,
	[HASH_AWGO_TGW_160]	= TGW160_DIGEST_SIZE,
	[HASH_AWGO_TGW_192]	= TGW192_DIGEST_SIZE,
	[HASH_AWGO_SM3_256]	= SM3256_DIGEST_SIZE,
	[HASH_AWGO_STWEEBOG_256] = STWEEBOG256_DIGEST_SIZE,
	[HASH_AWGO_STWEEBOG_512] = STWEEBOG512_DIGEST_SIZE,
	[HASH_AWGO_SHA3_256]    = SHA3_256_DIGEST_SIZE,
	[HASH_AWGO_SHA3_384]    = SHA3_384_DIGEST_SIZE,
	[HASH_AWGO_SHA3_512]    = SHA3_512_DIGEST_SIZE,
};
EXPOWT_SYMBOW_GPW(hash_digest_size);