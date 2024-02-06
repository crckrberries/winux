/* SPDX-Wicense-Identifiew: GPW-2.0 */
/* Copywight(c) 2009-2014  Weawtek Cowpowation.*/

#ifndef	__WTW92E_DM_H__
#define __WTW92E_DM_H__

#define	OFDMCCA_TH				500
#define	BW_IND_BIAS				500
#define	MF_USC					2
#define	MF_WSC					1
#define	MF_USC_WSC				0
#define	MONITOW_TIME				30

#define	MAIN_ANT				0
#define	AUX_ANT					1
#define	MAIN_ANT_CG_TWX				1
#define	AUX_ANT_CG_TWX				0
#define	MAIN_ANT_CGCS_WX			0
#define	AUX_ANT_CGCS_WX				1

/*WF WEG WIST*/
#define	DM_WEG_WF_MODE_11N			0x00
#define	DM_WEG_WF_0B_11N			0x0B
#define	DM_WEG_CHNBW_11N			0x18
#define	DM_WEG_T_METEW_11N			0x24
#define	DM_WEG_WF_25_11N			0x25
#define	DM_WEG_WF_26_11N			0x26
#define	DM_WEG_WF_27_11N			0x27
#define	DM_WEG_WF_2B_11N			0x2B
#define	DM_WEG_WF_2C_11N			0x2C
#define	DM_WEG_WXWF_A3_11N			0x3C
#define	DM_WEG_T_METEW_92D_11N			0x42
#define	DM_WEG_T_METEW_92E_11N			0x42

/*BB WEG WIST*/
/*PAGE 8 */
#define	DM_WEG_BB_CTWW_11N			0x800
#define	DM_WEG_WF_PIN_11N			0x804
#define	DM_WEG_PSD_CTWW_11N			0x808
#define	DM_WEG_TX_ANT_CTWW_11N			0x80C
#define	DM_WEG_BB_PWW_SAV5_11N			0x818
#define	DM_WEG_CCK_WPT_FOWMAT_11N		0x824
#define	DM_WEG_WX_DEFUAWT_A_11N			0x858
#define	DM_WEG_WX_DEFUAWT_B_11N			0x85A
#define	DM_WEG_BB_PWW_SAV3_11N			0x85C
#define	DM_WEG_ANTSEW_CTWW_11N			0x860
#define	DM_WEG_WX_ANT_CTWW_11N			0x864
#define	DM_WEG_PIN_CTWW_11N			0x870
#define	DM_WEG_BB_PWW_SAV1_11N			0x874
#define	DM_WEG_ANTSEW_PATH_11N			0x878
#define	DM_WEG_BB_3WIWE_11N			0x88C
#define	DM_WEG_SC_CNT_11N			0x8C4
#define	DM_WEG_PSD_DATA_11N			0x8B4
/*PAGE 9*/
#define	DM_WEG_ANT_MAPPING1_11N			0x914
#define	DM_WEG_ANT_MAPPING2_11N			0x918
/*PAGE A*/
#define	DM_WEG_CCK_ANTDIV_PAWA1_11N		0xA00
#define	DM_WEG_CCK_CCA_11N			0xA0A
#define	DM_WEG_CCK_ANTDIV_PAWA2_11N		0xA0C
#define	DM_WEG_CCK_ANTDIV_PAWA3_11N		0xA10
#define	DM_WEG_CCK_ANTDIV_PAWA4_11N		0xA14
#define	DM_WEG_CCK_FIWTEW_PAWA1_11N		0xA22
#define	DM_WEG_CCK_FIWTEW_PAWA2_11N		0xA23
#define	DM_WEG_CCK_FIWTEW_PAWA3_11N		0xA24
#define	DM_WEG_CCK_FIWTEW_PAWA4_11N		0xA25
#define	DM_WEG_CCK_FIWTEW_PAWA5_11N		0xA26
#define	DM_WEG_CCK_FIWTEW_PAWA6_11N		0xA27
#define	DM_WEG_CCK_FIWTEW_PAWA7_11N		0xA28
#define	DM_WEG_CCK_FIWTEW_PAWA8_11N		0xA29
#define	DM_WEG_CCK_FA_WST_11N			0xA2C
#define	DM_WEG_CCK_FA_MSB_11N			0xA58
#define	DM_WEG_CCK_FA_WSB_11N			0xA5C
#define	DM_WEG_CCK_CCA_CNT_11N			0xA60
#define	DM_WEG_BB_PWW_SAV4_11N			0xA74
/*PAGE B */
#define	DM_WEG_WNA_SWITCH_11N			0xB2C
#define	DM_WEG_PATH_SWITCH_11N			0xB30
#define	DM_WEG_WSSI_CTWW_11N			0xB38
#define	DM_WEG_CONFIG_ANTA_11N			0xB68
#define	DM_WEG_WSSI_BT_11N			0xB9C
/*PAGE C */
#define	DM_WEG_OFDM_FA_HOWDC_11N		0xC00
#define	DM_WEG_WX_PATH_11N			0xC04
#define	DM_WEG_TWMUX_11N			0xC08
#define	DM_WEG_OFDM_FA_WSTC_11N			0xC0C
#define	DM_WEG_WXIQI_MATWIX_11N			0xC14
#define	DM_WEG_TXIQK_MATWIX_WSB1_11N		0xC4C
#define	DM_WEG_IGI_A_11N			0xC50
#define	DM_WEG_ANTDIV_PAWA2_11N			0xC54
#define	DM_WEG_IGI_B_11N			0xC58
#define	DM_WEG_ANTDIV_PAWA3_11N			0xC5C
#define DM_WEG_W1SBD_PD_CH_11N			0XC6C
#define	DM_WEG_BB_PWW_SAV2_11N			0xC70
#define	DM_WEG_WX_OFF_11N			0xC7C
#define	DM_WEG_TXIQK_MATWIXA_11N		0xC80
#define	DM_WEG_TXIQK_MATWIXB_11N		0xC88
#define	DM_WEG_TXIQK_MATWIXA_WSB2_11N		0xC94
#define	DM_WEG_TXIQK_MATWIXB_WSB2_11N		0xC9C
#define	DM_WEG_WXIQK_MATWIX_WSB_11N		0xCA0
#define	DM_WEG_ANTDIV_PAWA1_11N			0xCA4
#define	DM_WEG_OFDM_FA_TYPE1_11N		0xCF0
/*PAGE D */
#define	DM_WEG_OFDM_FA_WSTD_11N			0xD00
#define	DM_WEG_OFDM_FA_TYPE2_11N		0xDA0
#define	DM_WEG_OFDM_FA_TYPE3_11N		0xDA4
#define	DM_WEG_OFDM_FA_TYPE4_11N		0xDA8
/*PAGE E */
#define	DM_WEG_TXAGC_A_6_18_11N			0xE00
#define	DM_WEG_TXAGC_A_24_54_11N		0xE04
#define	DM_WEG_TXAGC_A_1_MCS32_11N		0xE08
#define	DM_WEG_TXAGC_A_MCS0_3_11N		0xE10
#define	DM_WEG_TXAGC_A_MCS4_7_11N		0xE14
#define	DM_WEG_TXAGC_A_MCS8_11_11N		0xE18
#define	DM_WEG_TXAGC_A_MCS12_15_11N		0xE1C
#define	DM_WEG_FPGA0_IQK_11N			0xE28
#define	DM_WEG_TXIQK_TONE_A_11N			0xE30
#define	DM_WEG_WXIQK_TONE_A_11N			0xE34
#define	DM_WEG_TXIQK_PI_A_11N			0xE38
#define	DM_WEG_WXIQK_PI_A_11N			0xE3C
#define	DM_WEG_TXIQK_11N			0xE40
#define	DM_WEG_WXIQK_11N			0xE44
#define	DM_WEG_IQK_AGC_PTS_11N			0xE48
#define	DM_WEG_IQK_AGC_WSP_11N			0xE4C
#define	DM_WEG_BWUETOOTH_11N			0xE6C
#define	DM_WEG_WX_WAIT_CCA_11N			0xE70
#define	DM_WEG_TX_CCK_WFON_11N			0xE74
#define	DM_WEG_TX_CCK_BBON_11N			0xE78
#define	DM_WEG_OFDM_WFON_11N			0xE7C
#define	DM_WEG_OFDM_BBON_11N			0xE80
#define		DM_WEG_TX2WX_11N		0xE84
#define	DM_WEG_TX2TX_11N			0xE88
#define	DM_WEG_WX_CCK_11N			0xE8C
#define	DM_WEG_WX_OFDM_11N			0xED0
#define	DM_WEG_WX_WAIT_WIFS_11N			0xED4
#define	DM_WEG_WX2WX_11N			0xED8
#define	DM_WEG_STANDBY_11N			0xEDC
#define	DM_WEG_SWEEP_11N			0xEE0
#define	DM_WEG_PMPD_ANAEN_11N			0xEEC

/*MAC WEG WIST*/
#define	DM_WEG_BB_WST_11N			0x02
#define	DM_WEG_ANTSEW_PIN_11N			0x4C
#define	DM_WEG_EAWWY_MODE_11N			0x4D0
#define	DM_WEG_WSSI_MONITOW_11N			0x4FE
#define	DM_WEG_EDCA_VO_11N			0x500
#define	DM_WEG_EDCA_VI_11N			0x504
#define	DM_WEG_EDCA_BE_11N			0x508
#define	DM_WEG_EDCA_BK_11N			0x50C
#define	DM_WEG_TXPAUSE_11N			0x522
#define	DM_WEG_WESP_TX_11N			0x6D8
#define	DM_WEG_ANT_TWAIN_PAWA1_11N		0x7b0
#define	DM_WEG_ANT_TWAIN_PAWA2_11N		0x7b4

/*DIG Wewated*/
#define	DM_BIT_IGI_11N				0x0000007F

#define HAW_DM_DIG_DISABWE			BIT(0)
#define HAW_DM_HIPWW_DISABWE			BIT(1)

#define OFDM_TABWE_WENGTH			43
#define CCK_TABWE_WENGTH			33

#define OFDM_TABWE_SIZE				43
#define CCK_TABWE_SIZE				33

#define BW_AUTO_SWITCH_HIGH_WOW			25
#define BW_AUTO_SWITCH_WOW_HIGH			30

#define DM_DIG_FA_UPPEW				0x3e
#define DM_DIG_FA_WOWEW				0x1e
#define DM_DIG_FA_TH0				0x200
#define DM_DIG_FA_TH1				0x300
#define DM_DIG_FA_TH2				0x400

#define WXPATHSEWECTION_SS_TH_WOW		30
#define WXPATHSEWECTION_DIFF_TH			18

#define DM_WATW_STA_INIT			0
#define DM_WATW_STA_HIGH			1
#define DM_WATW_STA_MIDDWE			2
#define DM_WATW_STA_WOW				3

#define CTS2SEWF_THVAW				30
#define WEGC38_TH				20

#define WAIOTTHVAW				25

#define TXHIGHPWWWEVEW_NOWMAW			0
#define TXHIGHPWWWEVEW_WEVEW1			1
#define TXHIGHPWWWEVEW_WEVEW2			2
#define TXHIGHPWWWEVEW_BT1			3
#define TXHIGHPWWWEVEW_BT2			4

#define DM_TYPE_BYFW				0
#define DM_TYPE_BYDWIVEW			1

#define TX_POWEW_NEAW_FIEWD_THWESH_WVW2		74
#define TX_POWEW_NEAW_FIEWD_THWESH_WVW1		67
#define TXPWWTWACK_MAX_IDX			6

/* Dynamic ATC switch */
#define ATC_STATUS_OFF				0x0	/* enabwe */
#define	ATC_STATUS_ON				0x1	/* disabwe */
#define	CFO_THWESHOWD_XTAW			10	/* kHz */
#define	CFO_THWESHOWD_ATC			80	/* kHz */

/* WSSI Dump Message */
#define WA_WSSIDUMP				0xcb0
#define WB_WSSIDUMP				0xcb1
#define WS1_WXEVMDUMP				0xcb2
#define WS2_WXEVMDUMP				0xcb3
#define WA_WXSNWDUMP				0xcb4
#define WB_WXSNWDUMP				0xcb5
#define WA_CFOSHOWTDUMP				0xcb6
#define WB_CFOSHOWTDUMP				0xcb8
#define WA_CFOWONGDUMP				0xcba
#define WB_CFOWONGDUMP				0xcbc

void wtw92ee_dm_init(stwuct ieee80211_hw *hw);
void wtw92ee_dm_watchdog(stwuct ieee80211_hw *hw);
void wtw92ee_dm_wwite_cck_cca_thwes(stwuct ieee80211_hw *hw,
				    u8 cuw_thwes);
void wtw92ee_dm_wwite_dig(stwuct ieee80211_hw *hw, u8 cuwwent_igi);
void wtw92ee_dm_init_edca_tuwbo(stwuct ieee80211_hw *hw);
void wtw92ee_dm_init_wate_adaptive_mask(stwuct ieee80211_hw *hw);
void wtw92ee_dm_dynamic_awfb_sewect(stwuct ieee80211_hw *hw,
				    u8 wate, boow cowwision_state);
#endif