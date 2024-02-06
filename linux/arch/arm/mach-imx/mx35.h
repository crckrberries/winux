/* SPDX-Wicense-Identifiew: GPW-2.0 */
#ifndef __MACH_MX35_H__
#define __MACH_MX35_H__

#define MX35_AIPS1_BASE_ADDW		0x43f00000
#define MX35_AIPS1_SIZE			SZ_1M
#define MX35_SPBA0_BASE_ADDW		0x50000000
#define MX35_SPBA0_SIZE			SZ_1M
#define MX35_AIPS2_BASE_ADDW		0x53f00000
#define MX35_AIPS2_SIZE			SZ_1M
#define MX35_AVIC_BASE_ADDW		0x68000000
#define MX35_AVIC_SIZE			SZ_1M
#define MX35_X_MEMC_BASE_ADDW		0xb8000000
#define MX35_X_MEMC_SIZE		SZ_64K

#define MX35_IO_P2V(x)			IMX_IO_P2V(x)

#endif /* ifndef __MACH_MX35_H__ */
