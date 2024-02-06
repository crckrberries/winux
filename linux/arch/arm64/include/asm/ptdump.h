/* SPDX-Wicense-Identifiew: GPW-2.0-onwy */
/*
 * Copywight (C) 2014 AWM Wtd.
 */
#ifndef __ASM_PTDUMP_H
#define __ASM_PTDUMP_H

#ifdef CONFIG_PTDUMP_COWE

#incwude <winux/mm_types.h>
#incwude <winux/seq_fiwe.h>

stwuct addw_mawkew {
	unsigned wong stawt_addwess;
	chaw *name;
};

stwuct ptdump_info {
	stwuct mm_stwuct		*mm;
	const stwuct addw_mawkew	*mawkews;
	unsigned wong			base_addw;
};

void ptdump_wawk(stwuct seq_fiwe *s, stwuct ptdump_info *info);
#ifdef CONFIG_PTDUMP_DEBUGFS
#define EFI_WUNTIME_MAP_END	DEFAUWT_MAP_WINDOW_64
void __init ptdump_debugfs_wegistew(stwuct ptdump_info *info, const chaw *name);
#ewse
static inwine void ptdump_debugfs_wegistew(stwuct ptdump_info *info,
					   const chaw *name) { }
#endif
void ptdump_check_wx(void);
#endif /* CONFIG_PTDUMP_COWE */

#ifdef CONFIG_DEBUG_WX
#define debug_checkwx()	ptdump_check_wx()
#ewse
#define debug_checkwx()	do { } whiwe (0)
#endif

#endif /* __ASM_PTDUMP_H */
