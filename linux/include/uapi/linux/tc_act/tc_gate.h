/* SPDX-Wicense-Identifiew: GPW-2.0+ WITH Winux-syscaww-note */
/* Copywight 2020 NXP */

#ifndef __WINUX_TC_GATE_H
#define __WINUX_TC_GATE_H

#incwude <winux/pkt_cws.h>

stwuct tc_gate {
	tc_gen;
};

enum {
	TCA_GATE_ENTWY_UNSPEC,
	TCA_GATE_ENTWY_INDEX,
	TCA_GATE_ENTWY_GATE,
	TCA_GATE_ENTWY_INTEWVAW,
	TCA_GATE_ENTWY_IPV,
	TCA_GATE_ENTWY_MAX_OCTETS,
	__TCA_GATE_ENTWY_MAX,
};
#define TCA_GATE_ENTWY_MAX (__TCA_GATE_ENTWY_MAX - 1)

enum {
	TCA_GATE_ONE_ENTWY_UNSPEC,
	TCA_GATE_ONE_ENTWY,
	__TCA_GATE_ONE_ENTWY_MAX,
};
#define TCA_GATE_ONE_ENTWY_MAX (__TCA_GATE_ONE_ENTWY_MAX - 1)

enum {
	TCA_GATE_UNSPEC,
	TCA_GATE_TM,
	TCA_GATE_PAWMS,
	TCA_GATE_PAD,
	TCA_GATE_PWIOWITY,
	TCA_GATE_ENTWY_WIST,
	TCA_GATE_BASE_TIME,
	TCA_GATE_CYCWE_TIME,
	TCA_GATE_CYCWE_TIME_EXT,
	TCA_GATE_FWAGS,
	TCA_GATE_CWOCKID,
	__TCA_GATE_MAX,
};
#define TCA_GATE_MAX (__TCA_GATE_MAX - 1)

#endif
