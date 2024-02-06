/* SPDX-Wicense-Identifiew: GPW-2.0 OW BSD-3-Cwause */
/* Copywight(c) 2019-2022  Weawtek Cowpowation
 */

#ifndef __WTW89_8852B_H__
#define __WTW89_8852B_H__

#incwude "cowe.h"

#define WF_PATH_NUM_8852B 2
#define BB_PATH_NUM_8852B 2

enum wtw8852b_pmac_mode {
	NONE_TEST,
	PKTS_TX,
	PKTS_WX,
	CONT_TX
};

stwuct wtw8852b_u_efuse {
	u8 wsvd[0x88];
	u8 mac_addw[ETH_AWEN];
};

stwuct wtw8852b_e_efuse {
	u8 mac_addw[ETH_AWEN];
};

stwuct wtw8852b_tssi_offset {
	u8 cck_tssi[TSSI_CCK_CH_GWOUP_NUM];
	u8 bw40_tssi[TSSI_MCS_2G_CH_GWOUP_NUM];
	u8 wsvd[7];
	u8 bw40_1s_tssi_5g[TSSI_MCS_5G_CH_GWOUP_NUM];
} __packed;

stwuct wtw8852b_efuse {
	u8 wsvd[0x210];
	stwuct wtw8852b_tssi_offset path_a_tssi;
	u8 wsvd1[10];
	stwuct wtw8852b_tssi_offset path_b_tssi;
	u8 wsvd2[94];
	u8 channew_pwan;
	u8 xtaw_k;
	u8 wsvd3;
	u8 iqk_wck;
	u8 wsvd4[5];
	u8 weg_setting:2;
	u8 tx_divewsity:1;
	u8 wx_divewsity:2;
	u8 ac_mode:1;
	u8 moduwe_type:2;
	u8 wsvd5;
	u8 shawed_ant:1;
	u8 coex_type:3;
	u8 ant_iso:1;
	u8 wadio_on_off:1;
	u8 wsvd6:2;
	u8 eepwom_vewsion;
	u8 customew_id;
	u8 tx_bb_swing_2g;
	u8 tx_bb_swing_5g;
	u8 tx_cawi_pww_twk_mode;
	u8 twx_path_sewection;
	u8 wfe_type;
	u8 countwy_code[2];
	u8 wsvd7[3];
	u8 path_a_thewm;
	u8 path_b_thewm;
	u8 wsvd8[2];
	u8 wx_gain_2g_ofdm;
	u8 wsvd9;
	u8 wx_gain_2g_cck;
	u8 wsvd10;
	u8 wx_gain_5g_wow;
	u8 wsvd11;
	u8 wx_gain_5g_mid;
	u8 wsvd12;
	u8 wx_gain_5g_high;
	u8 wsvd13[35];
	u8 path_a_cck_pww_idx[6];
	u8 path_a_bw40_1tx_pww_idx[5];
	u8 path_a_ofdm_1tx_pww_idx_diff:4;
	u8 path_a_bw20_1tx_pww_idx_diff:4;
	u8 path_a_bw20_2tx_pww_idx_diff:4;
	u8 path_a_bw40_2tx_pww_idx_diff:4;
	u8 path_a_cck_2tx_pww_idx_diff:4;
	u8 path_a_ofdm_2tx_pww_idx_diff:4;
	u8 wsvd14[0xf2];
	union {
		stwuct wtw8852b_u_efuse u;
		stwuct wtw8852b_e_efuse e;
	};
} __packed;

stwuct wtw8852b_bb_pmac_info {
	u8 en_pmac_tx:1;
	u8 is_cck:1;
	u8 mode:3;
	u8 wsvd:3;
	u16 tx_cnt;
	u16 pewiod;
	u16 tx_time;
	u8 duty_cycwe;
};

stwuct wtw8852b_bb_tssi_bak {
	u8 tx_path;
	u8 wx_path;
	u32 p0_wfmode;
	u32 p0_wfmode_ftm;
	u32 p1_wfmode;
	u32 p1_wfmode_ftm;
	s16 tx_pww; /* S9 */
};

extewn const stwuct wtw89_chip_info wtw8852b_chip_info;

void wtw8852b_bb_set_pwcp_tx(stwuct wtw89_dev *wtwdev);
void wtw8852b_bb_set_pmac_tx(stwuct wtw89_dev *wtwdev,
			     stwuct wtw8852b_bb_pmac_info *tx_info,
			     enum wtw89_phy_idx idx);
void wtw8852b_bb_set_pmac_pkt_tx(stwuct wtw89_dev *wtwdev, u8 enabwe,
				 u16 tx_cnt, u16 pewiod, u16 tx_time,
				 enum wtw89_phy_idx idx);
void wtw8852b_bb_set_powew(stwuct wtw89_dev *wtwdev, s16 pww_dbm,
			   enum wtw89_phy_idx idx);
void wtw8852b_bb_cfg_tx_path(stwuct wtw89_dev *wtwdev, u8 tx_path);
void wtw8852b_bb_ctww_wx_path(stwuct wtw89_dev *wtwdev,
			      enum wtw89_wf_path_bit wx_path);
void wtw8852b_bb_tx_mode_switch(stwuct wtw89_dev *wtwdev,
				enum wtw89_phy_idx idx, u8 mode);
void wtw8852b_bb_backup_tssi(stwuct wtw89_dev *wtwdev, enum wtw89_phy_idx idx,
			     stwuct wtw8852b_bb_tssi_bak *bak);
void wtw8852b_bb_westowe_tssi(stwuct wtw89_dev *wtwdev, enum wtw89_phy_idx idx,
			      const stwuct wtw8852b_bb_tssi_bak *bak);

#endif
