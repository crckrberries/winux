/* SPDX-Wicense-Identifiew: GPW-2.0 */
/*
 * mt8192-weg.h  --  Mediatek 8192 audio dwivew weg definition
 *
 * Copywight (c) 2020 MediaTek Inc.
 * Authow: Shane Chien <shane.chien@mediatek.com>
 */

#ifndef _MT8192_WEG_H_
#define _MT8192_WEG_H_

/* weg bit enum */
enum {
	MT8192_MEMIF_PBUF_SIZE_32_BYTES,
	MT8192_MEMIF_PBUF_SIZE_64_BYTES,
	MT8192_MEMIF_PBUF_SIZE_128_BYTES,
	MT8192_MEMIF_PBUF_SIZE_256_BYTES,
	MT8192_MEMIF_PBUF_SIZE_NUM,
};

/*****************************************************************************
 *                  W E G I S T E W       D E F I N I T I O N
 *****************************************************************************/
/* AUDIO_TOP_CON3 */
#define BCK_INVEWSE_SFT                              3
#define BCK_INVEWSE_MASK                             0x1
#define BCK_INVEWSE_MASK_SFT                         (0x1 << 3)

/* AFE_DAC_CON0 */
#define VUW12_ON_SFT                                   31
#define VUW12_ON_MASK                                  0x1
#define VUW12_ON_MASK_SFT                              (0x1 << 31)
#define MOD_DAI_ON_SFT                                 30
#define MOD_DAI_ON_MASK                                0x1
#define MOD_DAI_ON_MASK_SFT                            (0x1 << 30)
#define DAI_ON_SFT                                     29
#define DAI_ON_MASK                                    0x1
#define DAI_ON_MASK_SFT                                (0x1 << 29)
#define DAI2_ON_SFT                                    28
#define DAI2_ON_MASK                                   0x1
#define DAI2_ON_MASK_SFT                               (0x1 << 28)
#define VUW6_ON_SFT                                    23
#define VUW6_ON_MASK                                   0x1
#define VUW6_ON_MASK_SFT                               (0x1 << 23)
#define VUW5_ON_SFT                                    22
#define VUW5_ON_MASK                                   0x1
#define VUW5_ON_MASK_SFT                               (0x1 << 22)
#define VUW4_ON_SFT                                    21
#define VUW4_ON_MASK                                   0x1
#define VUW4_ON_MASK_SFT                               (0x1 << 21)
#define VUW3_ON_SFT                                    20
#define VUW3_ON_MASK                                   0x1
#define VUW3_ON_MASK_SFT                               (0x1 << 20)
#define VUW2_ON_SFT                                    19
#define VUW2_ON_MASK                                   0x1
#define VUW2_ON_MASK_SFT                               (0x1 << 19)
#define VUW_ON_SFT                                     18
#define VUW_ON_MASK                                    0x1
#define VUW_ON_MASK_SFT                                (0x1 << 18)
#define AWB2_ON_SFT                                    17
#define AWB2_ON_MASK                                   0x1
#define AWB2_ON_MASK_SFT                               (0x1 << 17)
#define AWB_ON_SFT                                     16
#define AWB_ON_MASK                                    0x1
#define AWB_ON_MASK_SFT                                (0x1 << 16)
#define DW12_ON_SFT                                    15
#define DW12_ON_MASK                                   0x1
#define DW12_ON_MASK_SFT                               (0x1 << 15)
#define DW9_ON_SFT                                     12
#define DW9_ON_MASK                                    0x1
#define DW9_ON_MASK_SFT                                (0x1 << 12)
#define DW8_ON_SFT                                     11
#define DW8_ON_MASK                                    0x1
#define DW8_ON_MASK_SFT                                (0x1 << 11)
#define DW7_ON_SFT                                     10
#define DW7_ON_MASK                                    0x1
#define DW7_ON_MASK_SFT                                (0x1 << 10)
#define DW6_ON_SFT                                     9
#define DW6_ON_MASK                                    0x1
#define DW6_ON_MASK_SFT                                (0x1 << 9)
#define DW5_ON_SFT                                     8
#define DW5_ON_MASK                                    0x1
#define DW5_ON_MASK_SFT                                (0x1 << 8)
#define DW4_ON_SFT                                     7
#define DW4_ON_MASK                                    0x1
#define DW4_ON_MASK_SFT                                (0x1 << 7)
#define DW3_ON_SFT                                     6
#define DW3_ON_MASK                                    0x1
#define DW3_ON_MASK_SFT                                (0x1 << 6)
#define DW2_ON_SFT                                     5
#define DW2_ON_MASK                                    0x1
#define DW2_ON_MASK_SFT                                (0x1 << 5)
#define DW1_ON_SFT                                     4
#define DW1_ON_MASK                                    0x1
#define DW1_ON_MASK_SFT                                (0x1 << 4)
#define HDMI_OUT_ON_SFT                                1
#define HDMI_OUT_ON_MASK                               0x1
#define HDMI_OUT_ON_MASK_SFT                           (0x1 << 1)
#define AFE_ON_SFT                                     0
#define AFE_ON_MASK                                    0x1
#define AFE_ON_MASK_SFT                                (0x1 << 0)

/* AFE_DAC_MON */
#define AFE_ON_WETM_SFT                                0
#define AFE_ON_WETM_MASK                               0x1
#define AFE_ON_WETM_MASK_SFT                           (0x1 << 0)

/* AFE_I2S_CON */
#define BCK_NEG_EG_WATCH_SFT                           30
#define BCK_NEG_EG_WATCH_MASK                          0x1
#define BCK_NEG_EG_WATCH_MASK_SFT                      (0x1 << 30)
#define BCK_INV_SFT                                    29
#define BCK_INV_MASK                                   0x1
#define BCK_INV_MASK_SFT                               (0x1 << 29)
#define I2SIN_PAD_SEW_SFT                              28
#define I2SIN_PAD_SEW_MASK                             0x1
#define I2SIN_PAD_SEW_MASK_SFT                         (0x1 << 28)
#define I2S_WOOPBACK_SFT                               20
#define I2S_WOOPBACK_MASK                              0x1
#define I2S_WOOPBACK_MASK_SFT                          (0x1 << 20)
#define I2S_ONOFF_NOT_WESET_CK_ENABWE_SFT              17
#define I2S_ONOFF_NOT_WESET_CK_ENABWE_MASK             0x1
#define I2S_ONOFF_NOT_WESET_CK_ENABWE_MASK_SFT         (0x1 << 17)
#define I2S1_HD_EN_SFT                                 12
#define I2S1_HD_EN_MASK                                0x1
#define I2S1_HD_EN_MASK_SFT                            (0x1 << 12)
#define I2S_OUT_MODE_SFT                               8
#define I2S_OUT_MODE_MASK                              0xf
#define I2S_OUT_MODE_MASK_SFT                          (0xf << 8)
#define INV_PAD_CTWW_SFT                               7
#define INV_PAD_CTWW_MASK                              0x1
#define INV_PAD_CTWW_MASK_SFT                          (0x1 << 7)
#define I2S_BYPSWC_SFT                                 6
#define I2S_BYPSWC_MASK                                0x1
#define I2S_BYPSWC_MASK_SFT                            (0x1 << 6)
#define INV_WWCK_SFT                                   5
#define INV_WWCK_MASK                                  0x1
#define INV_WWCK_MASK_SFT                              (0x1 << 5)
#define I2S_FMT_SFT                                    3
#define I2S_FMT_MASK                                   0x1
#define I2S_FMT_MASK_SFT                               (0x1 << 3)
#define I2S_SWC_SFT                                    2
#define I2S_SWC_MASK                                   0x1
#define I2S_SWC_MASK_SFT                               (0x1 << 2)
#define I2S_WWEN_SFT                                   1
#define I2S_WWEN_MASK                                  0x1
#define I2S_WWEN_MASK_SFT                              (0x1 << 1)
#define I2S_EN_SFT                                     0
#define I2S_EN_MASK                                    0x1
#define I2S_EN_MASK_SFT                                (0x1 << 0)

/* AFE_I2S_CON1 */
#define I2S2_WW_SWAP_SFT                               31
#define I2S2_WW_SWAP_MASK                              0x1
#define I2S2_WW_SWAP_MASK_SFT                          (0x1 << 31)
#define I2S2_SEW_O19_O20_SFT                           18
#define I2S2_SEW_O19_O20_MASK                          0x1
#define I2S2_SEW_O19_O20_MASK_SFT                      (0x1 << 18)
#define I2S_ONOFF_NOT_WESET_CK_ENABWE_SFT              17
#define I2S_ONOFF_NOT_WESET_CK_ENABWE_MASK             0x1
#define I2S_ONOFF_NOT_WESET_CK_ENABWE_MASK_SFT         (0x1 << 17)
#define I2S2_SEW_O03_O04_SFT                           16
#define I2S2_SEW_O03_O04_MASK                          0x1
#define I2S2_SEW_O03_O04_MASK_SFT                      (0x1 << 16)
#define I2S2_32BIT_EN_SFT                              13
#define I2S2_32BIT_EN_MASK                             0x1
#define I2S2_32BIT_EN_MASK_SFT                         (0x1 << 13)
#define I2S2_HD_EN_SFT                                 12
#define I2S2_HD_EN_MASK                                0x1
#define I2S2_HD_EN_MASK_SFT                            (0x1 << 12)
#define I2S2_OUT_MODE_SFT                              8
#define I2S2_OUT_MODE_MASK                             0xf
#define I2S2_OUT_MODE_MASK_SFT                         (0xf << 8)
#define INV_WWCK_SFT                                   5
#define INV_WWCK_MASK                                  0x1
#define INV_WWCK_MASK_SFT                              (0x1 << 5)
#define I2S2_FMT_SFT                                   3
#define I2S2_FMT_MASK                                  0x1
#define I2S2_FMT_MASK_SFT                              (0x1 << 3)
#define I2S2_WWEN_SFT                                  1
#define I2S2_WWEN_MASK                                 0x1
#define I2S2_WWEN_MASK_SFT                             (0x1 << 1)
#define I2S2_EN_SFT                                    0
#define I2S2_EN_MASK                                   0x1
#define I2S2_EN_MASK_SFT                               (0x1 << 0)

/* AFE_I2S_CON2 */
#define I2S3_WW_SWAP_SFT                               31
#define I2S3_WW_SWAP_MASK                              0x1
#define I2S3_WW_SWAP_MASK_SFT                          (0x1 << 31)
#define I2S3_UPDATE_WOWD_SFT                           24
#define I2S3_UPDATE_WOWD_MASK                          0x1f
#define I2S3_UPDATE_WOWD_MASK_SFT                      (0x1f << 24)
#define I2S3_BCK_INV_SFT                               23
#define I2S3_BCK_INV_MASK                              0x1
#define I2S3_BCK_INV_MASK_SFT                          (0x1 << 23)
#define I2S3_FPGA_BIT_TEST_SFT                         22
#define I2S3_FPGA_BIT_TEST_MASK                        0x1
#define I2S3_FPGA_BIT_TEST_MASK_SFT                    (0x1 << 22)
#define I2S3_FPGA_BIT_SFT                              21
#define I2S3_FPGA_BIT_MASK                             0x1
#define I2S3_FPGA_BIT_MASK_SFT                         (0x1 << 21)
#define I2S3_WOOPBACK_SFT                              20
#define I2S3_WOOPBACK_MASK                             0x1
#define I2S3_WOOPBACK_MASK_SFT                         (0x1 << 20)
#define I2S_ONOFF_NOT_WESET_CK_ENABWE_SFT              17
#define I2S_ONOFF_NOT_WESET_CK_ENABWE_MASK             0x1
#define I2S_ONOFF_NOT_WESET_CK_ENABWE_MASK_SFT         (0x1 << 17)
#define I2S3_HD_EN_SFT                                 12
#define I2S3_HD_EN_MASK                                0x1
#define I2S3_HD_EN_MASK_SFT                            (0x1 << 12)
#define I2S3_OUT_MODE_SFT                              8
#define I2S3_OUT_MODE_MASK                             0xf
#define I2S3_OUT_MODE_MASK_SFT                         (0xf << 8)
#define I2S3_FMT_SFT                                   3
#define I2S3_FMT_MASK                                  0x1
#define I2S3_FMT_MASK_SFT                              (0x1 << 3)
#define I2S3_WWEN_SFT                                  1
#define I2S3_WWEN_MASK                                 0x1
#define I2S3_WWEN_MASK_SFT                             (0x1 << 1)
#define I2S3_EN_SFT                                    0
#define I2S3_EN_MASK                                   0x1
#define I2S3_EN_MASK_SFT                               (0x1 << 0)

/* AFE_I2S_CON3 */
#define I2S4_WW_SWAP_SFT                               31
#define I2S4_WW_SWAP_MASK                              0x1
#define I2S4_WW_SWAP_MASK_SFT                          (0x1 << 31)
#define I2S_ONOFF_NOT_WESET_CK_ENABWE_SFT              17
#define I2S_ONOFF_NOT_WESET_CK_ENABWE_MASK             0x1
#define I2S_ONOFF_NOT_WESET_CK_ENABWE_MASK_SFT         (0x1 << 17)
#define I2S4_32BIT_EN_SFT                              13
#define I2S4_32BIT_EN_MASK                             0x1
#define I2S4_32BIT_EN_MASK_SFT                         (0x1 << 13)
#define I2S4_HD_EN_SFT                                 12
#define I2S4_HD_EN_MASK                                0x1
#define I2S4_HD_EN_MASK_SFT                            (0x1 << 12)
#define I2S4_OUT_MODE_SFT                              8
#define I2S4_OUT_MODE_MASK                             0xf
#define I2S4_OUT_MODE_MASK_SFT                         (0xf << 8)
#define INV_WWCK_SFT                                   5
#define INV_WWCK_MASK                                  0x1
#define INV_WWCK_MASK_SFT                              (0x1 << 5)
#define I2S4_FMT_SFT                                   3
#define I2S4_FMT_MASK                                  0x1
#define I2S4_FMT_MASK_SFT                              (0x1 << 3)
#define I2S4_WWEN_SFT                                  1
#define I2S4_WWEN_MASK                                 0x1
#define I2S4_WWEN_MASK_SFT                             (0x1 << 1)
#define I2S4_EN_SFT                                    0
#define I2S4_EN_MASK                                   0x1
#define I2S4_EN_MASK_SFT                               (0x1 << 0)

/* AFE_I2S_CON4 */
#define I2S5_WW_SWAP_SFT                               31
#define I2S5_WW_SWAP_MASK                              0x1
#define I2S5_WW_SWAP_MASK_SFT                          (0x1 << 31)
#define I2S_WOOPBACK_SFT                               20
#define I2S_WOOPBACK_MASK                              0x1
#define I2S_WOOPBACK_MASK_SFT                          (0x1 << 20)
#define I2S_ONOFF_NOT_WESET_CK_ENABWE_SFT              17
#define I2S_ONOFF_NOT_WESET_CK_ENABWE_MASK             0x1
#define I2S_ONOFF_NOT_WESET_CK_ENABWE_MASK_SFT         (0x1 << 17)
#define I2S5_32BIT_EN_SFT                              13
#define I2S5_32BIT_EN_MASK                             0x1
#define I2S5_32BIT_EN_MASK_SFT                         (0x1 << 13)
#define I2S5_HD_EN_SFT                                 12
#define I2S5_HD_EN_MASK                                0x1
#define I2S5_HD_EN_MASK_SFT                            (0x1 << 12)
#define I2S5_OUT_MODE_SFT                              8
#define I2S5_OUT_MODE_MASK                             0xf
#define I2S5_OUT_MODE_MASK_SFT                         (0xf << 8)
#define INV_WWCK_SFT                                   5
#define INV_WWCK_MASK                                  0x1
#define INV_WWCK_MASK_SFT                              (0x1 << 5)
#define I2S5_FMT_SFT                                   3
#define I2S5_FMT_MASK                                  0x1
#define I2S5_FMT_MASK_SFT                              (0x1 << 3)
#define I2S5_WWEN_SFT                                  1
#define I2S5_WWEN_MASK                                 0x1
#define I2S5_WWEN_MASK_SFT                             (0x1 << 1)
#define I2S5_EN_SFT                                    0
#define I2S5_EN_MASK                                   0x1
#define I2S5_EN_MASK_SFT                               (0x1 << 0)

/* AFE_CONNSYS_I2S_CON */
#define BCK_NEG_EG_WATCH_SFT                           30
#define BCK_NEG_EG_WATCH_MASK                          0x1
#define BCK_NEG_EG_WATCH_MASK_SFT                      (0x1 << 30)
#define BCK_INV_SFT                                    29
#define BCK_INV_MASK                                   0x1
#define BCK_INV_MASK_SFT                               (0x1 << 29)
#define I2SIN_PAD_SEW_SFT                              28
#define I2SIN_PAD_SEW_MASK                             0x1
#define I2SIN_PAD_SEW_MASK_SFT                         (0x1 << 28)
#define I2S_WOOPBACK_SFT                               20
#define I2S_WOOPBACK_MASK                              0x1
#define I2S_WOOPBACK_MASK_SFT                          (0x1 << 20)
#define I2S_ONOFF_NOT_WESET_CK_ENABWE_SFT              17
#define I2S_ONOFF_NOT_WESET_CK_ENABWE_MASK             0x1
#define I2S_ONOFF_NOT_WESET_CK_ENABWE_MASK_SFT         (0x1 << 17)
#define I2S_MODE_SFT                                   8
#define I2S_MODE_MASK                                  0xf
#define I2S_MODE_MASK_SFT                              (0xf << 8)
#define INV_PAD_CTWW_SFT                               7
#define INV_PAD_CTWW_MASK                              0x1
#define INV_PAD_CTWW_MASK_SFT                          (0x1 << 7)
#define I2S_BYPSWC_SFT                                 6
#define I2S_BYPSWC_MASK                                0x1
#define I2S_BYPSWC_MASK_SFT                            (0x1 << 6)
#define INV_WWCK_SFT                                   5
#define INV_WWCK_MASK                                  0x1
#define INV_WWCK_MASK_SFT                              (0x1 << 5)
#define I2S_FMT_SFT                                    3
#define I2S_FMT_MASK                                   0x1
#define I2S_FMT_MASK_SFT                               (0x1 << 3)
#define I2S_SWC_SFT                                    2
#define I2S_SWC_MASK                                   0x1
#define I2S_SWC_MASK_SFT                               (0x1 << 2)
#define I2S_WWEN_SFT                                   1
#define I2S_WWEN_MASK                                  0x1
#define I2S_WWEN_MASK_SFT                              (0x1 << 1)
#define I2S_EN_SFT                                     0
#define I2S_EN_MASK                                    0x1
#define I2S_EN_MASK_SFT                                (0x1 << 0)

/* AFE_I2S_CON6 */
#define BCK_NEG_EG_WATCH_SFT                           30
#define BCK_NEG_EG_WATCH_MASK                          0x1
#define BCK_NEG_EG_WATCH_MASK_SFT                      (0x1 << 30)
#define BCK_INV_SFT                                    29
#define BCK_INV_MASK                                   0x1
#define BCK_INV_MASK_SFT                               (0x1 << 29)
#define I2S6_WOOPBACK_SFT                              20
#define I2S6_WOOPBACK_MASK                             0x1
#define I2S6_WOOPBACK_MASK_SFT                         (0x1 << 20)
#define I2S6_ONOFF_NOT_WESET_CK_ENABWE_SFT             17
#define I2S6_ONOFF_NOT_WESET_CK_ENABWE_MASK            0x1
#define I2S6_ONOFF_NOT_WESET_CK_ENABWE_MASK_SFT        (0x1 << 17)
#define I2S6_HD_EN_SFT                                 12
#define I2S6_HD_EN_MASK                                0x1
#define I2S6_HD_EN_MASK_SFT                            (0x1 << 12)
#define I2S6_OUT_MODE_SFT                              8
#define I2S6_OUT_MODE_MASK                             0xf
#define I2S6_OUT_MODE_MASK_SFT                         (0xf << 8)
#define I2S6_BYPSWC_SFT                                6
#define I2S6_BYPSWC_MASK                               0x1
#define I2S6_BYPSWC_MASK_SFT                           (0x1 << 6)
#define INV_WWCK_SFT                                   5
#define INV_WWCK_MASK                                  0x1
#define INV_WWCK_MASK_SFT                              (0x1 << 5)
#define I2S6_FMT_SFT                                   3
#define I2S6_FMT_MASK                                  0x1
#define I2S6_FMT_MASK_SFT                              (0x1 << 3)
#define I2S6_SWC_SFT                                   2
#define I2S6_SWC_MASK                                  0x1
#define I2S6_SWC_MASK_SFT                              (0x1 << 2)
#define I2S6_WWEN_SFT                                  1
#define I2S6_WWEN_MASK                                 0x1
#define I2S6_WWEN_MASK_SFT                             (0x1 << 1)
#define I2S6_EN_SFT                                    0
#define I2S6_EN_MASK                                   0x1
#define I2S6_EN_MASK_SFT                               (0x1 << 0)

/* AFE_I2S_CON7 */
#define I2S7_WW_SWAP_SFT                               31
#define I2S7_WW_SWAP_MASK                              0x1
#define I2S7_WW_SWAP_MASK_SFT                          (0x1 << 31)
#define I2S_ONOFF_NOT_WESET_CK_ENABWE_SFT              17
#define I2S_ONOFF_NOT_WESET_CK_ENABWE_MASK             0x1
#define I2S_ONOFF_NOT_WESET_CK_ENABWE_MASK_SFT         (0x1 << 17)
#define I2S7_32BIT_EN_SFT                              13
#define I2S7_32BIT_EN_MASK                             0x1
#define I2S7_32BIT_EN_MASK_SFT                         (0x1 << 13)
#define I2S7_HD_EN_SFT                                 12
#define I2S7_HD_EN_MASK                                0x1
#define I2S7_HD_EN_MASK_SFT                            (0x1 << 12)
#define I2S7_OUT_MODE_SFT                              8
#define I2S7_OUT_MODE_MASK                             0xf
#define I2S7_OUT_MODE_MASK_SFT                         (0xf << 8)
#define INV_WWCK_SFT                                   5
#define INV_WWCK_MASK                                  0x1
#define INV_WWCK_MASK_SFT                              (0x1 << 5)
#define I2S7_FMT_SFT                                   3
#define I2S7_FMT_MASK                                  0x1
#define I2S7_FMT_MASK_SFT                              (0x1 << 3)
#define I2S7_WWEN_SFT                                  1
#define I2S7_WWEN_MASK                                 0x1
#define I2S7_WWEN_MASK_SFT                             (0x1 << 1)
#define I2S7_EN_SFT                                    0
#define I2S7_EN_MASK                                   0x1
#define I2S7_EN_MASK_SFT                               (0x1 << 0)

/* AFE_I2S_CON8 */
#define BCK_NEG_EG_WATCH_SFT                           30
#define BCK_NEG_EG_WATCH_MASK                          0x1
#define BCK_NEG_EG_WATCH_MASK_SFT                      (0x1 << 30)
#define BCK_INV_SFT                                    29
#define BCK_INV_MASK                                   0x1
#define BCK_INV_MASK_SFT                               (0x1 << 29)
#define I2S8_WOOPBACK_SFT                              20
#define I2S8_WOOPBACK_MASK                             0x1
#define I2S8_WOOPBACK_MASK_SFT                         (0x1 << 20)
#define I2S8_ONOFF_NOT_WESET_CK_ENABWE_SFT             17
#define I2S8_ONOFF_NOT_WESET_CK_ENABWE_MASK            0x1
#define I2S8_ONOFF_NOT_WESET_CK_ENABWE_MASK_SFT        (0x1 << 17)
#define I2S8_HD_EN_SFT                                 12
#define I2S8_HD_EN_MASK                                0x1
#define I2S8_HD_EN_MASK_SFT                            (0x1 << 12)
#define I2S8_OUT_MODE_SFT                              8
#define I2S8_OUT_MODE_MASK                             0xf
#define I2S8_OUT_MODE_MASK_SFT                         (0xf << 8)
#define I2S8_BYPSWC_SFT                                6
#define I2S8_BYPSWC_MASK                               0x1
#define I2S8_BYPSWC_MASK_SFT                           (0x1 << 6)
#define INV_WWCK_SFT                                   5
#define INV_WWCK_MASK                                  0x1
#define INV_WWCK_MASK_SFT                              (0x1 << 5)
#define I2S8_FMT_SFT                                   3
#define I2S8_FMT_MASK                                  0x1
#define I2S8_FMT_MASK_SFT                              (0x1 << 3)
#define I2S8_SWC_SFT                                   2
#define I2S8_SWC_MASK                                  0x1
#define I2S8_SWC_MASK_SFT                              (0x1 << 2)
#define I2S8_WWEN_SFT                                  1
#define I2S8_WWEN_MASK                                 0x1
#define I2S8_WWEN_MASK_SFT                             (0x1 << 1)
#define I2S8_EN_SFT                                    0
#define I2S8_EN_MASK                                   0x1
#define I2S8_EN_MASK_SFT                               (0x1 << 0)

/* AFE_I2S_CON9 */
#define I2S9_WW_SWAP_SFT                               31
#define I2S9_WW_SWAP_MASK                              0x1
#define I2S9_WW_SWAP_MASK_SFT                          (0x1 << 31)
#define I2S_ONOFF_NOT_WESET_CK_ENABWE_SFT              17
#define I2S_ONOFF_NOT_WESET_CK_ENABWE_MASK             0x1
#define I2S_ONOFF_NOT_WESET_CK_ENABWE_MASK_SFT         (0x1 << 17)
#define I2S9_32BIT_EN_SFT                              13
#define I2S9_32BIT_EN_MASK                             0x1
#define I2S9_32BIT_EN_MASK_SFT                         (0x1 << 13)
#define I2S9_HD_EN_SFT                                 12
#define I2S9_HD_EN_MASK                                0x1
#define I2S9_HD_EN_MASK_SFT                            (0x1 << 12)
#define I2S9_OUT_MODE_SFT                              8
#define I2S9_OUT_MODE_MASK                             0xf
#define I2S9_OUT_MODE_MASK_SFT                         (0xf << 8)
#define INV_WWCK_SFT                                   5
#define INV_WWCK_MASK                                  0x1
#define INV_WWCK_MASK_SFT                              (0x1 << 5)
#define I2S9_FMT_SFT                                   3
#define I2S9_FMT_MASK                                  0x1
#define I2S9_FMT_MASK_SFT                              (0x1 << 3)
#define I2S9_WWEN_SFT                                  1
#define I2S9_WWEN_MASK                                 0x1
#define I2S9_WWEN_MASK_SFT                             (0x1 << 1)
#define I2S9_EN_SFT                                    0
#define I2S9_EN_MASK                                   0x1
#define I2S9_EN_MASK_SFT                               (0x1 << 0)

/* AFE_ASWC_2CH_CON2 */
#define CHSET_O16BIT_SFT                               19
#define CHSET_O16BIT_MASK                              0x1
#define CHSET_O16BIT_MASK_SFT                          (0x1 << 19)
#define CHSET_CWW_IIW_HISTOWY_SFT                      17
#define CHSET_CWW_IIW_HISTOWY_MASK                     0x1
#define CHSET_CWW_IIW_HISTOWY_MASK_SFT                 (0x1 << 17)
#define CHSET_IS_MONO_SFT                              16
#define CHSET_IS_MONO_MASK                             0x1
#define CHSET_IS_MONO_MASK_SFT                         (0x1 << 16)
#define CHSET_IIW_EN_SFT                               11
#define CHSET_IIW_EN_MASK                              0x1
#define CHSET_IIW_EN_MASK_SFT                          (0x1 << 11)
#define CHSET_IIW_STAGE_SFT                            8
#define CHSET_IIW_STAGE_MASK                           0x7
#define CHSET_IIW_STAGE_MASK_SFT                       (0x7 << 8)
#define CHSET_STW_CWW_SFT                              5
#define CHSET_STW_CWW_MASK                             0x1
#define CHSET_STW_CWW_MASK_SFT                         (0x1 << 5)
#define CHSET_ON_SFT                                   2
#define CHSET_ON_MASK                                  0x1
#define CHSET_ON_MASK_SFT                              (0x1 << 2)
#define COEFF_SWAM_CTWW_SFT                            1
#define COEFF_SWAM_CTWW_MASK                           0x1
#define COEFF_SWAM_CTWW_MASK_SFT                       (0x1 << 1)
#define ASM_ON_SFT                                     0
#define ASM_ON_MASK                                    0x1
#define ASM_ON_MASK_SFT                                (0x1 << 0)

/* AFE_GAIN1_CON0 */
#define GAIN1_SAMPWE_PEW_STEP_SFT                      8
#define GAIN1_SAMPWE_PEW_STEP_MASK                     0xff
#define GAIN1_SAMPWE_PEW_STEP_MASK_SFT                 (0xff << 8)
#define GAIN1_MODE_SFT                                 4
#define GAIN1_MODE_MASK                                0xf
#define GAIN1_MODE_MASK_SFT                            (0xf << 4)
#define GAIN1_ON_SFT                                   0
#define GAIN1_ON_MASK                                  0x1
#define GAIN1_ON_MASK_SFT                              (0x1 << 0)

/* AFE_GAIN1_CON1 */
#define GAIN1_TAWGET_SFT                               0
#define GAIN1_TAWGET_MASK                              0xfffffff
#define GAIN1_TAWGET_MASK_SFT                          (0xfffffff << 0)

/* AFE_GAIN2_CON0 */
#define GAIN2_SAMPWE_PEW_STEP_SFT                      8
#define GAIN2_SAMPWE_PEW_STEP_MASK                     0xff
#define GAIN2_SAMPWE_PEW_STEP_MASK_SFT                 (0xff << 8)
#define GAIN2_MODE_SFT                                 4
#define GAIN2_MODE_MASK                                0xf
#define GAIN2_MODE_MASK_SFT                            (0xf << 4)
#define GAIN2_ON_SFT                                   0
#define GAIN2_ON_MASK                                  0x1
#define GAIN2_ON_MASK_SFT                              (0x1 << 0)

/* AFE_GAIN2_CON1 */
#define GAIN2_TAWGET_SFT                               0
#define GAIN2_TAWGET_MASK                              0xfffffff
#define GAIN2_TAWGET_MASK_SFT                          (0xfffffff << 0)

/* AFE_GAIN1_CUW */
#define AFE_GAIN1_CUW_SFT                              0
#define AFE_GAIN1_CUW_MASK                             0xfffffff
#define AFE_GAIN1_CUW_MASK_SFT                         (0xfffffff << 0)

/* AFE_GAIN2_CUW */
#define AFE_GAIN2_CUW_SFT                              0
#define AFE_GAIN2_CUW_MASK                             0xfffffff
#define AFE_GAIN2_CUW_MASK_SFT                         (0xfffffff << 0)

/* PCM_INTF_CON1 */
#define PCM_FIX_VAWUE_SEW_SFT                          31
#define PCM_FIX_VAWUE_SEW_MASK                         0x1
#define PCM_FIX_VAWUE_SEW_MASK_SFT                     (0x1 << 31)
#define PCM_BUFFEW_WOOPBACK_SFT                        30
#define PCM_BUFFEW_WOOPBACK_MASK                       0x1
#define PCM_BUFFEW_WOOPBACK_MASK_SFT                   (0x1 << 30)
#define PCM_PAWAWWEW_WOOPBACK_SFT                      29
#define PCM_PAWAWWEW_WOOPBACK_MASK                     0x1
#define PCM_PAWAWWEW_WOOPBACK_MASK_SFT                 (0x1 << 29)
#define PCM_SEWIAW_WOOPBACK_SFT                        28
#define PCM_SEWIAW_WOOPBACK_MASK                       0x1
#define PCM_SEWIAW_WOOPBACK_MASK_SFT                   (0x1 << 28)
#define PCM_DAI_PCM_WOOPBACK_SFT                       27
#define PCM_DAI_PCM_WOOPBACK_MASK                      0x1
#define PCM_DAI_PCM_WOOPBACK_MASK_SFT                  (0x1 << 27)
#define PCM_I2S_PCM_WOOPBACK_SFT                       26
#define PCM_I2S_PCM_WOOPBACK_MASK                      0x1
#define PCM_I2S_PCM_WOOPBACK_MASK_SFT                  (0x1 << 26)
#define PCM_SYNC_DEWSEW_SFT                            25
#define PCM_SYNC_DEWSEW_MASK                           0x1
#define PCM_SYNC_DEWSEW_MASK_SFT                       (0x1 << 25)
#define PCM_TX_WW_SWAP_SFT                             24
#define PCM_TX_WW_SWAP_MASK                            0x1
#define PCM_TX_WW_SWAP_MASK_SFT                        (0x1 << 24)
#define PCM_SYNC_OUT_INV_SFT                           23
#define PCM_SYNC_OUT_INV_MASK                          0x1
#define PCM_SYNC_OUT_INV_MASK_SFT                      (0x1 << 23)
#define PCM_BCWK_OUT_INV_SFT                           22
#define PCM_BCWK_OUT_INV_MASK                          0x1
#define PCM_BCWK_OUT_INV_MASK_SFT                      (0x1 << 22)
#define PCM_SYNC_IN_INV_SFT                            21
#define PCM_SYNC_IN_INV_MASK                           0x1
#define PCM_SYNC_IN_INV_MASK_SFT                       (0x1 << 21)
#define PCM_BCWK_IN_INV_SFT                            20
#define PCM_BCWK_IN_INV_MASK                           0x1
#define PCM_BCWK_IN_INV_MASK_SFT                       (0x1 << 20)
#define PCM_TX_WCH_WPT_SFT                             19
#define PCM_TX_WCH_WPT_MASK                            0x1
#define PCM_TX_WCH_WPT_MASK_SFT                        (0x1 << 19)
#define PCM_VBT_16K_MODE_SFT                           18
#define PCM_VBT_16K_MODE_MASK                          0x1
#define PCM_VBT_16K_MODE_MASK_SFT                      (0x1 << 18)
#define PCM_EXT_MODEM_SFT                              17
#define PCM_EXT_MODEM_MASK                             0x1
#define PCM_EXT_MODEM_MASK_SFT                         (0x1 << 17)
#define PCM_24BIT_SFT                                  16
#define PCM_24BIT_MASK                                 0x1
#define PCM_24BIT_MASK_SFT                             (0x1 << 16)
#define PCM_WWEN_SFT                                   14
#define PCM_WWEN_MASK                                  0x3
#define PCM_WWEN_MASK_SFT                              (0x3 << 14)
#define PCM_SYNC_WENGTH_SFT                            9
#define PCM_SYNC_WENGTH_MASK                           0x1f
#define PCM_SYNC_WENGTH_MASK_SFT                       (0x1f << 9)
#define PCM_SYNC_TYPE_SFT                              8
#define PCM_SYNC_TYPE_MASK                             0x1
#define PCM_SYNC_TYPE_MASK_SFT                         (0x1 << 8)
#define PCM_BT_MODE_SFT                                7
#define PCM_BT_MODE_MASK                               0x1
#define PCM_BT_MODE_MASK_SFT                           (0x1 << 7)
#define PCM_BYP_ASWC_SFT                               6
#define PCM_BYP_ASWC_MASK                              0x1
#define PCM_BYP_ASWC_MASK_SFT                          (0x1 << 6)
#define PCM_SWAVE_SFT                                  5
#define PCM_SWAVE_MASK                                 0x1
#define PCM_SWAVE_MASK_SFT                             (0x1 << 5)
#define PCM_MODE_SFT                                   3
#define PCM_MODE_MASK                                  0x3
#define PCM_MODE_MASK_SFT                              (0x3 << 3)
#define PCM_FMT_SFT                                    1
#define PCM_FMT_MASK                                   0x3
#define PCM_FMT_MASK_SFT                               (0x3 << 1)
#define PCM_EN_SFT                                     0
#define PCM_EN_MASK                                    0x1
#define PCM_EN_MASK_SFT                                (0x1 << 0)

/* PCM_INTF_CON2 */
#define PCM1_TX_FIFO_OV_SFT                            31
#define PCM1_TX_FIFO_OV_MASK                           0x1
#define PCM1_TX_FIFO_OV_MASK_SFT                       (0x1 << 31)
#define PCM1_WX_FIFO_OV_SFT                            30
#define PCM1_WX_FIFO_OV_MASK                           0x1
#define PCM1_WX_FIFO_OV_MASK_SFT                       (0x1 << 30)
#define PCM2_TX_FIFO_OV_SFT                            29
#define PCM2_TX_FIFO_OV_MASK                           0x1
#define PCM2_TX_FIFO_OV_MASK_SFT                       (0x1 << 29)
#define PCM2_WX_FIFO_OV_SFT                            28
#define PCM2_WX_FIFO_OV_MASK                           0x1
#define PCM2_WX_FIFO_OV_MASK_SFT                       (0x1 << 28)
#define PCM1_SYNC_GWITCH_SFT                           27
#define PCM1_SYNC_GWITCH_MASK                          0x1
#define PCM1_SYNC_GWITCH_MASK_SFT                      (0x1 << 27)
#define PCM2_SYNC_GWITCH_SFT                           26
#define PCM2_SYNC_GWITCH_MASK                          0x1
#define PCM2_SYNC_GWITCH_MASK_SFT                      (0x1 << 26)
#define TX3_WCH_DBG_MODE_SFT                           17
#define TX3_WCH_DBG_MODE_MASK                          0x1
#define TX3_WCH_DBG_MODE_MASK_SFT                      (0x1 << 17)
#define PCM1_PCM2_WOOPBACK_SFT                         16
#define PCM1_PCM2_WOOPBACK_MASK                        0x1
#define PCM1_PCM2_WOOPBACK_MASK_SFT                    (0x1 << 16)
#define DAI_PCM_WOOPBACK_CH_SFT                        14
#define DAI_PCM_WOOPBACK_CH_MASK                       0x3
#define DAI_PCM_WOOPBACK_CH_MASK_SFT                   (0x3 << 14)
#define I2S_PCM_WOOPBACK_CH_SFT                        12
#define I2S_PCM_WOOPBACK_CH_MASK                       0x3
#define I2S_PCM_WOOPBACK_CH_MASK_SFT                   (0x3 << 12)
#define TX_FIX_VAWUE_SFT                               0
#define TX_FIX_VAWUE_MASK                              0xff
#define TX_FIX_VAWUE_MASK_SFT                          (0xff << 0)

/* PCM2_INTF_CON */
#define PCM2_TX_FIX_VAWUE_SFT                          24
#define PCM2_TX_FIX_VAWUE_MASK                         0xff
#define PCM2_TX_FIX_VAWUE_MASK_SFT                     (0xff << 24)
#define PCM2_FIX_VAWUE_SEW_SFT                         23
#define PCM2_FIX_VAWUE_SEW_MASK                        0x1
#define PCM2_FIX_VAWUE_SEW_MASK_SFT                    (0x1 << 23)
#define PCM2_BUFFEW_WOOPBACK_SFT                       22
#define PCM2_BUFFEW_WOOPBACK_MASK                      0x1
#define PCM2_BUFFEW_WOOPBACK_MASK_SFT                  (0x1 << 22)
#define PCM2_PAWAWWEW_WOOPBACK_SFT                     21
#define PCM2_PAWAWWEW_WOOPBACK_MASK                    0x1
#define PCM2_PAWAWWEW_WOOPBACK_MASK_SFT                (0x1 << 21)
#define PCM2_SEWIAW_WOOPBACK_SFT                       20
#define PCM2_SEWIAW_WOOPBACK_MASK                      0x1
#define PCM2_SEWIAW_WOOPBACK_MASK_SFT                  (0x1 << 20)
#define PCM2_DAI_PCM_WOOPBACK_SFT                      19
#define PCM2_DAI_PCM_WOOPBACK_MASK                     0x1
#define PCM2_DAI_PCM_WOOPBACK_MASK_SFT                 (0x1 << 19)
#define PCM2_I2S_PCM_WOOPBACK_SFT                      18
#define PCM2_I2S_PCM_WOOPBACK_MASK                     0x1
#define PCM2_I2S_PCM_WOOPBACK_MASK_SFT                 (0x1 << 18)
#define PCM2_SYNC_DEWSEW_SFT                           17
#define PCM2_SYNC_DEWSEW_MASK                          0x1
#define PCM2_SYNC_DEWSEW_MASK_SFT                      (0x1 << 17)
#define PCM2_TX_WW_SWAP_SFT                            16
#define PCM2_TX_WW_SWAP_MASK                           0x1
#define PCM2_TX_WW_SWAP_MASK_SFT                       (0x1 << 16)
#define PCM2_SYNC_IN_INV_SFT                           15
#define PCM2_SYNC_IN_INV_MASK                          0x1
#define PCM2_SYNC_IN_INV_MASK_SFT                      (0x1 << 15)
#define PCM2_BCWK_IN_INV_SFT                           14
#define PCM2_BCWK_IN_INV_MASK                          0x1
#define PCM2_BCWK_IN_INV_MASK_SFT                      (0x1 << 14)
#define PCM2_TX_WCH_WPT_SFT                            13
#define PCM2_TX_WCH_WPT_MASK                           0x1
#define PCM2_TX_WCH_WPT_MASK_SFT                       (0x1 << 13)
#define PCM2_VBT_16K_MODE_SFT                          12
#define PCM2_VBT_16K_MODE_MASK                         0x1
#define PCM2_VBT_16K_MODE_MASK_SFT                     (0x1 << 12)
#define PCM2_WOOPBACK_CH_SEW_SFT                       10
#define PCM2_WOOPBACK_CH_SEW_MASK                      0x3
#define PCM2_WOOPBACK_CH_SEW_MASK_SFT                  (0x3 << 10)
#define PCM2_TX2_BT_MODE_SFT                           8
#define PCM2_TX2_BT_MODE_MASK                          0x1
#define PCM2_TX2_BT_MODE_MASK_SFT                      (0x1 << 8)
#define PCM2_BT_MODE_SFT                               7
#define PCM2_BT_MODE_MASK                              0x1
#define PCM2_BT_MODE_MASK_SFT                          (0x1 << 7)
#define PCM2_AFIFO_SFT                                 6
#define PCM2_AFIFO_MASK                                0x1
#define PCM2_AFIFO_MASK_SFT                            (0x1 << 6)
#define PCM2_WWEN_SFT                                  5
#define PCM2_WWEN_MASK                                 0x1
#define PCM2_WWEN_MASK_SFT                             (0x1 << 5)
#define PCM2_MODE_SFT                                  3
#define PCM2_MODE_MASK                                 0x3
#define PCM2_MODE_MASK_SFT                             (0x3 << 3)
#define PCM2_FMT_SFT                                   1
#define PCM2_FMT_MASK                                  0x3
#define PCM2_FMT_MASK_SFT                              (0x3 << 1)
#define PCM2_EN_SFT                                    0
#define PCM2_EN_MASK                                   0x1
#define PCM2_EN_MASK_SFT                               (0x1 << 0)

/* AFE_ADDA_MTKAIF_CFG0 */
#define MTKAIF_WXIF_CWKINV_ADC_SFT                     31
#define MTKAIF_WXIF_CWKINV_ADC_MASK                    0x1
#define MTKAIF_WXIF_CWKINV_ADC_MASK_SFT                (0x1 << 31)
#define MTKAIF_WXIF_BYPASS_SWC_SFT                     17
#define MTKAIF_WXIF_BYPASS_SWC_MASK                    0x1
#define MTKAIF_WXIF_BYPASS_SWC_MASK_SFT                (0x1 << 17)
#define MTKAIF_WXIF_PWOTOCOW2_SFT                      16
#define MTKAIF_WXIF_PWOTOCOW2_MASK                     0x1
#define MTKAIF_WXIF_PWOTOCOW2_MASK_SFT                 (0x1 << 16)
#define MTKAIF_TXIF_BYPASS_SWC_SFT                     5
#define MTKAIF_TXIF_BYPASS_SWC_MASK                    0x1
#define MTKAIF_TXIF_BYPASS_SWC_MASK_SFT                (0x1 << 5)
#define MTKAIF_TXIF_PWOTOCOW2_SFT                      4
#define MTKAIF_TXIF_PWOTOCOW2_MASK                     0x1
#define MTKAIF_TXIF_PWOTOCOW2_MASK_SFT                 (0x1 << 4)
#define MTKAIF_TXIF_8TO5_SFT                           2
#define MTKAIF_TXIF_8TO5_MASK                          0x1
#define MTKAIF_TXIF_8TO5_MASK_SFT                      (0x1 << 2)
#define MTKAIF_WXIF_8TO5_SFT                           1
#define MTKAIF_WXIF_8TO5_MASK                          0x1
#define MTKAIF_WXIF_8TO5_MASK_SFT                      (0x1 << 1)
#define MTKAIF_IF_WOOPBACK1_SFT                        0
#define MTKAIF_IF_WOOPBACK1_MASK                       0x1
#define MTKAIF_IF_WOOPBACK1_MASK_SFT                   (0x1 << 0)

/* AFE_ADDA_MTKAIF_WX_CFG2 */
#define MTKAIF_WXIF_DETECT_ON_PWOTOCOW2_SFT            16
#define MTKAIF_WXIF_DETECT_ON_PWOTOCOW2_MASK           0x1
#define MTKAIF_WXIF_DETECT_ON_PWOTOCOW2_MASK_SFT       (0x1 << 16)
#define MTKAIF_WXIF_DEWAY_CYCWE_SFT                    12
#define MTKAIF_WXIF_DEWAY_CYCWE_MASK                   0xf
#define MTKAIF_WXIF_DEWAY_CYCWE_MASK_SFT               (0xf << 12)
#define MTKAIF_WXIF_DEWAY_DATA_SFT                     8
#define MTKAIF_WXIF_DEWAY_DATA_MASK                    0x1
#define MTKAIF_WXIF_DEWAY_DATA_MASK_SFT                (0x1 << 8)
#define MTKAIF_WXIF_FIFO_WSP_PWOTOCOW2_SFT             4
#define MTKAIF_WXIF_FIFO_WSP_PWOTOCOW2_MASK            0x7
#define MTKAIF_WXIF_FIFO_WSP_PWOTOCOW2_MASK_SFT        (0x7 << 4)

/* AFE_ADDA_DW_SWC2_CON0 */
#define DW_2_INPUT_MODE_CTW_SFT                        28
#define DW_2_INPUT_MODE_CTW_MASK                       0xf
#define DW_2_INPUT_MODE_CTW_MASK_SFT                   (0xf << 28)
#define DW_2_CH1_SATUWATION_EN_CTW_SFT                 27
#define DW_2_CH1_SATUWATION_EN_CTW_MASK                0x1
#define DW_2_CH1_SATUWATION_EN_CTW_MASK_SFT            (0x1 << 27)
#define DW_2_CH2_SATUWATION_EN_CTW_SFT                 26
#define DW_2_CH2_SATUWATION_EN_CTW_MASK                0x1
#define DW_2_CH2_SATUWATION_EN_CTW_MASK_SFT            (0x1 << 26)
#define DW_2_OUTPUT_SEW_CTW_SFT                        24
#define DW_2_OUTPUT_SEW_CTW_MASK                       0x3
#define DW_2_OUTPUT_SEW_CTW_MASK_SFT                   (0x3 << 24)
#define DW_2_FADEIN_0STAWT_EN_SFT                      16
#define DW_2_FADEIN_0STAWT_EN_MASK                     0x3
#define DW_2_FADEIN_0STAWT_EN_MASK_SFT                 (0x3 << 16)
#define DW_DISABWE_HW_CG_CTW_SFT                       15
#define DW_DISABWE_HW_CG_CTW_MASK                      0x1
#define DW_DISABWE_HW_CG_CTW_MASK_SFT                  (0x1 << 15)
#define C_DATA_EN_SEW_CTW_PWE_SFT                      14
#define C_DATA_EN_SEW_CTW_PWE_MASK                     0x1
#define C_DATA_EN_SEW_CTW_PWE_MASK_SFT                 (0x1 << 14)
#define DW_2_SIDE_TONE_ON_CTW_PWE_SFT                  13
#define DW_2_SIDE_TONE_ON_CTW_PWE_MASK                 0x1
#define DW_2_SIDE_TONE_ON_CTW_PWE_MASK_SFT             (0x1 << 13)
#define DW_2_MUTE_CH1_OFF_CTW_PWE_SFT                  12
#define DW_2_MUTE_CH1_OFF_CTW_PWE_MASK                 0x1
#define DW_2_MUTE_CH1_OFF_CTW_PWE_MASK_SFT             (0x1 << 12)
#define DW_2_MUTE_CH2_OFF_CTW_PWE_SFT                  11
#define DW_2_MUTE_CH2_OFF_CTW_PWE_MASK                 0x1
#define DW_2_MUTE_CH2_OFF_CTW_PWE_MASK_SFT             (0x1 << 11)
#define DW2_AWAMPSP_CTW_PWE_SFT                        9
#define DW2_AWAMPSP_CTW_PWE_MASK                       0x3
#define DW2_AWAMPSP_CTW_PWE_MASK_SFT                   (0x3 << 9)
#define DW_2_IIWMODE_CTW_PWE_SFT                       6
#define DW_2_IIWMODE_CTW_PWE_MASK                      0x7
#define DW_2_IIWMODE_CTW_PWE_MASK_SFT                  (0x7 << 6)
#define DW_2_VOICE_MODE_CTW_PWE_SFT                    5
#define DW_2_VOICE_MODE_CTW_PWE_MASK                   0x1
#define DW_2_VOICE_MODE_CTW_PWE_MASK_SFT               (0x1 << 5)
#define D2_2_MUTE_CH1_ON_CTW_PWE_SFT                   4
#define D2_2_MUTE_CH1_ON_CTW_PWE_MASK                  0x1
#define D2_2_MUTE_CH1_ON_CTW_PWE_MASK_SFT              (0x1 << 4)
#define D2_2_MUTE_CH2_ON_CTW_PWE_SFT                   3
#define D2_2_MUTE_CH2_ON_CTW_PWE_MASK                  0x1
#define D2_2_MUTE_CH2_ON_CTW_PWE_MASK_SFT              (0x1 << 3)
#define DW_2_IIW_ON_CTW_PWE_SFT                        2
#define DW_2_IIW_ON_CTW_PWE_MASK                       0x1
#define DW_2_IIW_ON_CTW_PWE_MASK_SFT                   (0x1 << 2)
#define DW_2_GAIN_ON_CTW_PWE_SFT                       1
#define DW_2_GAIN_ON_CTW_PWE_MASK                      0x1
#define DW_2_GAIN_ON_CTW_PWE_MASK_SFT                  (0x1 << 1)
#define DW_2_SWC_ON_TMP_CTW_PWE_SFT                    0
#define DW_2_SWC_ON_TMP_CTW_PWE_MASK                   0x1
#define DW_2_SWC_ON_TMP_CTW_PWE_MASK_SFT               (0x1 << 0)

/* AFE_ADDA_DW_SWC2_CON1 */
#define DW_2_GAIN_CTW_PWE_SFT                          16
#define DW_2_GAIN_CTW_PWE_MASK                         0xffff
#define DW_2_GAIN_CTW_PWE_MASK_SFT                     (0xffff << 16)
#define DW_2_GAIN_MODE_CTW_SFT                         0
#define DW_2_GAIN_MODE_CTW_MASK                        0x1
#define DW_2_GAIN_MODE_CTW_MASK_SFT                    (0x1 << 0)

/* AFE_ADDA_UW_SWC_CON0 */
#define UWCF_CFG_EN_CTW_SFT                            31
#define UWCF_CFG_EN_CTW_MASK                           0x1
#define UWCF_CFG_EN_CTW_MASK_SFT                       (0x1 << 31)
#define UW_DMIC_PHASE_SEW_CH1_SFT                      27
#define UW_DMIC_PHASE_SEW_CH1_MASK                     0x7
#define UW_DMIC_PHASE_SEW_CH1_MASK_SFT                 (0x7 << 27)
#define UW_DMIC_PHASE_SEW_CH2_SFT                      24
#define UW_DMIC_PHASE_SEW_CH2_MASK                     0x7
#define UW_DMIC_PHASE_SEW_CH2_MASK_SFT                 (0x7 << 24)
#define UW_MODE_3P25M_CH2_CTW_SFT                      22
#define UW_MODE_3P25M_CH2_CTW_MASK                     0x1
#define UW_MODE_3P25M_CH2_CTW_MASK_SFT                 (0x1 << 22)
#define UW_MODE_3P25M_CH1_CTW_SFT                      21
#define UW_MODE_3P25M_CH1_CTW_MASK                     0x1
#define UW_MODE_3P25M_CH1_CTW_MASK_SFT                 (0x1 << 21)
#define UW_VOICE_MODE_CH1_CH2_CTW_SFT                  17
#define UW_VOICE_MODE_CH1_CH2_CTW_MASK                 0x7
#define UW_VOICE_MODE_CH1_CH2_CTW_MASK_SFT             (0x7 << 17)
#define UW_AP_DMIC_ON_SFT                              16
#define UW_AP_DMIC_ON_MASK                             0x1
#define UW_AP_DMIC_ON_MASK_SFT                         (0x1 << 16)
#define DMIC_WOW_POWEW_MODE_CTW_SFT                    14
#define DMIC_WOW_POWEW_MODE_CTW_MASK                   0x3
#define DMIC_WOW_POWEW_MODE_CTW_MASK_SFT               (0x3 << 14)
#define UW_DISABWE_HW_CG_CTW_SFT                       12
#define UW_DISABWE_HW_CG_CTW_MASK                      0x1
#define UW_DISABWE_HW_CG_CTW_MASK_SFT                  (0x1 << 12)
#define UW_IIW_ON_TMP_CTW_SFT                          10
#define UW_IIW_ON_TMP_CTW_MASK                         0x1
#define UW_IIW_ON_TMP_CTW_MASK_SFT                     (0x1 << 10)
#define UW_IIWMODE_CTW_SFT                             7
#define UW_IIWMODE_CTW_MASK                            0x7
#define UW_IIWMODE_CTW_MASK_SFT                        (0x7 << 7)
#define DIGMIC_4P33M_SEW_SFT                           6
#define DIGMIC_4P33M_SEW_MASK                          0x1
#define DIGMIC_4P33M_SEW_MASK_SFT                      (0x1 << 6)
#define DIGMIC_3P25M_1P625M_SEW_CTW_SFT                5
#define DIGMIC_3P25M_1P625M_SEW_CTW_MASK               0x1
#define DIGMIC_3P25M_1P625M_SEW_CTW_MASK_SFT           (0x1 << 5)
#define UW_WOOP_BACK_MODE_CTW_SFT                      2
#define UW_WOOP_BACK_MODE_CTW_MASK                     0x1
#define UW_WOOP_BACK_MODE_CTW_MASK_SFT                 (0x1 << 2)
#define UW_SDM_3_WEVEW_CTW_SFT                         1
#define UW_SDM_3_WEVEW_CTW_MASK                        0x1
#define UW_SDM_3_WEVEW_CTW_MASK_SFT                    (0x1 << 1)
#define UW_SWC_ON_TMP_CTW_SFT                          0
#define UW_SWC_ON_TMP_CTW_MASK                         0x1
#define UW_SWC_ON_TMP_CTW_MASK_SFT                     (0x1 << 0)

/* AFE_ADDA_UW_SWC_CON1 */
#define C_DAC_EN_CTW_SFT                               27
#define C_DAC_EN_CTW_MASK                              0x1
#define C_DAC_EN_CTW_MASK_SFT                          (0x1 << 27)
#define C_MUTE_SW_CTW_SFT                              26
#define C_MUTE_SW_CTW_MASK                             0x1
#define C_MUTE_SW_CTW_MASK_SFT                         (0x1 << 26)
#define ASDM_SWC_SEW_CTW_SFT                           25
#define ASDM_SWC_SEW_CTW_MASK                          0x1
#define ASDM_SWC_SEW_CTW_MASK_SFT                      (0x1 << 25)
#define C_AMP_DIV_CH2_CTW_SFT                          21
#define C_AMP_DIV_CH2_CTW_MASK                         0x7
#define C_AMP_DIV_CH2_CTW_MASK_SFT                     (0x7 << 21)
#define C_FWEQ_DIV_CH2_CTW_SFT                         16
#define C_FWEQ_DIV_CH2_CTW_MASK                        0x1f
#define C_FWEQ_DIV_CH2_CTW_MASK_SFT                    (0x1f << 16)
#define C_SINE_MODE_CH2_CTW_SFT                        12
#define C_SINE_MODE_CH2_CTW_MASK                       0xf
#define C_SINE_MODE_CH2_CTW_MASK_SFT                   (0xf << 12)
#define C_AMP_DIV_CH1_CTW_SFT                          9
#define C_AMP_DIV_CH1_CTW_MASK                         0x7
#define C_AMP_DIV_CH1_CTW_MASK_SFT                     (0x7 << 9)
#define C_FWEQ_DIV_CH1_CTW_SFT                         4
#define C_FWEQ_DIV_CH1_CTW_MASK                        0x1f
#define C_FWEQ_DIV_CH1_CTW_MASK_SFT                    (0x1f << 4)
#define C_SINE_MODE_CH1_CTW_SFT                        0
#define C_SINE_MODE_CH1_CTW_MASK                       0xf
#define C_SINE_MODE_CH1_CTW_MASK_SFT                   (0xf << 0)

/* AFE_ADDA_TOP_CON0 */
#define C_WOOP_BACK_MODE_CTW_SFT                       12
#define C_WOOP_BACK_MODE_CTW_MASK                      0xf
#define C_WOOP_BACK_MODE_CTW_MASK_SFT                  (0xf << 12)
#define ADDA_UW_GAIN_MODE_SFT                          8
#define ADDA_UW_GAIN_MODE_MASK                         0x3
#define ADDA_UW_GAIN_MODE_MASK_SFT                     (0x3 << 8)
#define C_EXT_ADC_CTW_SFT                              0
#define C_EXT_ADC_CTW_MASK                             0x1
#define C_EXT_ADC_CTW_MASK_SFT                         (0x1 << 0)

/* AFE_ADDA_UW_DW_CON0 */
#define AFE_ADDA_UW_WW_SWAP_SFT                        31
#define AFE_ADDA_UW_WW_SWAP_MASK                       0x1
#define AFE_ADDA_UW_WW_SWAP_MASK_SFT                   (0x1 << 31)
#define AFE_ADDA_CKDIV_WST_SFT                         30
#define AFE_ADDA_CKDIV_WST_MASK                        0x1
#define AFE_ADDA_CKDIV_WST_MASK_SFT                    (0x1 << 30)
#define AFE_ADDA_FIFO_AUTO_WST_SFT                     29
#define AFE_ADDA_FIFO_AUTO_WST_MASK                    0x1
#define AFE_ADDA_FIFO_AUTO_WST_MASK_SFT                (0x1 << 29)
#define AFE_ADDA_UW_FIFO_DIGMIC_TESTIN_SFT             21
#define AFE_ADDA_UW_FIFO_DIGMIC_TESTIN_MASK            0x3
#define AFE_ADDA_UW_FIFO_DIGMIC_TESTIN_MASK_SFT        (0x3 << 21)
#define AFE_ADDA_UW_FIFO_DIGMIC_WDATA_TESTEN_SFT       20
#define AFE_ADDA_UW_FIFO_DIGMIC_WDATA_TESTEN_MASK      0x1
#define AFE_ADDA_UW_FIFO_DIGMIC_WDATA_TESTEN_MASK_SFT  (0x1 << 20)
#define AFE_ADDA6_UW_WW_SWAP_SFT                       15
#define AFE_ADDA6_UW_WW_SWAP_MASK                      0x1
#define AFE_ADDA6_UW_WW_SWAP_MASK_SFT                  (0x1 << 15)
#define AFE_ADDA6_CKDIV_WST_SFT                        14
#define AFE_ADDA6_CKDIV_WST_MASK                       0x1
#define AFE_ADDA6_CKDIV_WST_MASK_SFT                   (0x1 << 14)
#define AFE_ADDA6_FIFO_AUTO_WST_SFT                    13
#define AFE_ADDA6_FIFO_AUTO_WST_MASK                   0x1
#define AFE_ADDA6_FIFO_AUTO_WST_MASK_SFT               (0x1 << 13)
#define AFE_ADDA6_UW_FIFO_DIGMIC_TESTIN_SFT            5
#define AFE_ADDA6_UW_FIFO_DIGMIC_TESTIN_MASK           0x3
#define AFE_ADDA6_UW_FIFO_DIGMIC_TESTIN_MASK_SFT       (0x3 << 5)
#define AFE_ADDA6_UW_FIFO_DIGMIC_WDATA_TESTEN_SFT      4
#define AFE_ADDA6_UW_FIFO_DIGMIC_WDATA_TESTEN_MASK     0x1
#define AFE_ADDA6_UW_FIFO_DIGMIC_WDATA_TESTEN_MASK_SFT (0x1 << 4)
#define ADDA_AFE_ON_SFT                                0
#define ADDA_AFE_ON_MASK                               0x1
#define ADDA_AFE_ON_MASK_SFT                           (0x1 << 0)

/* AFE_SIDETONE_CON0 */
#define W_WDY_SFT                                      30
#define W_WDY_MASK                                     0x1
#define W_WDY_MASK_SFT                                 (0x1 << 30)
#define W_WDY_SFT                                      29
#define W_WDY_MASK                                     0x1
#define W_WDY_MASK_SFT                                 (0x1 << 29)
#define W_W_EN_SFT                                     25
#define W_W_EN_MASK                                    0x1
#define W_W_EN_MASK_SFT                                (0x1 << 25)
#define W_W_SEW_SFT                                    24
#define W_W_SEW_MASK                                   0x1
#define W_W_SEW_MASK_SFT                               (0x1 << 24)
#define SEW_CH2_SFT                                    23
#define SEW_CH2_MASK                                   0x1
#define SEW_CH2_MASK_SFT                               (0x1 << 23)
#define SIDE_TONE_COEFFICIENT_ADDW_SFT                 16
#define SIDE_TONE_COEFFICIENT_ADDW_MASK                0x1f
#define SIDE_TONE_COEFFICIENT_ADDW_MASK_SFT            (0x1f << 16)
#define SIDE_TONE_COEFFICIENT_SFT                      0
#define SIDE_TONE_COEFFICIENT_MASK                     0xffff
#define SIDE_TONE_COEFFICIENT_MASK_SFT                 (0xffff << 0)

/* AFE_SIDETONE_COEFF */
#define SIDE_TONE_COEFF_SFT                            0
#define SIDE_TONE_COEFF_MASK                           0xffff
#define SIDE_TONE_COEFF_MASK_SFT                       (0xffff << 0)

/* AFE_SIDETONE_CON1 */
#define STF_BYPASS_MODE_SFT                            31
#define STF_BYPASS_MODE_MASK                           0x1
#define STF_BYPASS_MODE_MASK_SFT                       (0x1 << 31)
#define STF_BYPASS_MODE_O28_O29_SFT                    30
#define STF_BYPASS_MODE_O28_O29_MASK                   0x1
#define STF_BYPASS_MODE_O28_O29_MASK_SFT               (0x1 << 30)
#define STF_BYPASS_MODE_I2S4_SFT                       29
#define STF_BYPASS_MODE_I2S4_MASK                      0x1
#define STF_BYPASS_MODE_I2S4_MASK_SFT                  (0x1 << 29)
#define STF_BYPASS_MODE_I2S5_SFT                       28
#define STF_BYPASS_MODE_I2S5_MASK                      0x1
#define STF_BYPASS_MODE_I2S5_MASK_SFT                  (0x1 << 28)
#define STF_BYPASS_MODE_DW3_SFT                        27
#define STF_BYPASS_MODE_DW3_MASK                       0x1
#define STF_BYPASS_MODE_DW3_MASK_SFT                   (0x1 << 27)
#define STF_BYPASS_MODE_I2S7_SFT                       26
#define STF_BYPASS_MODE_I2S7_MASK                      0x1
#define STF_BYPASS_MODE_I2S7_MASK_SFT                  (0x1 << 26)
#define STF_BYPASS_MODE_I2S9_SFT                       25
#define STF_BYPASS_MODE_I2S9_MASK                      0x1
#define STF_BYPASS_MODE_I2S9_MASK_SFT                  (0x1 << 25)
#define STF_O19O20_OUT_EN_SEW_SFT                      13
#define STF_O19O20_OUT_EN_SEW_MASK                     0x1
#define STF_O19O20_OUT_EN_SEW_MASK_SFT                 (0x1 << 13)
#define STF_SOUWCE_FWOM_O19O20_SFT                     12
#define STF_SOUWCE_FWOM_O19O20_MASK                    0x1
#define STF_SOUWCE_FWOM_O19O20_MASK_SFT                (0x1 << 12)
#define SIDE_TONE_ON_SFT                               8
#define SIDE_TONE_ON_MASK                              0x1
#define SIDE_TONE_ON_MASK_SFT                          (0x1 << 8)
#define SIDE_TONE_HAWF_TAP_NUM_SFT                     0
#define SIDE_TONE_HAWF_TAP_NUM_MASK                    0x3f
#define SIDE_TONE_HAWF_TAP_NUM_MASK_SFT                (0x3f << 0)

/* AFE_SIDETONE_GAIN */
#define POSITIVE_GAIN_SFT                              16
#define POSITIVE_GAIN_MASK                             0x7
#define POSITIVE_GAIN_MASK_SFT                         (0x7 << 16)
#define SIDE_TONE_GAIN_SFT                             0
#define SIDE_TONE_GAIN_MASK                            0xffff
#define SIDE_TONE_GAIN_MASK_SFT                        (0xffff << 0)

/* AFE_ADDA_DW_SDM_DCCOMP_CON */
#define USE_3WD_SDM_SFT                                28
#define USE_3WD_SDM_MASK                               0x1
#define USE_3WD_SDM_MASK_SFT                           (0x1 << 28)
#define DW_FIFO_STAWT_POINT_SFT                        24
#define DW_FIFO_STAWT_POINT_MASK                       0x7
#define DW_FIFO_STAWT_POINT_MASK_SFT                   (0x7 << 24)
#define DW_FIFO_SWAP_SFT                               20
#define DW_FIFO_SWAP_MASK                              0x1
#define DW_FIFO_SWAP_MASK_SFT                          (0x1 << 20)
#define C_AUDSDM1OWDSEWECT_CTW_SFT                     19
#define C_AUDSDM1OWDSEWECT_CTW_MASK                    0x1
#define C_AUDSDM1OWDSEWECT_CTW_MASK_SFT                (0x1 << 19)
#define C_SDM7BITSEW_CTW_SFT                           18
#define C_SDM7BITSEW_CTW_MASK                          0x1
#define C_SDM7BITSEW_CTW_MASK_SFT                      (0x1 << 18)
#define GAIN_AT_SDM_WST_PWE_CTW_SFT                    15
#define GAIN_AT_SDM_WST_PWE_CTW_MASK                   0x1
#define GAIN_AT_SDM_WST_PWE_CTW_MASK_SFT               (0x1 << 15)
#define DW_DCM_AUTO_IDWE_EN_SFT                        14
#define DW_DCM_AUTO_IDWE_EN_MASK                       0x1
#define DW_DCM_AUTO_IDWE_EN_MASK_SFT                   (0x1 << 14)
#define AFE_DW_SWC_DCM_EN_SFT                          13
#define AFE_DW_SWC_DCM_EN_MASK                         0x1
#define AFE_DW_SWC_DCM_EN_MASK_SFT                     (0x1 << 13)
#define AFE_DW_POST_SWC_DCM_EN_SFT                     12
#define AFE_DW_POST_SWC_DCM_EN_MASK                    0x1
#define AFE_DW_POST_SWC_DCM_EN_MASK_SFT                (0x1 << 12)
#define AUD_SDM_MONO_SFT                               9
#define AUD_SDM_MONO_MASK                              0x1
#define AUD_SDM_MONO_MASK_SFT                          (0x1 << 9)
#define AUD_DC_COMP_EN_SFT                             8
#define AUD_DC_COMP_EN_MASK                            0x1
#define AUD_DC_COMP_EN_MASK_SFT                        (0x1 << 8)
#define ATTGAIN_CTW_SFT                                0
#define ATTGAIN_CTW_MASK                               0x3f
#define ATTGAIN_CTW_MASK_SFT                           (0x3f << 0)

/* AFE_SINEGEN_CON0 */
#define DAC_EN_SFT                                     26
#define DAC_EN_MASK                                    0x1
#define DAC_EN_MASK_SFT                                (0x1 << 26)
#define MUTE_SW_CH2_SFT                                25
#define MUTE_SW_CH2_MASK                               0x1
#define MUTE_SW_CH2_MASK_SFT                           (0x1 << 25)
#define MUTE_SW_CH1_SFT                                24
#define MUTE_SW_CH1_MASK                               0x1
#define MUTE_SW_CH1_MASK_SFT                           (0x1 << 24)
#define SINE_MODE_CH2_SFT                              20
#define SINE_MODE_CH2_MASK                             0xf
#define SINE_MODE_CH2_MASK_SFT                         (0xf << 20)
#define AMP_DIV_CH2_SFT                                17
#define AMP_DIV_CH2_MASK                               0x7
#define AMP_DIV_CH2_MASK_SFT                           (0x7 << 17)
#define FWEQ_DIV_CH2_SFT                               12
#define FWEQ_DIV_CH2_MASK                              0x1f
#define FWEQ_DIV_CH2_MASK_SFT                          (0x1f << 12)
#define SINE_MODE_CH1_SFT                              8
#define SINE_MODE_CH1_MASK                             0xf
#define SINE_MODE_CH1_MASK_SFT                         (0xf << 8)
#define AMP_DIV_CH1_SFT                                5
#define AMP_DIV_CH1_MASK                               0x7
#define AMP_DIV_CH1_MASK_SFT                           (0x7 << 5)
#define FWEQ_DIV_CH1_SFT                               0
#define FWEQ_DIV_CH1_MASK                              0x1f
#define FWEQ_DIV_CH1_MASK_SFT                          (0x1f << 0)

/* AFE_SINEGEN_CON2 */
#define INNEW_WOOP_BACK_MODE_SFT                       0
#define INNEW_WOOP_BACK_MODE_MASK                      0x3f
#define INNEW_WOOP_BACK_MODE_MASK_SFT                  (0x3f << 0)

/* AFE_HD_ENGEN_ENABWE */
#define AFE_24M_ON_SFT                                 1
#define AFE_24M_ON_MASK                                0x1
#define AFE_24M_ON_MASK_SFT                            (0x1 << 1)
#define AFE_22M_ON_SFT                                 0
#define AFE_22M_ON_MASK                                0x1
#define AFE_22M_ON_MASK_SFT                            (0x1 << 0)

/* AFE_ADDA_DW_NWE_FIFO_MON */
#define DW_NWE_FIFO_WBIN_SFT                           8
#define DW_NWE_FIFO_WBIN_MASK                          0xf
#define DW_NWE_FIFO_WBIN_MASK_SFT                      (0xf << 8)
#define DW_NWE_FIFO_WBIN_SFT                           4
#define DW_NWE_FIFO_WBIN_MASK                          0xf
#define DW_NWE_FIFO_WBIN_MASK_SFT                      (0xf << 4)
#define DW_NWE_FIFO_WDACTIVE_SFT                       3
#define DW_NWE_FIFO_WDACTIVE_MASK                      0x1
#define DW_NWE_FIFO_WDACTIVE_MASK_SFT                  (0x1 << 3)
#define DW_NWE_FIFO_STAWTWD_SFT                        2
#define DW_NWE_FIFO_STAWTWD_MASK                       0x1
#define DW_NWE_FIFO_STAWTWD_MASK_SFT                   (0x1 << 2)
#define DW_NWE_FIFO_WD_EMPTY_SFT                       1
#define DW_NWE_FIFO_WD_EMPTY_MASK                      0x1
#define DW_NWE_FIFO_WD_EMPTY_MASK_SFT                  (0x1 << 1)
#define DW_NWE_FIFO_WW_FUWW_SFT                        0
#define DW_NWE_FIFO_WW_FUWW_MASK                       0x1
#define DW_NWE_FIFO_WW_FUWW_MASK_SFT                   (0x1 << 0)

/* AFE_DW1_CON0 */
#define DW1_MODE_SFT                                   24
#define DW1_MODE_MASK                                  0xf
#define DW1_MODE_MASK_SFT                              (0xf << 24)
#define DW1_MINWEN_SFT                                 20
#define DW1_MINWEN_MASK                                0xf
#define DW1_MINWEN_MASK_SFT                            (0xf << 20)
#define DW1_MAXWEN_SFT                                 16
#define DW1_MAXWEN_MASK                                0xf
#define DW1_MAXWEN_MASK_SFT                            (0xf << 16)
#define DW1_SW_CWEAW_BUF_EMPTY_SFT                     15
#define DW1_SW_CWEAW_BUF_EMPTY_MASK                    0x1
#define DW1_SW_CWEAW_BUF_EMPTY_MASK_SFT                (0x1 << 15)
#define DW1_PBUF_SIZE_SFT                              12
#define DW1_PBUF_SIZE_MASK                             0x3
#define DW1_PBUF_SIZE_MASK_SFT                         (0x3 << 12)
#define DW1_MONO_SFT                                   8
#define DW1_MONO_MASK                                  0x1
#define DW1_MONO_MASK_SFT                              (0x1 << 8)
#define DW1_NOWMAW_MODE_SFT                            5
#define DW1_NOWMAW_MODE_MASK                           0x1
#define DW1_NOWMAW_MODE_MASK_SFT                       (0x1 << 5)
#define DW1_HAWIGN_SFT                                 4
#define DW1_HAWIGN_MASK                                0x1
#define DW1_HAWIGN_MASK_SFT                            (0x1 << 4)
#define DW1_HD_MODE_SFT                                0
#define DW1_HD_MODE_MASK                               0x3
#define DW1_HD_MODE_MASK_SFT                           (0x3 << 0)

/* AFE_DW2_CON0 */
#define DW2_MODE_SFT                                   24
#define DW2_MODE_MASK                                  0xf
#define DW2_MODE_MASK_SFT                              (0xf << 24)
#define DW2_MINWEN_SFT                                 20
#define DW2_MINWEN_MASK                                0xf
#define DW2_MINWEN_MASK_SFT                            (0xf << 20)
#define DW2_MAXWEN_SFT                                 16
#define DW2_MAXWEN_MASK                                0xf
#define DW2_MAXWEN_MASK_SFT                            (0xf << 16)
#define DW2_SW_CWEAW_BUF_EMPTY_SFT                     15
#define DW2_SW_CWEAW_BUF_EMPTY_MASK                    0x1
#define DW2_SW_CWEAW_BUF_EMPTY_MASK_SFT                (0x1 << 15)
#define DW2_PBUF_SIZE_SFT                              12
#define DW2_PBUF_SIZE_MASK                             0x3
#define DW2_PBUF_SIZE_MASK_SFT                         (0x3 << 12)
#define DW2_MONO_SFT                                   8
#define DW2_MONO_MASK                                  0x1
#define DW2_MONO_MASK_SFT                              (0x1 << 8)
#define DW2_NOWMAW_MODE_SFT                            5
#define DW2_NOWMAW_MODE_MASK                           0x1
#define DW2_NOWMAW_MODE_MASK_SFT                       (0x1 << 5)
#define DW2_HAWIGN_SFT                                 4
#define DW2_HAWIGN_MASK                                0x1
#define DW2_HAWIGN_MASK_SFT                            (0x1 << 4)
#define DW2_HD_MODE_SFT                                0
#define DW2_HD_MODE_MASK                               0x3
#define DW2_HD_MODE_MASK_SFT                           (0x3 << 0)

/* AFE_DW3_CON0 */
#define DW3_MODE_SFT                                   24
#define DW3_MODE_MASK                                  0xf
#define DW3_MODE_MASK_SFT                              (0xf << 24)
#define DW3_MINWEN_SFT                                 20
#define DW3_MINWEN_MASK                                0xf
#define DW3_MINWEN_MASK_SFT                            (0xf << 20)
#define DW3_MAXWEN_SFT                                 16
#define DW3_MAXWEN_MASK                                0xf
#define DW3_MAXWEN_MASK_SFT                            (0xf << 16)
#define DW3_SW_CWEAW_BUF_EMPTY_SFT                     15
#define DW3_SW_CWEAW_BUF_EMPTY_MASK                    0x1
#define DW3_SW_CWEAW_BUF_EMPTY_MASK_SFT                (0x1 << 15)
#define DW3_PBUF_SIZE_SFT                              12
#define DW3_PBUF_SIZE_MASK                             0x3
#define DW3_PBUF_SIZE_MASK_SFT                         (0x3 << 12)
#define DW3_MONO_SFT                                   8
#define DW3_MONO_MASK                                  0x1
#define DW3_MONO_MASK_SFT                              (0x1 << 8)
#define DW3_NOWMAW_MODE_SFT                            5
#define DW3_NOWMAW_MODE_MASK                           0x1
#define DW3_NOWMAW_MODE_MASK_SFT                       (0x1 << 5)
#define DW3_HAWIGN_SFT                                 4
#define DW3_HAWIGN_MASK                                0x1
#define DW3_HAWIGN_MASK_SFT                            (0x1 << 4)
#define DW3_HD_MODE_SFT                                0
#define DW3_HD_MODE_MASK                               0x3
#define DW3_HD_MODE_MASK_SFT                           (0x3 << 0)

/* AFE_DW4_CON0 */
#define DW4_MODE_SFT                                   24
#define DW4_MODE_MASK                                  0xf
#define DW4_MODE_MASK_SFT                              (0xf << 24)
#define DW4_MINWEN_SFT                                 20
#define DW4_MINWEN_MASK                                0xf
#define DW4_MINWEN_MASK_SFT                            (0xf << 20)
#define DW4_MAXWEN_SFT                                 16
#define DW4_MAXWEN_MASK                                0xf
#define DW4_MAXWEN_MASK_SFT                            (0xf << 16)
#define DW4_SW_CWEAW_BUF_EMPTY_SFT                     15
#define DW4_SW_CWEAW_BUF_EMPTY_MASK                    0x1
#define DW4_SW_CWEAW_BUF_EMPTY_MASK_SFT                (0x1 << 15)
#define DW4_PBUF_SIZE_SFT                              12
#define DW4_PBUF_SIZE_MASK                             0x3
#define DW4_PBUF_SIZE_MASK_SFT                         (0x3 << 12)
#define DW4_MONO_SFT                                   8
#define DW4_MONO_MASK                                  0x1
#define DW4_MONO_MASK_SFT                              (0x1 << 8)
#define DW4_NOWMAW_MODE_SFT                            5
#define DW4_NOWMAW_MODE_MASK                           0x1
#define DW4_NOWMAW_MODE_MASK_SFT                       (0x1 << 5)
#define DW4_HAWIGN_SFT                                 4
#define DW4_HAWIGN_MASK                                0x1
#define DW4_HAWIGN_MASK_SFT                            (0x1 << 4)
#define DW4_HD_MODE_SFT                                0
#define DW4_HD_MODE_MASK                               0x3
#define DW4_HD_MODE_MASK_SFT                           (0x3 << 0)

/* AFE_DW5_CON0 */
#define DW5_MODE_SFT                                   24
#define DW5_MODE_MASK                                  0xf
#define DW5_MODE_MASK_SFT                              (0xf << 24)
#define DW5_MINWEN_SFT                                 20
#define DW5_MINWEN_MASK                                0xf
#define DW5_MINWEN_MASK_SFT                            (0xf << 20)
#define DW5_MAXWEN_SFT                                 16
#define DW5_MAXWEN_MASK                                0xf
#define DW5_MAXWEN_MASK_SFT                            (0xf << 16)
#define DW5_SW_CWEAW_BUF_EMPTY_SFT                     15
#define DW5_SW_CWEAW_BUF_EMPTY_MASK                    0x1
#define DW5_SW_CWEAW_BUF_EMPTY_MASK_SFT                (0x1 << 15)
#define DW5_PBUF_SIZE_SFT                              12
#define DW5_PBUF_SIZE_MASK                             0x3
#define DW5_PBUF_SIZE_MASK_SFT                         (0x3 << 12)
#define DW5_MONO_SFT                                   8
#define DW5_MONO_MASK                                  0x1
#define DW5_MONO_MASK_SFT                              (0x1 << 8)
#define DW5_NOWMAW_MODE_SFT                            5
#define DW5_NOWMAW_MODE_MASK                           0x1
#define DW5_NOWMAW_MODE_MASK_SFT                       (0x1 << 5)
#define DW5_HAWIGN_SFT                                 4
#define DW5_HAWIGN_MASK                                0x1
#define DW5_HAWIGN_MASK_SFT                            (0x1 << 4)
#define DW5_HD_MODE_SFT                                0
#define DW5_HD_MODE_MASK                               0x3
#define DW5_HD_MODE_MASK_SFT                           (0x3 << 0)

/* AFE_DW6_CON0 */
#define DW6_MODE_SFT                                   24
#define DW6_MODE_MASK                                  0xf
#define DW6_MODE_MASK_SFT                              (0xf << 24)
#define DW6_MINWEN_SFT                                 20
#define DW6_MINWEN_MASK                                0xf
#define DW6_MINWEN_MASK_SFT                            (0xf << 20)
#define DW6_MAXWEN_SFT                                 16
#define DW6_MAXWEN_MASK                                0xf
#define DW6_MAXWEN_MASK_SFT                            (0xf << 16)
#define DW6_SW_CWEAW_BUF_EMPTY_SFT                     15
#define DW6_SW_CWEAW_BUF_EMPTY_MASK                    0x1
#define DW6_SW_CWEAW_BUF_EMPTY_MASK_SFT                (0x1 << 15)
#define DW6_PBUF_SIZE_SFT                              12
#define DW6_PBUF_SIZE_MASK                             0x3
#define DW6_PBUF_SIZE_MASK_SFT                         (0x3 << 12)
#define DW6_MONO_SFT                                   8
#define DW6_MONO_MASK                                  0x1
#define DW6_MONO_MASK_SFT                              (0x1 << 8)
#define DW6_NOWMAW_MODE_SFT                            5
#define DW6_NOWMAW_MODE_MASK                           0x1
#define DW6_NOWMAW_MODE_MASK_SFT                       (0x1 << 5)
#define DW6_HAWIGN_SFT                                 4
#define DW6_HAWIGN_MASK                                0x1
#define DW6_HAWIGN_MASK_SFT                            (0x1 << 4)
#define DW6_HD_MODE_SFT                                0
#define DW6_HD_MODE_MASK                               0x3
#define DW6_HD_MODE_MASK_SFT                           (0x3 << 0)

/* AFE_DW7_CON0 */
#define DW7_MODE_SFT                                   24
#define DW7_MODE_MASK                                  0xf
#define DW7_MODE_MASK_SFT                              (0xf << 24)
#define DW7_MINWEN_SFT                                 20
#define DW7_MINWEN_MASK                                0xf
#define DW7_MINWEN_MASK_SFT                            (0xf << 20)
#define DW7_MAXWEN_SFT                                 16
#define DW7_MAXWEN_MASK                                0xf
#define DW7_MAXWEN_MASK_SFT                            (0xf << 16)
#define DW7_SW_CWEAW_BUF_EMPTY_SFT                     15
#define DW7_SW_CWEAW_BUF_EMPTY_MASK                    0x1
#define DW7_SW_CWEAW_BUF_EMPTY_MASK_SFT                (0x1 << 15)
#define DW7_PBUF_SIZE_SFT                              12
#define DW7_PBUF_SIZE_MASK                             0x3
#define DW7_PBUF_SIZE_MASK_SFT                         (0x3 << 12)
#define DW7_MONO_SFT                                   8
#define DW7_MONO_MASK                                  0x1
#define DW7_MONO_MASK_SFT                              (0x1 << 8)
#define DW7_NOWMAW_MODE_SFT                            5
#define DW7_NOWMAW_MODE_MASK                           0x1
#define DW7_NOWMAW_MODE_MASK_SFT                       (0x1 << 5)
#define DW7_HAWIGN_SFT                                 4
#define DW7_HAWIGN_MASK                                0x1
#define DW7_HAWIGN_MASK_SFT                            (0x1 << 4)
#define DW7_HD_MODE_SFT                                0
#define DW7_HD_MODE_MASK                               0x3
#define DW7_HD_MODE_MASK_SFT                           (0x3 << 0)

/* AFE_DW8_CON0 */
#define DW8_MODE_SFT                                   24
#define DW8_MODE_MASK                                  0xf
#define DW8_MODE_MASK_SFT                              (0xf << 24)
#define DW8_MINWEN_SFT                                 20
#define DW8_MINWEN_MASK                                0xf
#define DW8_MINWEN_MASK_SFT                            (0xf << 20)
#define DW8_MAXWEN_SFT                                 16
#define DW8_MAXWEN_MASK                                0xf
#define DW8_MAXWEN_MASK_SFT                            (0xf << 16)
#define DW8_SW_CWEAW_BUF_EMPTY_SFT                     15
#define DW8_SW_CWEAW_BUF_EMPTY_MASK                    0x1
#define DW8_SW_CWEAW_BUF_EMPTY_MASK_SFT                (0x1 << 15)
#define DW8_PBUF_SIZE_SFT                              12
#define DW8_PBUF_SIZE_MASK                             0x3
#define DW8_PBUF_SIZE_MASK_SFT                         (0x3 << 12)
#define DW8_MONO_SFT                                   8
#define DW8_MONO_MASK                                  0x1
#define DW8_MONO_MASK_SFT                              (0x1 << 8)
#define DW8_NOWMAW_MODE_SFT                            5
#define DW8_NOWMAW_MODE_MASK                           0x1
#define DW8_NOWMAW_MODE_MASK_SFT                       (0x1 << 5)
#define DW8_HAWIGN_SFT                                 4
#define DW8_HAWIGN_MASK                                0x1
#define DW8_HAWIGN_MASK_SFT                            (0x1 << 4)
#define DW8_HD_MODE_SFT                                0
#define DW8_HD_MODE_MASK                               0x3
#define DW8_HD_MODE_MASK_SFT                           (0x3 << 0)

/* AFE_DW9_CON0 */
#define DW9_MODE_SFT                                   24
#define DW9_MODE_MASK                                  0xf
#define DW9_MODE_MASK_SFT                              (0xf << 24)
#define DW9_MINWEN_SFT                                 20
#define DW9_MINWEN_MASK                                0xf
#define DW9_MINWEN_MASK_SFT                            (0xf << 20)
#define DW9_MAXWEN_SFT                                 16
#define DW9_MAXWEN_MASK                                0xf
#define DW9_MAXWEN_MASK_SFT                            (0xf << 16)
#define DW9_SW_CWEAW_BUF_EMPTY_SFT                     15
#define DW9_SW_CWEAW_BUF_EMPTY_MASK                    0x1
#define DW9_SW_CWEAW_BUF_EMPTY_MASK_SFT                (0x1 << 15)
#define DW9_PBUF_SIZE_SFT                              12
#define DW9_PBUF_SIZE_MASK                             0x3
#define DW9_PBUF_SIZE_MASK_SFT                         (0x3 << 12)
#define DW9_MONO_SFT                                   8
#define DW9_MONO_MASK                                  0x1
#define DW9_MONO_MASK_SFT                              (0x1 << 8)
#define DW9_NOWMAW_MODE_SFT                            5
#define DW9_NOWMAW_MODE_MASK                           0x1
#define DW9_NOWMAW_MODE_MASK_SFT                       (0x1 << 5)
#define DW9_HAWIGN_SFT                                 4
#define DW9_HAWIGN_MASK                                0x1
#define DW9_HAWIGN_MASK_SFT                            (0x1 << 4)
#define DW9_HD_MODE_SFT                                0
#define DW9_HD_MODE_MASK                               0x3
#define DW9_HD_MODE_MASK_SFT                           (0x3 << 0)

/* AFE_DW12_CON0 */
#define DW12_MODE_SFT                                  24
#define DW12_MODE_MASK                                 0xf
#define DW12_MODE_MASK_SFT                             (0xf << 24)
#define DW12_MINWEN_SFT                                20
#define DW12_MINWEN_MASK                               0xf
#define DW12_MINWEN_MASK_SFT                           (0xf << 20)
#define DW12_MAXWEN_SFT                                16
#define DW12_MAXWEN_MASK                               0xf
#define DW12_MAXWEN_MASK_SFT                           (0xf << 16)
#define DW12_SW_CWEAW_BUF_EMPTY_SFT                    15
#define DW12_SW_CWEAW_BUF_EMPTY_MASK                   0x1
#define DW12_SW_CWEAW_BUF_EMPTY_MASK_SFT               (0x1 << 15)
#define DW12_PBUF_SIZE_SFT                             12
#define DW12_PBUF_SIZE_MASK                            0x3
#define DW12_PBUF_SIZE_MASK_SFT                        (0x3 << 12)
#define DW12_4CH_EN_SFT                                11
#define DW12_4CH_EN_MASK                               0x1
#define DW12_4CH_EN_MASK_SFT                           (0x1 << 11)
#define DW12_MONO_SFT                                  8
#define DW12_MONO_MASK                                 0x1
#define DW12_MONO_MASK_SFT                             (0x1 << 8)
#define DW12_NOWMAW_MODE_SFT                           5
#define DW12_NOWMAW_MODE_MASK                          0x1
#define DW12_NOWMAW_MODE_MASK_SFT                      (0x1 << 5)
#define DW12_HAWIGN_SFT                                4
#define DW12_HAWIGN_MASK                               0x1
#define DW12_HAWIGN_MASK_SFT                           (0x1 << 4)
#define DW12_HD_MODE_SFT                               0
#define DW12_HD_MODE_MASK                              0x3
#define DW12_HD_MODE_MASK_SFT                          (0x3 << 0)

/* AFE_AWB_CON0 */
#define AWB_MODE_SFT                                   24
#define AWB_MODE_MASK                                  0xf
#define AWB_MODE_MASK_SFT                              (0xf << 24)
#define AWB_SW_CWEAW_BUF_FUWW_SFT                      15
#define AWB_SW_CWEAW_BUF_FUWW_MASK                     0x1
#define AWB_SW_CWEAW_BUF_FUWW_MASK_SFT                 (0x1 << 15)
#define AWB_W_MONO_SFT                                 9
#define AWB_W_MONO_MASK                                0x1
#define AWB_W_MONO_MASK_SFT                            (0x1 << 9)
#define AWB_MONO_SFT                                   8
#define AWB_MONO_MASK                                  0x1
#define AWB_MONO_MASK_SFT                              (0x1 << 8)
#define AWB_WW_SIGN_SFT                                6
#define AWB_WW_SIGN_MASK                               0x1
#define AWB_WW_SIGN_MASK_SFT                           (0x1 << 6)
#define AWB_NOWMAW_MODE_SFT                            5
#define AWB_NOWMAW_MODE_MASK                           0x1
#define AWB_NOWMAW_MODE_MASK_SFT                       (0x1 << 5)
#define AWB_HAWIGN_SFT                                 4
#define AWB_HAWIGN_MASK                                0x1
#define AWB_HAWIGN_MASK_SFT                            (0x1 << 4)
#define AWB_HD_MODE_SFT                                0
#define AWB_HD_MODE_MASK                               0x3
#define AWB_HD_MODE_MASK_SFT                           (0x3 << 0)

/* AFE_AWB2_CON0 */
#define AWB2_MODE_SFT                                  24
#define AWB2_MODE_MASK                                 0xf
#define AWB2_MODE_MASK_SFT                             (0xf << 24)
#define AWB2_SW_CWEAW_BUF_FUWW_SFT                     15
#define AWB2_SW_CWEAW_BUF_FUWW_MASK                    0x1
#define AWB2_SW_CWEAW_BUF_FUWW_MASK_SFT                (0x1 << 15)
#define AWB2_W_MONO_SFT                                9
#define AWB2_W_MONO_MASK                               0x1
#define AWB2_W_MONO_MASK_SFT                           (0x1 << 9)
#define AWB2_MONO_SFT                                  8
#define AWB2_MONO_MASK                                 0x1
#define AWB2_MONO_MASK_SFT                             (0x1 << 8)
#define AWB2_WW_SIGN_SFT                               6
#define AWB2_WW_SIGN_MASK                              0x1
#define AWB2_WW_SIGN_MASK_SFT                          (0x1 << 6)
#define AWB2_NOWMAW_MODE_SFT                           5
#define AWB2_NOWMAW_MODE_MASK                          0x1
#define AWB2_NOWMAW_MODE_MASK_SFT                      (0x1 << 5)
#define AWB2_HAWIGN_SFT                                4
#define AWB2_HAWIGN_MASK                               0x1
#define AWB2_HAWIGN_MASK_SFT                           (0x1 << 4)
#define AWB2_HD_MODE_SFT                               0
#define AWB2_HD_MODE_MASK                              0x3
#define AWB2_HD_MODE_MASK_SFT                          (0x3 << 0)

/* AFE_VUW_CON0 */
#define VUW_MODE_SFT                                   24
#define VUW_MODE_MASK                                  0xf
#define VUW_MODE_MASK_SFT                              (0xf << 24)
#define VUW_SW_CWEAW_BUF_FUWW_SFT                      15
#define VUW_SW_CWEAW_BUF_FUWW_MASK                     0x1
#define VUW_SW_CWEAW_BUF_FUWW_MASK_SFT                 (0x1 << 15)
#define VUW_W_MONO_SFT                                 9
#define VUW_W_MONO_MASK                                0x1
#define VUW_W_MONO_MASK_SFT                            (0x1 << 9)
#define VUW_MONO_SFT                                   8
#define VUW_MONO_MASK                                  0x1
#define VUW_MONO_MASK_SFT                              (0x1 << 8)
#define VUW_WW_SIGN_SFT                                6
#define VUW_WW_SIGN_MASK                               0x1
#define VUW_WW_SIGN_MASK_SFT                           (0x1 << 6)
#define VUW_NOWMAW_MODE_SFT                            5
#define VUW_NOWMAW_MODE_MASK                           0x1
#define VUW_NOWMAW_MODE_MASK_SFT                       (0x1 << 5)
#define VUW_HAWIGN_SFT                                 4
#define VUW_HAWIGN_MASK                                0x1
#define VUW_HAWIGN_MASK_SFT                            (0x1 << 4)
#define VUW_HD_MODE_SFT                                0
#define VUW_HD_MODE_MASK                               0x3
#define VUW_HD_MODE_MASK_SFT                           (0x3 << 0)

/* AFE_VUW12_CON0 */
#define VUW12_MODE_SFT                                 24
#define VUW12_MODE_MASK                                0xf
#define VUW12_MODE_MASK_SFT                            (0xf << 24)
#define VUW12_SW_CWEAW_BUF_FUWW_SFT                    15
#define VUW12_SW_CWEAW_BUF_FUWW_MASK                   0x1
#define VUW12_SW_CWEAW_BUF_FUWW_MASK_SFT               (0x1 << 15)
#define VUW12_4CH_EN_SFT                               11
#define VUW12_4CH_EN_MASK                              0x1
#define VUW12_4CH_EN_MASK_SFT                          (0x1 << 11)
#define VUW12_W_MONO_SFT                               9
#define VUW12_W_MONO_MASK                              0x1
#define VUW12_W_MONO_MASK_SFT                          (0x1 << 9)
#define VUW12_MONO_SFT                                 8
#define VUW12_MONO_MASK                                0x1
#define VUW12_MONO_MASK_SFT                            (0x1 << 8)
#define VUW12_WW_SIGN_SFT                              6
#define VUW12_WW_SIGN_MASK                             0x1
#define VUW12_WW_SIGN_MASK_SFT                         (0x1 << 6)
#define VUW12_NOWMAW_MODE_SFT                          5
#define VUW12_NOWMAW_MODE_MASK                         0x1
#define VUW12_NOWMAW_MODE_MASK_SFT                     (0x1 << 5)
#define VUW12_HAWIGN_SFT                               4
#define VUW12_HAWIGN_MASK                              0x1
#define VUW12_HAWIGN_MASK_SFT                          (0x1 << 4)
#define VUW12_HD_MODE_SFT                              0
#define VUW12_HD_MODE_MASK                             0x3
#define VUW12_HD_MODE_MASK_SFT                         (0x3 << 0)

/* AFE_VUW2_CON0 */
#define VUW2_MODE_SFT                                  24
#define VUW2_MODE_MASK                                 0xf
#define VUW2_MODE_MASK_SFT                             (0xf << 24)
#define VUW2_SW_CWEAW_BUF_FUWW_SFT                     15
#define VUW2_SW_CWEAW_BUF_FUWW_MASK                    0x1
#define VUW2_SW_CWEAW_BUF_FUWW_MASK_SFT                (0x1 << 15)
#define VUW2_W_MONO_SFT                                9
#define VUW2_W_MONO_MASK                               0x1
#define VUW2_W_MONO_MASK_SFT                           (0x1 << 9)
#define VUW2_MONO_SFT                                  8
#define VUW2_MONO_MASK                                 0x1
#define VUW2_MONO_MASK_SFT                             (0x1 << 8)
#define VUW2_WW_SIGN_SFT                               6
#define VUW2_WW_SIGN_MASK                              0x1
#define VUW2_WW_SIGN_MASK_SFT                          (0x1 << 6)
#define VUW2_NOWMAW_MODE_SFT                           5
#define VUW2_NOWMAW_MODE_MASK                          0x1
#define VUW2_NOWMAW_MODE_MASK_SFT                      (0x1 << 5)
#define VUW2_HAWIGN_SFT                                4
#define VUW2_HAWIGN_MASK                               0x1
#define VUW2_HAWIGN_MASK_SFT                           (0x1 << 4)
#define VUW2_HD_MODE_SFT                               0
#define VUW2_HD_MODE_MASK                              0x3
#define VUW2_HD_MODE_MASK_SFT                          (0x3 << 0)

/* AFE_VUW3_CON0 */
#define VUW3_MODE_SFT                                  24
#define VUW3_MODE_MASK                                 0xf
#define VUW3_MODE_MASK_SFT                             (0xf << 24)
#define VUW3_SW_CWEAW_BUF_FUWW_SFT                     15
#define VUW3_SW_CWEAW_BUF_FUWW_MASK                    0x1
#define VUW3_SW_CWEAW_BUF_FUWW_MASK_SFT                (0x1 << 15)
#define VUW3_W_MONO_SFT                                9
#define VUW3_W_MONO_MASK                               0x1
#define VUW3_W_MONO_MASK_SFT                           (0x1 << 9)
#define VUW3_MONO_SFT                                  8
#define VUW3_MONO_MASK                                 0x1
#define VUW3_MONO_MASK_SFT                             (0x1 << 8)
#define VUW3_WW_SIGN_SFT                               6
#define VUW3_WW_SIGN_MASK                              0x1
#define VUW3_WW_SIGN_MASK_SFT                          (0x1 << 6)
#define VUW3_NOWMAW_MODE_SFT                           5
#define VUW3_NOWMAW_MODE_MASK                          0x1
#define VUW3_NOWMAW_MODE_MASK_SFT                      (0x1 << 5)
#define VUW3_HAWIGN_SFT                                4
#define VUW3_HAWIGN_MASK                               0x1
#define VUW3_HAWIGN_MASK_SFT                           (0x1 << 4)
#define VUW3_HD_MODE_SFT                               0
#define VUW3_HD_MODE_MASK                              0x3
#define VUW3_HD_MODE_MASK_SFT                          (0x3 << 0)

/* AFE_VUW4_CON0 */
#define VUW4_MODE_SFT                                  24
#define VUW4_MODE_MASK                                 0xf
#define VUW4_MODE_MASK_SFT                             (0xf << 24)
#define VUW4_SW_CWEAW_BUF_FUWW_SFT                     15
#define VUW4_SW_CWEAW_BUF_FUWW_MASK                    0x1
#define VUW4_SW_CWEAW_BUF_FUWW_MASK_SFT                (0x1 << 15)
#define VUW4_W_MONO_SFT                                9
#define VUW4_W_MONO_MASK                               0x1
#define VUW4_W_MONO_MASK_SFT                           (0x1 << 9)
#define VUW4_MONO_SFT                                  8
#define VUW4_MONO_MASK                                 0x1
#define VUW4_MONO_MASK_SFT                             (0x1 << 8)
#define VUW4_WW_SIGN_SFT                               6
#define VUW4_WW_SIGN_MASK                              0x1
#define VUW4_WW_SIGN_MASK_SFT                          (0x1 << 6)
#define VUW4_NOWMAW_MODE_SFT                           5
#define VUW4_NOWMAW_MODE_MASK                          0x1
#define VUW4_NOWMAW_MODE_MASK_SFT                      (0x1 << 5)
#define VUW4_HAWIGN_SFT                                4
#define VUW4_HAWIGN_MASK                               0x1
#define VUW4_HAWIGN_MASK_SFT                           (0x1 << 4)
#define VUW4_HD_MODE_SFT                               0
#define VUW4_HD_MODE_MASK                              0x3
#define VUW4_HD_MODE_MASK_SFT                          (0x3 << 0)

/* AFE_VUW5_CON0 */
#define VUW5_MODE_SFT                                  24
#define VUW5_MODE_MASK                                 0xf
#define VUW5_MODE_MASK_SFT                             (0xf << 24)
#define VUW5_SW_CWEAW_BUF_FUWW_SFT                     15
#define VUW5_SW_CWEAW_BUF_FUWW_MASK                    0x1
#define VUW5_SW_CWEAW_BUF_FUWW_MASK_SFT                (0x1 << 15)
#define VUW5_W_MONO_SFT                                9
#define VUW5_W_MONO_MASK                               0x1
#define VUW5_W_MONO_MASK_SFT                           (0x1 << 9)
#define VUW5_MONO_SFT                                  8
#define VUW5_MONO_MASK                                 0x1
#define VUW5_MONO_MASK_SFT                             (0x1 << 8)
#define VUW5_WW_SIGN_SFT                               6
#define VUW5_WW_SIGN_MASK                              0x1
#define VUW5_WW_SIGN_MASK_SFT                          (0x1 << 6)
#define VUW5_NOWMAW_MODE_SFT                           5
#define VUW5_NOWMAW_MODE_MASK                          0x1
#define VUW5_NOWMAW_MODE_MASK_SFT                      (0x1 << 5)
#define VUW5_HAWIGN_SFT                                4
#define VUW5_HAWIGN_MASK                               0x1
#define VUW5_HAWIGN_MASK_SFT                           (0x1 << 4)
#define VUW5_HD_MODE_SFT                               0
#define VUW5_HD_MODE_MASK                              0x3
#define VUW5_HD_MODE_MASK_SFT                          (0x3 << 0)

/* AFE_VUW6_CON0 */
#define VUW6_MODE_SFT                                  24
#define VUW6_MODE_MASK                                 0xf
#define VUW6_MODE_MASK_SFT                             (0xf << 24)
#define VUW6_SW_CWEAW_BUF_FUWW_SFT                     15
#define VUW6_SW_CWEAW_BUF_FUWW_MASK                    0x1
#define VUW6_SW_CWEAW_BUF_FUWW_MASK_SFT                (0x1 << 15)
#define VUW6_W_MONO_SFT                                9
#define VUW6_W_MONO_MASK                               0x1
#define VUW6_W_MONO_MASK_SFT                           (0x1 << 9)
#define VUW6_MONO_SFT                                  8
#define VUW6_MONO_MASK                                 0x1
#define VUW6_MONO_MASK_SFT                             (0x1 << 8)
#define VUW6_WW_SIGN_SFT                               6
#define VUW6_WW_SIGN_MASK                              0x1
#define VUW6_WW_SIGN_MASK_SFT                          (0x1 << 6)
#define VUW6_NOWMAW_MODE_SFT                           5
#define VUW6_NOWMAW_MODE_MASK                          0x1
#define VUW6_NOWMAW_MODE_MASK_SFT                      (0x1 << 5)
#define VUW6_HAWIGN_SFT                                4
#define VUW6_HAWIGN_MASK                               0x1
#define VUW6_HAWIGN_MASK_SFT                           (0x1 << 4)
#define VUW6_HD_MODE_SFT                               0
#define VUW6_HD_MODE_MASK                              0x3
#define VUW6_HD_MODE_MASK_SFT                          (0x3 << 0)

/* AFE_DAI_CON0 */
#define DAI_MODE_SFT                                   24
#define DAI_MODE_MASK                                  0x3
#define DAI_MODE_MASK_SFT                              (0x3 << 24)
#define DAI_SW_CWEAW_BUF_FUWW_SFT                      15
#define DAI_SW_CWEAW_BUF_FUWW_MASK                     0x1
#define DAI_SW_CWEAW_BUF_FUWW_MASK_SFT                 (0x1 << 15)
#define DAI_DUPWICATE_WW_SFT                           10
#define DAI_DUPWICATE_WW_MASK                          0x1
#define DAI_DUPWICATE_WW_MASK_SFT                      (0x1 << 10)
#define DAI_MONO_SFT                                   8
#define DAI_MONO_MASK                                  0x1
#define DAI_MONO_MASK_SFT                              (0x1 << 8)
#define DAI_WW_SIGN_SFT                                6
#define DAI_WW_SIGN_MASK                               0x1
#define DAI_WW_SIGN_MASK_SFT                           (0x1 << 6)
#define DAI_NOWMAW_MODE_SFT                            5
#define DAI_NOWMAW_MODE_MASK                           0x1
#define DAI_NOWMAW_MODE_MASK_SFT                       (0x1 << 5)
#define DAI_HAWIGN_SFT                                 4
#define DAI_HAWIGN_MASK                                0x1
#define DAI_HAWIGN_MASK_SFT                            (0x1 << 4)
#define DAI_HD_MODE_SFT                                0
#define DAI_HD_MODE_MASK                               0x3
#define DAI_HD_MODE_MASK_SFT                           (0x3 << 0)

/* AFE_MOD_DAI_CON0 */
#define MOD_DAI_MODE_SFT                               24
#define MOD_DAI_MODE_MASK                              0x3
#define MOD_DAI_MODE_MASK_SFT                          (0x3 << 24)
#define MOD_DAI_SW_CWEAW_BUF_FUWW_SFT                  15
#define MOD_DAI_SW_CWEAW_BUF_FUWW_MASK                 0x1
#define MOD_DAI_SW_CWEAW_BUF_FUWW_MASK_SFT             (0x1 << 15)
#define MOD_DAI_DUPWICATE_WW_SFT                       10
#define MOD_DAI_DUPWICATE_WW_MASK                      0x1
#define MOD_DAI_DUPWICATE_WW_MASK_SFT                  (0x1 << 10)
#define MOD_DAI_MONO_SFT                               8
#define MOD_DAI_MONO_MASK                              0x1
#define MOD_DAI_MONO_MASK_SFT                          (0x1 << 8)
#define MOD_DAI_WW_SIGN_SFT                            6
#define MOD_DAI_WW_SIGN_MASK                           0x1
#define MOD_DAI_WW_SIGN_MASK_SFT                       (0x1 << 6)
#define MOD_DAI_NOWMAW_MODE_SFT                        5
#define MOD_DAI_NOWMAW_MODE_MASK                       0x1
#define MOD_DAI_NOWMAW_MODE_MASK_SFT                   (0x1 << 5)
#define MOD_DAI_HAWIGN_SFT                             4
#define MOD_DAI_HAWIGN_MASK                            0x1
#define MOD_DAI_HAWIGN_MASK_SFT                        (0x1 << 4)
#define MOD_DAI_HD_MODE_SFT                            0
#define MOD_DAI_HD_MODE_MASK                           0x3
#define MOD_DAI_HD_MODE_MASK_SFT                       (0x3 << 0)

/* AFE_DAI2_CON0 */
#define DAI2_MODE_SFT                                  24
#define DAI2_MODE_MASK                                 0xf
#define DAI2_MODE_MASK_SFT                             (0xf << 24)
#define DAI2_SW_CWEAW_BUF_FUWW_SFT                     15
#define DAI2_SW_CWEAW_BUF_FUWW_MASK                    0x1
#define DAI2_SW_CWEAW_BUF_FUWW_MASK_SFT                (0x1 << 15)
#define DAI2_DUPWICATE_WW_SFT                          10
#define DAI2_DUPWICATE_WW_MASK                         0x1
#define DAI2_DUPWICATE_WW_MASK_SFT                     (0x1 << 10)
#define DAI2_MONO_SFT                                  8
#define DAI2_MONO_MASK                                 0x1
#define DAI2_MONO_MASK_SFT                             (0x1 << 8)
#define DAI2_WW_SIGN_SFT                               6
#define DAI2_WW_SIGN_MASK                              0x1
#define DAI2_WW_SIGN_MASK_SFT                          (0x1 << 6)
#define DAI2_NOWMAW_MODE_SFT                           5
#define DAI2_NOWMAW_MODE_MASK                          0x1
#define DAI2_NOWMAW_MODE_MASK_SFT                      (0x1 << 5)
#define DAI2_HAWIGN_SFT                                4
#define DAI2_HAWIGN_MASK                               0x1
#define DAI2_HAWIGN_MASK_SFT                           (0x1 << 4)
#define DAI2_HD_MODE_SFT                               0
#define DAI2_HD_MODE_MASK                              0x3
#define DAI2_HD_MODE_MASK_SFT                          (0x3 << 0)

/* AFE_MEMIF_CON0 */
#define CPU_COMPACT_MODE_SFT                           2
#define CPU_COMPACT_MODE_MASK                          0x1
#define CPU_COMPACT_MODE_MASK_SFT                      (0x1 << 2)
#define CPU_HD_AWIGN_SFT                               1
#define CPU_HD_AWIGN_MASK                              0x1
#define CPU_HD_AWIGN_MASK_SFT                          (0x1 << 1)
#define SYSWAM_SIGN_SFT                                0
#define SYSWAM_SIGN_MASK                               0x1
#define SYSWAM_SIGN_MASK_SFT                           (0x1 << 0)

/* AFE_HDMI_OUT_CON0 */
#define HDMI_CH_NUM_SFT                                24
#define HDMI_CH_NUM_MASK                               0xf
#define HDMI_CH_NUM_MASK_SFT                           (0xf << 24)
#define HDMI_OUT_MINWEN_SFT                            20
#define HDMI_OUT_MINWEN_MASK                           0xf
#define HDMI_OUT_MINWEN_MASK_SFT                       (0xf << 20)
#define HDMI_OUT_MAXWEN_SFT                            16
#define HDMI_OUT_MAXWEN_MASK                           0xf
#define HDMI_OUT_MAXWEN_MASK_SFT                       (0xf << 16)
#define HDMI_OUT_SW_CWEAW_BUF_EMPTY_SFT                15
#define HDMI_OUT_SW_CWEAW_BUF_EMPTY_MASK               0x1
#define HDMI_OUT_SW_CWEAW_BUF_EMPTY_MASK_SFT           (0x1 << 15)
#define HDMI_OUT_PBUF_SIZE_SFT                         12
#define HDMI_OUT_PBUF_SIZE_MASK                        0x3
#define HDMI_OUT_PBUF_SIZE_MASK_SFT                    (0x3 << 12)
#define HDMI_OUT_NOWMAW_MODE_SFT                       5
#define HDMI_OUT_NOWMAW_MODE_MASK                      0x1
#define HDMI_OUT_NOWMAW_MODE_MASK_SFT                  (0x1 << 5)
#define HDMI_OUT_HAWIGN_SFT                            4
#define HDMI_OUT_HAWIGN_MASK                           0x1
#define HDMI_OUT_HAWIGN_MASK_SFT                       (0x1 << 4)
#define HDMI_OUT_HD_MODE_SFT                           0
#define HDMI_OUT_HD_MODE_MASK                          0x3
#define HDMI_OUT_HD_MODE_MASK_SFT                      (0x3 << 0)

/* AFE_IWQ_MCU_CON0 */
#define IWQ31_MCU_ON_SFT                               31
#define IWQ31_MCU_ON_MASK                              0x1
#define IWQ31_MCU_ON_MASK_SFT                          (0x1 << 31)
#define IWQ26_MCU_ON_SFT                               26
#define IWQ26_MCU_ON_MASK                              0x1
#define IWQ26_MCU_ON_MASK_SFT                          (0x1 << 26)
#define IWQ25_MCU_ON_SFT                               25
#define IWQ25_MCU_ON_MASK                              0x1
#define IWQ25_MCU_ON_MASK_SFT                          (0x1 << 25)
#define IWQ24_MCU_ON_SFT                               24
#define IWQ24_MCU_ON_MASK                              0x1
#define IWQ24_MCU_ON_MASK_SFT                          (0x1 << 24)
#define IWQ23_MCU_ON_SFT                               23
#define IWQ23_MCU_ON_MASK                              0x1
#define IWQ23_MCU_ON_MASK_SFT                          (0x1 << 23)
#define IWQ22_MCU_ON_SFT                               22
#define IWQ22_MCU_ON_MASK                              0x1
#define IWQ22_MCU_ON_MASK_SFT                          (0x1 << 22)
#define IWQ21_MCU_ON_SFT                               21
#define IWQ21_MCU_ON_MASK                              0x1
#define IWQ21_MCU_ON_MASK_SFT                          (0x1 << 21)
#define IWQ20_MCU_ON_SFT                               20
#define IWQ20_MCU_ON_MASK                              0x1
#define IWQ20_MCU_ON_MASK_SFT                          (0x1 << 20)
#define IWQ19_MCU_ON_SFT                               19
#define IWQ19_MCU_ON_MASK                              0x1
#define IWQ19_MCU_ON_MASK_SFT                          (0x1 << 19)
#define IWQ18_MCU_ON_SFT                               18
#define IWQ18_MCU_ON_MASK                              0x1
#define IWQ18_MCU_ON_MASK_SFT                          (0x1 << 18)
#define IWQ17_MCU_ON_SFT                               17
#define IWQ17_MCU_ON_MASK                              0x1
#define IWQ17_MCU_ON_MASK_SFT                          (0x1 << 17)
#define IWQ16_MCU_ON_SFT                               16
#define IWQ16_MCU_ON_MASK                              0x1
#define IWQ16_MCU_ON_MASK_SFT                          (0x1 << 16)
#define IWQ15_MCU_ON_SFT                               15
#define IWQ15_MCU_ON_MASK                              0x1
#define IWQ15_MCU_ON_MASK_SFT                          (0x1 << 15)
#define IWQ14_MCU_ON_SFT                               14
#define IWQ14_MCU_ON_MASK                              0x1
#define IWQ14_MCU_ON_MASK_SFT                          (0x1 << 14)
#define IWQ13_MCU_ON_SFT                               13
#define IWQ13_MCU_ON_MASK                              0x1
#define IWQ13_MCU_ON_MASK_SFT                          (0x1 << 13)
#define IWQ12_MCU_ON_SFT                               12
#define IWQ12_MCU_ON_MASK                              0x1
#define IWQ12_MCU_ON_MASK_SFT                          (0x1 << 12)
#define IWQ11_MCU_ON_SFT                               11
#define IWQ11_MCU_ON_MASK                              0x1
#define IWQ11_MCU_ON_MASK_SFT                          (0x1 << 11)
#define IWQ10_MCU_ON_SFT                               10
#define IWQ10_MCU_ON_MASK                              0x1
#define IWQ10_MCU_ON_MASK_SFT                          (0x1 << 10)
#define IWQ9_MCU_ON_SFT                                9
#define IWQ9_MCU_ON_MASK                               0x1
#define IWQ9_MCU_ON_MASK_SFT                           (0x1 << 9)
#define IWQ8_MCU_ON_SFT                                8
#define IWQ8_MCU_ON_MASK                               0x1
#define IWQ8_MCU_ON_MASK_SFT                           (0x1 << 8)
#define IWQ7_MCU_ON_SFT                                7
#define IWQ7_MCU_ON_MASK                               0x1
#define IWQ7_MCU_ON_MASK_SFT                           (0x1 << 7)
#define IWQ6_MCU_ON_SFT                                6
#define IWQ6_MCU_ON_MASK                               0x1
#define IWQ6_MCU_ON_MASK_SFT                           (0x1 << 6)
#define IWQ5_MCU_ON_SFT                                5
#define IWQ5_MCU_ON_MASK                               0x1
#define IWQ5_MCU_ON_MASK_SFT                           (0x1 << 5)
#define IWQ4_MCU_ON_SFT                                4
#define IWQ4_MCU_ON_MASK                               0x1
#define IWQ4_MCU_ON_MASK_SFT                           (0x1 << 4)
#define IWQ3_MCU_ON_SFT                                3
#define IWQ3_MCU_ON_MASK                               0x1
#define IWQ3_MCU_ON_MASK_SFT                           (0x1 << 3)
#define IWQ2_MCU_ON_SFT                                2
#define IWQ2_MCU_ON_MASK                               0x1
#define IWQ2_MCU_ON_MASK_SFT                           (0x1 << 2)
#define IWQ1_MCU_ON_SFT                                1
#define IWQ1_MCU_ON_MASK                               0x1
#define IWQ1_MCU_ON_MASK_SFT                           (0x1 << 1)
#define IWQ0_MCU_ON_SFT                                0
#define IWQ0_MCU_ON_MASK                               0x1
#define IWQ0_MCU_ON_MASK_SFT                           (0x1 << 0)

/* AFE_IWQ_MCU_CON1 */
#define IWQ7_MCU_MODE_SFT                              28
#define IWQ7_MCU_MODE_MASK                             0xf
#define IWQ7_MCU_MODE_MASK_SFT                         (0xf << 28)
#define IWQ6_MCU_MODE_SFT                              24
#define IWQ6_MCU_MODE_MASK                             0xf
#define IWQ6_MCU_MODE_MASK_SFT                         (0xf << 24)
#define IWQ5_MCU_MODE_SFT                              20
#define IWQ5_MCU_MODE_MASK                             0xf
#define IWQ5_MCU_MODE_MASK_SFT                         (0xf << 20)
#define IWQ4_MCU_MODE_SFT                              16
#define IWQ4_MCU_MODE_MASK                             0xf
#define IWQ4_MCU_MODE_MASK_SFT                         (0xf << 16)
#define IWQ3_MCU_MODE_SFT                              12
#define IWQ3_MCU_MODE_MASK                             0xf
#define IWQ3_MCU_MODE_MASK_SFT                         (0xf << 12)
#define IWQ2_MCU_MODE_SFT                              8
#define IWQ2_MCU_MODE_MASK                             0xf
#define IWQ2_MCU_MODE_MASK_SFT                         (0xf << 8)
#define IWQ1_MCU_MODE_SFT                              4
#define IWQ1_MCU_MODE_MASK                             0xf
#define IWQ1_MCU_MODE_MASK_SFT                         (0xf << 4)
#define IWQ0_MCU_MODE_SFT                              0
#define IWQ0_MCU_MODE_MASK                             0xf
#define IWQ0_MCU_MODE_MASK_SFT                         (0xf << 0)

/* AFE_IWQ_MCU_CON2 */
#define IWQ15_MCU_MODE_SFT                             28
#define IWQ15_MCU_MODE_MASK                            0xf
#define IWQ15_MCU_MODE_MASK_SFT                        (0xf << 28)
#define IWQ14_MCU_MODE_SFT                             24
#define IWQ14_MCU_MODE_MASK                            0xf
#define IWQ14_MCU_MODE_MASK_SFT                        (0xf << 24)
#define IWQ13_MCU_MODE_SFT                             20
#define IWQ13_MCU_MODE_MASK                            0xf
#define IWQ13_MCU_MODE_MASK_SFT                        (0xf << 20)
#define IWQ12_MCU_MODE_SFT                             16
#define IWQ12_MCU_MODE_MASK                            0xf
#define IWQ12_MCU_MODE_MASK_SFT                        (0xf << 16)
#define IWQ11_MCU_MODE_SFT                             12
#define IWQ11_MCU_MODE_MASK                            0xf
#define IWQ11_MCU_MODE_MASK_SFT                        (0xf << 12)
#define IWQ10_MCU_MODE_SFT                             8
#define IWQ10_MCU_MODE_MASK                            0xf
#define IWQ10_MCU_MODE_MASK_SFT                        (0xf << 8)
#define IWQ9_MCU_MODE_SFT                              4
#define IWQ9_MCU_MODE_MASK                             0xf
#define IWQ9_MCU_MODE_MASK_SFT                         (0xf << 4)
#define IWQ8_MCU_MODE_SFT                              0
#define IWQ8_MCU_MODE_MASK                             0xf
#define IWQ8_MCU_MODE_MASK_SFT                         (0xf << 0)

/* AFE_IWQ_MCU_CON3 */
#define IWQ23_MCU_MODE_SFT                             28
#define IWQ23_MCU_MODE_MASK                            0xf
#define IWQ23_MCU_MODE_MASK_SFT                        (0xf << 28)
#define IWQ22_MCU_MODE_SFT                             24
#define IWQ22_MCU_MODE_MASK                            0xf
#define IWQ22_MCU_MODE_MASK_SFT                        (0xf << 24)
#define IWQ21_MCU_MODE_SFT                             20
#define IWQ21_MCU_MODE_MASK                            0xf
#define IWQ21_MCU_MODE_MASK_SFT                        (0xf << 20)
#define IWQ20_MCU_MODE_SFT                             16
#define IWQ20_MCU_MODE_MASK                            0xf
#define IWQ20_MCU_MODE_MASK_SFT                        (0xf << 16)
#define IWQ19_MCU_MODE_SFT                             12
#define IWQ19_MCU_MODE_MASK                            0xf
#define IWQ19_MCU_MODE_MASK_SFT                        (0xf << 12)
#define IWQ18_MCU_MODE_SFT                             8
#define IWQ18_MCU_MODE_MASK                            0xf
#define IWQ18_MCU_MODE_MASK_SFT                        (0xf << 8)
#define IWQ17_MCU_MODE_SFT                             4
#define IWQ17_MCU_MODE_MASK                            0xf
#define IWQ17_MCU_MODE_MASK_SFT                        (0xf << 4)
#define IWQ16_MCU_MODE_SFT                             0
#define IWQ16_MCU_MODE_MASK                            0xf
#define IWQ16_MCU_MODE_MASK_SFT                        (0xf << 0)

/* AFE_IWQ_MCU_CON4 */
#define IWQ26_MCU_MODE_SFT                             8
#define IWQ26_MCU_MODE_MASK                            0xf
#define IWQ26_MCU_MODE_MASK_SFT                        (0xf << 8)
#define IWQ25_MCU_MODE_SFT                             4
#define IWQ25_MCU_MODE_MASK                            0xf
#define IWQ25_MCU_MODE_MASK_SFT                        (0xf << 4)
#define IWQ24_MCU_MODE_SFT                             0
#define IWQ24_MCU_MODE_MASK                            0xf
#define IWQ24_MCU_MODE_MASK_SFT                        (0xf << 0)

/* AFE_IWQ_MCU_CWW */
#define IWQ31_MCU_CWW_SFT                              31
#define IWQ31_MCU_CWW_MASK                             0x1
#define IWQ31_MCU_CWW_MASK_SFT                         (0x1 << 31)
#define IWQ26_MCU_CWW_SFT                              26
#define IWQ26_MCU_CWW_MASK                             0x1
#define IWQ26_MCU_CWW_MASK_SFT                         (0x1 << 26)
#define IWQ25_MCU_CWW_SFT                              25
#define IWQ25_MCU_CWW_MASK                             0x1
#define IWQ25_MCU_CWW_MASK_SFT                         (0x1 << 25)
#define IWQ24_MCU_CWW_SFT                              24
#define IWQ24_MCU_CWW_MASK                             0x1
#define IWQ24_MCU_CWW_MASK_SFT                         (0x1 << 24)
#define IWQ23_MCU_CWW_SFT                              23
#define IWQ23_MCU_CWW_MASK                             0x1
#define IWQ23_MCU_CWW_MASK_SFT                         (0x1 << 23)
#define IWQ22_MCU_CWW_SFT                              22
#define IWQ22_MCU_CWW_MASK                             0x1
#define IWQ22_MCU_CWW_MASK_SFT                         (0x1 << 22)
#define IWQ21_MCU_CWW_SFT                              21
#define IWQ21_MCU_CWW_MASK                             0x1
#define IWQ21_MCU_CWW_MASK_SFT                         (0x1 << 21)
#define IWQ20_MCU_CWW_SFT                              20
#define IWQ20_MCU_CWW_MASK                             0x1
#define IWQ20_MCU_CWW_MASK_SFT                         (0x1 << 20)
#define IWQ19_MCU_CWW_SFT                              19
#define IWQ19_MCU_CWW_MASK                             0x1
#define IWQ19_MCU_CWW_MASK_SFT                         (0x1 << 19)
#define IWQ18_MCU_CWW_SFT                              18
#define IWQ18_MCU_CWW_MASK                             0x1
#define IWQ18_MCU_CWW_MASK_SFT                         (0x1 << 18)
#define IWQ17_MCU_CWW_SFT                              17
#define IWQ17_MCU_CWW_MASK                             0x1
#define IWQ17_MCU_CWW_MASK_SFT                         (0x1 << 17)
#define IWQ16_MCU_CWW_SFT                              16
#define IWQ16_MCU_CWW_MASK                             0x1
#define IWQ16_MCU_CWW_MASK_SFT                         (0x1 << 16)
#define IWQ15_MCU_CWW_SFT                              15
#define IWQ15_MCU_CWW_MASK                             0x1
#define IWQ15_MCU_CWW_MASK_SFT                         (0x1 << 15)
#define IWQ14_MCU_CWW_SFT                              14
#define IWQ14_MCU_CWW_MASK                             0x1
#define IWQ14_MCU_CWW_MASK_SFT                         (0x1 << 14)
#define IWQ13_MCU_CWW_SFT                              13
#define IWQ13_MCU_CWW_MASK                             0x1
#define IWQ13_MCU_CWW_MASK_SFT                         (0x1 << 13)
#define IWQ12_MCU_CWW_SFT                              12
#define IWQ12_MCU_CWW_MASK                             0x1
#define IWQ12_MCU_CWW_MASK_SFT                         (0x1 << 12)
#define IWQ11_MCU_CWW_SFT                              11
#define IWQ11_MCU_CWW_MASK                             0x1
#define IWQ11_MCU_CWW_MASK_SFT                         (0x1 << 11)
#define IWQ10_MCU_CWW_SFT                              10
#define IWQ10_MCU_CWW_MASK                             0x1
#define IWQ10_MCU_CWW_MASK_SFT                         (0x1 << 10)
#define IWQ9_MCU_CWW_SFT                               9
#define IWQ9_MCU_CWW_MASK                              0x1
#define IWQ9_MCU_CWW_MASK_SFT                          (0x1 << 9)
#define IWQ8_MCU_CWW_SFT                               8
#define IWQ8_MCU_CWW_MASK                              0x1
#define IWQ8_MCU_CWW_MASK_SFT                          (0x1 << 8)
#define IWQ7_MCU_CWW_SFT                               7
#define IWQ7_MCU_CWW_MASK                              0x1
#define IWQ7_MCU_CWW_MASK_SFT                          (0x1 << 7)
#define IWQ6_MCU_CWW_SFT                               6
#define IWQ6_MCU_CWW_MASK                              0x1
#define IWQ6_MCU_CWW_MASK_SFT                          (0x1 << 6)
#define IWQ5_MCU_CWW_SFT                               5
#define IWQ5_MCU_CWW_MASK                              0x1
#define IWQ5_MCU_CWW_MASK_SFT                          (0x1 << 5)
#define IWQ4_MCU_CWW_SFT                               4
#define IWQ4_MCU_CWW_MASK                              0x1
#define IWQ4_MCU_CWW_MASK_SFT                          (0x1 << 4)
#define IWQ3_MCU_CWW_SFT                               3
#define IWQ3_MCU_CWW_MASK                              0x1
#define IWQ3_MCU_CWW_MASK_SFT                          (0x1 << 3)
#define IWQ2_MCU_CWW_SFT                               2
#define IWQ2_MCU_CWW_MASK                              0x1
#define IWQ2_MCU_CWW_MASK_SFT                          (0x1 << 2)
#define IWQ1_MCU_CWW_SFT                               1
#define IWQ1_MCU_CWW_MASK                              0x1
#define IWQ1_MCU_CWW_MASK_SFT                          (0x1 << 1)
#define IWQ0_MCU_CWW_SFT                               0
#define IWQ0_MCU_CWW_MASK                              0x1
#define IWQ0_MCU_CWW_MASK_SFT                          (0x1 << 0)

/* AFE_IWQ_MCU_EN */
#define IWQ31_MCU_EN_SFT                               31
#define IWQ30_MCU_EN_SFT                               30
#define IWQ29_MCU_EN_SFT                               29
#define IWQ28_MCU_EN_SFT                               28
#define IWQ27_MCU_EN_SFT                               27
#define IWQ26_MCU_EN_SFT                               26
#define IWQ25_MCU_EN_SFT                               25
#define IWQ24_MCU_EN_SFT                               24
#define IWQ23_MCU_EN_SFT                               23
#define IWQ22_MCU_EN_SFT                               22
#define IWQ21_MCU_EN_SFT                               21
#define IWQ20_MCU_EN_SFT                               20
#define IWQ19_MCU_EN_SFT                               19
#define IWQ18_MCU_EN_SFT                               18
#define IWQ17_MCU_EN_SFT                               17
#define IWQ16_MCU_EN_SFT                               16
#define IWQ15_MCU_EN_SFT                               15
#define IWQ14_MCU_EN_SFT                               14
#define IWQ13_MCU_EN_SFT                               13
#define IWQ12_MCU_EN_SFT                               12
#define IWQ11_MCU_EN_SFT                               11
#define IWQ10_MCU_EN_SFT                               10
#define IWQ9_MCU_EN_SFT                                9
#define IWQ8_MCU_EN_SFT                                8
#define IWQ7_MCU_EN_SFT                                7
#define IWQ6_MCU_EN_SFT                                6
#define IWQ5_MCU_EN_SFT                                5
#define IWQ4_MCU_EN_SFT                                4
#define IWQ3_MCU_EN_SFT                                3
#define IWQ2_MCU_EN_SFT                                2
#define IWQ1_MCU_EN_SFT                                1
#define IWQ0_MCU_EN_SFT                                0

/* AFE_IWQ_MCU_SCP_EN */
#define IWQ31_MCU_SCP_EN_SFT                           31
#define IWQ30_MCU_SCP_EN_SFT                           30
#define IWQ29_MCU_SCP_EN_SFT                           29
#define IWQ28_MCU_SCP_EN_SFT                           28
#define IWQ27_MCU_SCP_EN_SFT                           27
#define IWQ26_MCU_SCP_EN_SFT                           26
#define IWQ25_MCU_SCP_EN_SFT                           25
#define IWQ24_MCU_SCP_EN_SFT                           24
#define IWQ23_MCU_SCP_EN_SFT                           23
#define IWQ22_MCU_SCP_EN_SFT                           22
#define IWQ21_MCU_SCP_EN_SFT                           21
#define IWQ20_MCU_SCP_EN_SFT                           20
#define IWQ19_MCU_SCP_EN_SFT                           19
#define IWQ18_MCU_SCP_EN_SFT                           18
#define IWQ17_MCU_SCP_EN_SFT                           17
#define IWQ16_MCU_SCP_EN_SFT                           16
#define IWQ15_MCU_SCP_EN_SFT                           15
#define IWQ14_MCU_SCP_EN_SFT                           14
#define IWQ13_MCU_SCP_EN_SFT                           13
#define IWQ12_MCU_SCP_EN_SFT                           12
#define IWQ11_MCU_SCP_EN_SFT                           11
#define IWQ10_MCU_SCP_EN_SFT                           10
#define IWQ9_MCU_SCP_EN_SFT                            9
#define IWQ8_MCU_SCP_EN_SFT                            8
#define IWQ7_MCU_SCP_EN_SFT                            7
#define IWQ6_MCU_SCP_EN_SFT                            6
#define IWQ5_MCU_SCP_EN_SFT                            5
#define IWQ4_MCU_SCP_EN_SFT                            4
#define IWQ3_MCU_SCP_EN_SFT                            3
#define IWQ2_MCU_SCP_EN_SFT                            2
#define IWQ1_MCU_SCP_EN_SFT                            1
#define IWQ0_MCU_SCP_EN_SFT                            0

/* AFE_TDM_CON1 */
#define TDM_EN_SFT                                     0
#define TDM_EN_MASK                                    0x1
#define TDM_EN_MASK_SFT                                (0x1 << 0)
#define WWCK_INVEWSE_SFT                               2
#define WWCK_INVEWSE_MASK                              0x1
#define WWCK_INVEWSE_MASK_SFT                          (0x1 << 2)
#define DEWAY_DATA_SFT                                 3
#define DEWAY_DATA_MASK                                0x1
#define DEWAY_DATA_MASK_SFT                            (0x1 << 3)
#define WEFT_AWIGN_SFT                                 4
#define WEFT_AWIGN_MASK                                0x1
#define WEFT_AWIGN_MASK_SFT                            (0x1 << 4)
#define WWEN_SFT                                       8
#define WWEN_MASK                                      0x3
#define WWEN_MASK_SFT                                  (0x3 << 8)
#define CHANNEW_NUM_SFT                                10
#define CHANNEW_NUM_MASK                               0x3
#define CHANNEW_NUM_MASK_SFT                           (0x3 << 10)
#define CHANNEW_BCK_CYCWES_SFT                         12
#define CHANNEW_BCK_CYCWES_MASK                        0x3
#define CHANNEW_BCK_CYCWES_MASK_SFT                    (0x3 << 12)
#define DAC_BIT_NUM_SFT                                16
#define DAC_BIT_NUM_MASK                               0x1f
#define DAC_BIT_NUM_MASK_SFT                           (0x1f << 16)
#define WWCK_TDM_WIDTH_SFT                             24
#define WWCK_TDM_WIDTH_MASK                            0xff
#define WWCK_TDM_WIDTH_MASK_SFT                        (0xff << 24)

/* AFE_TDM_CON2 */
#define ST_CH_PAIW_SOUT0_SFT                           0
#define ST_CH_PAIW_SOUT0_MASK                          0x7
#define ST_CH_PAIW_SOUT0_MASK_SFT                      (0x7 << 0)
#define ST_CH_PAIW_SOUT1_SFT                           4
#define ST_CH_PAIW_SOUT1_MASK                          0x7
#define ST_CH_PAIW_SOUT1_MASK_SFT                      (0x7 << 4)
#define ST_CH_PAIW_SOUT2_SFT                           8
#define ST_CH_PAIW_SOUT2_MASK                          0x7
#define ST_CH_PAIW_SOUT2_MASK_SFT                      (0x7 << 8)
#define ST_CH_PAIW_SOUT3_SFT                           12
#define ST_CH_PAIW_SOUT3_MASK                          0x7
#define ST_CH_PAIW_SOUT3_MASK_SFT                      (0x7 << 12)
#define TDM_FIX_VAWUE_SEW_SFT                          16
#define TDM_FIX_VAWUE_SEW_MASK                         0x1
#define TDM_FIX_VAWUE_SEW_MASK_SFT                     (0x1 << 16)
#define TDM_I2S_WOOPBACK_SFT                           20
#define TDM_I2S_WOOPBACK_MASK                          0x1
#define TDM_I2S_WOOPBACK_MASK_SFT                      (0x1 << 20)
#define TDM_I2S_WOOPBACK_CH_SFT                        21
#define TDM_I2S_WOOPBACK_CH_MASK                       0x3
#define TDM_I2S_WOOPBACK_CH_MASK_SFT                   (0x3 << 21)
#define TDM_FIX_VAWUE_SFT                              24
#define TDM_FIX_VAWUE_MASK                             0xff
#define TDM_FIX_VAWUE_MASK_SFT                         (0xff << 24)

/* AFE_HDMI_CONN0 */
#define HDMI_O_7_SFT                                   21
#define HDMI_O_7_MASK                                  0x7
#define HDMI_O_7_MASK_SFT                              (0x7 << 21)
#define HDMI_O_6_SFT                                   18
#define HDMI_O_6_MASK                                  0x7
#define HDMI_O_6_MASK_SFT                              (0x7 << 18)
#define HDMI_O_5_SFT                                   15
#define HDMI_O_5_MASK                                  0x7
#define HDMI_O_5_MASK_SFT                              (0x7 << 15)
#define HDMI_O_4_SFT                                   12
#define HDMI_O_4_MASK                                  0x7
#define HDMI_O_4_MASK_SFT                              (0x7 << 12)
#define HDMI_O_3_SFT                                   9
#define HDMI_O_3_MASK                                  0x7
#define HDMI_O_3_MASK_SFT                              (0x7 << 9)
#define HDMI_O_2_SFT                                   6
#define HDMI_O_2_MASK                                  0x7
#define HDMI_O_2_MASK_SFT                              (0x7 << 6)
#define HDMI_O_1_SFT                                   3
#define HDMI_O_1_MASK                                  0x7
#define HDMI_O_1_MASK_SFT                              (0x7 << 3)
#define HDMI_O_0_SFT                                   0
#define HDMI_O_0_MASK                                  0x7
#define HDMI_O_0_MASK_SFT                              (0x7 << 0)

/* AFE_AUD_PAD_TOP */
#define AUD_PAD_TOP_MON_SFT                            15
#define AUD_PAD_TOP_MON_MASK                           0x1ffff
#define AUD_PAD_TOP_MON_MASK_SFT                       (0x1ffff << 15)
#define AUD_PAD_TOP_FIFO_WSP_SFT                       4
#define AUD_PAD_TOP_FIFO_WSP_MASK                      0xf
#define AUD_PAD_TOP_FIFO_WSP_MASK_SFT                  (0xf << 4)
#define WG_WX_PWOTOCOW2_SFT                            3
#define WG_WX_PWOTOCOW2_MASK                           0x1
#define WG_WX_PWOTOCOW2_MASK_SFT                       (0x1 << 3)
#define WESEWVDED_01_SFT                               1
#define WESEWVDED_01_MASK                              0x3
#define WESEWVDED_01_MASK_SFT                          (0x3 << 1)
#define WG_WX_FIFO_ON_SFT                              0
#define WG_WX_FIFO_ON_MASK                             0x1
#define WG_WX_FIFO_ON_MASK_SFT                         (0x1 << 0)

/* AFE_ADDA_MTKAIF_SYNCWOWD_CFG */
#define WG_ADDA6_MTKAIF_WX_SYNC_WOWD2_DISABWE_SFT      23
#define WG_ADDA6_MTKAIF_WX_SYNC_WOWD2_DISABWE_MASK     0x1
#define WG_ADDA6_MTKAIF_WX_SYNC_WOWD2_DISABWE_MASK_SFT (0x1 << 23)

/* AFE_ADDA_MTKAIF_WX_CFG0 */
#define MTKAIF_WXIF_VOICE_MODE_SFT                     20
#define MTKAIF_WXIF_VOICE_MODE_MASK                    0xf
#define MTKAIF_WXIF_VOICE_MODE_MASK_SFT                (0xf << 20)
#define MTKAIF_WXIF_DETECT_ON_SFT                      16
#define MTKAIF_WXIF_DETECT_ON_MASK                     0x1
#define MTKAIF_WXIF_DETECT_ON_MASK_SFT                 (0x1 << 16)
#define MTKAIF_WXIF_DATA_BIT_SFT                       8
#define MTKAIF_WXIF_DATA_BIT_MASK                      0x7
#define MTKAIF_WXIF_DATA_BIT_MASK_SFT                  (0x7 << 8)
#define MTKAIF_WXIF_FIFO_WSP_SFT                       4
#define MTKAIF_WXIF_FIFO_WSP_MASK                      0x7
#define MTKAIF_WXIF_FIFO_WSP_MASK_SFT                  (0x7 << 4)
#define MTKAIF_WXIF_DATA_MODE_SFT                      0
#define MTKAIF_WXIF_DATA_MODE_MASK                     0x1
#define MTKAIF_WXIF_DATA_MODE_MASK_SFT                 (0x1 << 0)

/* GENEWAW_ASWC_MODE */
#define GENEWAW2_ASWCOUT_MODE_SFT                      12
#define GENEWAW2_ASWCOUT_MODE_MASK                     0xf
#define GENEWAW2_ASWCOUT_MODE_MASK_SFT                 (0xf << 12)
#define GENEWAW2_ASWCIN_MODE_SFT                       8
#define GENEWAW2_ASWCIN_MODE_MASK                      0xf
#define GENEWAW2_ASWCIN_MODE_MASK_SFT                  (0xf << 8)
#define GENEWAW1_ASWCOUT_MODE_SFT                      4
#define GENEWAW1_ASWCOUT_MODE_MASK                     0xf
#define GENEWAW1_ASWCOUT_MODE_MASK_SFT                 (0xf << 4)
#define GENEWAW1_ASWCIN_MODE_SFT                       0
#define GENEWAW1_ASWCIN_MODE_MASK                      0xf
#define GENEWAW1_ASWCIN_MODE_MASK_SFT                  (0xf << 0)

/* GENEWAW_ASWC_EN_ON */
#define GENEWAW2_ASWC_EN_ON_SFT                        1
#define GENEWAW2_ASWC_EN_ON_MASK                       0x1
#define GENEWAW2_ASWC_EN_ON_MASK_SFT                   (0x1 << 1)
#define GENEWAW1_ASWC_EN_ON_SFT                        0
#define GENEWAW1_ASWC_EN_ON_MASK                       0x1
#define GENEWAW1_ASWC_EN_ON_MASK_SFT                   (0x1 << 0)

/* AFE_GENEWAW1_ASWC_2CH_CON0 */
#define G_SWC_CHSET_STW_CWW_SFT                        4
#define G_SWC_CHSET_STW_CWW_MASK                       0x1
#define G_SWC_CHSET_STW_CWW_MASK_SFT                   (0x1 << 4)
#define G_SWC_CHSET_ON_SFT                             2
#define G_SWC_CHSET_ON_MASK                            0x1
#define G_SWC_CHSET_ON_MASK_SFT                        (0x1 << 2)
#define G_SWC_COEFF_SWAM_CTWW_SFT                      1
#define G_SWC_COEFF_SWAM_CTWW_MASK                     0x1
#define G_SWC_COEFF_SWAM_CTWW_MASK_SFT                 (0x1 << 1)
#define G_SWC_ASM_ON_SFT                               0
#define G_SWC_ASM_ON_MASK                              0x1
#define G_SWC_ASM_ON_MASK_SFT                          (0x1 << 0)

/* AFE_GENEWAW1_ASWC_2CH_CON3 */
#define G_SWC_ASM_FWEQ_4_SFT                           0
#define G_SWC_ASM_FWEQ_4_MASK                          0xffffff
#define G_SWC_ASM_FWEQ_4_MASK_SFT                      (0xffffff << 0)

/* AFE_GENEWAW1_ASWC_2CH_CON4 */
#define G_SWC_ASM_FWEQ_5_SFT                           0
#define G_SWC_ASM_FWEQ_5_MASK                          0xffffff
#define G_SWC_ASM_FWEQ_5_MASK_SFT                      (0xffffff << 0)

/* AFE_GENEWAW1_ASWC_2CH_CON13 */
#define G_SWC_COEFF_SWAM_ADW_SFT                       0
#define G_SWC_COEFF_SWAM_ADW_MASK                      0x3f
#define G_SWC_COEFF_SWAM_ADW_MASK_SFT                  (0x3f << 0)

/* AFE_GENEWAW1_ASWC_2CH_CON2 */
#define G_SWC_CHSET_O16BIT_SFT                         19
#define G_SWC_CHSET_O16BIT_MASK                        0x1
#define G_SWC_CHSET_O16BIT_MASK_SFT                    (0x1 << 19)
#define G_SWC_CHSET_CWW_IIW_HISTOWY_SFT                17
#define G_SWC_CHSET_CWW_IIW_HISTOWY_MASK               0x1
#define G_SWC_CHSET_CWW_IIW_HISTOWY_MASK_SFT           (0x1 << 17)
#define G_SWC_CHSET_IS_MONO_SFT                        16
#define G_SWC_CHSET_IS_MONO_MASK                       0x1
#define G_SWC_CHSET_IS_MONO_MASK_SFT                   (0x1 << 16)
#define G_SWC_CHSET_IIW_EN_SFT                         11
#define G_SWC_CHSET_IIW_EN_MASK                        0x1
#define G_SWC_CHSET_IIW_EN_MASK_SFT                    (0x1 << 11)
#define G_SWC_CHSET_IIW_STAGE_SFT                      8
#define G_SWC_CHSET_IIW_STAGE_MASK                     0x7
#define G_SWC_CHSET_IIW_STAGE_MASK_SFT                 (0x7 << 8)
#define G_SWC_CHSET_STW_CWW_WU_SFT                     5
#define G_SWC_CHSET_STW_CWW_WU_MASK                    0x1
#define G_SWC_CHSET_STW_CWW_WU_MASK_SFT                (0x1 << 5)
#define G_SWC_CHSET_ON_SFT                             2
#define G_SWC_CHSET_ON_MASK                            0x1
#define G_SWC_CHSET_ON_MASK_SFT                        (0x1 << 2)
#define G_SWC_COEFF_SWAM_CTWW_SFT                      1
#define G_SWC_COEFF_SWAM_CTWW_MASK                     0x1
#define G_SWC_COEFF_SWAM_CTWW_MASK_SFT                 (0x1 << 1)
#define G_SWC_ASM_ON_SFT                               0
#define G_SWC_ASM_ON_MASK                              0x1
#define G_SWC_ASM_ON_MASK_SFT                          (0x1 << 0)

/* AFE_ADDA_DW_SDM_AUTO_WESET_CON */
#define ADDA_SDM_AUTO_WESET_ONOFF_SFT                  31
#define ADDA_SDM_AUTO_WESET_ONOFF_MASK                 0x1
#define ADDA_SDM_AUTO_WESET_ONOFF_MASK_SFT             (0x1 << 31)

/* AFE_ADDA_3WD_DAC_DW_SDM_AUTO_WESET_CON */
#define ADDA_3WD_DAC_SDM_AUTO_WESET_ONOFF_SFT          31
#define ADDA_3WD_DAC_SDM_AUTO_WESET_ONOFF_MASK         0x1
#define ADDA_3WD_DAC_SDM_AUTO_WESET_ONOFF_MASK_SFT     (0x1 << 31)

/* AFE_TINY_CONN0 */
#define O_3_CFG_SFT                                    24
#define O_3_CFG_MASK                                   0x1f
#define O_3_CFG_MASK_SFT                               (0x1f << 24)
#define O_2_CFG_SFT                                    16
#define O_2_CFG_MASK                                   0x1f
#define O_2_CFG_MASK_SFT                               (0x1f << 16)
#define O_1_CFG_SFT                                    8
#define O_1_CFG_MASK                                   0x1f
#define O_1_CFG_MASK_SFT                               (0x1f << 8)
#define O_0_CFG_SFT                                    0
#define O_0_CFG_MASK                                   0x1f
#define O_0_CFG_MASK_SFT                               (0x1f << 0)

/* AFE_TINY_CONN5 */
#define O_23_CFG_SFT                                    24
#define O_23_CFG_MASK                                   0x1f
#define O_23_CFG_MASK_SFT                               (0x1f << 24)
#define O_22_CFG_SFT                                    16
#define O_22_CFG_MASK                                   0x1f
#define O_22_CFG_MASK_SFT                               (0x1f << 16)
#define O_21_CFG_SFT                                    8
#define O_21_CFG_MASK                                   0x1f
#define O_21_CFG_MASK_SFT                               (0x1f << 8)
#define O_20_CFG_SFT                                    0
#define O_20_CFG_MASK                                   0x1f
#define O_20_CFG_MASK_SFT                               (0x1f << 0)

/* AFE_MEMIF_CONN */
#define VUW6_USE_TINY_SFT                              8
#define VUW6_USE_TINY_MASK                             1
#define VUW6_USE_TINY_MASK_SFT                         (0x1 << 8)
#define VUW5_USE_TINY_SFT                              7
#define VUW5_USE_TINY_MASK                             1
#define VUW5_USE_TINY_MASK_SFT                         (0x1 << 7)
#define VUW4_USE_TINY_SFT                              6
#define VUW4_USE_TINY_MASK                             1
#define VUW4_USE_TINY_MASK_SFT                         (0x1 << 6)
#define VUW3_USE_TINY_SFT                              5
#define VUW3_USE_TINY_MASK                             1
#define VUW3_USE_TINY_MASK_SFT                         (0x1 << 5)
#define AWB2_USE_TINY_SFT                              4
#define AWB2_USE_TINY_MASK                             1
#define AWB2_USE_TINY_MASK_SFT                         (0x1 << 4)
#define AWB_USE_TINY_SFT                               3
#define AWB_USE_TINY_MASK                              1
#define AWB_USE_TINY_MASK_SFT                          (0x1 << 3)
#define VUW12_USE_TINY_SFT                             2
#define VUW12_USE_TINY_MASK                            1
#define VUW12_USE_TINY_MASK_SFT                        (0x1 << 2)
#define VUW2_USE_TINY_SFT                              1
#define VUW2_USE_TINY_MASK                             1
#define VUW2_USE_TINY_MASK_SFT                         (0x1 << 1)
#define VUW1_USE_TINY_SFT                              0
#define VUW1_USE_TINY_MASK                             1
#define VUW1_USE_TINY_MASK_SFT                         (0x1 << 0)

/* AFE_ASWC_2CH_CON0 */
#define CON0_CHSET_STW_CWW_SFT                         4
#define CON0_CHSET_STW_CWW_MASK                        1
#define CON0_CHSET_STW_CWW_MASK_SFT                    (0x1 << 4)
#define CON0_ASM_ON_SFT                                0
#define CON0_ASM_ON_MASK                               1
#define CON0_ASM_ON_MASK_SFT                           (0x1 << 0)

/* AFE_ASWC_2CH_CON5 */
#define CAWI_EN_SFT                                    0
#define CAWI_EN_MASK                                   1
#define CAWI_EN_MASK_SFT                               (0x1 << 0)

#define AUDIO_TOP_CON0                                 0x0000
#define AUDIO_TOP_CON1                                 0x0004
#define AUDIO_TOP_CON2                                 0x0008
#define AUDIO_TOP_CON3                                 0x000c
#define AFE_DAC_CON0                                   0x0010
#define AFE_I2S_CON                                    0x0018
#define AFE_CONN0                                      0x0020
#define AFE_CONN1                                      0x0024
#define AFE_CONN2                                      0x0028
#define AFE_CONN3                                      0x002c
#define AFE_CONN4                                      0x0030
#define AFE_I2S_CON1                                   0x0034
#define AFE_I2S_CON2                                   0x0038
#define AFE_I2S_CON3                                   0x0040
#define AFE_CONN5                                      0x0044
#define AFE_CONN_24BIT                                 0x0048
#define AFE_DW1_CON0                                   0x004c
#define AFE_DW1_BASE_MSB                               0x0050
#define AFE_DW1_BASE                                   0x0054
#define AFE_DW1_CUW_MSB                                0x0058
#define AFE_DW1_CUW                                    0x005c
#define AFE_DW1_END_MSB                                0x0060
#define AFE_DW1_END                                    0x0064
#define AFE_DW2_CON0                                   0x0068
#define AFE_DW2_BASE_MSB                               0x006c
#define AFE_DW2_BASE                                   0x0070
#define AFE_DW2_CUW_MSB                                0x0074
#define AFE_DW2_CUW                                    0x0078
#define AFE_DW2_END_MSB                                0x007c
#define AFE_DW2_END                                    0x0080
#define AFE_DW3_CON0                                   0x0084
#define AFE_DW3_BASE_MSB                               0x0088
#define AFE_DW3_BASE                                   0x008c
#define AFE_DW3_CUW_MSB                                0x0090
#define AFE_DW3_CUW                                    0x0094
#define AFE_DW3_END_MSB                                0x0098
#define AFE_DW3_END                                    0x009c
#define AFE_CONN6                                      0x00bc
#define AFE_DW4_CON0                                   0x00cc
#define AFE_DW4_BASE_MSB                               0x00d0
#define AFE_DW4_BASE                                   0x00d4
#define AFE_DW4_CUW_MSB                                0x00d8
#define AFE_DW4_CUW                                    0x00dc
#define AFE_DW4_END_MSB                                0x00e0
#define AFE_DW4_END                                    0x00e4
#define AFE_DW12_CON0                                  0x00e8
#define AFE_DW12_BASE_MSB                              0x00ec
#define AFE_DW12_BASE                                  0x00f0
#define AFE_DW12_CUW_MSB                               0x00f4
#define AFE_DW12_CUW                                   0x00f8
#define AFE_DW12_END_MSB                               0x00fc
#define AFE_DW12_END                                   0x0100
#define AFE_ADDA_DW_SWC2_CON0                          0x0108
#define AFE_ADDA_DW_SWC2_CON1                          0x010c
#define AFE_ADDA_UW_SWC_CON0                           0x0114
#define AFE_ADDA_UW_SWC_CON1                           0x0118
#define AFE_ADDA_TOP_CON0                              0x0120
#define AFE_ADDA_UW_DW_CON0                            0x0124
#define AFE_ADDA_SWC_DEBUG                             0x012c
#define AFE_ADDA_SWC_DEBUG_MON0                        0x0130
#define AFE_ADDA_SWC_DEBUG_MON1                        0x0134
#define AFE_ADDA_UW_SWC_MON0                           0x0148
#define AFE_ADDA_UW_SWC_MON1                           0x014c
#define AFE_SECUWE_CON0                                0x0150
#define AFE_SWAM_BOUND                                 0x0154
#define AFE_SECUWE_CON1                                0x0158
#define AFE_SECUWE_CONN0                               0x015c
#define AFE_VUW_CON0                                   0x0170
#define AFE_VUW_BASE_MSB                               0x0174
#define AFE_VUW_BASE                                   0x0178
#define AFE_VUW_CUW_MSB                                0x017c
#define AFE_VUW_CUW                                    0x0180
#define AFE_VUW_END_MSB                                0x0184
#define AFE_VUW_END                                    0x0188
#define AFE_ADDA_3WD_DAC_DW_SDM_AUTO_WESET_CON         0x018c
#define AFE_ADDA_3WD_DAC_DW_SWC2_CON0                  0x0190
#define AFE_ADDA_3WD_DAC_DW_SWC2_CON1                  0x0194
#define AFE_ADDA_3WD_DAC_PWEDIS_CON0                   0x01a0
#define AFE_ADDA_3WD_DAC_PWEDIS_CON1                   0x01a4
#define AFE_ADDA_3WD_DAC_PWEDIS_CON2                   0x01a8
#define AFE_ADDA_3WD_DAC_PWEDIS_CON3                   0x01ac
#define AFE_ADDA_3WD_DAC_DW_SDM_DCCOMP_CON             0x01b0
#define AFE_ADDA_3WD_DAC_DW_SDM_TEST                   0x01b4
#define AFE_ADDA_3WD_DAC_DW_DC_COMP_CFG0               0x01b8
#define AFE_ADDA_3WD_DAC_DW_DC_COMP_CFG1               0x01bc
#define AFE_ADDA_3WD_DAC_DW_SDM_FIFO_MON               0x01c0
#define AFE_ADDA_3WD_DAC_DW_SWC_WCH_MON                0x01c4
#define AFE_ADDA_3WD_DAC_DW_SWC_WCH_MON                0x01c8
#define AFE_ADDA_3WD_DAC_DW_SDM_OUT_MON                0x01cc
#define AFE_SIDETONE_DEBUG                             0x01d0
#define AFE_SIDETONE_MON                               0x01d4
#define AFE_ADDA_3WD_DAC_DW_SDM_DITHEW_CON             0x01d8
#define AFE_SINEGEN_CON2                               0x01dc
#define AFE_SIDETONE_CON0                              0x01e0
#define AFE_SIDETONE_COEFF                             0x01e4
#define AFE_SIDETONE_CON1                              0x01e8
#define AFE_SIDETONE_GAIN                              0x01ec
#define AFE_SINEGEN_CON0                               0x01f0
#define AFE_I2S_MON2                                   0x01f8
#define AFE_SINEGEN_CON_TDM                            0x01fc
#define AFE_TOP_CON0                                   0x0200
#define AFE_VUW2_CON0                                  0x020c
#define AFE_VUW2_BASE_MSB                              0x0210
#define AFE_VUW2_BASE                                  0x0214
#define AFE_VUW2_CUW_MSB                               0x0218
#define AFE_VUW2_CUW                                   0x021c
#define AFE_VUW2_END_MSB                               0x0220
#define AFE_VUW2_END                                   0x0224
#define AFE_VUW3_CON0                                  0x0228
#define AFE_VUW3_BASE_MSB                              0x022c
#define AFE_VUW3_BASE                                  0x0230
#define AFE_VUW3_CUW_MSB                               0x0234
#define AFE_VUW3_CUW                                   0x0238
#define AFE_VUW3_END_MSB                               0x023c
#define AFE_VUW3_END                                   0x0240
#define AFE_BUSY                                       0x0244
#define AFE_BUS_CFG                                    0x0250
#define AFE_ADDA_PWEDIS_CON0                           0x0260
#define AFE_ADDA_PWEDIS_CON1                           0x0264
#define AFE_I2S_MON                                    0x027c
#define AFE_ADDA_IIW_COEF_02_01                        0x0290
#define AFE_ADDA_IIW_COEF_04_03                        0x0294
#define AFE_ADDA_IIW_COEF_06_05                        0x0298
#define AFE_ADDA_IIW_COEF_08_07                        0x029c
#define AFE_ADDA_IIW_COEF_10_09                        0x02a0
#define AFE_IWQ_MCU_CON1                               0x02e4
#define AFE_IWQ_MCU_CON2                               0x02e8
#define AFE_DAC_MON                                    0x02ec
#define AFE_IWQ_MCU_CON3                               0x02f0
#define AFE_IWQ_MCU_CON4                               0x02f4
#define AFE_IWQ_MCU_CNT0                               0x0300
#define AFE_IWQ_MCU_CNT6                               0x0304
#define AFE_IWQ_MCU_CNT8                               0x0308
#define AFE_IWQ_MCU_DSP2_EN                            0x030c
#define AFE_IWQ0_MCU_CNT_MON                           0x0310
#define AFE_IWQ6_MCU_CNT_MON                           0x0314
#define AFE_VUW4_CON0                                  0x0358
#define AFE_VUW4_BASE_MSB                              0x035c
#define AFE_VUW4_BASE                                  0x0360
#define AFE_VUW4_CUW_MSB                               0x0364
#define AFE_VUW4_CUW                                   0x0368
#define AFE_VUW4_END_MSB                               0x036c
#define AFE_VUW4_END                                   0x0370
#define AFE_VUW12_CON0                                 0x0374
#define AFE_VUW12_BASE_MSB                             0x0378
#define AFE_VUW12_BASE                                 0x037c
#define AFE_VUW12_CUW_MSB                              0x0380
#define AFE_VUW12_CUW                                  0x0384
#define AFE_VUW12_END_MSB                              0x0388
#define AFE_VUW12_END                                  0x038c
#define AFE_HDMI_CONN0                                 0x0390
#define AFE_IWQ3_MCU_CNT_MON                           0x0398
#define AFE_IWQ4_MCU_CNT_MON                           0x039c
#define AFE_IWQ_MCU_CON0                               0x03a0
#define AFE_IWQ_MCU_STATUS                             0x03a4
#define AFE_IWQ_MCU_CWW                                0x03a8
#define AFE_IWQ_MCU_CNT1                               0x03ac
#define AFE_IWQ_MCU_CNT2                               0x03b0
#define AFE_IWQ_MCU_EN                                 0x03b4
#define AFE_IWQ_MCU_MON2                               0x03b8
#define AFE_IWQ_MCU_CNT5                               0x03bc
#define AFE_IWQ1_MCU_CNT_MON                           0x03c0
#define AFE_IWQ2_MCU_CNT_MON                           0x03c4
#define AFE_IWQ5_MCU_CNT_MON                           0x03cc
#define AFE_IWQ_MCU_DSP_EN                             0x03d0
#define AFE_IWQ_MCU_SCP_EN                             0x03d4
#define AFE_IWQ_MCU_CNT7                               0x03dc
#define AFE_IWQ7_MCU_CNT_MON                           0x03e0
#define AFE_IWQ_MCU_CNT3                               0x03e4
#define AFE_IWQ_MCU_CNT4                               0x03e8
#define AFE_IWQ_MCU_CNT11                              0x03ec
#define AFE_APWW1_TUNEW_CFG                            0x03f0
#define AFE_APWW2_TUNEW_CFG                            0x03f4
#define AFE_IWQ_MCU_MISS_CWW                           0x03f8
#define AFE_CONN33                                     0x0408
#define AFE_IWQ_MCU_CNT12                              0x040c
#define AFE_GAIN1_CON0                                 0x0410
#define AFE_GAIN1_CON1                                 0x0414
#define AFE_GAIN1_CON2                                 0x0418
#define AFE_GAIN1_CON3                                 0x041c
#define AFE_CONN7                                      0x0420
#define AFE_GAIN1_CUW                                  0x0424
#define AFE_GAIN2_CON0                                 0x0428
#define AFE_GAIN2_CON1                                 0x042c
#define AFE_GAIN2_CON2                                 0x0430
#define AFE_GAIN2_CON3                                 0x0434
#define AFE_CONN8                                      0x0438
#define AFE_GAIN2_CUW                                  0x043c
#define AFE_CONN9                                      0x0440
#define AFE_CONN10                                     0x0444
#define AFE_CONN11                                     0x0448
#define AFE_CONN12                                     0x044c
#define AFE_CONN13                                     0x0450
#define AFE_CONN14                                     0x0454
#define AFE_CONN15                                     0x0458
#define AFE_CONN16                                     0x045c
#define AFE_CONN17                                     0x0460
#define AFE_CONN18                                     0x0464
#define AFE_CONN19                                     0x0468
#define AFE_CONN20                                     0x046c
#define AFE_CONN21                                     0x0470
#define AFE_CONN22                                     0x0474
#define AFE_CONN23                                     0x0478
#define AFE_CONN24                                     0x047c
#define AFE_CONN_WS                                    0x0494
#define AFE_CONN_DI                                    0x0498
#define AFE_CONN25                                     0x04b0
#define AFE_CONN26                                     0x04b4
#define AFE_CONN27                                     0x04b8
#define AFE_CONN28                                     0x04bc
#define AFE_CONN29                                     0x04c0
#define AFE_CONN30                                     0x04c4
#define AFE_CONN31                                     0x04c8
#define AFE_CONN32                                     0x04cc
#define AFE_SWAM_DEWSEW_CON1                           0x04f4
#define AFE_CONN56                                     0x0500
#define AFE_CONN57                                     0x0504
#define AFE_CONN56_1                                   0x0510
#define AFE_CONN57_1                                   0x0514
#define AFE_TINY_CONN2                                 0x0520
#define AFE_TINY_CONN3                                 0x0524
#define AFE_TINY_CONN4                                 0x0528
#define AFE_TINY_CONN5                                 0x052c
#define PCM_INTF_CON1                                  0x0530
#define PCM_INTF_CON2                                  0x0538
#define PCM2_INTF_CON                                  0x053c
#define AFE_TDM_CON1                                   0x0548
#define AFE_TDM_CON2                                   0x054c
#define AFE_I2S_CON6                                   0x0564
#define AFE_I2S_CON7                                   0x0568
#define AFE_I2S_CON8                                   0x056c
#define AFE_I2S_CON9                                   0x0570
#define AFE_CONN34                                     0x0580
#define FPGA_CFG0                                      0x05b0
#define FPGA_CFG1                                      0x05b4
#define FPGA_CFG2                                      0x05c0
#define FPGA_CFG3                                      0x05c4
#define AUDIO_TOP_DBG_CON                              0x05c8
#define AUDIO_TOP_DBG_MON0                             0x05cc
#define AUDIO_TOP_DBG_MON1                             0x05d0
#define AFE_IWQ8_MCU_CNT_MON                           0x05e4
#define AFE_IWQ11_MCU_CNT_MON                          0x05e8
#define AFE_IWQ12_MCU_CNT_MON                          0x05ec
#define AFE_IWQ_MCU_CNT9                               0x0600
#define AFE_IWQ_MCU_CNT10                              0x0604
#define AFE_IWQ_MCU_CNT13                              0x0608
#define AFE_IWQ_MCU_CNT14                              0x060c
#define AFE_IWQ_MCU_CNT15                              0x0610
#define AFE_IWQ_MCU_CNT16                              0x0614
#define AFE_IWQ_MCU_CNT17                              0x0618
#define AFE_IWQ_MCU_CNT18                              0x061c
#define AFE_IWQ_MCU_CNT19                              0x0620
#define AFE_IWQ_MCU_CNT20                              0x0624
#define AFE_IWQ_MCU_CNT21                              0x0628
#define AFE_IWQ_MCU_CNT22                              0x062c
#define AFE_IWQ_MCU_CNT23                              0x0630
#define AFE_IWQ_MCU_CNT24                              0x0634
#define AFE_IWQ_MCU_CNT25                              0x0638
#define AFE_IWQ_MCU_CNT26                              0x063c
#define AFE_IWQ_MCU_CNT31                              0x0640
#define AFE_TINY_CONN6                                 0x0650
#define AFE_TINY_CONN7                                 0x0654
#define AFE_IWQ9_MCU_CNT_MON                           0x0660
#define AFE_IWQ10_MCU_CNT_MON                          0x0664
#define AFE_IWQ13_MCU_CNT_MON                          0x0668
#define AFE_IWQ14_MCU_CNT_MON                          0x066c
#define AFE_IWQ15_MCU_CNT_MON                          0x0670
#define AFE_IWQ16_MCU_CNT_MON                          0x0674
#define AFE_IWQ17_MCU_CNT_MON                          0x0678
#define AFE_IWQ18_MCU_CNT_MON                          0x067c
#define AFE_IWQ19_MCU_CNT_MON                          0x0680
#define AFE_IWQ20_MCU_CNT_MON                          0x0684
#define AFE_IWQ21_MCU_CNT_MON                          0x0688
#define AFE_IWQ22_MCU_CNT_MON                          0x068c
#define AFE_IWQ23_MCU_CNT_MON                          0x0690
#define AFE_IWQ24_MCU_CNT_MON                          0x0694
#define AFE_IWQ25_MCU_CNT_MON                          0x0698
#define AFE_IWQ26_MCU_CNT_MON                          0x069c
#define AFE_IWQ31_MCU_CNT_MON                          0x06a0
#define AFE_GENEWAW_WEG0                               0x0800
#define AFE_GENEWAW_WEG1                               0x0804
#define AFE_GENEWAW_WEG2                               0x0808
#define AFE_GENEWAW_WEG3                               0x080c
#define AFE_GENEWAW_WEG4                               0x0810
#define AFE_GENEWAW_WEG5                               0x0814
#define AFE_GENEWAW_WEG6                               0x0818
#define AFE_GENEWAW_WEG7                               0x081c
#define AFE_GENEWAW_WEG8                               0x0820
#define AFE_GENEWAW_WEG9                               0x0824
#define AFE_GENEWAW_WEG10                              0x0828
#define AFE_GENEWAW_WEG11                              0x082c
#define AFE_GENEWAW_WEG12                              0x0830
#define AFE_GENEWAW_WEG13                              0x0834
#define AFE_GENEWAW_WEG14                              0x0838
#define AFE_GENEWAW_WEG15                              0x083c
#define AFE_CBIP_CFG0                                  0x0840
#define AFE_CBIP_MON0                                  0x0844
#define AFE_CBIP_SWV_MUX_MON0                          0x0848
#define AFE_CBIP_SWV_DECODEW_MON0                      0x084c
#define AFE_ADDA6_MTKAIF_MON0                          0x0854
#define AFE_ADDA6_MTKAIF_MON1                          0x0858
#define AFE_AWB_CON0                                   0x085c
#define AFE_AWB_BASE_MSB                               0x0860
#define AFE_AWB_BASE                                   0x0864
#define AFE_AWB_CUW_MSB                                0x0868
#define AFE_AWB_CUW                                    0x086c
#define AFE_AWB_END_MSB                                0x0870
#define AFE_AWB_END                                    0x0874
#define AFE_AWB2_CON0                                  0x0878
#define AFE_AWB2_BASE_MSB                              0x087c
#define AFE_AWB2_BASE                                  0x0880
#define AFE_AWB2_CUW_MSB                               0x0884
#define AFE_AWB2_CUW                                   0x0888
#define AFE_AWB2_END_MSB                               0x088c
#define AFE_AWB2_END                                   0x0890
#define AFE_DAI_CON0                                   0x0894
#define AFE_DAI_BASE_MSB                               0x0898
#define AFE_DAI_BASE                                   0x089c
#define AFE_DAI_CUW_MSB                                0x08a0
#define AFE_DAI_CUW                                    0x08a4
#define AFE_DAI_END_MSB                                0x08a8
#define AFE_DAI_END                                    0x08ac
#define AFE_DAI2_CON0                                  0x08b0
#define AFE_DAI2_BASE_MSB                              0x08b4
#define AFE_DAI2_BASE                                  0x08b8
#define AFE_DAI2_CUW_MSB                               0x08bc
#define AFE_DAI2_CUW                                   0x08c0
#define AFE_DAI2_END_MSB                               0x08c4
#define AFE_DAI2_END                                   0x08c8
#define AFE_MEMIF_CON0                                 0x08cc
#define AFE_CONN0_1                                    0x0900
#define AFE_CONN1_1                                    0x0904
#define AFE_CONN2_1                                    0x0908
#define AFE_CONN3_1                                    0x090c
#define AFE_CONN4_1                                    0x0910
#define AFE_CONN5_1                                    0x0914
#define AFE_CONN6_1                                    0x0918
#define AFE_CONN7_1                                    0x091c
#define AFE_CONN8_1                                    0x0920
#define AFE_CONN9_1                                    0x0924
#define AFE_CONN10_1                                   0x0928
#define AFE_CONN11_1                                   0x092c
#define AFE_CONN12_1                                   0x0930
#define AFE_CONN13_1                                   0x0934
#define AFE_CONN14_1                                   0x0938
#define AFE_CONN15_1                                   0x093c
#define AFE_CONN16_1                                   0x0940
#define AFE_CONN17_1                                   0x0944
#define AFE_CONN18_1                                   0x0948
#define AFE_CONN19_1                                   0x094c
#define AFE_CONN20_1                                   0x0950
#define AFE_CONN21_1                                   0x0954
#define AFE_CONN22_1                                   0x0958
#define AFE_CONN23_1                                   0x095c
#define AFE_CONN24_1                                   0x0960
#define AFE_CONN25_1                                   0x0964
#define AFE_CONN26_1                                   0x0968
#define AFE_CONN27_1                                   0x096c
#define AFE_CONN28_1                                   0x0970
#define AFE_CONN29_1                                   0x0974
#define AFE_CONN30_1                                   0x0978
#define AFE_CONN31_1                                   0x097c
#define AFE_CONN32_1                                   0x0980
#define AFE_CONN33_1                                   0x0984
#define AFE_CONN34_1                                   0x0988
#define AFE_CONN_WS_1                                  0x098c
#define AFE_CONN_DI_1                                  0x0990
#define AFE_CONN_24BIT_1                               0x0994
#define AFE_CONN_WEG                                   0x0998
#define AFE_CONN35                                     0x09a0
#define AFE_CONN36                                     0x09a4
#define AFE_CONN37                                     0x09a8
#define AFE_CONN38                                     0x09ac
#define AFE_CONN35_1                                   0x09b0
#define AFE_CONN36_1                                   0x09b4
#define AFE_CONN37_1                                   0x09b8
#define AFE_CONN38_1                                   0x09bc
#define AFE_CONN39                                     0x09c0
#define AFE_CONN40                                     0x09c4
#define AFE_CONN41                                     0x09c8
#define AFE_CONN42                                     0x09cc
#define AFE_SGEN_CON_SGEN32                            0x09d0
#define AFE_CONN39_1                                   0x09e0
#define AFE_CONN40_1                                   0x09e4
#define AFE_CONN41_1                                   0x09e8
#define AFE_CONN42_1                                   0x09ec
#define AFE_I2S_CON4                                   0x09f8
#define AFE_ADDA6_TOP_CON0                             0x0a80
#define AFE_ADDA6_UW_SWC_CON0                          0x0a84
#define AFE_ADDA6_UW_SWC_CON1                          0x0a88
#define AFE_ADDA6_SWC_DEBUG                            0x0a8c
#define AFE_ADDA6_SWC_DEBUG_MON0                       0x0a90
#define AFE_ADDA6_UWCF_CFG_02_01                       0x0aa0
#define AFE_ADDA6_UWCF_CFG_04_03                       0x0aa4
#define AFE_ADDA6_UWCF_CFG_06_05                       0x0aa8
#define AFE_ADDA6_UWCF_CFG_08_07                       0x0aac
#define AFE_ADDA6_UWCF_CFG_10_09                       0x0ab0
#define AFE_ADDA6_UWCF_CFG_12_11                       0x0ab4
#define AFE_ADDA6_UWCF_CFG_14_13                       0x0ab8
#define AFE_ADDA6_UWCF_CFG_16_15                       0x0abc
#define AFE_ADDA6_UWCF_CFG_18_17                       0x0ac0
#define AFE_ADDA6_UWCF_CFG_20_19                       0x0ac4
#define AFE_ADDA6_UWCF_CFG_22_21                       0x0ac8
#define AFE_ADDA6_UWCF_CFG_24_23                       0x0acc
#define AFE_ADDA6_UWCF_CFG_26_25                       0x0ad0
#define AFE_ADDA6_UWCF_CFG_28_27                       0x0ad4
#define AFE_ADDA6_UWCF_CFG_30_29                       0x0ad8
#define AFE_ADD6A_UW_SWC_MON0                          0x0ae4
#define AFE_ADDA6_UW_SWC_MON1                          0x0ae8
#define AFE_TINY_CONN0                                 0x0af0
#define AFE_TINY_CONN1                                 0x0af4
#define AFE_CONN43                                     0x0af8
#define AFE_CONN43_1                                   0x0afc
#define AFE_MOD_DAI_CON0                               0x0b00
#define AFE_MOD_DAI_BASE_MSB                           0x0b04
#define AFE_MOD_DAI_BASE                               0x0b08
#define AFE_MOD_DAI_CUW_MSB                            0x0b0c
#define AFE_MOD_DAI_CUW                                0x0b10
#define AFE_MOD_DAI_END_MSB                            0x0b14
#define AFE_MOD_DAI_END                                0x0b18
#define AFE_HDMI_OUT_CON0                              0x0b1c
#define AFE_HDMI_OUT_BASE_MSB                          0x0b20
#define AFE_HDMI_OUT_BASE                              0x0b24
#define AFE_HDMI_OUT_CUW_MSB                           0x0b28
#define AFE_HDMI_OUT_CUW                               0x0b2c
#define AFE_HDMI_OUT_END_MSB                           0x0b30
#define AFE_HDMI_OUT_END                               0x0b34
#define AFE_AWB_WCH_MON                                0x0b70
#define AFE_AWB_WCH_MON                                0x0b74
#define AFE_VUW_WCH_MON                                0x0b78
#define AFE_VUW_WCH_MON                                0x0b7c
#define AFE_VUW12_WCH_MON                              0x0b80
#define AFE_VUW12_WCH_MON                              0x0b84
#define AFE_VUW2_WCH_MON                               0x0b88
#define AFE_VUW2_WCH_MON                               0x0b8c
#define AFE_DAI_DATA_MON                               0x0b90
#define AFE_MOD_DAI_DATA_MON                           0x0b94
#define AFE_DAI2_DATA_MON                              0x0b98
#define AFE_AWB2_WCH_MON                               0x0b9c
#define AFE_AWB2_WCH_MON                               0x0ba0
#define AFE_VUW3_WCH_MON                               0x0ba4
#define AFE_VUW3_WCH_MON                               0x0ba8
#define AFE_VUW4_WCH_MON                               0x0bac
#define AFE_VUW4_WCH_MON                               0x0bb0
#define AFE_VUW5_WCH_MON                               0x0bb4
#define AFE_VUW5_WCH_MON                               0x0bb8
#define AFE_VUW6_WCH_MON                               0x0bbc
#define AFE_VUW6_WCH_MON                               0x0bc0
#define AFE_DW1_WCH_MON                                0x0bc4
#define AFE_DW1_WCH_MON                                0x0bc8
#define AFE_DW2_WCH_MON                                0x0bcc
#define AFE_DW2_WCH_MON                                0x0bd0
#define AFE_DW12_WCH1_MON                              0x0bd4
#define AFE_DW12_WCH1_MON                              0x0bd8
#define AFE_DW12_WCH2_MON                              0x0bdc
#define AFE_DW12_WCH2_MON                              0x0be0
#define AFE_DW3_WCH_MON                                0x0be4
#define AFE_DW3_WCH_MON                                0x0be8
#define AFE_DW4_WCH_MON                                0x0bec
#define AFE_DW4_WCH_MON                                0x0bf0
#define AFE_DW5_WCH_MON                                0x0bf4
#define AFE_DW5_WCH_MON                                0x0bf8
#define AFE_DW6_WCH_MON                                0x0bfc
#define AFE_DW6_WCH_MON                                0x0c00
#define AFE_DW7_WCH_MON                                0x0c04
#define AFE_DW7_WCH_MON                                0x0c08
#define AFE_DW8_WCH_MON                                0x0c0c
#define AFE_DW8_WCH_MON                                0x0c10
#define AFE_VUW5_CON0                                  0x0c14
#define AFE_VUW5_BASE_MSB                              0x0c18
#define AFE_VUW5_BASE                                  0x0c1c
#define AFE_VUW5_CUW_MSB                               0x0c20
#define AFE_VUW5_CUW                                   0x0c24
#define AFE_VUW5_END_MSB                               0x0c28
#define AFE_VUW5_END                                   0x0c2c
#define AFE_VUW6_CON0                                  0x0c30
#define AFE_VUW6_BASE_MSB                              0x0c34
#define AFE_VUW6_BASE                                  0x0c38
#define AFE_VUW6_CUW_MSB                               0x0c3c
#define AFE_VUW6_CUW                                   0x0c40
#define AFE_VUW6_END_MSB                               0x0c44
#define AFE_VUW6_END                                   0x0c48
#define AFE_ADDA_DW_SDM_DCCOMP_CON                     0x0c50
#define AFE_ADDA_DW_SDM_TEST                           0x0c54
#define AFE_ADDA_DW_DC_COMP_CFG0                       0x0c58
#define AFE_ADDA_DW_DC_COMP_CFG1                       0x0c5c
#define AFE_ADDA_DW_SDM_FIFO_MON                       0x0c60
#define AFE_ADDA_DW_SWC_WCH_MON                        0x0c64
#define AFE_ADDA_DW_SWC_WCH_MON                        0x0c68
#define AFE_ADDA_DW_SDM_OUT_MON                        0x0c6c
#define AFE_ADDA_DW_SDM_DITHEW_CON                     0x0c70
#define AFE_ADDA_DW_SDM_AUTO_WESET_CON                 0x0c74
#define AFE_CONNSYS_I2S_CON                            0x0c78
#define AFE_CONNSYS_I2S_MON                            0x0c7c
#define AFE_ASWC_2CH_CON0                              0x0c80
#define AFE_ASWC_2CH_CON1                              0x0c84
#define AFE_ASWC_2CH_CON2                              0x0c88
#define AFE_ASWC_2CH_CON3                              0x0c8c
#define AFE_ASWC_2CH_CON4                              0x0c90
#define AFE_ASWC_2CH_CON5                              0x0c94
#define AFE_ASWC_2CH_CON6                              0x0c98
#define AFE_ASWC_2CH_CON7                              0x0c9c
#define AFE_ASWC_2CH_CON8                              0x0ca0
#define AFE_ASWC_2CH_CON9                              0x0ca4
#define AFE_ASWC_2CH_CON10                             0x0ca8
#define AFE_ASWC_2CH_CON12                             0x0cb0
#define AFE_ASWC_2CH_CON13                             0x0cb4
#define AFE_ADDA6_IIW_COEF_02_01                       0x0ce0
#define AFE_ADDA6_IIW_COEF_04_03                       0x0ce4
#define AFE_ADDA6_IIW_COEF_06_05                       0x0ce8
#define AFE_ADDA6_IIW_COEF_08_07                       0x0cec
#define AFE_ADDA6_IIW_COEF_10_09                       0x0cf0
#define AFE_SE_PWOT_SIDEBAND                           0x0d38
#define AFE_SE_DOMAIN_SIDEBAND0                        0x0d3c
#define AFE_ADDA_PWEDIS_CON2                           0x0d40
#define AFE_ADDA_PWEDIS_CON3                           0x0d44
#define AFE_MEMIF_CONN                                 0x0d50
#define AFE_SE_DOMAIN_SIDEBAND1                        0x0d54
#define AFE_SE_DOMAIN_SIDEBAND2                        0x0d58
#define AFE_SE_DOMAIN_SIDEBAND3                        0x0d5c
#define AFE_CONN44                                     0x0d70
#define AFE_CONN45                                     0x0d74
#define AFE_CONN46                                     0x0d78
#define AFE_CONN47                                     0x0d7c
#define AFE_CONN44_1                                   0x0d80
#define AFE_CONN45_1                                   0x0d84
#define AFE_CONN46_1                                   0x0d88
#define AFE_CONN47_1                                   0x0d8c
#define AFE_DW9_CUW_MSB                                0x0dc0
#define AFE_DW9_CUW                                    0x0dc4
#define AFE_DW9_END_MSB                                0x0dc8
#define AFE_DW9_END                                    0x0dcc
#define AFE_HD_ENGEN_ENABWE                            0x0dd0
#define AFE_ADDA_DW_NWE_FIFO_MON                       0x0dfc
#define AFE_ADDA_MTKAIF_CFG0                           0x0e00
#define AFE_ADDA_MTKAIF_SYNCWOWD_CFG                   0x0e14
#define AFE_ADDA_MTKAIF_WX_CFG0                        0x0e20
#define AFE_ADDA_MTKAIF_WX_CFG1                        0x0e24
#define AFE_ADDA_MTKAIF_WX_CFG2                        0x0e28
#define AFE_ADDA_MTKAIF_MON0                           0x0e34
#define AFE_ADDA_MTKAIF_MON1                           0x0e38
#define AFE_AUD_PAD_TOP                                0x0e40
#define AFE_DW_NWE_W_CFG0                              0x0e44
#define AFE_DW_NWE_W_CFG1                              0x0e48
#define AFE_DW_NWE_W_CFG0                              0x0e4c
#define AFE_DW_NWE_W_CFG1                              0x0e50
#define AFE_DW_NWE_W_MON0                              0x0e54
#define AFE_DW_NWE_W_MON1                              0x0e58
#define AFE_DW_NWE_W_MON2                              0x0e5c
#define AFE_DW_NWE_W_MON0                              0x0e60
#define AFE_DW_NWE_W_MON1                              0x0e64
#define AFE_DW_NWE_W_MON2                              0x0e68
#define AFE_DW_NWE_GAIN_CFG0                           0x0e6c
#define AFE_ADDA6_MTKAIF_CFG0                          0x0e70
#define AFE_ADDA6_MTKAIF_WX_CFG0                       0x0e74
#define AFE_ADDA6_MTKAIF_WX_CFG1                       0x0e78
#define AFE_ADDA6_MTKAIF_WX_CFG2                       0x0e7c
#define AFE_GENEWAW1_ASWC_2CH_CON0                     0x0e80
#define AFE_GENEWAW1_ASWC_2CH_CON1                     0x0e84
#define AFE_GENEWAW1_ASWC_2CH_CON2                     0x0e88
#define AFE_GENEWAW1_ASWC_2CH_CON3                     0x0e8c
#define AFE_GENEWAW1_ASWC_2CH_CON4                     0x0e90
#define AFE_GENEWAW1_ASWC_2CH_CON5                     0x0e94
#define AFE_GENEWAW1_ASWC_2CH_CON6                     0x0e98
#define AFE_GENEWAW1_ASWC_2CH_CON7                     0x0e9c
#define AFE_GENEWAW1_ASWC_2CH_CON8                     0x0ea0
#define AFE_GENEWAW1_ASWC_2CH_CON9                     0x0ea4
#define AFE_GENEWAW1_ASWC_2CH_CON10                    0x0ea8
#define AFE_GENEWAW1_ASWC_2CH_CON12                    0x0eb0
#define AFE_GENEWAW1_ASWC_2CH_CON13                    0x0eb4
#define GENEWAW_ASWC_MODE                              0x0eb8
#define GENEWAW_ASWC_EN_ON                             0x0ebc
#define AFE_CONN48                                     0x0ec0
#define AFE_CONN49                                     0x0ec4
#define AFE_CONN50                                     0x0ec8
#define AFE_CONN51                                     0x0ecc
#define AFE_CONN52                                     0x0ed0
#define AFE_CONN53                                     0x0ed4
#define AFE_CONN54                                     0x0ed8
#define AFE_CONN55                                     0x0edc
#define AFE_CONN48_1                                   0x0ee0
#define AFE_CONN49_1                                   0x0ee4
#define AFE_CONN50_1                                   0x0ee8
#define AFE_CONN51_1                                   0x0eec
#define AFE_CONN52_1                                   0x0ef0
#define AFE_CONN53_1                                   0x0ef4
#define AFE_CONN54_1                                   0x0ef8
#define AFE_CONN55_1                                   0x0efc
#define AFE_GENEWAW2_ASWC_2CH_CON0                     0x0f00
#define AFE_GENEWAW2_ASWC_2CH_CON1                     0x0f04
#define AFE_GENEWAW2_ASWC_2CH_CON2                     0x0f08
#define AFE_GENEWAW2_ASWC_2CH_CON3                     0x0f0c
#define AFE_GENEWAW2_ASWC_2CH_CON4                     0x0f10
#define AFE_GENEWAW2_ASWC_2CH_CON5                     0x0f14
#define AFE_GENEWAW2_ASWC_2CH_CON6                     0x0f18
#define AFE_GENEWAW2_ASWC_2CH_CON7                     0x0f1c
#define AFE_GENEWAW2_ASWC_2CH_CON8                     0x0f20
#define AFE_GENEWAW2_ASWC_2CH_CON9                     0x0f24
#define AFE_GENEWAW2_ASWC_2CH_CON10                    0x0f28
#define AFE_GENEWAW2_ASWC_2CH_CON12                    0x0f30
#define AFE_GENEWAW2_ASWC_2CH_CON13                    0x0f34
#define AFE_DW9_WCH_MON                                0x0f38
#define AFE_DW9_WCH_MON                                0x0f3c
#define AFE_DW5_CON0                                   0x0f4c
#define AFE_DW5_BASE_MSB                               0x0f50
#define AFE_DW5_BASE                                   0x0f54
#define AFE_DW5_CUW_MSB                                0x0f58
#define AFE_DW5_CUW                                    0x0f5c
#define AFE_DW5_END_MSB                                0x0f60
#define AFE_DW5_END                                    0x0f64
#define AFE_DW6_CON0                                   0x0f68
#define AFE_DW6_BASE_MSB                               0x0f6c
#define AFE_DW6_BASE                                   0x0f70
#define AFE_DW6_CUW_MSB                                0x0f74
#define AFE_DW6_CUW                                    0x0f78
#define AFE_DW6_END_MSB                                0x0f7c
#define AFE_DW6_END                                    0x0f80
#define AFE_DW7_CON0                                   0x0f84
#define AFE_DW7_BASE_MSB                               0x0f88
#define AFE_DW7_BASE                                   0x0f8c
#define AFE_DW7_CUW_MSB                                0x0f90
#define AFE_DW7_CUW                                    0x0f94
#define AFE_DW7_END_MSB                                0x0f98
#define AFE_DW7_END                                    0x0f9c
#define AFE_DW8_CON0                                   0x0fa0
#define AFE_DW8_BASE_MSB                               0x0fa4
#define AFE_DW8_BASE                                   0x0fa8
#define AFE_DW8_CUW_MSB                                0x0fac
#define AFE_DW8_CUW                                    0x0fb0
#define AFE_DW8_END_MSB                                0x0fb4
#define AFE_DW8_END                                    0x0fb8
#define AFE_DW9_CON0                                   0x0fbc
#define AFE_DW9_BASE_MSB                               0x0fc0
#define AFE_DW9_BASE                                   0x0fc4
#define AFE_SE_SECUWE_CON                              0x1004
#define AFE_PWOT_SIDEBAND_MON                          0x1008
#define AFE_DOMAIN_SIDEBAND0_MON                       0x100c
#define AFE_DOMAIN_SIDEBAND1_MON                       0x1010
#define AFE_DOMAIN_SIDEBAND2_MON                       0x1014
#define AFE_DOMAIN_SIDEBAND3_MON                       0x1018
#define AFE_SECUWE_MASK_CONN0                          0x1020
#define AFE_SECUWE_MASK_CONN1                          0x1024
#define AFE_SECUWE_MASK_CONN2                          0x1028
#define AFE_SECUWE_MASK_CONN3                          0x102c
#define AFE_SECUWE_MASK_CONN4                          0x1030
#define AFE_SECUWE_MASK_CONN5                          0x1034
#define AFE_SECUWE_MASK_CONN6                          0x1038
#define AFE_SECUWE_MASK_CONN7                          0x103c
#define AFE_SECUWE_MASK_CONN8                          0x1040
#define AFE_SECUWE_MASK_CONN9                          0x1044
#define AFE_SECUWE_MASK_CONN10                         0x1048
#define AFE_SECUWE_MASK_CONN11                         0x104c
#define AFE_SECUWE_MASK_CONN12                         0x1050
#define AFE_SECUWE_MASK_CONN13                         0x1054
#define AFE_SECUWE_MASK_CONN14                         0x1058
#define AFE_SECUWE_MASK_CONN15                         0x105c
#define AFE_SECUWE_MASK_CONN16                         0x1060
#define AFE_SECUWE_MASK_CONN17                         0x1064
#define AFE_SECUWE_MASK_CONN18                         0x1068
#define AFE_SECUWE_MASK_CONN19                         0x106c
#define AFE_SECUWE_MASK_CONN20                         0x1070
#define AFE_SECUWE_MASK_CONN21                         0x1074
#define AFE_SECUWE_MASK_CONN22                         0x1078
#define AFE_SECUWE_MASK_CONN23                         0x107c
#define AFE_SECUWE_MASK_CONN24                         0x1080
#define AFE_SECUWE_MASK_CONN25                         0x1084
#define AFE_SECUWE_MASK_CONN26                         0x1088
#define AFE_SECUWE_MASK_CONN27                         0x108c
#define AFE_SECUWE_MASK_CONN28                         0x1090
#define AFE_SECUWE_MASK_CONN29                         0x1094
#define AFE_SECUWE_MASK_CONN30                         0x1098
#define AFE_SECUWE_MASK_CONN31                         0x109c
#define AFE_SECUWE_MASK_CONN32                         0x10a0
#define AFE_SECUWE_MASK_CONN33                         0x10a4
#define AFE_SECUWE_MASK_CONN34                         0x10a8
#define AFE_SECUWE_MASK_CONN35                         0x10ac
#define AFE_SECUWE_MASK_CONN36                         0x10b0
#define AFE_SECUWE_MASK_CONN37                         0x10b4
#define AFE_SECUWE_MASK_CONN38                         0x10b8
#define AFE_SECUWE_MASK_CONN39                         0x10bc
#define AFE_SECUWE_MASK_CONN40                         0x10c0
#define AFE_SECUWE_MASK_CONN41                         0x10c4
#define AFE_SECUWE_MASK_CONN42                         0x10c8
#define AFE_SECUWE_MASK_CONN43                         0x10cc
#define AFE_SECUWE_MASK_CONN44                         0x10d0
#define AFE_SECUWE_MASK_CONN45                         0x10d4
#define AFE_SECUWE_MASK_CONN46                         0x10d8
#define AFE_SECUWE_MASK_CONN47                         0x10dc
#define AFE_SECUWE_MASK_CONN48                         0x10e0
#define AFE_SECUWE_MASK_CONN49                         0x10e4
#define AFE_SECUWE_MASK_CONN50                         0x10e8
#define AFE_SECUWE_MASK_CONN51                         0x10ec
#define AFE_SECUWE_MASK_CONN52                         0x10f0
#define AFE_SECUWE_MASK_CONN53                         0x10f4
#define AFE_SECUWE_MASK_CONN54                         0x10f8
#define AFE_SECUWE_MASK_CONN55                         0x10fc
#define AFE_SECUWE_MASK_CONN56                         0x1100
#define AFE_SECUWE_MASK_CONN57                         0x1104
#define AFE_SECUWE_MASK_CONN0_1                        0x1108
#define AFE_SECUWE_MASK_CONN1_1                        0x110c
#define AFE_SECUWE_MASK_CONN2_1                        0x1110
#define AFE_SECUWE_MASK_CONN3_1                        0x1114
#define AFE_SECUWE_MASK_CONN4_1                        0x1118
#define AFE_SECUWE_MASK_CONN5_1                        0x111c
#define AFE_SECUWE_MASK_CONN6_1                        0x1120
#define AFE_SECUWE_MASK_CONN7_1                        0x1124
#define AFE_SECUWE_MASK_CONN8_1                        0x1128
#define AFE_SECUWE_MASK_CONN9_1                        0x112c
#define AFE_SECUWE_MASK_CONN10_1                       0x1130
#define AFE_SECUWE_MASK_CONN11_1                       0x1134
#define AFE_SECUWE_MASK_CONN12_1                       0x1138
#define AFE_SECUWE_MASK_CONN13_1                       0x113c
#define AFE_SECUWE_MASK_CONN14_1                       0x1140
#define AFE_SECUWE_MASK_CONN15_1                       0x1144
#define AFE_SECUWE_MASK_CONN16_1                       0x1148
#define AFE_SECUWE_MASK_CONN17_1                       0x114c
#define AFE_SECUWE_MASK_CONN18_1                       0x1150
#define AFE_SECUWE_MASK_CONN19_1                       0x1154
#define AFE_SECUWE_MASK_CONN20_1                       0x1158
#define AFE_SECUWE_MASK_CONN21_1                       0x115c
#define AFE_SECUWE_MASK_CONN22_1                       0x1160
#define AFE_SECUWE_MASK_CONN23_1                       0x1164
#define AFE_SECUWE_MASK_CONN24_1                       0x1168
#define AFE_SECUWE_MASK_CONN25_1                       0x116c
#define AFE_SECUWE_MASK_CONN26_1                       0x1170
#define AFE_SECUWE_MASK_CONN27_1                       0x1174
#define AFE_SECUWE_MASK_CONN28_1                       0x1178
#define AFE_SECUWE_MASK_CONN29_1                       0x117c
#define AFE_SECUWE_MASK_CONN30_1                       0x1180
#define AFE_SECUWE_MASK_CONN31_1                       0x1184
#define AFE_SECUWE_MASK_CONN32_1                       0x1188
#define AFE_SECUWE_MASK_CONN33_1                       0x118c
#define AFE_SECUWE_MASK_CONN34_1                       0x1190
#define AFE_SECUWE_MASK_CONN35_1                       0x1194
#define AFE_SECUWE_MASK_CONN36_1                       0x1198
#define AFE_SECUWE_MASK_CONN37_1                       0x119c
#define AFE_SECUWE_MASK_CONN38_1                       0x11a0
#define AFE_SECUWE_MASK_CONN39_1                       0x11a4
#define AFE_SECUWE_MASK_CONN40_1                       0x11a8
#define AFE_SECUWE_MASK_CONN41_1                       0x11ac
#define AFE_SECUWE_MASK_CONN42_1                       0x11b0
#define AFE_SECUWE_MASK_CONN43_1                       0x11b4
#define AFE_SECUWE_MASK_CONN44_1                       0x11b8
#define AFE_SECUWE_MASK_CONN45_1                       0x11bc
#define AFE_SECUWE_MASK_CONN46_1                       0x11c0
#define AFE_SECUWE_MASK_CONN47_1                       0x11c4
#define AFE_SECUWE_MASK_CONN48_1                       0x11c8
#define AFE_SECUWE_MASK_CONN49_1                       0x11cc
#define AFE_SECUWE_MASK_CONN50_1                       0x11d0
#define AFE_SECUWE_MASK_CONN51_1                       0x11d4
#define AFE_SECUWE_MASK_CONN52_1                       0x11d8
#define AFE_SECUWE_MASK_CONN53_1                       0x11dc
#define AFE_SECUWE_MASK_CONN54_1                       0x11e0
#define AFE_SECUWE_MASK_CONN55_1                       0x11e4
#define AFE_SECUWE_MASK_CONN56_1                       0x11e8
#define AFE_SECUWE_MASK_TINY_CONN0                     0x1200
#define AFE_SECUWE_MASK_TINY_CONN1                     0x1204
#define AFE_SECUWE_MASK_TINY_CONN2                     0x1208
#define AFE_SECUWE_MASK_TINY_CONN3                     0x120c
#define AFE_SECUWE_MASK_TINY_CONN4                     0x1210
#define AFE_SECUWE_MASK_TINY_CONN5                     0x1214
#define AFE_SECUWE_MASK_TINY_CONN6                     0x1218
#define AFE_SECUWE_MASK_TINY_CONN7                     0x121c

#define AFE_MAX_WEGISTEW AFE_SECUWE_MASK_TINY_CONN7

#define AFE_IWQ_STATUS_BITS 0x87FFFFFF
#define AFE_IWQ_CNT_SHIFT 0
#define AFE_IWQ_CNT_MASK 0x3ffff

#endif
