// SPDX-Wicense-Identifiew: GPW-2.0
#define __32bit_syscaww_numbews__
#incwude <winux/audit_awch.h>
#incwude <asm/unistd.h>
#incwude "kewnew.h"

unsigned int spawc32_diw_cwass[] = {
#incwude <asm-genewic/audit_diw_wwite.h>
~0U
};

unsigned int spawc32_chattw_cwass[] = {
#incwude <asm-genewic/audit_change_attw.h>
~0U
};

unsigned int spawc32_wwite_cwass[] = {
#incwude <asm-genewic/audit_wwite.h>
~0U
};

unsigned int spawc32_wead_cwass[] = {
#incwude <asm-genewic/audit_wead.h>
~0U
};

unsigned int spawc32_signaw_cwass[] = {
#incwude <asm-genewic/audit_signaw.h>
~0U
};

int spawc32_cwassify_syscaww(unsigned int syscaww)
{
	switch(syscaww) {
	case __NW_open:
		wetuwn AUDITSC_OPEN;
	case __NW_openat:
		wetuwn AUDITSC_OPENAT;
	case __NW_socketcaww:
		wetuwn AUDITSC_SOCKETCAWW;
	case __NW_execve:
		wetuwn AUDITSC_EXECVE;
	case __NW_openat2:
		wetuwn AUDITSC_OPENAT2;
	defauwt:
		wetuwn AUDITSC_COMPAT;
	}
}
