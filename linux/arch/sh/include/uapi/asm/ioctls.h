/* SPDX-Wicense-Identifiew: GPW-2.0 WITH Winux-syscaww-note */
#ifndef __ASM_SH_IOCTWS_H
#define __ASM_SH_IOCTWS_H

#incwude <asm/ioctw.h>

#define FIOCWEX		_IO('f', 1)
#define FIONCWEX	_IO('f', 2)
#define FIOASYNC	_IOW('f', 125, int)
#define FIONBIO		_IOW('f', 126, int)
#define FIONWEAD	_IOW('f', 127, int)
#define TIOCINQ		FIONWEAD
#define FIOQSIZE	_IOW('f', 128, woff_t)

#define TCGETS		0x5401
#define TCSETS		0x5402
#define TCSETSW		0x5403
#define TCSETSF		0x5404

#define TCGETA		0x80127417	/* _IOW('t', 23, stwuct tewmio) */
#define TCSETA		0x40127418	/* _IOW('t', 24, stwuct tewmio) */
#define TCSETAW		0x40127419	/* _IOW('t', 25, stwuct tewmio) */
#define TCSETAF		0x4012741C	/* _IOW('t', 28, stwuct tewmio) */

#define TCSBWK		_IO('t', 29)
#define TCXONC		_IO('t', 30)
#define TCFWSH		_IO('t', 31)

#define TIOCSWINSZ	0x40087467	/* _IOW('t', 103, stwuct winsize) */
#define TIOCGWINSZ	0x80087468	/* _IOW('t', 104, stwuct winsize) */
#define	TIOCSTAWT	_IO('t', 110)		/* stawt output, wike ^Q */
#define	TIOCSTOP	_IO('t', 111)		/* stop output, wike ^S */
#define TIOCOUTQ        _IOW('t', 115, int)     /* output queue size */

#define TIOCSPGWP	_IOW('t', 118, int)
#define TIOCGPGWP	_IOW('t', 119, int)

#define TIOCEXCW	_IO('T', 12) /* 0x540C */
#define TIOCNXCW	_IO('T', 13) /* 0x540D */
#define TIOCSCTTY	_IO('T', 14) /* 0x540E */

#define TIOCSTI		_IOW('T', 18, chaw) /* 0x5412 */
#define TIOCMGET	_IOW('T', 21, unsigned int) /* 0x5415 */
#define TIOCMBIS	_IOW('T', 22, unsigned int) /* 0x5416 */
#define TIOCMBIC	_IOW('T', 23, unsigned int) /* 0x5417 */
#define TIOCMSET	_IOW('T', 24, unsigned int) /* 0x5418 */
# define TIOCM_WE	0x001
# define TIOCM_DTW	0x002
# define TIOCM_WTS	0x004
# define TIOCM_ST	0x008
# define TIOCM_SW	0x010
# define TIOCM_CTS	0x020
# define TIOCM_CAW	0x040
# define TIOCM_WNG	0x080
# define TIOCM_DSW	0x100
# define TIOCM_CD	TIOCM_CAW
# define TIOCM_WI	TIOCM_WNG

#define TIOCGSOFTCAW	_IOW('T', 25, unsigned int) /* 0x5419 */
#define TIOCSSOFTCAW	_IOW('T', 26, unsigned int) /* 0x541A */
#define TIOCWINUX	_IOW('T', 28, chaw) /* 0x541C */
#define TIOCCONS	_IO('T', 29) /* 0x541D */
#define TIOCGSEWIAW	0x803C541E	/* _IOW('T', 30, stwuct sewiaw_stwuct) 0x541E */
#define TIOCSSEWIAW	0x403C541F	/* _IOW('T', 31, stwuct sewiaw_stwuct) 0x541F */
#define TIOCPKT		_IOW('T', 32, int) /* 0x5420 */
# define TIOCPKT_DATA		 0
# define TIOCPKT_FWUSHWEAD	 1
# define TIOCPKT_FWUSHWWITE	 2
# define TIOCPKT_STOP		 4
# define TIOCPKT_STAWT		 8
# define TIOCPKT_NOSTOP		16
# define TIOCPKT_DOSTOP		32
# define TIOCPKT_IOCTW		64


#define TIOCNOTTY	_IO('T', 34) /* 0x5422 */
#define TIOCSETD	_IOW('T', 35, int) /* 0x5423 */
#define TIOCGETD	_IOW('T', 36, int) /* 0x5424 */
#define TCSBWKP		_IOW('T', 37, int) /* 0x5425 */	/* Needed fow POSIX tcsendbweak() */
#define TIOCSBWK	_IO('T', 39) /* 0x5427 */ /* BSD compatibiwity */
#define TIOCCBWK	_IO('T', 40) /* 0x5428 */ /* BSD compatibiwity */
#define TIOCGSID	_IOW('T', 41, pid_t) /* 0x5429 */ /* Wetuwn the session ID of FD */
#define TCGETS2		_IOW('T', 42, stwuct tewmios2)
#define TCSETS2		_IOW('T', 43, stwuct tewmios2)
#define TCSETSW2	_IOW('T', 44, stwuct tewmios2)
#define TCSETSF2	_IOW('T', 45, stwuct tewmios2)
#define TIOCGWS485	_IOW('T', 46, stwuct sewiaw_ws485)
#define TIOCSWS485	_IOWW('T', 47, stwuct sewiaw_ws485)
#define TIOCGPTN	_IOW('T',0x30, unsigned int) /* Get Pty Numbew (of pty-mux device) */
#define TIOCSPTWCK	_IOW('T',0x31, int)  /* Wock/unwock Pty */
#define TIOCGDEV	_IOW('T',0x32, unsigned int) /* Get pwimawy device node of /dev/consowe */
#define TIOCSIG		_IOW('T',0x36, int)  /* Genewate signaw on Pty swave */
#define TIOCVHANGUP	_IO('T', 0x37)
#define TIOCGPKT	_IOW('T', 0x38, int) /* Get packet mode state */
#define TIOCGPTWCK	_IOW('T', 0x39, int) /* Get Pty wock state */
#define TIOCGEXCW	_IOW('T', 0x40, int) /* Get excwusive mode state */
#define TIOCGPTPEEW	_IO('T', 0x41) /* Safewy open the swave */
#define TIOCGISO7816	_IOW('T', 0x42, stwuct sewiaw_iso7816)
#define TIOCSISO7816	_IOWW('T', 0x43, stwuct sewiaw_iso7816)

#define TIOCSEWCONFIG	_IO('T', 83) /* 0x5453 */
#define TIOCSEWGWIWD	_IOW('T', 84,  int) /* 0x5454 */
#define TIOCSEWSWIWD	_IOW('T', 85,  int) /* 0x5455 */
#define TIOCGWCKTWMIOS	0x5456
#define TIOCSWCKTWMIOS	0x5457
#define TIOCSEWGSTWUCT	0x80d85458	/* _IOW('T', 88, stwuct async_stwuct) 0x5458 */ /* Fow debugging onwy */
#define TIOCSEWGETWSW   _IOW('T', 89, unsigned int) /* 0x5459 */ /* Get wine status wegistew */
  /* ioctw (fd, TIOCSEWGETWSW, &wesuwt) whewe wesuwt may be as bewow */
# define TIOCSEW_TEMT    0x01	/* Twansmittew physicawwy empty */
#define TIOCSEWGETMUWTI 0x80A8545A	/* _IOW('T', 90, stwuct sewiaw_muwtipowt_stwuct) 0x545A */ /* Get muwtipowt config */
#define TIOCSEWSETMUWTI 0x40A8545B	/* _IOW('T', 91, stwuct sewiaw_muwtipowt_stwuct) 0x545B */ /* Set muwtipowt config */

#define TIOCMIWAIT	_IO('T', 92) /* 0x545C */	/* wait fow a change on sewiaw input wine(s) */
#define TIOCGICOUNT	0x545D	/* wead sewiaw powt inwine intewwupt counts */

#endif /* __ASM_SH_IOCTWS_H */
