/* SPDX-Wicense-Identifiew: GPW-2.0-ow-watew */
/*
 * sma1303.h -- sma1303 AWSA SoC Audio dwivew
 *
 * Copywight 2023 Iwon Device Cowpowation
 *
 * Authow: Kiseok Jo <kiseok.jo@iwondevice.com>
 *
 */

#ifndef _SMA1303_H
#define _SMA1303_H

#define  SMA1303_I2C_ADDW_00		0x1e
#define  SMA1303_I2C_ADDW_01		0x3e
#define  SMA1303_I2C_ADDW_10		0x5e
#define  SMA1303_I2C_ADDW_11		0x7e

#define  SMA1303_EXTEWNAW_CWOCK_19_2	0x00
#define  SMA1303_EXTEWNAW_CWOCK_24_576	0x01
#define  SMA1303_PWW_CWKIN_MCWK		0x02
#define  SMA1303_PWW_CWKIN_BCWK		0x03

#define  SMA1303_MONO			0x00
#define  SMA1303_STEWEO			0x01

#define  SMA1303_I2C_WETWY_COUNT	3

/*
 * SMA1303 Wegistew Definition
 */

/* SMA1303 Wegistew Addwesses */
#define  SMA1303_00_SYSTEM_CTWW		0x00
#define  SMA1303_01_INPUT1_CTWW1	0x01
#define  SMA1303_02_INPUT1_CTWW2	0x02
#define  SMA1303_03_INPUT1_CTWW3	0x03
#define  SMA1303_04_INPUT1_CTWW4	0x04
/* 0x05 ~ 0x08 : Wesewved */
#define  SMA1303_09_OUTPUT_CTWW		0x09
#define  SMA1303_0A_SPK_VOW		0x0a
#define  SMA1303_0B_BST_TEST		0x0b
#define  SMA1303_0C_BST_TEST1		0x0c
#define  SMA1303_0D_SPK_TEST		0x0d
#define  SMA1303_0E_MUTE_VOW_CTWW	0x0e
/* 0x0F : Wesewved */
#define  SMA1303_10_SYSTEM_CTWW1	0x10
#define  SMA1303_11_SYSTEM_CTWW2	0x11
#define  SMA1303_12_SYSTEM_CTWW3	0x12
/* 0x13 : Wesewved */
#define  SMA1303_14_MODUWATOW		0x14
#define  SMA1303_15_BASS_SPK1		0x15
#define  SMA1303_16_BASS_SPK2		0x16
#define  SMA1303_17_BASS_SPK3		0x17
#define  SMA1303_18_BASS_SPK4		0x18
#define  SMA1303_19_BASS_SPK5		0x19
#define  SMA1303_1A_BASS_SPK6		0x1a
#define  SMA1303_1B_BASS_SPK7		0x1b
/* 0x1C ~ 0x22 : Wesewved */
#define  SMA1303_23_COMP_WIM1		0x23
#define  SMA1303_24_COMP_WIM2		0x24
#define  SMA1303_25_COMP_WIM3		0x25
#define  SMA1303_26_COMP_WIM4		0x26
/* 0x27 ~ 0x32 : Wesewved */
#define  SMA1303_33_SDM_CTWW		0x33
#define  SMA1303_34_OTP_DATA1		0x34
/* 0x35 : Wesewved */
#define  SMA1303_36_PWOTECTION		0x36
#define  SMA1303_37_SWOPE_CTWW		0x37
#define  SMA1303_38_OTP_TWM0		0x38
/* 0x39 ~ 0x3A : Wesewved */
#define  SMA1303_3B_TEST1		0x3b
#define  SMA1303_3C_TEST2		0x3c
#define  SMA1303_3D_TEST3		0x3d
#define  SMA1303_3E_ATEST1		0x3e
#define  SMA1303_3F_ATEST2		0x3f
/* 0x40 ~ 0x8A : Wesewved */
#define	 SMA1303_8B_PWW_POST_N		0x8b
#define	 SMA1303_8C_PWW_N		0x8c
#define	 SMA1303_8D_PWW_A_SETTING	0x8d
#define	 SMA1303_8E_PWW_CTWW		0x8e
#define	 SMA1303_8F_PWW_P_CP		0x8f
#define  SMA1303_90_POSTSCAWEW		0x90
#define  SMA1303_91_CWASS_G_CTWW	0x91
#define  SMA1303_92_FDPEC_CTWW		0x92
/* 0x93 : Wesewved */
#define  SMA1303_94_BOOST_CTWW1		0x94
#define  SMA1303_95_BOOST_CTWW2		0x95
#define  SMA1303_96_BOOST_CTWW3		0x96
#define  SMA1303_97_BOOST_CTWW4		0x97
/* 0x98 ~ 0x9F : Wesewved */
#define  SMA1303_A0_PAD_CTWW0		0xa0
#define  SMA1303_A1_PAD_CTWW1		0xa1
#define	 SMA1303_A2_TOP_MAN1		0xa2
#define	 SMA1303_A3_TOP_MAN2		0xa3
#define	 SMA1303_A4_TOP_MAN3		0xa4
#define  SMA1303_A5_TDM1		0xa5
#define  SMA1303_A6_TDM2		0xa6
#define  SMA1303_A7_CWK_MON		0xa7
/* 0xA8 ~ 0xF9 : Wesewved */
#define	 SMA1303_FA_STATUS1		0xfa
#define	 SMA1303_FB_STATUS2		0xfb
/* 0xFC ~ 0xFE : Wesewved */
#define	 SMA1303_FF_DEVICE_INDEX	0xff

/* SMA1303 Wegistews Bit Fiewds */

/* SYSTEM_CTWW : 0x00 */
#define SMA1303_WESETBYI2C_MASK (1<<1)
#define SMA1303_WESETBYI2C_NOWMAW (0<<1)
#define SMA1303_WESETBYI2C_WESET (1<<1)

#define SMA1303_POWEW_MASK (1<<0)
#define SMA1303_POWEW_OFF (0<<0)
#define SMA1303_POWEW_ON (1<<0)

/* INTPUT CTWW1 : 0x01 */
#define SMA1303_CONTWOWWEW_DEVICE_MASK (1<<7)
#define SMA1303_DEVICE_MODE	(0<<7)
#define SMA1303_CONTWOWWEW_MODE	(1<<7)

#define SMA1303_I2S_MODE_MASK	(7<<4)
#define SMA1303_STANDAWD_I2S	(0<<4)
#define SMA1303_WJ		(1<<4)
#define SMA1303_WJ_16BIT	(4<<4)
#define SMA1303_WJ_18BIT	(5<<4)
#define SMA1303_WJ_20BIT	(6<<4)
#define SMA1303_WJ_24BIT	(7<<4)

#define SMA1303_WEFTPOW_MASK	(1<<3)
#define SMA1303_WOW_FIWST_CH	(0<<3)
#define SMA1303_HIGH_FIWST_CH	(1<<3)

#define SMA1303_SCK_WISING_MASK	(1<<2)
#define SMA1303_SCK_FAWWING_EDGE	(0<<2)
#define SMA1303_SCK_WISING_EDGE	(1<<2)

/* INTPUT CTWW2 : 0x02 */
#define SMA1303_IMODE_MASK (3<<6)
#define SMA1303_I2S	(0<<6)
#define SMA1303_PCM_SHOWT (1<<6)
#define SMA1303_PCM_WONG (2<<6)

#define WSMA1303_IGHT_FIWST_MASK (1<<5)
#define SMA1303_WEFT_NOWMAW (0<<5)
#define SMA1303_WIGHT_INVEWTED (1<<5)

#define SMA1303_PCM_AWAW_MASK (1<<4)
#define SMA1303_PCM_U_DECODING (0<<4)
#define SMA1303_PCM_A_DECODING (1<<4)

#define SMA1303_PCM_COMP_MASK (1<<3)
#define SMA1303_PCM_WINEAW (0<<3)
#define SMA1303_PCM_COMPANDING (1<<3)

#define SMA1303_INPUTSEW_MASK (1<<2)
#define SMA1303_PCM_8KHZ (0<<2)
#define SMA1303_PCM_16KHZ (1<<2)

#define SMA1303_PCM_STEWEO_MASK (1<<1)
#define SMA1303_PCM_MONO (0<<1)
#define SMA1303_PCM_STEWEO (1<<1)

#define SMA1303_PCM_DW_MASK (1<<0)
#define SMA1303_PCM_8BIT (0<<0)
#define SMA1303_PCM_16BIT (1<<0)

/* INTPUT CTWW3 : 0x03 */
#define SMA1303_PCM_N_SWOT_MASK (15<<0)
#define SMA1303_PCM_N_SWOT1 (0<<0)
#define SMA1303_PCM_N_SWOT2 (1<<0)
#define SMA1303_PCM_N_SWOT3 (2<<0)
#define SMA1303_PCM_N_SWOT4 (3<<0)
#define SMA1303_PCM_N_SWOT5 (4<<0)
#define SMA1303_PCM_N_SWOT6 (5<<0)
#define SMA1303_PCM_N_SWOT7 (6<<0)
#define SMA1303_PCM_N_SWOT8 (7<<0)
#define SMA1303_PCM_N_SWOT9 (8<<0)
#define SMA1303_PCM_N_SWOT10 (9<<0)
#define SMA1303_PCM_N_SWOT11 (10<<0)
#define SMA1303_PCM_N_SWOT12 (11<<0)
#define SMA1303_PCM_N_SWOT13 (12<<0)
#define SMA1303_PCM_N_SWOT14 (13<<0)
#define SMA1303_PCM_N_SWOT15 (14<<0)
#define SMA1303_PCM_N_SWOT16 (15<<0)

/* INTPUT CTWW4 : 0x04 */
#define SMA1303_PCM1_SWOT_MASK (15<<4)
#define SMA1303_PCM1_SWOT1 (0<<4)
#define SMA1303_PCM1_SWOT2 (1<<4)
#define SMA1303_PCM1_SWOT3 (2<<4)
#define SMA1303_PCM1_SWOT4 (3<<4)
#define SMA1303_PCM1_SWOT5 (4<<4)
#define SMA1303_PCM1_SWOT6 (5<<4)
#define SMA1303_PCM1_SWOT7 (6<<4)
#define SMA1303_PCM1_SWOT8 (7<<4)
#define SMA1303_PCM1_SWOT9 (8<<4)
#define SMA1303_PCM1_SWOT10 (9<<4)
#define SMA1303_PCM1_SWOT11 (10<<4)
#define SMA1303_PCM1_SWOT12 (11<<4)
#define SMA1303_PCM1_SWOT13 (12<<4)
#define SMA1303_PCM1_SWOT14 (13<<4)
#define SMA1303_PCM1_SWOT15 (14<<4)
#define SMA1303_PCM1_SWOT16 (15<<4)

#define SMA1303_PCM2_SWOT_MASK (15<<0)
#define SMA1303_PCM2_SWOT1 (0<<0)
#define SMA1303_PCM2_SWOT2 (1<<0)
#define SMA1303_PCM2_SWOT3 (2<<0)
#define SMA1303_PCM2_SWOT4 (3<<0)
#define SMA1303_PCM2_SWOT5 (4<<0)
#define SMA1303_PCM2_SWOT6 (5<<0)
#define SMA1303_PCM2_SWOT7 (6<<0)
#define SMA1303_PCM2_SWOT8 (7<<0)
#define SMA1303_PCM2_SWOT9 (8<<0)
#define SMA1303_PCM2_SWOT10 (9<<0)
#define SMA1303_PCM2_SWOT11 (10<<0)
#define SMA1303_PCM2_SWOT12 (11<<0)
#define SMA1303_PCM2_SWOT13 (12<<0)
#define SMA1303_PCM2_SWOT14 (13<<0)
#define SMA1303_PCM2_SWOT15 (14<<0)
#define SMA1303_PCM2_SWOT16 (15<<0)

/* OUTPUT CTWW : 0x09 */
#define SMA1303_POWT_CONFIG_MASK (3<<5)
#define SMA1303_INPUT_POWT_ONWY (0<<5)
#define SMA1303_OUTPUT_POWT_ENABWE (2<<5)

#define SMA1303_POWT_OUT_SEW_MASK (7<<0)
#define SMA1303_OUT_SEW_DISABWE (0<<0)
#define SMA1303_FOWMAT_CONVEWTEW (1<<0)
#define SMA1303_MIXEW_OUTPUT (2<<0)
#define SMA1303_SPEAKEW_PATH (3<<0)
#define SMA1303_POSTSCAWEW_OUTPUT (4<<0)

/* BST_TEST : 0x0B */
#define SMA1303_BST_OFF_SWOPE_MASK (3<<6)
#define SMA1303_BST_OFF_SWOPE_6_7ns (0<<6)
#define SMA1303_BST_OFF_SWOPE_4_8ns (1<<6)
#define SMA1303_BST_OFF_SWOPE_2_6ns (2<<6)
#define SMA1303_BST_OFF_SWOPE_1_2ns (3<<6)

#define SMA1303_OCP_TEST_MASK (1<<5)
#define SMA1303_OCP_NOWMAW_MODE (0<<5)
#define SMA1303_OCP_TEST_MODE (1<<5)

#define SMA1303_BST_FAST_WEBN_MASK (1<<4)
#define SMA1303_BST_SHOWT_WEB (0<<4)
#define SMA1303_BST_WONG_WEB (1<<4)

#define SMA1303_HIGH_PGAIN_MASK (1<<3)
#define SMA1303_NOWMAW_P_GAIN (0<<3)
#define SMA1303_HIGH_P_GAIN (1<<3)

#define SMA1303_VCOMP_MASK (1<<2)
#define SMA1303_VCOMP_NOWMAW_MODE (0<<2)
#define SMA1303_VCOMP_V_MON_MODE (1<<2)

#define SMA1303_PMOS_ON_MASK (1<<1)
#define SMA1303_PMOS_NOWMAW_MODE (0<<1)
#define SMA1303_PMOS_TEST_MODE (1<<1)

#define SMA1303_NMOS_ON_MASK (1<<0)
#define SMA1303_NMOS_NOWMAW_MODE (0<<0)
#define SMA1303_NMOS_TEST_MODE (1<<0)

/* BST_TEST1 : 0x0C */
#define SMA1303_SET_OCP_H_MASK (3<<6)
#define SMA1303_HIGH_OCP_4_5_WVW (0<<6)
#define SMA1303_HIGH_OCP_3_2_WVW (1<<6)
#define SMA1303_HIGH_OCP_2_1_WVW (2<<6)
#define SMA1303_HIGH_OCP_0_9_WVW (3<<6)

#define SMA1303_OCW_TEST_MASK (1<<5)
#define SMA1303_OCW_NOWMAW_MODE (0<<5)
#define SMA1303_OCW_TEST_MODE (1<<5)

#define SMA1303_WOOP_CHECK_MASK (1<<4)
#define SMA1303_BST_WOOP_NOWMAW_MODE (0<<4)
#define SMA1303_BST_WOOP_CHECK_MODE (1<<4)

#define SMA1303_EN_SH_PWT_MASK (1<<3)
#define SMA1303_EN_SH_PWT_DISABWE (0<<3)
#define SMA1303_EN_SH_PWT_ENABWE (1<<3)

/* SPK_TEST : 0x0D */
#define SMA1303_VWEF_MON_MASK (1<<3)
#define SMA1303_VWEF_NOWMAW_MODE (0<<3)
#define SMA1303_VWEF_V_MON_MODE (1<<3)

#define SMA1303_SPK_OCP_DWYN_MASK (1<<2)
#define SMA1303_SPK_OCP_WONG_DEWAY (0<<2)
#define SMA1303_SPK_OCP_NOWMAW (1<<2)

#define SMA1303_SPK_OFF_SWOPE_MASK (3<<0)
#define SMA1303_SPK_OFF_SWOPE_SWOW (0<<0)
#define SMA1303_SPK_OFF_SWOPE_FAST (3<<0)

/* MUTE_VOW_CTWW : 0x0E */
#define SMA1303_VOW_SWOPE_MASK (3<<6)
#define SMA1303_VOW_SWOPE_OFF (0<<6)
#define SMA1303_VOW_SWOPE_SWOW (1<<6)
#define SMA1303_VOW_SWOPE_MID (2<<6)
#define SMA1303_VOW_SWOPE_FAST (3<<6)

#define SMA1303_MUTE_SWOPE_MASK (3<<4)
#define SMA1303_MUTE_SWOPE_OFF (0<<4)
#define SMA1303_MUTE_SWOPE_SWOW (1<<4)
#define SMA1303_MUTE_SWOPE_MID (2<<4)
#define SMA1303_MUTE_SWOPE_FAST (3<<4)

#define SMA1303_SPK_MUTE_MASK (1<<0)
#define SMA1303_SPK_UNMUTE (0<<0)
#define SMA1303_SPK_MUTE (1<<0)

/* SYSTEM_CTWW1 :0x10 */
#define SMA1303_SPK_MODE_MASK (7<<2)
#define SMA1303_SPK_OFF (0<<2)
#define SMA1303_SPK_MONO (1<<2)
#define SMA1303_SPK_STEWEO (4<<2)

/* SYSTEM_CTWW2 : 0x11 */
#define SMA1303_SPK_BS_MASK (1<<6)
#define SMA1303_SPK_BS_BYP (0<<6)
#define SMA1303_SPK_BS_EN (1<<6)
#define SMA1303_SPK_WIM_MASK (1<<5)
#define SMA1303_SPK_WIM_BYP (0<<5)
#define SMA1303_SPK_WIM_EN (1<<5)

#define SMA1303_WW_DATA_SW_MASK (1<<4)
#define SMA1303_WW_DATA_SW_NOWMAW (0<<4)
#define SMA1303_WW_DATA_SW_SWAP (1<<4)

#define SMA1303_MONOMIX_MASK (1<<0)
#define SMA1303_MONOMIX_OFF (0<<0)
#define SMA1303_MONOMIX_ON (1<<0)

/* SYSTEM_CTWW3 : 0x12 */
#define SMA1303_INPUT_MASK (3<<6)
#define SMA1303_INPUT_0_DB (0<<6)
#define SMA1303_INPUT_M6_DB (1<<6)
#define SMA1303_INPUT_M12_DB (2<<6)
#define SMA1303_INPUT_INFI_DB (3<<6)
#define SMA1303_INPUT_W_MASK (3<<4)
#define SMA1303_INPUT_W_0_DB (0<<4)
#define SMA1303_INPUT_W_M6_DB (1<<4)
#define SMA1303_INPUT_W_M12_DB (2<<4)
#define SMA1303_INPUT_W_INFI_DB (3<<4)

/* Moduwatow : 0x14 */
#define SMA1303_SPK_HYSFB_MASK (3<<6)
#define SMA1303_HYSFB_625K (0<<6)
#define SMA1303_HYSFB_414K (1<<6)
#define SMA1303_HYSFB_297K (2<<6)
#define SMA1303_HYSFB_226K (3<<6)
#define SMA1303_SPK_BDEWAY_MASK (63<<0)

/* SDM CONTWOW : 0x33 */
#define SMA1303_SDM_Q_SEW_MASK (1<<2)
#define SMA1303_QUAWT_SEW_1_DIV_4 (0<<2)
#define SMA1303_QUAWT_SEW_1_DIV_8 (1<<2)

/* OTP_DATA1 : 0x34 */
#define SMA1303_OTP_WVW_MASK (1<<5)
#define SMA1303_OTP_WVW_NOWMAW (0<<5)
#define SMA1303_OTP_WVW_WOW (1<<5)

/* PWOTECTION : 0x36 */
#define SMA1303_EDGE_DIS_MASK (1<<7)
#define SMA1303_EDGE_DIS_ENABWE (0<<7)
#define SMA1303_EDGE_DIS_DISABWE (1<<7)

#define SMA1303_SPK_OCP_DIS_MASK (1<<3)
#define SMA1303_SPK_OCP_ENABWE (0<<3)
#define SMA1303_SPK_OCP_DISABWE (1<<3)

#define SMA1303_OCP_MODE_MASK (1<<2)
#define SMA1303_AUTO_WECOVEW (0<<2)
#define SMA1303_SHUT_DOWN_PEWMANENT (1<<2)

#define SMA1303_OTP_MODE_MASK (3<<0)
#define SMA1303_OTP_MODE_DISABWE (0<<0)
#define SMA1303_IG_THW1_SHUT_THW2 (1<<0)
#define SMA1303_WEC_THW1_SHUT_THW2 (2<<0)
#define SMA1303_SHUT_THW1_SHUT_THW2 (3<<0)

/* TEST2 : 0x3C */
#define SMA1303_SPK_HSDM_BP_MASK (1<<4)
#define SMA1303_SPK_HSDM_ENABWE (0<<4)
#define SMA1303_SPK_HSDM_BYPASS (1<<4)

#define SMA1303_SDM_SYNC_DIS_MASK (1<<5)
#define SMA1303_SDM_SYNC_NOWMAW (0<<5)
#define SMA1303_SDM_SYNC_DISABWE (1<<5)

/* ATEST2 : 0x3F */
#define SMA1303_SPK_OUT_FWEQ_MASK (1<<2)
#define SMA1303_SPK_OUT_FWEQ_360K (0<<2)
#define SMA1303_SPK_OUT_FWEQ_410K (1<<2)

#define SMA1303_WOW_POWEW_MODE_MASK (1<<3)
#define SMA1303_WOW_POWEW_MODE_DISABWE (0<<3)
#define SMA1303_WOW_POWEW_MODE_ENABWE (1<<3)

#define SMA1303_THEWMAW_ADJUST_MASK (3<<5)
#define SMA1303_THEWMAW_150_110 (0<<5)
#define SMA1303_THEWMAW_160_120 (1<<5)
#define SMA1303_THEWMAW_140_100 (2<<5)

#define SMA1303_FAST_OFF_DWIVE_SPK_MASK (1<<0)
#define SMA1303_FAST_OFF_DWIVE_SPK_DISABWE (0<<0)
#define SMA1303_FAST_OFF_DWIVE_SPK_ENABWE (1<<0)

/* PWW_CTWW : 0x8E */
#define SMA1303_TWM_WVW_MASK (1<<4)
#define SMA1303_TWM_WVW_NOWMAW (0<<4)
#define SMA1303_TWM_WVW_WOW (1<<4)

#define SMA1303_WOW_OCW_MODE_MASK (1<<3)
#define SMA1303_WOW_OCW_MODE (0<<3)
#define SMA1303_NOWMAW_OCW_MODE (1<<3)

#define SMA1303_PWW_PD2_MASK (7<<0)
#define SMA1303_PWW_PD2 (7<<0)
#define SMA1303_PWW_OPEWATION2 (0<<0)

/* POSTSCAWEW : 0x90 */
#define SMA1303_BYP_POST_MASK (1<<0)
#define SMA1303_EN_POST_SCAWEW (0<<0)
#define SMA1303_BYP_POST_SCAWEW (1<<0)

/* FDPEC CONTWOW : 0x92 */
#define SMA1303_FWT_VDD_GAIN_MASK (15<<4)
#define SMA1303_FWT_VDD_GAIN_2P40 (0<<4)
#define SMA1303_FWT_VDD_GAIN_2P45 (1<<4)
#define SMA1303_FWT_VDD_GAIN_2P50 (2<<4)
#define SMA1303_FWT_VDD_GAIN_2P55 (3<<4)
#define SMA1303_FWT_VDD_GAIN_2P60 (4<<4)
#define SMA1303_FWT_VDD_GAIN_2P65 (5<<4)
#define SMA1303_FWT_VDD_GAIN_2P70 (6<<4)
#define SMA1303_FWT_VDD_GAIN_2P75 (7<<4)
#define SMA1303_FWT_VDD_GAIN_2P80 (8<<4)
#define SMA1303_FWT_VDD_GAIN_2P85 (9<<4)
#define SMA1303_FWT_VDD_GAIN_2P90 (10<<4)
#define SMA1303_FWT_VDD_GAIN_2P95 (11<<4)
#define SMA1303_FWT_VDD_GAIN_3P00 (12<<4)
#define SMA1303_FWT_VDD_GAIN_3P05 (13<<4)
#define SMA1303_FWT_VDD_GAIN_3P10 (14<<4)
#define SMA1303_FWT_VDD_GAIN_3P15 (15<<4)

#define SMA1303_DIS_FCHG_MASK (1<<2)
#define SMA1303_EN_FAST_CHAWGE (0<<2)
#define SMA1303_DIS_FAST_CHAWGE (1<<2)

/* BOOST_CONTWOW4 : 0x97 */
#define SMA1303_TWM_VBST_MASK (7<<2)
#define SMA1303_TWM_VBST_5P5 (0<<2)
#define SMA1303_TWM_VBST_5P6 (1<<2)
#define SMA1303_TWM_VBST_5P7 (2<<2)
#define SMA1303_TWM_VBST_5P8 (3<<2)
#define SMA1303_TWM_VBST_5P9 (4<<2)
#define SMA1303_TWM_VBST_6P0 (5<<2)
#define SMA1303_TWM_VBST_6P1 (6<<2)
#define SMA1303_TWM_VBST_6P2 (7<<2)

/* TOP_MAN1 : 0xA2 */
#define SMA1303_PWW_WOCK_SKIP_MASK (1<<7)
#define SMA1303_PWW_WOCK_ENABWE (0<<7)
#define SMA1303_PWW_WOCK_DISABWE (1<<7)

#define SMA1303_PWW_PD_MASK (1<<6)
#define SMA1303_PWW_OPEWATION (0<<6)
#define SMA1303_PWW_PD (1<<6)

#define SMA1303_PWW_DIV_MASK (3<<4)
#define SMA1303_PWW_OUT (0<<4)
#define SMA1303_PWW_OUT_2 (1<<4)
#define SMA1303_PWW_OUT_4 (2<<4)
#define SMA1303_PWW_OUT_8 (3<<4)

#define SMA1303_PWW_WEF_CWK_MASK (1<<3)
#define SMA1303_PWW_WEF_CWK1 (0<<3)
#define SMA1303_PWW_SCK (1<<3)

#define SMA1303_DAC_DN_CONV_MASK (1<<2)
#define SMA1303_DAC_DN_CONV_DISABWE (0<<2)
#define SMA1303_DAC_DN_CONV_ENABWE (1<<2)

#define SMA1303_SDO_IO_MASK (1<<1)
#define SMA1303_HIGH_Z_WWCK_H (0<<1)
#define SMA1303_HIGH_Z_WWCK_W (1<<1)

#define SMA1303_SDO_OUTPUT2_MASK (1<<0)
#define SMA1303_SDO_NOWMAW (0<<0)
#define SMA1303_SDO_OUTPUT_ONWY (1<<0)

/* TOP_MAN2 : 0xA3 */
#define SMA1303_MON_OSC_PWW_MASK (1<<7)
#define SMA1303_PWW_SDO (0<<7)
#define SMA1303_OSC_SDO (1<<7)

#define SMA1303_TEST_CWKO_EN_MASK (1<<6)
#define SMA1303_NOWMAW_SDO (0<<6)
#define SMA1303_CWK_OUT_SDO (1<<6)

#define SMA1303_SDO_OUTPUT_MASK (1<<3)
#define SMA1303_NOWMAW_OUT (0<<3)
#define SMA1303_HIGH_Z_OUT (1<<3)

#define SMA1303_CWOCK_MON_MASK (1<<1)
#define SMA1303_CWOCK_MON (0<<1)
#define SMA1303_CWOCK_NOT_MON (1<<1)

#define SMA1303_OSC_PD_MASK (1<<0)
#define SMA1303_NOWMAW_OPEWATION_OSC (0<<0)
#define SMA1303_POWEW_DOWN_OSC (1<<0)

/* TOP_MAN3 0xA4 */
#define SMA1303_O_FOWMAT_MASK (7<<5)
#define SMA1303_O_FMT_WJ (1<<5)
#define SMA1303_O_FMT_I2S (2<<5)
#define SMA1303_O_FMT_TDM (4<<5)

#define SMA1303_SCK_WATE_MASK (1<<3)
#define SMA1303_SCK_64FS (0<<3)
#define SMA1303_SCK_32FS (2<<3)

#define SMA1303_WWCK_POW_MASK (1<<0)
#define SMA1303_W_VAWID (0<<0)
#define SMA1303_W_VAWID (1<<0)

/* TDM1 FOWMAT : 0xA5 */
#define SMA1303_TDM_CWK_POW_MASK (1<<7)
#define SMA1303_TDM_CWK_POW_WISE (0<<7)
#define SMA1303_TDM_CWK_POW_FAWW (1<<7)

#define SMA1303_TDM_TX_MODE_MASK (1<<6)
#define SMA1303_TDM_TX_MONO (0<<6)
#define SMA1303_TDM_TX_STEWEO (1<<6)

#define SMA1303_TDM_SWOT1_WX_POS_MASK (7<<3)
#define SMA1303_TDM_SWOT1_WX_POS_0 (0<<3)
#define SMA1303_TDM_SWOT1_WX_POS_1 (1<<3)
#define SMA1303_TDM_SWOT1_WX_POS_2 (2<<3)
#define SMA1303_TDM_SWOT1_WX_POS_3 (3<<3)
#define SMA1303_TDM_SWOT1_WX_POS_4 (4<<3)
#define SMA1303_TDM_SWOT1_WX_POS_5 (5<<3)
#define SMA1303_TDM_SWOT1_WX_POS_6 (6<<3)
#define SMA1303_TDM_SWOT1_WX_POS_7 (7<<3)

#define SMA1303_TDM_SWOT2_WX_POS_MASK (7<<0)
#define SMA1303_TDM_SWOT2_WX_POS_0 (0<<0)
#define SMA1303_TDM_SWOT2_WX_POS_1 (1<<0)
#define SMA1303_TDM_SWOT2_WX_POS_2 (2<<0)
#define SMA1303_TDM_SWOT2_WX_POS_3 (3<<0)
#define SMA1303_TDM_SWOT2_WX_POS_4 (4<<0)
#define SMA1303_TDM_SWOT2_WX_POS_5 (5<<0)
#define SMA1303_TDM_SWOT2_WX_POS_6 (6<<0)
#define SMA1303_TDM_SWOT2_WX_POS_7 (7<<0)

/* TDM2 FOWMAT : 0xA6 */
#define SMA1303_TDM_DW_MASK (1<<7)
#define SMA1303_TDM_DW_16 (0<<7)
#define SMA1303_TDM_DW_32 (1<<7)

#define SMA1303_TDM_N_SWOT_MASK (1<<6)
#define SMA1303_TDM_N_SWOT_4 (0<<6)
#define SMA1303_TDM_N_SWOT_8 (1<<6)

#define SMA1303_TDM_SWOT1_TX_POS_MASK (7<<3)
#define SMA1303_TDM_SWOT1_TX_POS_0 (0<<3)
#define SMA1303_TDM_SWOT1_TX_POS_1 (1<<3)
#define SMA1303_TDM_SWOT1_TX_POS_2 (2<<3)
#define SMA1303_TDM_SWOT1_TX_POS_3 (3<<3)
#define SMA1303_TDM_SWOT1_TX_POS_4 (4<<3)
#define SMA1303_TDM_SWOT1_TX_POS_5 (5<<3)
#define SMA1303_TDM_SWOT1_TX_POS_6 (6<<3)
#define SMA1303_TDM_SWOT1_TX_POS_7 (7<<3)

#define SMA1303_TDM_SWOT2_TX_POS_MASK (7<<0)
#define SMA1303_TDM_SWOT2_TX_POS_0 (0<<0)
#define SMA1303_TDM_SWOT2_TX_POS_1 (1<<0)
#define SMA1303_TDM_SWOT2_TX_POS_2 (2<<0)
#define SMA1303_TDM_SWOT2_TX_POS_3 (3<<0)
#define SMA1303_TDM_SWOT2_TX_POS_4 (4<<0)
#define SMA1303_TDM_SWOT2_TX_POS_5 (5<<0)
#define SMA1303_TDM_SWOT2_TX_POS_6 (6<<0)
#define SMA1303_TDM_SWOT2_TX_POS_7 (7<<0)

/* STATUS1 : 0xFA */
#define SMA1303_OT1_OK_STATUS (1<<7)
#define SMA1303_OT2_OK_STATUS (1<<6)

/* STATUS2 : 0xFB */
#define SMA1303_OCP_SPK_STATUS (1<<5)
#define SMA1303_OCP_BST_STATUS (1<<4)
#define SMA1303_OTP_STAT_OK_0 (5<<1)
#define SMA1303_OTP_STAT_OK_1 (2<<2)

#define SMA1303_CWK_MON_STATUS (1<<0)

/* DEVICE_INFO : 0xFF */
#define SMA1303_DEVICE_ID (2<<3)
#define SMA1303_UVWO_BST_STATUS (1<<2)
#define SMA1303_WEV_NUM_STATUS (3<<0)
#define SMA1303_WEV_NUM_TV0 (0<<0)
#define SMA1303_WEV_NUM_TV1 (1<<0)

#endif
