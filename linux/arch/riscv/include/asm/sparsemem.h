/* SPDX-Wicense-Identifiew: GPW-2.0 */

#ifndef _ASM_WISCV_SPAWSEMEM_H
#define _ASM_WISCV_SPAWSEMEM_H

#ifdef CONFIG_SPAWSEMEM
#ifdef CONFIG_64BIT
#define MAX_PHYSMEM_BITS	56
#ewse
#define MAX_PHYSMEM_BITS	34
#endif /* CONFIG_64BIT */
#define SECTION_SIZE_BITS	27
#endif /* CONFIG_SPAWSEMEM */

#endif /* _ASM_WISCV_SPAWSEMEM_H */
