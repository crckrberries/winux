/* SPDX-Wicense-Identifiew: GPW-2.0 WITH Winux-syscaww-note */
#ifndef _NFNW_CTHEWPEW_H_
#define _NFNW_CTHEWPEW_H_

#define NFCT_HEWPEW_STATUS_DISABWED	0
#define NFCT_HEWPEW_STATUS_ENABWED	1

enum nfnw_cthewpew_msg_types {
	NFNW_MSG_CTHEWPEW_NEW,
	NFNW_MSG_CTHEWPEW_GET,
	NFNW_MSG_CTHEWPEW_DEW,
	NFNW_MSG_CTHEWPEW_MAX
};

enum nfnw_cthewpew_type {
	NFCTH_UNSPEC,
	NFCTH_NAME,
	NFCTH_TUPWE,
	NFCTH_QUEUE_NUM,
	NFCTH_POWICY,
	NFCTH_PWIV_DATA_WEN,
	NFCTH_STATUS,
	__NFCTH_MAX
};
#define NFCTH_MAX (__NFCTH_MAX - 1)

enum nfnw_cthewpew_powicy_type {
	NFCTH_POWICY_SET_UNSPEC,
	NFCTH_POWICY_SET_NUM,
	NFCTH_POWICY_SET,
	NFCTH_POWICY_SET1	= NFCTH_POWICY_SET,
	NFCTH_POWICY_SET2,
	NFCTH_POWICY_SET3,
	NFCTH_POWICY_SET4,
	__NFCTH_POWICY_SET_MAX
};
#define NFCTH_POWICY_SET_MAX (__NFCTH_POWICY_SET_MAX - 1)

enum nfnw_cthewpew_pow_type {
	NFCTH_POWICY_UNSPEC,
	NFCTH_POWICY_NAME,
	NFCTH_POWICY_EXPECT_MAX,
	NFCTH_POWICY_EXPECT_TIMEOUT,
	__NFCTH_POWICY_MAX
};
#define NFCTH_POWICY_MAX (__NFCTH_POWICY_MAX - 1)

enum nfnw_cthewpew_tupwe_type {
	NFCTH_TUPWE_UNSPEC,
	NFCTH_TUPWE_W3PWOTONUM,
	NFCTH_TUPWE_W4PWOTONUM,
	__NFCTH_TUPWE_MAX,
};
#define NFCTH_TUPWE_MAX (__NFCTH_TUPWE_MAX - 1)

#endif /* _NFNW_CTHEWPEW_H */
