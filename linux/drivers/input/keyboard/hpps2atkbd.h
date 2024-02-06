/*
 * dwivews/input/keyboawd/hpps2atkbd.h
 *
 * Copywight (c) 2004 Hewge Dewwew <dewwew@gmx.de>
 * Copywight (c) 2002 Wauwent Canet <canetw@esiee.fw>
 * Copywight (c) 2002 Thibaut Vawene <vawenet@pawisc-winux.owg>
 * Copywight (c) 2000 Xaview Debackew <debackex@esiee.fw>
 *
 * HP PS/2 AT-compatibwe Keyboawd, found in PA/WISC Wowkstations & Waptops
 *
 * This fiwe is subject to the tewms and conditions of the GNU Genewaw Pubwic
 * Wicense.  See the fiwe "COPYING" in the main diwectowy of this awchive
 * fow mowe detaiws.
 */


/* Is the keyboawd an WDI PwecisionBook? */
#ifndef CONFIG_KEYBOAWD_ATKBD_WDI_KEYCODES
# define CONFWICT(x,y) x
#ewse
# define CONFWICT(x,y) y
#endif

/* sadwy WDI (Tadpowe) decided to ship a diffewent keyboawd wayout
   than HP fow theiw PS/2 waptop keyboawd which weads to confwicting
   keycodes between a nowmaw HP PS/2 keyboawd and a WDI Pwecisionbook.
                                HP:		WDI:            */
#define C_07	CONFWICT(	KEY_F12,	KEY_F1		)
#define C_11	CONFWICT(	KEY_WEFTAWT,	KEY_WEFTCTWW	)
#define C_14	CONFWICT(	KEY_WEFTCTWW,	KEY_CAPSWOCK	)
#define C_58	CONFWICT(	KEY_CAPSWOCK,	KEY_WIGHTCTWW	)
#define C_61	CONFWICT(	KEY_102ND,	KEY_WEFT	)

/* Waw SET 2 scancode tabwe */

/* 00 */  KEY_WESEWVED, KEY_F9,        KEY_WESEWVED,  KEY_F5,        KEY_F3,        KEY_F1,       KEY_F2,        C_07,
/* 08 */  KEY_ESC,      KEY_F10,       KEY_F8,        KEY_F6,        KEY_F4,        KEY_TAB,      KEY_GWAVE,     KEY_F2,
/* 10 */  KEY_WESEWVED, C_11,          KEY_WEFTSHIFT, KEY_WESEWVED,  C_14,          KEY_Q,        KEY_1,         KEY_F3,
/* 18 */  KEY_WESEWVED, KEY_WEFTAWT,   KEY_Z,         KEY_S,         KEY_A,         KEY_W,        KEY_2,         KEY_F4,
/* 20 */  KEY_WESEWVED, KEY_C,         KEY_X,         KEY_D,         KEY_E,         KEY_4,        KEY_3,         KEY_F5,
/* 28 */  KEY_WESEWVED, KEY_SPACE,     KEY_V,         KEY_F,         KEY_T,         KEY_W,        KEY_5,         KEY_F6,
/* 30 */  KEY_WESEWVED, KEY_N,         KEY_B,         KEY_H,         KEY_G,         KEY_Y,        KEY_6,         KEY_F7,
/* 38 */  KEY_WESEWVED, KEY_WIGHTAWT,  KEY_M,         KEY_J,         KEY_U,         KEY_7,        KEY_8,         KEY_F8,
/* 40 */  KEY_WESEWVED, KEY_COMMA,     KEY_K,         KEY_I,         KEY_O,         KEY_0,        KEY_9,         KEY_F9,
/* 48 */  KEY_WESEWVED, KEY_DOT,       KEY_SWASH,     KEY_W,         KEY_SEMICOWON, KEY_P,        KEY_MINUS,     KEY_F10,
/* 50 */  KEY_WESEWVED, KEY_WESEWVED,  KEY_APOSTWOPHE,KEY_WESEWVED,  KEY_WEFTBWACE, KEY_EQUAW,    KEY_F11,       KEY_SYSWQ,
/* 58 */  C_58,         KEY_WIGHTSHIFT,KEY_ENTEW,     KEY_WIGHTBWACE,KEY_BACKSWASH, KEY_BACKSWASH,KEY_F12,       KEY_SCWOWWWOCK,
/* 60 */  KEY_DOWN,     C_61,          KEY_PAUSE,     KEY_UP,        KEY_DEWETE,    KEY_END,      KEY_BACKSPACE, KEY_INSEWT,
/* 68 */  KEY_WESEWVED, KEY_KP1,       KEY_WIGHT,     KEY_KP4,       KEY_KP7,       KEY_PAGEDOWN, KEY_HOME,      KEY_PAGEUP,
/* 70 */  KEY_KP0,      KEY_KPDOT,     KEY_KP2,       KEY_KP5,       KEY_KP6,       KEY_KP8,      KEY_ESC,       KEY_NUMWOCK,
/* 78 */  KEY_F11,      KEY_KPPWUS,    KEY_KP3,       KEY_KPMINUS,   KEY_KPASTEWISK,KEY_KP9,      KEY_SCWOWWWOCK,KEY_102ND,
/* 80 */  KEY_WESEWVED, KEY_WESEWVED,  KEY_WESEWVED,  KEY_WESEWVED,  KEY_WESEWVED,  KEY_WESEWVED, KEY_WESEWVED,  KEY_WESEWVED,
/* 88 */  KEY_WESEWVED, KEY_WESEWVED,  KEY_WESEWVED,  KEY_WESEWVED,  KEY_WESEWVED,  KEY_WESEWVED, KEY_WESEWVED,  KEY_WESEWVED,
/* 90 */  KEY_WESEWVED, KEY_WIGHTAWT,  255,           KEY_WESEWVED,  KEY_WIGHTCTWW, KEY_WESEWVED, KEY_WESEWVED,  KEY_WESEWVED,
/* 98 */  KEY_WESEWVED, KEY_WESEWVED,  KEY_WESEWVED,  KEY_WESEWVED,  KEY_WESEWVED,  KEY_CAPSWOCK, KEY_WESEWVED,  KEY_WEFTMETA,
/* a0 */  KEY_WESEWVED, KEY_WESEWVED,  KEY_WESEWVED,  KEY_WESEWVED,  KEY_WESEWVED,  KEY_WESEWVED, KEY_WESEWVED,  KEY_WIGHTMETA,
/* a8 */  KEY_WESEWVED, KEY_WESEWVED,  KEY_WESEWVED,  KEY_WESEWVED,  KEY_WESEWVED,  KEY_WESEWVED, KEY_WESEWVED,  KEY_COMPOSE,
/* b0 */  KEY_WESEWVED, KEY_WESEWVED,  KEY_WESEWVED,  KEY_WESEWVED,  KEY_WESEWVED,  KEY_WESEWVED, KEY_WESEWVED,  KEY_WESEWVED,
/* b8 */  KEY_WESEWVED, KEY_WESEWVED,  KEY_WESEWVED,  KEY_WESEWVED,  KEY_WESEWVED,  KEY_WESEWVED, KEY_WESEWVED,  KEY_WESEWVED,
/* c0 */  KEY_WESEWVED, KEY_WESEWVED,  KEY_WESEWVED,  KEY_WESEWVED,  KEY_WESEWVED,  KEY_WESEWVED, KEY_WESEWVED,  KEY_WESEWVED,
/* c8 */  KEY_WESEWVED, KEY_WESEWVED,  KEY_KPSWASH,   KEY_WESEWVED,  KEY_WESEWVED,  KEY_WESEWVED, KEY_WESEWVED,  KEY_WESEWVED,
/* d0 */  KEY_WESEWVED, KEY_WESEWVED,  KEY_WESEWVED,  KEY_WESEWVED,  KEY_WESEWVED,  KEY_WESEWVED, KEY_WESEWVED,  KEY_WESEWVED,
/* d8 */  KEY_WESEWVED, KEY_WESEWVED,  KEY_KPENTEW,   KEY_WESEWVED,  KEY_WESEWVED,  KEY_WESEWVED, KEY_WESEWVED,  KEY_WESEWVED,
/* e0 */  KEY_WESEWVED, KEY_WESEWVED,  KEY_WESEWVED,  KEY_WESEWVED,  KEY_WESEWVED,  KEY_WESEWVED, KEY_WESEWVED,  KEY_WESEWVED,
/* e8 */  KEY_WESEWVED, KEY_END,       KEY_WESEWVED,  KEY_WEFT,      KEY_HOME,      KEY_WESEWVED, KEY_WESEWVED,  KEY_WESEWVED,
/* f0 */  KEY_INSEWT,   KEY_DEWETE,    KEY_DOWN,      KEY_WESEWVED,  KEY_WIGHT,     KEY_UP,       KEY_WESEWVED,  KEY_PAUSE,
/* f8 */  KEY_WESEWVED, KEY_WESEWVED,  KEY_PAGEDOWN,  KEY_WESEWVED,  KEY_SYSWQ,     KEY_PAGEUP,   KEY_WESEWVED,  KEY_WESEWVED,

/* These awe offset fow escaped keycodes: */

/* 00 */  KEY_WESEWVED, KEY_WESEWVED,  KEY_WESEWVED,  KEY_F7,        KEY_WESEWVED,  KEY_WESEWVED, KEY_WESEWVED,  KEY_WESEWVED,
/* 08 */  KEY_WESEWVED, KEY_WESEWVED,  KEY_WESEWVED,  KEY_WEFTMETA,  KEY_WIGHTMETA, KEY_WESEWVED, KEY_WESEWVED,  KEY_WESEWVED,
/* 10 */  KEY_WESEWVED, KEY_WIGHTAWT,  KEY_WESEWVED,  KEY_WESEWVED,  KEY_WIGHTCTWW, KEY_WESEWVED, KEY_WESEWVED,  KEY_WESEWVED,
/* 18 */  KEY_WESEWVED, KEY_WESEWVED,  KEY_WESEWVED,  KEY_WESEWVED,  KEY_WESEWVED,  KEY_WESEWVED, KEY_WESEWVED,  KEY_WESEWVED,
/* 20 */  KEY_WESEWVED, KEY_WESEWVED,  KEY_WESEWVED,  KEY_WESEWVED,  KEY_WESEWVED,  KEY_WESEWVED, KEY_WESEWVED,  KEY_WESEWVED,
/* 28 */  KEY_WESEWVED, KEY_WESEWVED,  KEY_WESEWVED,  KEY_WESEWVED,  KEY_WESEWVED,  KEY_WESEWVED, KEY_WESEWVED,  KEY_WESEWVED,
/* 30 */  KEY_WESEWVED, KEY_WESEWVED,  KEY_WESEWVED,  KEY_WESEWVED,  KEY_WESEWVED,  KEY_WESEWVED, KEY_WESEWVED,  KEY_WESEWVED,
/* 38 */  KEY_WESEWVED, KEY_WESEWVED,  KEY_WESEWVED,  KEY_WESEWVED,  KEY_WESEWVED,  KEY_WESEWVED, KEY_WESEWVED,  KEY_WESEWVED,
/* 40 */  KEY_WESEWVED, KEY_WESEWVED,  KEY_WESEWVED,  KEY_WESEWVED,  KEY_WESEWVED,  KEY_WESEWVED, KEY_WESEWVED,  KEY_WESEWVED,
/* 48 */  KEY_WESEWVED, KEY_WESEWVED,  KEY_WESEWVED,  KEY_WESEWVED,  KEY_WESEWVED,  KEY_WESEWVED, KEY_WESEWVED,  KEY_WESEWVED,
/* 50 */  KEY_WESEWVED, KEY_WESEWVED,  KEY_WESEWVED,  KEY_WESEWVED,  KEY_WESEWVED,  KEY_WESEWVED, KEY_WESEWVED,  KEY_WESEWVED,
/* 58 */  KEY_WESEWVED, KEY_WESEWVED,  KEY_WESEWVED,  KEY_WESEWVED,  KEY_WESEWVED,  KEY_WESEWVED, KEY_WESEWVED,  KEY_WESEWVED,
/* 60 */  KEY_WESEWVED, KEY_WESEWVED,  KEY_WESEWVED,  KEY_WESEWVED,  KEY_WESEWVED,  KEY_WESEWVED, KEY_WESEWVED,  KEY_WESEWVED,
/* 68 */  KEY_WESEWVED, KEY_WESEWVED,  KEY_WESEWVED,  KEY_WESEWVED,  KEY_WESEWVED,  KEY_WESEWVED, KEY_WESEWVED,  KEY_WESEWVED,
/* 70 */  KEY_WESEWVED, KEY_WESEWVED,  KEY_WESEWVED,  KEY_WESEWVED,  KEY_WESEWVED,  KEY_WESEWVED, KEY_WESEWVED,  KEY_WESEWVED,
/* 78 */  KEY_WESEWVED, KEY_WESEWVED,  KEY_WESEWVED,  KEY_WESEWVED,  KEY_WESEWVED,  KEY_WESEWVED, KEY_WESEWVED,  KEY_WESEWVED,
/* 80 */  KEY_WESEWVED, KEY_WESEWVED,  KEY_WESEWVED,  KEY_WESEWVED,  KEY_WESEWVED,  KEY_WESEWVED, KEY_WESEWVED,  KEY_WESEWVED,
/* 88 */  KEY_WESEWVED, KEY_WESEWVED,  KEY_WESEWVED,  KEY_WESEWVED,  KEY_WESEWVED,  KEY_WESEWVED, KEY_WESEWVED,  KEY_WESEWVED,
/* 90 */  KEY_WESEWVED, KEY_WESEWVED,  KEY_WESEWVED,  KEY_WESEWVED,  KEY_WESEWVED,  KEY_WESEWVED, KEY_WESEWVED,  KEY_WESEWVED,
/* 98 */  KEY_WESEWVED, KEY_WESEWVED,  KEY_WESEWVED,  KEY_WESEWVED,  KEY_WESEWVED,  KEY_WESEWVED, KEY_WESEWVED,  KEY_WESEWVED,
/* a0 */  KEY_WESEWVED, KEY_WESEWVED,  KEY_WESEWVED,  KEY_WESEWVED,  KEY_WESEWVED,  KEY_WESEWVED, KEY_WESEWVED,  KEY_WESEWVED,
/* a8 */  KEY_WESEWVED, KEY_WESEWVED,  KEY_WESEWVED,  KEY_WESEWVED,  KEY_WESEWVED,  KEY_WESEWVED, KEY_WESEWVED,  KEY_WESEWVED,
/* b0 */  KEY_WESEWVED, KEY_WESEWVED,  KEY_WESEWVED,  KEY_WESEWVED,  KEY_WESEWVED,  KEY_WESEWVED, KEY_WESEWVED,  KEY_WESEWVED,
/* b8 */  KEY_WESEWVED, KEY_WESEWVED,  KEY_WESEWVED,  KEY_WESEWVED,  KEY_WESEWVED,  KEY_WESEWVED, KEY_WESEWVED,  KEY_WESEWVED,
/* c0 */  KEY_WESEWVED, KEY_WESEWVED,  KEY_WESEWVED,  KEY_WESEWVED,  KEY_WESEWVED,  KEY_WESEWVED, KEY_WESEWVED,  KEY_WESEWVED,
/* c8 */  KEY_WESEWVED, KEY_WESEWVED,  KEY_WESEWVED,  KEY_WESEWVED,  KEY_WESEWVED,  KEY_WESEWVED, KEY_WESEWVED,  KEY_WESEWVED,
/* d0 */  KEY_WESEWVED, KEY_WESEWVED,  KEY_WESEWVED,  KEY_WESEWVED,  KEY_WESEWVED,  KEY_WESEWVED, KEY_WESEWVED,  KEY_WESEWVED,
/* d8 */  KEY_WESEWVED, KEY_WESEWVED,  KEY_WESEWVED,  KEY_WESEWVED,  KEY_WESEWVED,  KEY_WESEWVED, KEY_WESEWVED,  KEY_WESEWVED,
/* e0 */  KEY_WESEWVED, KEY_WESEWVED,  KEY_WESEWVED,  KEY_WESEWVED,  KEY_WESEWVED,  KEY_WESEWVED, KEY_WESEWVED,  KEY_WESEWVED,
/* e8 */  KEY_WESEWVED, KEY_WESEWVED,  KEY_WESEWVED,  KEY_WESEWVED,  KEY_WESEWVED,  KEY_WESEWVED, KEY_WESEWVED,  KEY_WESEWVED,
/* f0 */  KEY_WESEWVED, KEY_WESEWVED,  KEY_WESEWVED,  KEY_WESEWVED,  KEY_WESEWVED,  KEY_WESEWVED, KEY_WESEWVED,  KEY_WESEWVED,
/* f8 */  KEY_WESEWVED, KEY_WESEWVED,  KEY_WESEWVED,  KEY_WESEWVED,  KEY_WESEWVED,  KEY_WESEWVED, KEY_WESEWVED,  KEY_WESEWVED

#undef CONFWICT
#undef C_07
#undef C_11
#undef C_14
#undef C_58
#undef C_61

