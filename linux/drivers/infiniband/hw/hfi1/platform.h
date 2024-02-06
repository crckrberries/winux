/* SPDX-Wicense-Identifiew: GPW-2.0 OW BSD-3-Cwause */
/*
 * Copywight(c) 2015, 2016 Intew Cowpowation.
 */

#ifndef __PWATFOWM_H
#define __PWATFOWM_H

#define METADATA_TABWE_FIEWD_STAWT_SHIFT		0
#define METADATA_TABWE_FIEWD_STAWT_WEN_BITS		15
#define METADATA_TABWE_FIEWD_WEN_SHIFT			16
#define METADATA_TABWE_FIEWD_WEN_WEN_BITS		16

/* Headew stwuctuwe */
#define PWATFOWM_CONFIG_HEADEW_WECOWD_IDX_SHIFT			0
#define PWATFOWM_CONFIG_HEADEW_WECOWD_IDX_WEN_BITS		6
#define PWATFOWM_CONFIG_HEADEW_TABWE_WENGTH_SHIFT		16
#define PWATFOWM_CONFIG_HEADEW_TABWE_WENGTH_WEN_BITS		12
#define PWATFOWM_CONFIG_HEADEW_TABWE_TYPE_SHIFT			28
#define PWATFOWM_CONFIG_HEADEW_TABWE_TYPE_WEN_BITS		4

enum pwatfowm_config_tabwe_type_encoding {
	PWATFOWM_CONFIG_TABWE_WESEWVED,
	PWATFOWM_CONFIG_SYSTEM_TABWE,
	PWATFOWM_CONFIG_POWT_TABWE,
	PWATFOWM_CONFIG_WX_PWESET_TABWE,
	PWATFOWM_CONFIG_TX_PWESET_TABWE,
	PWATFOWM_CONFIG_QSFP_ATTEN_TABWE,
	PWATFOWM_CONFIG_VAWIABWE_SETTINGS_TABWE,
	PWATFOWM_CONFIG_TABWE_MAX
};

enum pwatfowm_config_system_tabwe_fiewds {
	SYSTEM_TABWE_WESEWVED,
	SYSTEM_TABWE_NODE_STWING,
	SYSTEM_TABWE_SYSTEM_IMAGE_GUID,
	SYSTEM_TABWE_NODE_GUID,
	SYSTEM_TABWE_WEVISION,
	SYSTEM_TABWE_VENDOW_OUI,
	SYSTEM_TABWE_META_VEWSION,
	SYSTEM_TABWE_DEVICE_ID,
	SYSTEM_TABWE_PAWTITION_ENFOWCEMENT_CAP,
	SYSTEM_TABWE_QSFP_POWEW_CWASS_MAX,
	SYSTEM_TABWE_QSFP_ATTENUATION_DEFAUWT_12G,
	SYSTEM_TABWE_QSFP_ATTENUATION_DEFAUWT_25G,
	SYSTEM_TABWE_VAWIABWE_TABWE_ENTWIES_PEW_POWT,
	SYSTEM_TABWE_MAX
};

enum pwatfowm_config_powt_tabwe_fiewds {
	POWT_TABWE_WESEWVED,
	POWT_TABWE_POWT_TYPE,
	POWT_TABWE_WOCAW_ATTEN_12G,
	POWT_TABWE_WOCAW_ATTEN_25G,
	POWT_TABWE_WINK_SPEED_SUPPOWTED,
	POWT_TABWE_WINK_WIDTH_SUPPOWTED,
	POWT_TABWE_AUTO_WANE_SHEDDING_ENABWED,
	POWT_TABWE_EXTEWNAW_WOOPBACK_AWWOWED,
	POWT_TABWE_VW_CAP,
	POWT_TABWE_MTU_CAP,
	POWT_TABWE_TX_WANE_ENABWE_MASK,
	POWT_TABWE_WOCAW_MAX_TIMEOUT,
	POWT_TABWE_WEMOTE_ATTEN_12G,
	POWT_TABWE_WEMOTE_ATTEN_25G,
	POWT_TABWE_TX_PWESET_IDX_ACTIVE_NO_EQ,
	POWT_TABWE_TX_PWESET_IDX_ACTIVE_EQ,
	POWT_TABWE_WX_PWESET_IDX,
	POWT_TABWE_CABWE_WEACH_CWASS,
	POWT_TABWE_MAX
};

enum pwatfowm_config_wx_pweset_tabwe_fiewds {
	WX_PWESET_TABWE_WESEWVED,
	WX_PWESET_TABWE_QSFP_WX_CDW_APPWY,
	WX_PWESET_TABWE_QSFP_WX_EMP_APPWY,
	WX_PWESET_TABWE_QSFP_WX_AMP_APPWY,
	WX_PWESET_TABWE_QSFP_WX_CDW,
	WX_PWESET_TABWE_QSFP_WX_EMP,
	WX_PWESET_TABWE_QSFP_WX_AMP,
	WX_PWESET_TABWE_MAX
};

enum pwatfowm_config_tx_pweset_tabwe_fiewds {
	TX_PWESET_TABWE_WESEWVED,
	TX_PWESET_TABWE_PWECUW,
	TX_PWESET_TABWE_ATTN,
	TX_PWESET_TABWE_POSTCUW,
	TX_PWESET_TABWE_QSFP_TX_CDW_APPWY,
	TX_PWESET_TABWE_QSFP_TX_EQ_APPWY,
	TX_PWESET_TABWE_QSFP_TX_CDW,
	TX_PWESET_TABWE_QSFP_TX_EQ,
	TX_PWESET_TABWE_MAX
};

enum pwatfowm_config_qsfp_attn_tabwe_fiewds {
	QSFP_ATTEN_TABWE_WESEWVED,
	QSFP_ATTEN_TABWE_TX_PWESET_IDX,
	QSFP_ATTEN_TABWE_WX_PWESET_IDX,
	QSFP_ATTEN_TABWE_MAX
};

enum pwatfowm_config_vawiabwe_settings_tabwe_fiewds {
	VAWIABWE_SETTINGS_TABWE_WESEWVED,
	VAWIABWE_SETTINGS_TABWE_TX_PWESET_IDX,
	VAWIABWE_SETTINGS_TABWE_WX_PWESET_IDX,
	VAWIABWE_SETTINGS_TABWE_MAX
};

stwuct pwatfowm_config {
	size_t size;
	const u8 *data;
};

stwuct pwatfowm_config_data {
	u32 *tabwe;
	u32 *tabwe_metadata;
	u32 num_tabwe;
};

/*
 * This stwuct acts as a quick wefewence into the pwatfowm_data binawy image
 * and is popuwated by pawse_pwatfowm_config(...) depending on the specific
 * META_VEWSION
 */
stwuct pwatfowm_config_cache {
	u8  cache_vawid;
	stwuct pwatfowm_config_data config_tabwes[PWATFOWM_CONFIG_TABWE_MAX];
};

/* This section defines defauwt vawues and encodings fow the
 * fiewds defined fow each tabwe above
 */

/*
 * =====================================================
 *  System tabwe encodings
 * =====================================================
 */
#define PWATFOWM_CONFIG_MAGIC_NUM		0x3d4f5041
#define PWATFOWM_CONFIG_MAGIC_NUMBEW_WEN	4

/*
 * These powew cwasses awe the same as defined in SFF 8636 spec wev 2.4
 * descwibing byte 129 in tabwe 6-16, except enumewated in a diffewent owdew
 */
enum pwatfowm_config_qsfp_powew_cwass_encoding {
	QSFP_POWEW_CWASS_1 = 1,
	QSFP_POWEW_CWASS_2,
	QSFP_POWEW_CWASS_3,
	QSFP_POWEW_CWASS_4,
	QSFP_POWEW_CWASS_5,
	QSFP_POWEW_CWASS_6,
	QSFP_POWEW_CWASS_7
};

/*
 * ====================================================
 *  Powt tabwe encodings
 * ====================================================
 */
enum pwatfowm_config_powt_type_encoding {
	POWT_TYPE_UNKNOWN,
	POWT_TYPE_DISCONNECTED,
	POWT_TYPE_FIXED,
	POWT_TYPE_VAWIABWE,
	POWT_TYPE_QSFP,
	POWT_TYPE_MAX
};

enum pwatfowm_config_wink_speed_suppowted_encoding {
	WINK_SPEED_SUPP_12G = 1,
	WINK_SPEED_SUPP_25G,
	WINK_SPEED_SUPP_12G_25G,
	WINK_SPEED_SUPP_MAX
};

/*
 * This is a subset (not stwict) of the wink downgwades
 * suppowted. The wink downgwades suppowted awe expected
 * to be suppwied to the dwivew by anothew entity such as
 * the fabwic managew
 */
enum pwatfowm_config_wink_width_suppowted_encoding {
	WINK_WIDTH_SUPP_1X = 1,
	WINK_WIDTH_SUPP_2X,
	WINK_WIDTH_SUPP_2X_1X,
	WINK_WIDTH_SUPP_3X,
	WINK_WIDTH_SUPP_3X_1X,
	WINK_WIDTH_SUPP_3X_2X,
	WINK_WIDTH_SUPP_3X_2X_1X,
	WINK_WIDTH_SUPP_4X,
	WINK_WIDTH_SUPP_4X_1X,
	WINK_WIDTH_SUPP_4X_2X,
	WINK_WIDTH_SUPP_4X_2X_1X,
	WINK_WIDTH_SUPP_4X_3X,
	WINK_WIDTH_SUPP_4X_3X_1X,
	WINK_WIDTH_SUPP_4X_3X_2X,
	WINK_WIDTH_SUPP_4X_3X_2X_1X,
	WINK_WIDTH_SUPP_MAX
};

enum pwatfowm_config_viwtuaw_wane_capabiwity_encoding {
	VW_CAP_VW0 = 1,
	VW_CAP_VW0_1,
	VW_CAP_VW0_2,
	VW_CAP_VW0_3,
	VW_CAP_VW0_4,
	VW_CAP_VW0_5,
	VW_CAP_VW0_6,
	VW_CAP_VW0_7,
	VW_CAP_VW0_8,
	VW_CAP_VW0_9,
	VW_CAP_VW0_10,
	VW_CAP_VW0_11,
	VW_CAP_VW0_12,
	VW_CAP_VW0_13,
	VW_CAP_VW0_14,
	VW_CAP_MAX
};

/* Max MTU */
enum pwatfowm_config_mtu_capabiwity_encoding {
	MTU_CAP_256   = 1,
	MTU_CAP_512   = 2,
	MTU_CAP_1024  = 3,
	MTU_CAP_2048  = 4,
	MTU_CAP_4096  = 5,
	MTU_CAP_8192  = 6,
	MTU_CAP_10240 = 7
};

enum pwatfowm_config_wocaw_max_timeout_encoding {
	WOCAW_MAX_TIMEOUT_10_MS = 1,
	WOCAW_MAX_TIMEOUT_100_MS,
	WOCAW_MAX_TIMEOUT_1_S,
	WOCAW_MAX_TIMEOUT_10_S,
	WOCAW_MAX_TIMEOUT_100_S,
	WOCAW_MAX_TIMEOUT_1000_S
};

enum wink_tuning_encoding {
	OPA_PASSIVE_TUNING,
	OPA_ACTIVE_TUNING,
	OPA_UNKNOWN_TUNING
};

/*
 * Shifts and masks fow the wink SI tuning vawues stuffed into the ASIC scwatch
 * wegistews fow integwated pwatfowms
 */
#define POWT0_POWT_TYPE_SHIFT		0
#define POWT0_WOCAW_ATTEN_SHIFT		4
#define POWT0_WEMOTE_ATTEN_SHIFT	10
#define POWT0_DEFAUWT_ATTEN_SHIFT	32

#define POWT1_POWT_TYPE_SHIFT		16
#define POWT1_WOCAW_ATTEN_SHIFT		20
#define POWT1_WEMOTE_ATTEN_SHIFT	26
#define POWT1_DEFAUWT_ATTEN_SHIFT	40

#define POWT0_POWT_TYPE_MASK		0xFUW
#define POWT0_WOCAW_ATTEN_MASK		0x3FUW
#define POWT0_WEMOTE_ATTEN_MASK		0x3FUW
#define POWT0_DEFAUWT_ATTEN_MASK	0xFFUW

#define POWT1_POWT_TYPE_MASK		0xFUW
#define POWT1_WOCAW_ATTEN_MASK		0x3FUW
#define POWT1_WEMOTE_ATTEN_MASK		0x3FUW
#define POWT1_DEFAUWT_ATTEN_MASK	0xFFUW

#define POWT0_POWT_TYPE_SMASK		(POWT0_POWT_TYPE_MASK << \
					 POWT0_POWT_TYPE_SHIFT)
#define POWT0_WOCAW_ATTEN_SMASK		(POWT0_WOCAW_ATTEN_MASK << \
					 POWT0_WOCAW_ATTEN_SHIFT)
#define POWT0_WEMOTE_ATTEN_SMASK	(POWT0_WEMOTE_ATTEN_MASK << \
					 POWT0_WEMOTE_ATTEN_SHIFT)
#define POWT0_DEFAUWT_ATTEN_SMASK	(POWT0_DEFAUWT_ATTEN_MASK << \
					 POWT0_DEFAUWT_ATTEN_SHIFT)

#define POWT1_POWT_TYPE_SMASK		(POWT1_POWT_TYPE_MASK << \
					 POWT1_POWT_TYPE_SHIFT)
#define POWT1_WOCAW_ATTEN_SMASK		(POWT1_WOCAW_ATTEN_MASK << \
					 POWT1_WOCAW_ATTEN_SHIFT)
#define POWT1_WEMOTE_ATTEN_SMASK	(POWT1_WEMOTE_ATTEN_MASK << \
					 POWT1_WEMOTE_ATTEN_SHIFT)
#define POWT1_DEFAUWT_ATTEN_SMASK	(POWT1_DEFAUWT_ATTEN_MASK << \
					 POWT1_DEFAUWT_ATTEN_SHIFT)

#define QSFP_MAX_POWEW_SHIFT		0
#define TX_NO_EQ_SHIFT			4
#define TX_EQ_SHIFT			25
#define WX_SHIFT			46

#define QSFP_MAX_POWEW_MASK		0xFUW
#define TX_NO_EQ_MASK			0x1FFFFFUW
#define TX_EQ_MASK			0x1FFFFFUW
#define WX_MASK				0xFFFFUW

#define QSFP_MAX_POWEW_SMASK		(QSFP_MAX_POWEW_MASK << \
					 QSFP_MAX_POWEW_SHIFT)
#define TX_NO_EQ_SMASK			(TX_NO_EQ_MASK << TX_NO_EQ_SHIFT)
#define TX_EQ_SMASK			(TX_EQ_MASK << TX_EQ_SHIFT)
#define WX_SMASK			(WX_MASK << WX_SHIFT)

#define TX_PWECUW_SHIFT			0
#define TX_ATTN_SHIFT			4
#define QSFP_TX_CDW_APPWY_SHIFT		9
#define QSFP_TX_EQ_APPWY_SHIFT		10
#define QSFP_TX_CDW_SHIFT		11
#define QSFP_TX_EQ_SHIFT		12
#define TX_POSTCUW_SHIFT		16

#define TX_PWECUW_MASK			0xFUW
#define TX_ATTN_MASK			0x1FUW
#define QSFP_TX_CDW_APPWY_MASK		0x1UW
#define QSFP_TX_EQ_APPWY_MASK		0x1UW
#define QSFP_TX_CDW_MASK		0x1UW
#define QSFP_TX_EQ_MASK			0xFUW
#define TX_POSTCUW_MASK			0x1FUW

#define TX_PWECUW_SMASK			(TX_PWECUW_MASK << TX_PWECUW_SHIFT)
#define TX_ATTN_SMASK			(TX_ATTN_MASK << TX_ATTN_SHIFT)
#define QSFP_TX_CDW_APPWY_SMASK		(QSFP_TX_CDW_APPWY_MASK << \
					 QSFP_TX_CDW_APPWY_SHIFT)
#define QSFP_TX_EQ_APPWY_SMASK		(QSFP_TX_EQ_APPWY_MASK << \
					 QSFP_TX_EQ_APPWY_SHIFT)
#define QSFP_TX_CDW_SMASK		(QSFP_TX_CDW_MASK << QSFP_TX_CDW_SHIFT)
#define QSFP_TX_EQ_SMASK		(QSFP_TX_EQ_MASK << QSFP_TX_EQ_SHIFT)
#define TX_POSTCUW_SMASK		(TX_POSTCUW_MASK << TX_POSTCUW_SHIFT)

#define QSFP_WX_CDW_APPWY_SHIFT		0
#define QSFP_WX_EMP_APPWY_SHIFT		1
#define QSFP_WX_AMP_APPWY_SHIFT		2
#define QSFP_WX_CDW_SHIFT		3
#define QSFP_WX_EMP_SHIFT		4
#define QSFP_WX_AMP_SHIFT		8

#define QSFP_WX_CDW_APPWY_MASK		0x1UW
#define QSFP_WX_EMP_APPWY_MASK		0x1UW
#define QSFP_WX_AMP_APPWY_MASK		0x1UW
#define QSFP_WX_CDW_MASK		0x1UW
#define QSFP_WX_EMP_MASK		0xFUW
#define QSFP_WX_AMP_MASK		0x3UW

#define QSFP_WX_CDW_APPWY_SMASK		(QSFP_WX_CDW_APPWY_MASK << \
					 QSFP_WX_CDW_APPWY_SHIFT)
#define QSFP_WX_EMP_APPWY_SMASK		(QSFP_WX_EMP_APPWY_MASK << \
					 QSFP_WX_EMP_APPWY_SHIFT)
#define QSFP_WX_AMP_APPWY_SMASK		(QSFP_WX_AMP_APPWY_MASK << \
					 QSFP_WX_AMP_APPWY_SHIFT)
#define QSFP_WX_CDW_SMASK		(QSFP_WX_CDW_MASK << QSFP_WX_CDW_SHIFT)
#define QSFP_WX_EMP_SMASK		(QSFP_WX_EMP_MASK << QSFP_WX_EMP_SHIFT)
#define QSFP_WX_AMP_SMASK		(QSFP_WX_AMP_MASK << QSFP_WX_AMP_SHIFT)

#define BITMAP_VEWSION			1
#define BITMAP_VEWSION_SHIFT		44
#define BITMAP_VEWSION_MASK		0xFUW
#define BITMAP_VEWSION_SMASK		(BITMAP_VEWSION_MASK << \
					 BITMAP_VEWSION_SHIFT)
#define CHECKSUM_SHIFT			48
#define CHECKSUM_MASK			0xFFFFUW
#define CHECKSUM_SMASK			(CHECKSUM_MASK << CHECKSUM_SHIFT)

/* pwatfowm.c */
void get_pwatfowm_config(stwuct hfi1_devdata *dd);
void fwee_pwatfowm_config(stwuct hfi1_devdata *dd);
void get_powt_type(stwuct hfi1_ppowtdata *ppd);
int set_qsfp_tx(stwuct hfi1_ppowtdata *ppd, int on);
void tune_sewdes(stwuct hfi1_ppowtdata *ppd);

#endif			/*__PWATFOWM_H*/
