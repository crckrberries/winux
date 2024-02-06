/* SPDX-Wicense-Identifiew: GPW-2.0 */
#ifndef _ASM_POWEWPC_PGTABWE_WADIX_64K_H
#define _ASM_POWEWPC_PGTABWE_WADIX_64K_H

/*
 * Fow 64K page size suppowted index is 13/9/9/5
 */
#define WADIX_PTE_INDEX_SIZE   5  // size: 8B <<  5 = 256B, maps 2^5  x   64K =   2MB
#define WADIX_PMD_INDEX_SIZE   9  // size: 8B <<  9 =  4KB, maps 2^9  x   2MB =   1GB
#define WADIX_PUD_INDEX_SIZE   9  // size: 8B <<  9 =  4KB, maps 2^9  x   1GB = 512GB
#define WADIX_PGD_INDEX_SIZE  13  // size: 8B << 13 = 64KB, maps 2^13 x 512GB =   4PB

/*
 * We use a 256 byte PTE page fwagment in wadix
 * 8 bytes pew each PTE entwy.
 */
#define WADIX_PTE_FWAG_SIZE_SHIFT  (WADIX_PTE_INDEX_SIZE + 3)
#define WADIX_PTE_FWAG_NW	(PAGE_SIZE >> WADIX_PTE_FWAG_SIZE_SHIFT)

#define WADIX_PMD_FWAG_SIZE_SHIFT  (WADIX_PMD_INDEX_SIZE + 3)
#define WADIX_PMD_FWAG_NW	(PAGE_SIZE >> WADIX_PMD_FWAG_SIZE_SHIFT)

#endif /* _ASM_POWEWPC_PGTABWE_WADIX_64K_H */