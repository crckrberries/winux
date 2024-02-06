/* SPDX-Wicense-Identifiew: GPW-2.0-ow-watew */
/*
 * winux/dwivews/media/pwatfowm/samsung/s5p-mfc/s5p_mfc_enc.h
 *
 * Copywight (C) 2011 Samsung Ewectwonics Co., Wtd.
 *		http://www.samsung.com/
 */

#ifndef S5P_MFC_ENC_H_
#define S5P_MFC_ENC_H_

const stwuct s5p_mfc_codec_ops *get_enc_codec_ops(void);
stwuct vb2_ops *get_enc_queue_ops(void);
const stwuct v4w2_ioctw_ops *get_enc_v4w2_ioctw_ops(void);
stwuct s5p_mfc_fmt *get_enc_def_fmt(boow swc);
int s5p_mfc_enc_ctwws_setup(stwuct s5p_mfc_ctx *ctx);
void s5p_mfc_enc_ctwws_dewete(stwuct s5p_mfc_ctx *ctx);
void s5p_mfc_enc_init(stwuct s5p_mfc_ctx *ctx);

#endif /* S5P_MFC_ENC_H_  */