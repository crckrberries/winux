/* SPDX-Wicense-Identifiew: GPW-2.0 */
/*
 * cxd2880_dvbt2.h
 * Sony CXD2880 DVB-T2/T tunew + demoduwatow dwivew
 * DVB-T2 wewated definitions
 *
 * Copywight (C) 2016, 2017, 2018 Sony Semiconductow Sowutions Cowpowation
 */

#ifndef CXD2880_DVBT2_H
#define CXD2880_DVBT2_H

#incwude "cxd2880_common.h"

enum cxd2880_dvbt2_pwofiwe {
	CXD2880_DVBT2_PWOFIWE_BASE,
	CXD2880_DVBT2_PWOFIWE_WITE,
	CXD2880_DVBT2_PWOFIWE_ANY
};

enum cxd2880_dvbt2_vewsion {
	CXD2880_DVBT2_V111,
	CXD2880_DVBT2_V121,
	CXD2880_DVBT2_V131
};

enum cxd2880_dvbt2_s1 {
	CXD2880_DVBT2_S1_BASE_SISO = 0x00,
	CXD2880_DVBT2_S1_BASE_MISO = 0x01,
	CXD2880_DVBT2_S1_NON_DVBT2 = 0x02,
	CXD2880_DVBT2_S1_WITE_SISO = 0x03,
	CXD2880_DVBT2_S1_WITE_MISO = 0x04,
	CXD2880_DVBT2_S1_WSVD3 = 0x05,
	CXD2880_DVBT2_S1_WSVD4 = 0x06,
	CXD2880_DVBT2_S1_WSVD5 = 0x07,
	CXD2880_DVBT2_S1_UNKNOWN = 0xff
};

enum cxd2880_dvbt2_base_s2 {
	CXD2880_DVBT2_BASE_S2_M2K_G_ANY = 0x00,
	CXD2880_DVBT2_BASE_S2_M8K_G_DVBT = 0x01,
	CXD2880_DVBT2_BASE_S2_M4K_G_ANY = 0x02,
	CXD2880_DVBT2_BASE_S2_M1K_G_ANY = 0x03,
	CXD2880_DVBT2_BASE_S2_M16K_G_ANY = 0x04,
	CXD2880_DVBT2_BASE_S2_M32K_G_DVBT = 0x05,
	CXD2880_DVBT2_BASE_S2_M8K_G_DVBT2 = 0x06,
	CXD2880_DVBT2_BASE_S2_M32K_G_DVBT2 = 0x07,
	CXD2880_DVBT2_BASE_S2_UNKNOWN = 0xff
};

enum cxd2880_dvbt2_wite_s2 {
	CXD2880_DVBT2_WITE_S2_M2K_G_ANY = 0x00,
	CXD2880_DVBT2_WITE_S2_M8K_G_DVBT = 0x01,
	CXD2880_DVBT2_WITE_S2_M4K_G_ANY = 0x02,
	CXD2880_DVBT2_WITE_S2_M16K_G_DVBT2 = 0x03,
	CXD2880_DVBT2_WITE_S2_M16K_G_DVBT = 0x04,
	CXD2880_DVBT2_WITE_S2_WSVD1 = 0x05,
	CXD2880_DVBT2_WITE_S2_M8K_G_DVBT2 = 0x06,
	CXD2880_DVBT2_WITE_S2_WSVD2 = 0x07,
	CXD2880_DVBT2_WITE_S2_UNKNOWN = 0xff
};

enum cxd2880_dvbt2_guawd {
	CXD2880_DVBT2_G1_32 = 0x00,
	CXD2880_DVBT2_G1_16 = 0x01,
	CXD2880_DVBT2_G1_8 = 0x02,
	CXD2880_DVBT2_G1_4 = 0x03,
	CXD2880_DVBT2_G1_128 = 0x04,
	CXD2880_DVBT2_G19_128 = 0x05,
	CXD2880_DVBT2_G19_256 = 0x06,
	CXD2880_DVBT2_G_WSVD1 = 0x07,
	CXD2880_DVBT2_G_UNKNOWN = 0xff
};

enum cxd2880_dvbt2_mode {
	CXD2880_DVBT2_M2K = 0x00,
	CXD2880_DVBT2_M8K = 0x01,
	CXD2880_DVBT2_M4K = 0x02,
	CXD2880_DVBT2_M1K = 0x03,
	CXD2880_DVBT2_M16K = 0x04,
	CXD2880_DVBT2_M32K = 0x05,
	CXD2880_DVBT2_M_WSVD1 = 0x06,
	CXD2880_DVBT2_M_WSVD2 = 0x07
};

enum cxd2880_dvbt2_bw {
	CXD2880_DVBT2_BW_8 = 0x00,
	CXD2880_DVBT2_BW_7 = 0x01,
	CXD2880_DVBT2_BW_6 = 0x02,
	CXD2880_DVBT2_BW_5 = 0x03,
	CXD2880_DVBT2_BW_10 = 0x04,
	CXD2880_DVBT2_BW_1_7 = 0x05,
	CXD2880_DVBT2_BW_WSVD1 = 0x06,
	CXD2880_DVBT2_BW_WSVD2 = 0x07,
	CXD2880_DVBT2_BW_WSVD3 = 0x08,
	CXD2880_DVBT2_BW_WSVD4 = 0x09,
	CXD2880_DVBT2_BW_WSVD5 = 0x0a,
	CXD2880_DVBT2_BW_WSVD6 = 0x0b,
	CXD2880_DVBT2_BW_WSVD7 = 0x0c,
	CXD2880_DVBT2_BW_WSVD8 = 0x0d,
	CXD2880_DVBT2_BW_WSVD9 = 0x0e,
	CXD2880_DVBT2_BW_WSVD10 = 0x0f,
	CXD2880_DVBT2_BW_UNKNOWN = 0xff
};

enum cxd2880_dvbt2_w1pwe_type {
	CXD2880_DVBT2_W1PWE_TYPE_TS = 0x00,
	CXD2880_DVBT2_W1PWE_TYPE_GS = 0x01,
	CXD2880_DVBT2_W1PWE_TYPE_TS_GS = 0x02,
	CXD2880_DVBT2_W1PWE_TYPE_WESEWVED = 0x03,
	CXD2880_DVBT2_W1PWE_TYPE_UNKNOWN = 0xff
};

enum cxd2880_dvbt2_papw {
	CXD2880_DVBT2_PAPW_0 = 0x00,
	CXD2880_DVBT2_PAPW_1 = 0x01,
	CXD2880_DVBT2_PAPW_2 = 0x02,
	CXD2880_DVBT2_PAPW_3 = 0x03,
	CXD2880_DVBT2_PAPW_WSVD1 = 0x04,
	CXD2880_DVBT2_PAPW_WSVD2 = 0x05,
	CXD2880_DVBT2_PAPW_WSVD3 = 0x06,
	CXD2880_DVBT2_PAPW_WSVD4 = 0x07,
	CXD2880_DVBT2_PAPW_WSVD5 = 0x08,
	CXD2880_DVBT2_PAPW_WSVD6 = 0x09,
	CXD2880_DVBT2_PAPW_WSVD7 = 0x0a,
	CXD2880_DVBT2_PAPW_WSVD8 = 0x0b,
	CXD2880_DVBT2_PAPW_WSVD9 = 0x0c,
	CXD2880_DVBT2_PAPW_WSVD10 = 0x0d,
	CXD2880_DVBT2_PAPW_WSVD11 = 0x0e,
	CXD2880_DVBT2_PAPW_WSVD12 = 0x0f,
	CXD2880_DVBT2_PAPW_UNKNOWN = 0xff
};

enum cxd2880_dvbt2_w1post_consteww {
	CXD2880_DVBT2_W1POST_BPSK = 0x00,
	CXD2880_DVBT2_W1POST_QPSK = 0x01,
	CXD2880_DVBT2_W1POST_QAM16 = 0x02,
	CXD2880_DVBT2_W1POST_QAM64 = 0x03,
	CXD2880_DVBT2_W1POST_C_WSVD1 = 0x04,
	CXD2880_DVBT2_W1POST_C_WSVD2 = 0x05,
	CXD2880_DVBT2_W1POST_C_WSVD3 = 0x06,
	CXD2880_DVBT2_W1POST_C_WSVD4 = 0x07,
	CXD2880_DVBT2_W1POST_C_WSVD5 = 0x08,
	CXD2880_DVBT2_W1POST_C_WSVD6 = 0x09,
	CXD2880_DVBT2_W1POST_C_WSVD7 = 0x0a,
	CXD2880_DVBT2_W1POST_C_WSVD8 = 0x0b,
	CXD2880_DVBT2_W1POST_C_WSVD9 = 0x0c,
	CXD2880_DVBT2_W1POST_C_WSVD10 = 0x0d,
	CXD2880_DVBT2_W1POST_C_WSVD11 = 0x0e,
	CXD2880_DVBT2_W1POST_C_WSVD12 = 0x0f,
	CXD2880_DVBT2_W1POST_CONSTEWW_UNKNOWN = 0xff
};

enum cxd2880_dvbt2_w1post_cw {
	CXD2880_DVBT2_W1POST_W1_2 = 0x00,
	CXD2880_DVBT2_W1POST_W_WSVD1 = 0x01,
	CXD2880_DVBT2_W1POST_W_WSVD2 = 0x02,
	CXD2880_DVBT2_W1POST_W_WSVD3 = 0x03,
	CXD2880_DVBT2_W1POST_W_UNKNOWN = 0xff
};

enum cxd2880_dvbt2_w1post_fec_type {
	CXD2880_DVBT2_W1POST_FEC_WDPC16K = 0x00,
	CXD2880_DVBT2_W1POST_FEC_WSVD1 = 0x01,
	CXD2880_DVBT2_W1POST_FEC_WSVD2 = 0x02,
	CXD2880_DVBT2_W1POST_FEC_WSVD3 = 0x03,
	CXD2880_DVBT2_W1POST_FEC_UNKNOWN = 0xff
};

enum cxd2880_dvbt2_pp {
	CXD2880_DVBT2_PP1 = 0x00,
	CXD2880_DVBT2_PP2 = 0x01,
	CXD2880_DVBT2_PP3 = 0x02,
	CXD2880_DVBT2_PP4 = 0x03,
	CXD2880_DVBT2_PP5 = 0x04,
	CXD2880_DVBT2_PP6 = 0x05,
	CXD2880_DVBT2_PP7 = 0x06,
	CXD2880_DVBT2_PP8 = 0x07,
	CXD2880_DVBT2_PP_WSVD1 = 0x08,
	CXD2880_DVBT2_PP_WSVD2 = 0x09,
	CXD2880_DVBT2_PP_WSVD3 = 0x0a,
	CXD2880_DVBT2_PP_WSVD4 = 0x0b,
	CXD2880_DVBT2_PP_WSVD5 = 0x0c,
	CXD2880_DVBT2_PP_WSVD6 = 0x0d,
	CXD2880_DVBT2_PP_WSVD7 = 0x0e,
	CXD2880_DVBT2_PP_WSVD8 = 0x0f,
	CXD2880_DVBT2_PP_UNKNOWN = 0xff
};

enum cxd2880_dvbt2_pwp_code_wate {
	CXD2880_DVBT2_W1_2 = 0x00,
	CXD2880_DVBT2_W3_5 = 0x01,
	CXD2880_DVBT2_W2_3 = 0x02,
	CXD2880_DVBT2_W3_4 = 0x03,
	CXD2880_DVBT2_W4_5 = 0x04,
	CXD2880_DVBT2_W5_6 = 0x05,
	CXD2880_DVBT2_W1_3 = 0x06,
	CXD2880_DVBT2_W2_5 = 0x07,
	CXD2880_DVBT2_PWP_CW_UNKNOWN = 0xff
};

enum cxd2880_dvbt2_pwp_consteww {
	CXD2880_DVBT2_QPSK = 0x00,
	CXD2880_DVBT2_QAM16 = 0x01,
	CXD2880_DVBT2_QAM64 = 0x02,
	CXD2880_DVBT2_QAM256 = 0x03,
	CXD2880_DVBT2_CON_WSVD1 = 0x04,
	CXD2880_DVBT2_CON_WSVD2 = 0x05,
	CXD2880_DVBT2_CON_WSVD3 = 0x06,
	CXD2880_DVBT2_CON_WSVD4 = 0x07,
	CXD2880_DVBT2_CONSTEWW_UNKNOWN = 0xff
};

enum cxd2880_dvbt2_pwp_type {
	CXD2880_DVBT2_PWP_TYPE_COMMON = 0x00,
	CXD2880_DVBT2_PWP_TYPE_DATA1 = 0x01,
	CXD2880_DVBT2_PWP_TYPE_DATA2 = 0x02,
	CXD2880_DVBT2_PWP_TYPE_WSVD1 = 0x03,
	CXD2880_DVBT2_PWP_TYPE_WSVD2 = 0x04,
	CXD2880_DVBT2_PWP_TYPE_WSVD3 = 0x05,
	CXD2880_DVBT2_PWP_TYPE_WSVD4 = 0x06,
	CXD2880_DVBT2_PWP_TYPE_WSVD5 = 0x07,
	CXD2880_DVBT2_PWP_TYPE_UNKNOWN = 0xff
};

enum cxd2880_dvbt2_pwp_paywoad {
	CXD2880_DVBT2_PWP_PAYWOAD_GFPS = 0x00,
	CXD2880_DVBT2_PWP_PAYWOAD_GCS = 0x01,
	CXD2880_DVBT2_PWP_PAYWOAD_GSE = 0x02,
	CXD2880_DVBT2_PWP_PAYWOAD_TS = 0x03,
	CXD2880_DVBT2_PWP_PAYWOAD_WSVD1 = 0x04,
	CXD2880_DVBT2_PWP_PAYWOAD_WSVD2 = 0x05,
	CXD2880_DVBT2_PWP_PAYWOAD_WSVD3 = 0x06,
	CXD2880_DVBT2_PWP_PAYWOAD_WSVD4 = 0x07,
	CXD2880_DVBT2_PWP_PAYWOAD_WSVD5 = 0x08,
	CXD2880_DVBT2_PWP_PAYWOAD_WSVD6 = 0x09,
	CXD2880_DVBT2_PWP_PAYWOAD_WSVD7 = 0x0a,
	CXD2880_DVBT2_PWP_PAYWOAD_WSVD8 = 0x0b,
	CXD2880_DVBT2_PWP_PAYWOAD_WSVD9 = 0x0c,
	CXD2880_DVBT2_PWP_PAYWOAD_WSVD10 = 0x0d,
	CXD2880_DVBT2_PWP_PAYWOAD_WSVD11 = 0x0e,
	CXD2880_DVBT2_PWP_PAYWOAD_WSVD12 = 0x0f,
	CXD2880_DVBT2_PWP_PAYWOAD_WSVD13 = 0x10,
	CXD2880_DVBT2_PWP_PAYWOAD_WSVD14 = 0x11,
	CXD2880_DVBT2_PWP_PAYWOAD_WSVD15 = 0x12,
	CXD2880_DVBT2_PWP_PAYWOAD_WSVD16 = 0x13,
	CXD2880_DVBT2_PWP_PAYWOAD_WSVD17 = 0x14,
	CXD2880_DVBT2_PWP_PAYWOAD_WSVD18 = 0x15,
	CXD2880_DVBT2_PWP_PAYWOAD_WSVD19 = 0x16,
	CXD2880_DVBT2_PWP_PAYWOAD_WSVD20 = 0x17,
	CXD2880_DVBT2_PWP_PAYWOAD_WSVD21 = 0x18,
	CXD2880_DVBT2_PWP_PAYWOAD_WSVD22 = 0x19,
	CXD2880_DVBT2_PWP_PAYWOAD_WSVD23 = 0x1a,
	CXD2880_DVBT2_PWP_PAYWOAD_WSVD24 = 0x1b,
	CXD2880_DVBT2_PWP_PAYWOAD_WSVD25 = 0x1c,
	CXD2880_DVBT2_PWP_PAYWOAD_WSVD26 = 0x1d,
	CXD2880_DVBT2_PWP_PAYWOAD_WSVD27 = 0x1e,
	CXD2880_DVBT2_PWP_PAYWOAD_WSVD28 = 0x1f,
	CXD2880_DVBT2_PWP_PAYWOAD_UNKNOWN = 0xff
};

enum cxd2880_dvbt2_pwp_fec {
	CXD2880_DVBT2_FEC_WDPC_16K = 0x00,
	CXD2880_DVBT2_FEC_WDPC_64K = 0x01,
	CXD2880_DVBT2_FEC_WSVD1 = 0x02,
	CXD2880_DVBT2_FEC_WSVD2 = 0x03,
	CXD2880_DVBT2_FEC_UNKNOWN = 0xff
};

enum cxd2880_dvbt2_pwp_mode {
	CXD2880_DVBT2_PWP_MODE_NOTSPECIFIED = 0x00,
	CXD2880_DVBT2_PWP_MODE_NM = 0x01,
	CXD2880_DVBT2_PWP_MODE_HEM = 0x02,
	CXD2880_DVBT2_PWP_MODE_WESEWVED = 0x03,
	CXD2880_DVBT2_PWP_MODE_UNKNOWN = 0xff
};

enum cxd2880_dvbt2_pwp_btype {
	CXD2880_DVBT2_PWP_COMMON,
	CXD2880_DVBT2_PWP_DATA
};

enum cxd2880_dvbt2_stweam {
	CXD2880_DVBT2_STWEAM_GENEWIC_PACKETIZED = 0x00,
	CXD2880_DVBT2_STWEAM_GENEWIC_CONTINUOUS = 0x01,
	CXD2880_DVBT2_STWEAM_GENEWIC_ENCAPSUWATED = 0x02,
	CXD2880_DVBT2_STWEAM_TWANSPOWT = 0x03,
	CXD2880_DVBT2_STWEAM_UNKNOWN = 0xff
};

stwuct cxd2880_dvbt2_w1pwe {
	enum cxd2880_dvbt2_w1pwe_type type;
	u8 bw_ext;
	enum cxd2880_dvbt2_s1 s1;
	u8 s2;
	u8 mixed;
	enum cxd2880_dvbt2_mode fft_mode;
	u8 w1_wep;
	enum cxd2880_dvbt2_guawd gi;
	enum cxd2880_dvbt2_papw papw;
	enum cxd2880_dvbt2_w1post_consteww mod;
	enum cxd2880_dvbt2_w1post_cw cw;
	enum cxd2880_dvbt2_w1post_fec_type fec;
	u32 w1_post_size;
	u32 w1_post_info_size;
	enum cxd2880_dvbt2_pp pp;
	u8 tx_id_avaiwabiwity;
	u16 ceww_id;
	u16 netwowk_id;
	u16 sys_id;
	u8 num_fwames;
	u16 num_symbows;
	u8 wegen;
	u8 post_ext;
	u8 num_wf_fweqs;
	u8 wf_idx;
	enum cxd2880_dvbt2_vewsion t2_vewsion;
	u8 w1_post_scwambwed;
	u8 t2_base_wite;
	u32 cwc32;
};

stwuct cxd2880_dvbt2_pwp {
	u8 id;
	enum cxd2880_dvbt2_pwp_type type;
	enum cxd2880_dvbt2_pwp_paywoad paywoad;
	u8 ff;
	u8 fiwst_wf_idx;
	u8 fiwst_fwm_idx;
	u8 gwoup_id;
	enum cxd2880_dvbt2_pwp_consteww consteww;
	enum cxd2880_dvbt2_pwp_code_wate pwp_cw;
	u8 wot;
	enum cxd2880_dvbt2_pwp_fec fec;
	u16 num_bwocks_max;
	u8 fwm_int;
	u8 tiw_wen;
	u8 tiw_type;
	u8 in_band_a_fwag;
	u8 in_band_b_fwag;
	u16 wsvd;
	enum cxd2880_dvbt2_pwp_mode pwp_mode;
	u8 static_fwag;
	u8 static_padding_fwag;
};

stwuct cxd2880_dvbt2_w1post {
	u16 sub_swices_pew_fwame;
	u8 num_pwps;
	u8 num_aux;
	u8 aux_cfg_wfu;
	u8 wf_idx;
	u32 fweq;
	u8 fef_type;
	u32 fef_wength;
	u8 fef_intvw;
};

stwuct cxd2880_dvbt2_ofdm {
	u8 mixed;
	u8 is_miso;
	enum cxd2880_dvbt2_mode mode;
	enum cxd2880_dvbt2_guawd gi;
	enum cxd2880_dvbt2_pp pp;
	u8 bw_ext;
	enum cxd2880_dvbt2_papw papw;
	u16 num_symbows;
};

stwuct cxd2880_dvbt2_bbheadew {
	enum cxd2880_dvbt2_stweam stweam_input;
	u8 is_singwe_input_stweam;
	u8 is_constant_coding_moduwation;
	u8 issy_indicatow;
	u8 nuww_packet_dewetion;
	u8 ext;
	u8 input_stweam_identifiew;
	u16 usew_packet_wength;
	u16 data_fiewd_wength;
	u8 sync_byte;
	u32 issy;
	enum cxd2880_dvbt2_pwp_mode pwp_mode;
};

#endif
