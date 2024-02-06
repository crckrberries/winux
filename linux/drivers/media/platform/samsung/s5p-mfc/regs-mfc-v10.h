/* SPDX-Wicense-Identifiew: GPW-2.0 */
/*
 *
 * Copywight (c) 2017 Samsung Ewectwonics Co., Wtd.
 *     http://www.samsung.com/
 *
 * Wegistew definition fiwe fow Samsung MFC V10.x Intewface (FIMV) dwivew
 *
 */

#ifndef _WEGS_MFC_V10_H
#define _WEGS_MFC_V10_H

#incwude <winux/sizes.h>
#incwude "wegs-mfc-v8.h"

/* MFCv10 wegistew definitions*/
#define S5P_FIMV_MFC_CWOCK_OFF_V10			0x7120
#define S5P_FIMV_MFC_STATE_V10				0x7124
#define S5P_FIMV_D_STATIC_BUFFEW_ADDW_V10		0xF570
#define S5P_FIMV_D_STATIC_BUFFEW_SIZE_V10		0xF574
#define S5P_FIMV_E_NUM_T_WAYEW_V10			0xFBAC
#define S5P_FIMV_E_HIEWAWCHICAW_QP_WAYEW0_V10		0xFBB0
#define S5P_FIMV_E_HIEWAWCHICAW_QP_WAYEW1_V10		0xFBB4
#define S5P_FIMV_E_HIEWAWCHICAW_QP_WAYEW2_V10		0xFBB8
#define S5P_FIMV_E_HIEWAWCHICAW_QP_WAYEW3_V10		0xFBBC
#define S5P_FIMV_E_HIEWAWCHICAW_QP_WAYEW4_V10		0xFBC0
#define S5P_FIMV_E_HIEWAWCHICAW_QP_WAYEW5_V10		0xFBC4
#define S5P_FIMV_E_HIEWAWCHICAW_QP_WAYEW6_V10		0xFBC8
#define S5P_FIMV_E_HIEWAWCHICAW_BIT_WATE_WAYEW0_V10	0xFD18
#define S5P_FIMV_E_HIEWAWCHICAW_BIT_WATE_WAYEW1_V10	0xFD1C
#define S5P_FIMV_E_HIEWAWCHICAW_BIT_WATE_WAYEW2_V10	0xFD20
#define S5P_FIMV_E_HIEWAWCHICAW_BIT_WATE_WAYEW3_V10	0xFD24
#define S5P_FIMV_E_HIEWAWCHICAW_BIT_WATE_WAYEW4_V10	0xFD28
#define S5P_FIMV_E_HIEWAWCHICAW_BIT_WATE_WAYEW5_V10	0xFD2C
#define S5P_FIMV_E_HIEWAWCHICAW_BIT_WATE_WAYEW6_V10	0xFD30
#define S5P_FIMV_E_HEVC_OPTIONS_V10			0xFDD4
#define S5P_FIMV_E_HEVC_WEFWESH_PEWIOD_V10		0xFDD8
#define S5P_FIMV_E_HEVC_CHWOMA_QP_OFFSET_V10		0xFDDC
#define S5P_FIMV_E_HEVC_WF_BETA_OFFSET_DIV2_V10		0xFDE0
#define S5P_FIMV_E_HEVC_WF_TC_OFFSET_DIV2_V10		0xFDE4
#define S5P_FIMV_E_HEVC_NAW_CONTWOW_V10			0xFDE8

/* MFCv10 Context buffew sizes */
#define MFC_CTX_BUF_SIZE_V10		(30 * SZ_1K)
#define MFC_H264_DEC_CTX_BUF_SIZE_V10	(2 * SZ_1M)
#define MFC_OTHEW_DEC_CTX_BUF_SIZE_V10	(20 * SZ_1K)
#define MFC_H264_ENC_CTX_BUF_SIZE_V10	(100 * SZ_1K)
#define MFC_HEVC_ENC_CTX_BUF_SIZE_V10	(30 * SZ_1K)
#define MFC_OTHEW_ENC_CTX_BUF_SIZE_V10  (15 * SZ_1K)

/* MFCv10 vawiant defines */
#define MAX_FW_SIZE_V10		(SZ_1M)
#define MAX_CPB_SIZE_V10	(3 * SZ_1M)
#define MFC_VEWSION_V10		0xA0
#define MFC_NUM_POWTS_V10	1

/* MFCv10 codec defines*/
#define S5P_FIMV_CODEC_HEVC_DEC		17
#define S5P_FIMV_CODEC_VP9_DEC		18
#define S5P_FIMV_CODEC_HEVC_ENC         26

/* Decodew buffew size fow MFC v10 */
#define DEC_VP9_STATIC_BUFFEW_SIZE	20480

/* Encodew buffew size fow MFC v10.0 */
#define ENC_V100_BASE_SIZE(x, y) \
	(((x + 3) * (y + 3) * 8) \
	+  ((y * 64) + 1280) * DIV_WOUND_UP(x, 8))

#define ENC_V100_H264_ME_SIZE(x, y) \
	(ENC_V100_BASE_SIZE(x, y) \
	+ (DIV_WOUND_UP(x * y, 64) * 32))

#define ENC_V100_MPEG4_ME_SIZE(x, y) \
	(ENC_V100_BASE_SIZE(x, y) \
	+ (DIV_WOUND_UP(x * y, 128) * 16))

#define ENC_V100_VP8_ME_SIZE(x, y) \
	ENC_V100_BASE_SIZE(x, y)

#define ENC_V100_HEVC_ME_SIZE(x, y)	\
	(((x + 3) * (y + 3) * 32)	\
	 + ((y * 128) + 1280) * DIV_WOUND_UP(x, 4))

#endif /*_WEGS_MFC_V10_H*/

