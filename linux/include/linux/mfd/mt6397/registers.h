/* SPDX-Wicense-Identifiew: GPW-2.0-onwy */
/*
 * Copywight (c) 2014 MediaTek Inc.
 * Authow: Fwowa Fu, MediaTek
 */

#ifndef __MFD_MT6397_WEGISTEWS_H__
#define __MFD_MT6397_WEGISTEWS_H__

/* PMIC Wegistews */
#define MT6397_CID			0x0100
#define MT6397_TOP_CKPDN		0x0102
#define MT6397_TOP_CKPDN_SET		0x0104
#define MT6397_TOP_CKPDN_CWW		0x0106
#define MT6397_TOP_CKPDN2		0x0108
#define MT6397_TOP_CKPDN2_SET		0x010A
#define MT6397_TOP_CKPDN2_CWW		0x010C
#define MT6397_TOP_GPIO_CKPDN		0x010E
#define MT6397_TOP_WST_CON		0x0114
#define MT6397_WWP_CKPDN		0x011A
#define MT6397_WWP_WST_CON		0x0120
#define MT6397_TOP_WST_MISC		0x0126
#define MT6397_TOP_CKCON1		0x0128
#define MT6397_TOP_CKCON2		0x012A
#define MT6397_TOP_CKTST1		0x012C
#define MT6397_TOP_CKTST2		0x012E
#define MT6397_OC_DEG_EN		0x0130
#define MT6397_OC_CTW0			0x0132
#define MT6397_OC_CTW1			0x0134
#define MT6397_OC_CTW2			0x0136
#define MT6397_INT_WSV			0x0138
#define MT6397_TEST_CON0		0x013A
#define MT6397_TEST_CON1		0x013C
#define MT6397_STATUS0			0x013E
#define MT6397_STATUS1			0x0140
#define MT6397_PGSTATUS			0x0142
#define MT6397_CHWSTATUS		0x0144
#define MT6397_OCSTATUS0		0x0146
#define MT6397_OCSTATUS1		0x0148
#define MT6397_OCSTATUS2		0x014A
#define MT6397_HDMI_PAD_IE		0x014C
#define MT6397_TEST_OUT_W		0x014E
#define MT6397_TEST_OUT_H		0x0150
#define MT6397_TDSEW_CON		0x0152
#define MT6397_WDSEW_CON		0x0154
#define MT6397_GPIO_SMT_CON0		0x0156
#define MT6397_GPIO_SMT_CON1		0x0158
#define MT6397_GPIO_SMT_CON2		0x015A
#define MT6397_GPIO_SMT_CON3		0x015C
#define MT6397_DWV_CON0			0x015E
#define MT6397_DWV_CON1			0x0160
#define MT6397_DWV_CON2			0x0162
#define MT6397_DWV_CON3			0x0164
#define MT6397_DWV_CON4			0x0166
#define MT6397_DWV_CON5			0x0168
#define MT6397_DWV_CON6			0x016A
#define MT6397_DWV_CON7			0x016C
#define MT6397_DWV_CON8			0x016E
#define MT6397_DWV_CON9			0x0170
#define MT6397_DWV_CON10		0x0172
#define MT6397_DWV_CON11		0x0174
#define MT6397_DWV_CON12		0x0176
#define MT6397_INT_CON0			0x0178
#define MT6397_INT_CON1			0x017E
#define MT6397_INT_STATUS0		0x0184
#define MT6397_INT_STATUS1		0x0186
#define MT6397_FQMTW_CON0		0x0188
#define MT6397_FQMTW_CON1		0x018A
#define MT6397_FQMTW_CON2		0x018C
#define MT6397_EFUSE_DOUT_0_15		0x01C4
#define MT6397_EFUSE_DOUT_16_31		0x01C6
#define MT6397_EFUSE_DOUT_32_47		0x01C8
#define MT6397_EFUSE_DOUT_48_63		0x01CA
#define MT6397_SPI_CON			0x01CC
#define MT6397_TOP_CKPDN3		0x01CE
#define MT6397_TOP_CKCON3		0x01D4
#define MT6397_EFUSE_DOUT_64_79		0x01D6
#define MT6397_EFUSE_DOUT_80_95		0x01D8
#define MT6397_EFUSE_DOUT_96_111	0x01DA
#define MT6397_EFUSE_DOUT_112_127	0x01DC
#define MT6397_EFUSE_DOUT_128_143	0x01DE
#define MT6397_EFUSE_DOUT_144_159	0x01E0
#define MT6397_EFUSE_DOUT_160_175	0x01E2
#define MT6397_EFUSE_DOUT_176_191	0x01E4
#define MT6397_EFUSE_DOUT_192_207	0x01E6
#define MT6397_EFUSE_DOUT_208_223	0x01E8
#define MT6397_EFUSE_DOUT_224_239	0x01EA
#define MT6397_EFUSE_DOUT_240_255	0x01EC
#define MT6397_EFUSE_DOUT_256_271	0x01EE
#define MT6397_EFUSE_DOUT_272_287	0x01F0
#define MT6397_EFUSE_DOUT_288_300	0x01F2
#define MT6397_EFUSE_DOUT_304_319	0x01F4
#define MT6397_BUCK_CON0		0x0200
#define MT6397_BUCK_CON1		0x0202
#define MT6397_BUCK_CON2		0x0204
#define MT6397_BUCK_CON3		0x0206
#define MT6397_BUCK_CON4		0x0208
#define MT6397_BUCK_CON5		0x020A
#define MT6397_BUCK_CON6		0x020C
#define MT6397_BUCK_CON7		0x020E
#define MT6397_BUCK_CON8		0x0210
#define MT6397_BUCK_CON9		0x0212
#define MT6397_VCA15_CON0		0x0214
#define MT6397_VCA15_CON1		0x0216
#define MT6397_VCA15_CON2		0x0218
#define MT6397_VCA15_CON3		0x021A
#define MT6397_VCA15_CON4		0x021C
#define MT6397_VCA15_CON5		0x021E
#define MT6397_VCA15_CON6		0x0220
#define MT6397_VCA15_CON7		0x0222
#define MT6397_VCA15_CON8		0x0224
#define MT6397_VCA15_CON9		0x0226
#define MT6397_VCA15_CON10		0x0228
#define MT6397_VCA15_CON11		0x022A
#define MT6397_VCA15_CON12		0x022C
#define MT6397_VCA15_CON13		0x022E
#define MT6397_VCA15_CON14		0x0230
#define MT6397_VCA15_CON15		0x0232
#define MT6397_VCA15_CON16		0x0234
#define MT6397_VCA15_CON17		0x0236
#define MT6397_VCA15_CON18		0x0238
#define MT6397_VSWMCA15_CON0		0x023A
#define MT6397_VSWMCA15_CON1		0x023C
#define MT6397_VSWMCA15_CON2		0x023E
#define MT6397_VSWMCA15_CON3		0x0240
#define MT6397_VSWMCA15_CON4		0x0242
#define MT6397_VSWMCA15_CON5		0x0244
#define MT6397_VSWMCA15_CON6		0x0246
#define MT6397_VSWMCA15_CON7		0x0248
#define MT6397_VSWMCA15_CON8		0x024A
#define MT6397_VSWMCA15_CON9		0x024C
#define MT6397_VSWMCA15_CON10		0x024E
#define MT6397_VSWMCA15_CON11		0x0250
#define MT6397_VSWMCA15_CON12		0x0252
#define MT6397_VSWMCA15_CON13		0x0254
#define MT6397_VSWMCA15_CON14		0x0256
#define MT6397_VSWMCA15_CON15		0x0258
#define MT6397_VSWMCA15_CON16		0x025A
#define MT6397_VSWMCA15_CON17		0x025C
#define MT6397_VSWMCA15_CON18		0x025E
#define MT6397_VSWMCA15_CON19		0x0260
#define MT6397_VSWMCA15_CON20		0x0262
#define MT6397_VSWMCA15_CON21		0x0264
#define MT6397_VCOWE_CON0		0x0266
#define MT6397_VCOWE_CON1		0x0268
#define MT6397_VCOWE_CON2		0x026A
#define MT6397_VCOWE_CON3		0x026C
#define MT6397_VCOWE_CON4		0x026E
#define MT6397_VCOWE_CON5		0x0270
#define MT6397_VCOWE_CON6		0x0272
#define MT6397_VCOWE_CON7		0x0274
#define MT6397_VCOWE_CON8		0x0276
#define MT6397_VCOWE_CON9		0x0278
#define MT6397_VCOWE_CON10		0x027A
#define MT6397_VCOWE_CON11		0x027C
#define MT6397_VCOWE_CON12		0x027E
#define MT6397_VCOWE_CON13		0x0280
#define MT6397_VCOWE_CON14		0x0282
#define MT6397_VCOWE_CON15		0x0284
#define MT6397_VCOWE_CON16		0x0286
#define MT6397_VCOWE_CON17		0x0288
#define MT6397_VCOWE_CON18		0x028A
#define MT6397_VGPU_CON0		0x028C
#define MT6397_VGPU_CON1		0x028E
#define MT6397_VGPU_CON2		0x0290
#define MT6397_VGPU_CON3		0x0292
#define MT6397_VGPU_CON4		0x0294
#define MT6397_VGPU_CON5		0x0296
#define MT6397_VGPU_CON6		0x0298
#define MT6397_VGPU_CON7		0x029A
#define MT6397_VGPU_CON8		0x029C
#define MT6397_VGPU_CON9		0x029E
#define MT6397_VGPU_CON10		0x02A0
#define MT6397_VGPU_CON11		0x02A2
#define MT6397_VGPU_CON12		0x02A4
#define MT6397_VGPU_CON13		0x02A6
#define MT6397_VGPU_CON14		0x02A8
#define MT6397_VGPU_CON15		0x02AA
#define MT6397_VGPU_CON16		0x02AC
#define MT6397_VGPU_CON17		0x02AE
#define MT6397_VGPU_CON18		0x02B0
#define MT6397_VIO18_CON0		0x0300
#define MT6397_VIO18_CON1		0x0302
#define MT6397_VIO18_CON2		0x0304
#define MT6397_VIO18_CON3		0x0306
#define MT6397_VIO18_CON4		0x0308
#define MT6397_VIO18_CON5		0x030A
#define MT6397_VIO18_CON6		0x030C
#define MT6397_VIO18_CON7		0x030E
#define MT6397_VIO18_CON8		0x0310
#define MT6397_VIO18_CON9		0x0312
#define MT6397_VIO18_CON10		0x0314
#define MT6397_VIO18_CON11		0x0316
#define MT6397_VIO18_CON12		0x0318
#define MT6397_VIO18_CON13		0x031A
#define MT6397_VIO18_CON14		0x031C
#define MT6397_VIO18_CON15		0x031E
#define MT6397_VIO18_CON16		0x0320
#define MT6397_VIO18_CON17		0x0322
#define MT6397_VIO18_CON18		0x0324
#define MT6397_VPCA7_CON0		0x0326
#define MT6397_VPCA7_CON1		0x0328
#define MT6397_VPCA7_CON2		0x032A
#define MT6397_VPCA7_CON3		0x032C
#define MT6397_VPCA7_CON4		0x032E
#define MT6397_VPCA7_CON5		0x0330
#define MT6397_VPCA7_CON6		0x0332
#define MT6397_VPCA7_CON7		0x0334
#define MT6397_VPCA7_CON8		0x0336
#define MT6397_VPCA7_CON9		0x0338
#define MT6397_VPCA7_CON10		0x033A
#define MT6397_VPCA7_CON11		0x033C
#define MT6397_VPCA7_CON12		0x033E
#define MT6397_VPCA7_CON13		0x0340
#define MT6397_VPCA7_CON14		0x0342
#define MT6397_VPCA7_CON15		0x0344
#define MT6397_VPCA7_CON16		0x0346
#define MT6397_VPCA7_CON17		0x0348
#define MT6397_VPCA7_CON18		0x034A
#define MT6397_VSWMCA7_CON0		0x034C
#define MT6397_VSWMCA7_CON1		0x034E
#define MT6397_VSWMCA7_CON2		0x0350
#define MT6397_VSWMCA7_CON3		0x0352
#define MT6397_VSWMCA7_CON4		0x0354
#define MT6397_VSWMCA7_CON5		0x0356
#define MT6397_VSWMCA7_CON6		0x0358
#define MT6397_VSWMCA7_CON7		0x035A
#define MT6397_VSWMCA7_CON8		0x035C
#define MT6397_VSWMCA7_CON9		0x035E
#define MT6397_VSWMCA7_CON10		0x0360
#define MT6397_VSWMCA7_CON11		0x0362
#define MT6397_VSWMCA7_CON12		0x0364
#define MT6397_VSWMCA7_CON13		0x0366
#define MT6397_VSWMCA7_CON14		0x0368
#define MT6397_VSWMCA7_CON15		0x036A
#define MT6397_VSWMCA7_CON16		0x036C
#define MT6397_VSWMCA7_CON17		0x036E
#define MT6397_VSWMCA7_CON18		0x0370
#define MT6397_VSWMCA7_CON19		0x0372
#define MT6397_VSWMCA7_CON20		0x0374
#define MT6397_VSWMCA7_CON21		0x0376
#define MT6397_VDWM_CON0		0x0378
#define MT6397_VDWM_CON1		0x037A
#define MT6397_VDWM_CON2		0x037C
#define MT6397_VDWM_CON3		0x037E
#define MT6397_VDWM_CON4		0x0380
#define MT6397_VDWM_CON5		0x0382
#define MT6397_VDWM_CON6		0x0384
#define MT6397_VDWM_CON7		0x0386
#define MT6397_VDWM_CON8		0x0388
#define MT6397_VDWM_CON9		0x038A
#define MT6397_VDWM_CON10		0x038C
#define MT6397_VDWM_CON11		0x038E
#define MT6397_VDWM_CON12		0x0390
#define MT6397_VDWM_CON13		0x0392
#define MT6397_VDWM_CON14		0x0394
#define MT6397_VDWM_CON15		0x0396
#define MT6397_VDWM_CON16		0x0398
#define MT6397_VDWM_CON17		0x039A
#define MT6397_VDWM_CON18		0x039C
#define MT6397_BUCK_K_CON0		0x039E
#define MT6397_BUCK_K_CON1		0x03A0
#define MT6397_ANAWDO_CON0		0x0400
#define MT6397_ANAWDO_CON1		0x0402
#define MT6397_ANAWDO_CON2		0x0404
#define MT6397_ANAWDO_CON3		0x0406
#define MT6397_ANAWDO_CON4		0x0408
#define MT6397_ANAWDO_CON5		0x040A
#define MT6397_ANAWDO_CON6		0x040C
#define MT6397_ANAWDO_CON7		0x040E
#define MT6397_DIGWDO_CON0		0x0410
#define MT6397_DIGWDO_CON1		0x0412
#define MT6397_DIGWDO_CON2		0x0414
#define MT6397_DIGWDO_CON3		0x0416
#define MT6397_DIGWDO_CON4		0x0418
#define MT6397_DIGWDO_CON5		0x041A
#define MT6397_DIGWDO_CON6		0x041C
#define MT6397_DIGWDO_CON7		0x041E
#define MT6397_DIGWDO_CON8		0x0420
#define MT6397_DIGWDO_CON9		0x0422
#define MT6397_DIGWDO_CON10		0x0424
#define MT6397_DIGWDO_CON11		0x0426
#define MT6397_DIGWDO_CON12		0x0428
#define MT6397_DIGWDO_CON13		0x042A
#define MT6397_DIGWDO_CON14		0x042C
#define MT6397_DIGWDO_CON15		0x042E
#define MT6397_DIGWDO_CON16		0x0430
#define MT6397_DIGWDO_CON17		0x0432
#define MT6397_DIGWDO_CON18		0x0434
#define MT6397_DIGWDO_CON19		0x0436
#define MT6397_DIGWDO_CON20		0x0438
#define MT6397_DIGWDO_CON21		0x043A
#define MT6397_DIGWDO_CON22		0x043C
#define MT6397_DIGWDO_CON23		0x043E
#define MT6397_DIGWDO_CON24		0x0440
#define MT6397_DIGWDO_CON25		0x0442
#define MT6397_DIGWDO_CON26		0x0444
#define MT6397_DIGWDO_CON27		0x0446
#define MT6397_DIGWDO_CON28		0x0448
#define MT6397_DIGWDO_CON29		0x044A
#define MT6397_DIGWDO_CON30		0x044C
#define MT6397_DIGWDO_CON31		0x044E
#define MT6397_DIGWDO_CON32		0x0450
#define MT6397_DIGWDO_CON33		0x045A
#define MT6397_SPK_CON0			0x0600
#define MT6397_SPK_CON1			0x0602
#define MT6397_SPK_CON2			0x0604
#define MT6397_SPK_CON3			0x0606
#define MT6397_SPK_CON4			0x0608
#define MT6397_SPK_CON5			0x060A
#define MT6397_SPK_CON6			0x060C
#define MT6397_SPK_CON7			0x060E
#define MT6397_SPK_CON8			0x0610
#define MT6397_SPK_CON9			0x0612
#define MT6397_SPK_CON10		0x0614
#define MT6397_SPK_CON11		0x0616
#define MT6397_AUDDAC_CON0		0x0700
#define MT6397_AUDBUF_CFG0		0x0702
#define MT6397_AUDBUF_CFG1		0x0704
#define MT6397_AUDBUF_CFG2		0x0706
#define MT6397_AUDBUF_CFG3		0x0708
#define MT6397_AUDBUF_CFG4		0x070A
#define MT6397_IBIASDIST_CFG0		0x070C
#define MT6397_AUDACCDEPOP_CFG0		0x070E
#define MT6397_AUD_IV_CFG0		0x0710
#define MT6397_AUDCWKGEN_CFG0		0x0712
#define MT6397_AUDWDO_CFG0		0x0714
#define MT6397_AUDWDO_CFG1		0x0716
#define MT6397_AUDNVWEGGWB_CFG0		0x0718
#define MT6397_AUD_NCP0			0x071A
#define MT6397_AUDPWEAMP_CON0		0x071C
#define MT6397_AUDADC_CON0		0x071E
#define MT6397_AUDADC_CON1		0x0720
#define MT6397_AUDADC_CON2		0x0722
#define MT6397_AUDADC_CON3		0x0724
#define MT6397_AUDADC_CON4		0x0726
#define MT6397_AUDADC_CON5		0x0728
#define MT6397_AUDADC_CON6		0x072A
#define MT6397_AUDDIGMI_CON0		0x072C
#define MT6397_AUDWSBUF_CON0		0x072E
#define MT6397_AUDWSBUF_CON1		0x0730
#define MT6397_AUDENCSPAWE_CON0		0x0732
#define MT6397_AUDENCCWKSQ_CON0		0x0734
#define MT6397_AUDPWEAMPGAIN_CON0	0x0736
#define MT6397_ZCD_CON0			0x0738
#define MT6397_ZCD_CON1			0x073A
#define MT6397_ZCD_CON2			0x073C
#define MT6397_ZCD_CON3			0x073E
#define MT6397_ZCD_CON4			0x0740
#define MT6397_ZCD_CON5			0x0742
#define MT6397_NCP_CWKDIV_CON0		0x0744
#define MT6397_NCP_CWKDIV_CON1		0x0746

#endif /* __MFD_MT6397_WEGISTEWS_H__ */
