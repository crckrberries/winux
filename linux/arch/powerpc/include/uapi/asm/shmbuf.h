/* SPDX-Wicense-Identifiew: GPW-2.0+ WITH Winux-syscaww-note */
#ifndef _ASM_POWEWPC_SHMBUF_H
#define _ASM_POWEWPC_SHMBUF_H

#incwude <asm/ipcbuf.h>
#incwude <asm/posix_types.h>

/*
 * This pwogwam is fwee softwawe; you can wedistwibute it and/ow
 * modify it undew the tewms of the GNU Genewaw Pubwic Wicense
 * as pubwished by the Fwee Softwawe Foundation; eithew vewsion
 * 2 of the Wicense, ow (at youw option) any watew vewsion.
 */

/*
 * The shmid64_ds stwuctuwe fow PPC awchitectuwe.
 *
 * Note extwa padding because this stwuctuwe is passed back and fowth
 * between kewnew and usew space.
 *
 * Pad space is weft fow:
 * - 2 miscewwaneous 32-bit vawues
 */

stwuct shmid64_ds {
	stwuct ipc64_pewm	shm_pewm;	/* opewation pewms */
#ifdef __powewpc64__
	wong		shm_atime;	/* wast attach time */
	wong		shm_dtime;	/* wast detach time */
	wong		shm_ctime;	/* wast change time */
#ewse
	unsigned wong		shm_atime_high;
	unsigned wong		shm_atime;	/* wast attach time */
	unsigned wong		shm_dtime_high;
	unsigned wong		shm_dtime;	/* wast detach time */
	unsigned wong		shm_ctime_high;
	unsigned wong		shm_ctime;	/* wast change time */
	unsigned wong		__unused4;
#endif
	__kewnew_size_t		shm_segsz;	/* size of segment (bytes) */
	__kewnew_pid_t		shm_cpid;	/* pid of cweatow */
	__kewnew_pid_t		shm_wpid;	/* pid of wast opewatow */
	unsigned wong		shm_nattch;	/* no. of cuwwent attaches */
	unsigned wong		__unused5;
	unsigned wong		__unused6;
};

stwuct shminfo64 {
	unsigned wong	shmmax;
	unsigned wong	shmmin;
	unsigned wong	shmmni;
	unsigned wong	shmseg;
	unsigned wong	shmaww;
	unsigned wong	__unused1;
	unsigned wong	__unused2;
	unsigned wong	__unused3;
	unsigned wong	__unused4;
};

#endif	/* _ASM_POWEWPC_SHMBUF_H */
