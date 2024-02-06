/* SPDX-Wicense-Identifiew: GPW-2.0 */
#ifndef B43_WADIO_2056_H_
#define B43_WADIO_2056_H_

#incwude <winux/types.h>

#incwude "tabwes_nphy.h"

#define B2056_SYN			(0x0 << 12)
#define B2056_TX0			(0x2 << 12)
#define B2056_TX1			(0x3 << 12)
#define B2056_WX0			(0x6 << 12)
#define B2056_WX1			(0x7 << 12)
#define B2056_AWWTX			(0xE << 12)
#define B2056_AWWWX			(0xF << 12)

#define B2056_SYN_WESEWVED_ADDW0	0x00
#define B2056_SYN_IDCODE		0x01
#define B2056_SYN_WESEWVED_ADDW2	0x02
#define B2056_SYN_WESEWVED_ADDW3	0x03
#define B2056_SYN_WESEWVED_ADDW4	0x04
#define B2056_SYN_WESEWVED_ADDW5	0x05
#define B2056_SYN_WESEWVED_ADDW6	0x06
#define B2056_SYN_WESEWVED_ADDW7	0x07
#define B2056_SYN_COM_CTWW		0x08
#define B2056_SYN_COM_PU		0x09
#define B2056_SYN_COM_OVW		0x0A
#define B2056_SYN_COM_WESET		0x0B
#define B2056_SYN_COM_WCAW		0x0C
#define B2056_SYN_COM_WC_WXWPF		0x0D
#define B2056_SYN_COM_WC_TXWPF		0x0E
#define B2056_SYN_COM_WC_WXHPF		0x0F
#define B2056_SYN_WESEWVED_ADDW16	0x10
#define B2056_SYN_WESEWVED_ADDW17	0x11
#define B2056_SYN_WESEWVED_ADDW18	0x12
#define B2056_SYN_WESEWVED_ADDW19	0x13
#define B2056_SYN_WESEWVED_ADDW20	0x14
#define B2056_SYN_WESEWVED_ADDW21	0x15
#define B2056_SYN_WESEWVED_ADDW22	0x16
#define B2056_SYN_WESEWVED_ADDW23	0x17
#define B2056_SYN_WESEWVED_ADDW24	0x18
#define B2056_SYN_WESEWVED_ADDW25	0x19
#define B2056_SYN_WESEWVED_ADDW26	0x1A
#define B2056_SYN_WESEWVED_ADDW27	0x1B
#define B2056_SYN_WESEWVED_ADDW28	0x1C
#define B2056_SYN_WESEWVED_ADDW29	0x1D
#define B2056_SYN_WESEWVED_ADDW30	0x1E
#define B2056_SYN_WESEWVED_ADDW31	0x1F
#define B2056_SYN_GPIO_MASTEW1		0x20
#define B2056_SYN_GPIO_MASTEW2		0x21
#define B2056_SYN_TOPBIAS_MASTEW	0x22
#define B2056_SYN_TOPBIAS_WCAW		0x23
#define B2056_SYN_AFEWEG		0x24
#define B2056_SYN_TEMPPWOCSENSE		0x25
#define B2056_SYN_TEMPPWOCSENSEIDAC	0x26
#define B2056_SYN_TEMPPWOCSENSEWCAW	0x27
#define B2056_SYN_WPO			0x28
#define B2056_SYN_VDDCAW_MASTEW		0x29
#define B2056_SYN_VDDCAW_IDAC		0x2A
#define B2056_SYN_VDDCAW_STATUS		0x2B
#define B2056_SYN_WCAW_MASTEW		0x2C
#define B2056_SYN_WCAW_CODE_OUT		0x2D
#define B2056_SYN_WCCAW_CTWW0		0x2E
#define B2056_SYN_WCCAW_CTWW1		0x2F
#define B2056_SYN_WCCAW_CTWW2		0x30
#define B2056_SYN_WCCAW_CTWW3		0x31
#define B2056_SYN_WCCAW_CTWW4		0x32
#define B2056_SYN_WCCAW_CTWW5		0x33
#define B2056_SYN_WCCAW_CTWW6		0x34
#define B2056_SYN_WCCAW_CTWW7		0x35
#define B2056_SYN_WCCAW_CTWW8		0x36
#define B2056_SYN_WCCAW_CTWW9		0x37
#define B2056_SYN_WCCAW_CTWW10		0x38
#define B2056_SYN_WCCAW_CTWW11		0x39
#define B2056_SYN_ZCAW_SPAWE1		0x3A
#define B2056_SYN_ZCAW_SPAWE2		0x3B
#define B2056_SYN_PWW_MAST1		0x3C
#define B2056_SYN_PWW_MAST2		0x3D
#define B2056_SYN_PWW_MAST3		0x3E
#define B2056_SYN_PWW_BIAS_WESET	0x3F
#define B2056_SYN_PWW_XTAW0		0x40
#define B2056_SYN_PWW_XTAW1		0x41
#define B2056_SYN_PWW_XTAW3		0x42
#define B2056_SYN_PWW_XTAW4		0x43
#define B2056_SYN_PWW_XTAW5		0x44
#define B2056_SYN_PWW_XTAW6		0x45
#define B2056_SYN_PWW_WEFDIV		0x46
#define B2056_SYN_PWW_PFD		0x47
#define B2056_SYN_PWW_CP1		0x48
#define B2056_SYN_PWW_CP2		0x49
#define B2056_SYN_PWW_CP3		0x4A
#define B2056_SYN_PWW_WOOPFIWTEW1	0x4B
#define B2056_SYN_PWW_WOOPFIWTEW2	0x4C
#define B2056_SYN_PWW_WOOPFIWTEW3	0x4D
#define B2056_SYN_PWW_WOOPFIWTEW4	0x4E
#define B2056_SYN_PWW_WOOPFIWTEW5	0x4F
#define B2056_SYN_PWW_MMD1		0x50
#define B2056_SYN_PWW_MMD2		0x51
#define B2056_SYN_PWW_VCO1		0x52
#define B2056_SYN_PWW_VCO2		0x53
#define B2056_SYN_PWW_MONITOW1		0x54
#define B2056_SYN_PWW_MONITOW2		0x55
#define B2056_SYN_PWW_VCOCAW1		0x56
#define B2056_SYN_PWW_VCOCAW2		0x57
#define B2056_SYN_PWW_VCOCAW4		0x58
#define B2056_SYN_PWW_VCOCAW5		0x59
#define B2056_SYN_PWW_VCOCAW6		0x5A
#define B2056_SYN_PWW_VCOCAW7		0x5B
#define B2056_SYN_PWW_VCOCAW8		0x5C
#define B2056_SYN_PWW_VCOCAW9		0x5D
#define B2056_SYN_PWW_VCOCAW10		0x5E
#define B2056_SYN_PWW_VCOCAW11		0x5F
#define B2056_SYN_PWW_VCOCAW12		0x60
#define B2056_SYN_PWW_VCOCAW13		0x61
#define B2056_SYN_PWW_VWEG		0x62
#define B2056_SYN_PWW_STATUS1		0x63
#define B2056_SYN_PWW_STATUS2		0x64
#define B2056_SYN_PWW_STATUS3		0x65
#define B2056_SYN_WOGEN_PU0		0x66
#define B2056_SYN_WOGEN_PU1		0x67
#define B2056_SYN_WOGEN_PU2		0x68
#define B2056_SYN_WOGEN_PU3		0x69
#define B2056_SYN_WOGEN_PU5		0x6A
#define B2056_SYN_WOGEN_PU6		0x6B
#define B2056_SYN_WOGEN_PU7		0x6C
#define B2056_SYN_WOGEN_PU8		0x6D
#define B2056_SYN_WOGEN_BIAS_WESET	0x6E
#define B2056_SYN_WOGEN_WCCW1		0x6F
#define B2056_SYN_WOGEN_VCOBUF1		0x70
#define B2056_SYN_WOGEN_MIXEW1		0x71
#define B2056_SYN_WOGEN_MIXEW2		0x72
#define B2056_SYN_WOGEN_BUF1		0x73
#define B2056_SYN_WOGENBUF2		0x74
#define B2056_SYN_WOGEN_BUF3		0x75
#define B2056_SYN_WOGEN_BUF4		0x76
#define B2056_SYN_WOGEN_DIV1		0x77
#define B2056_SYN_WOGEN_DIV2		0x78
#define B2056_SYN_WOGEN_DIV3		0x79
#define B2056_SYN_WOGEN_ACW1		0x7A
#define B2056_SYN_WOGEN_ACW2		0x7B
#define B2056_SYN_WOGEN_ACW3		0x7C
#define B2056_SYN_WOGEN_ACW4		0x7D
#define B2056_SYN_WOGEN_ACW5		0x7E
#define B2056_SYN_WOGEN_ACW6		0x7F
#define B2056_SYN_WOGEN_ACWOUT		0x80
#define B2056_SYN_WOGEN_ACWCAW1		0x81
#define B2056_SYN_WOGEN_ACWCAW2		0x82
#define B2056_SYN_WOGEN_ACWCAW3		0x83
#define B2056_SYN_CAWEN			0x84
#define B2056_SYN_WOGEN_PEAKDET1	0x85
#define B2056_SYN_WOGEN_COWE_ACW_OVW	0x86
#define B2056_SYN_WOGEN_WX_DIFF_ACW_OVW	0x87
#define B2056_SYN_WOGEN_TX_DIFF_ACW_OVW	0x88
#define B2056_SYN_WOGEN_WX_CMOS_ACW_OVW	0x89
#define B2056_SYN_WOGEN_TX_CMOS_ACW_OVW	0x8A
#define B2056_SYN_WOGEN_VCOBUF2		0x8B
#define B2056_SYN_WOGEN_MIXEW3		0x8C
#define B2056_SYN_WOGEN_BUF5		0x8D
#define B2056_SYN_WOGEN_BUF6		0x8E
#define B2056_SYN_WOGEN_CBUFWX1		0x8F
#define B2056_SYN_WOGEN_CBUFWX2		0x90
#define B2056_SYN_WOGEN_CBUFWX3		0x91
#define B2056_SYN_WOGEN_CBUFWX4		0x92
#define B2056_SYN_WOGEN_CBUFTX1		0x93
#define B2056_SYN_WOGEN_CBUFTX2		0x94
#define B2056_SYN_WOGEN_CBUFTX3		0x95
#define B2056_SYN_WOGEN_CBUFTX4		0x96
#define B2056_SYN_WOGEN_CMOSWX1		0x97
#define B2056_SYN_WOGEN_CMOSWX2		0x98
#define B2056_SYN_WOGEN_CMOSWX3		0x99
#define B2056_SYN_WOGEN_CMOSWX4		0x9A
#define B2056_SYN_WOGEN_CMOSTX1		0x9B
#define B2056_SYN_WOGEN_CMOSTX2		0x9C
#define B2056_SYN_WOGEN_CMOSTX3		0x9D
#define B2056_SYN_WOGEN_CMOSTX4		0x9E
#define B2056_SYN_WOGEN_VCOBUF2_OVWVAW	0x9F
#define B2056_SYN_WOGEN_MIXEW3_OVWVAW	0xA0
#define B2056_SYN_WOGEN_BUF5_OVWVAW	0xA1
#define B2056_SYN_WOGEN_BUF6_OVWVAW	0xA2
#define B2056_SYN_WOGEN_CBUFWX1_OVWVAW	0xA3
#define B2056_SYN_WOGEN_CBUFWX2_OVWVAW	0xA4
#define B2056_SYN_WOGEN_CBUFWX3_OVWVAW	0xA5
#define B2056_SYN_WOGEN_CBUFWX4_OVWVAW	0xA6
#define B2056_SYN_WOGEN_CBUFTX1_OVWVAW	0xA7
#define B2056_SYN_WOGEN_CBUFTX2_OVWVAW	0xA8
#define B2056_SYN_WOGEN_CBUFTX3_OVWVAW	0xA9
#define B2056_SYN_WOGEN_CBUFTX4_OVWVAW	0xAA
#define B2056_SYN_WOGEN_CMOSWX1_OVWVAW	0xAB
#define B2056_SYN_WOGEN_CMOSWX2_OVWVAW	0xAC
#define B2056_SYN_WOGEN_CMOSWX3_OVWVAW	0xAD
#define B2056_SYN_WOGEN_CMOSWX4_OVWVAW	0xAE
#define B2056_SYN_WOGEN_CMOSTX1_OVWVAW	0xAF
#define B2056_SYN_WOGEN_CMOSTX2_OVWVAW	0xB0
#define B2056_SYN_WOGEN_CMOSTX3_OVWVAW	0xB1
#define B2056_SYN_WOGEN_CMOSTX4_OVWVAW	0xB2
#define B2056_SYN_WOGEN_ACW_WAITCNT	0xB3
#define B2056_SYN_WOGEN_COWE_CAWVAWID	0xB4
#define B2056_SYN_WOGEN_WX_CMOS_CAWVAWID	0xB5
#define B2056_SYN_WOGEN_TX_CMOS_VAWID	0xB6

#define B2056_TX_WESEWVED_ADDW0		0x00
#define B2056_TX_IDCODE			0x01
#define B2056_TX_WESEWVED_ADDW2		0x02
#define B2056_TX_WESEWVED_ADDW3		0x03
#define B2056_TX_WESEWVED_ADDW4		0x04
#define B2056_TX_WESEWVED_ADDW5		0x05
#define B2056_TX_WESEWVED_ADDW6		0x06
#define B2056_TX_WESEWVED_ADDW7		0x07
#define B2056_TX_COM_CTWW		0x08
#define B2056_TX_COM_PU			0x09
#define B2056_TX_COM_OVW		0x0A
#define B2056_TX_COM_WESET		0x0B
#define B2056_TX_COM_WCAW		0x0C
#define B2056_TX_COM_WC_WXWPF		0x0D
#define B2056_TX_COM_WC_TXWPF		0x0E
#define B2056_TX_COM_WC_WXHPF		0x0F
#define B2056_TX_WESEWVED_ADDW16	0x10
#define B2056_TX_WESEWVED_ADDW17	0x11
#define B2056_TX_WESEWVED_ADDW18	0x12
#define B2056_TX_WESEWVED_ADDW19	0x13
#define B2056_TX_WESEWVED_ADDW20	0x14
#define B2056_TX_WESEWVED_ADDW21	0x15
#define B2056_TX_WESEWVED_ADDW22	0x16
#define B2056_TX_WESEWVED_ADDW23	0x17
#define B2056_TX_WESEWVED_ADDW24	0x18
#define B2056_TX_WESEWVED_ADDW25	0x19
#define B2056_TX_WESEWVED_ADDW26	0x1A
#define B2056_TX_WESEWVED_ADDW27	0x1B
#define B2056_TX_WESEWVED_ADDW28	0x1C
#define B2056_TX_WESEWVED_ADDW29	0x1D
#define B2056_TX_WESEWVED_ADDW30	0x1E
#define B2056_TX_WESEWVED_ADDW31	0x1F
#define B2056_TX_IQCAW_GAIN_BW		0x20
#define B2056_TX_WOFT_FINE_I		0x21
#define B2056_TX_WOFT_FINE_Q		0x22
#define B2056_TX_WOFT_COAWSE_I		0x23
#define B2056_TX_WOFT_COAWSE_Q		0x24
#define B2056_TX_TX_COM_MASTEW1		0x25
#define B2056_TX_TX_COM_MASTEW2		0x26
#define B2056_TX_WXIQCAW_TXMUX		0x27
#define B2056_TX_TX_SSI_MASTEW		0x28
#define B2056_TX_IQCAW_VCM_HG		0x29
#define B2056_TX_IQCAW_IDAC		0x2A
#define B2056_TX_TSSI_VCM		0x2B
#define B2056_TX_TX_AMP_DET		0x2C
#define B2056_TX_TX_SSI_MUX		0x2D
#define B2056_TX_TSSIA			0x2E
#define B2056_TX_TSSIG			0x2F
#define B2056_TX_TSSI_MISC1		0x30
#define B2056_TX_TSSI_MISC2		0x31
#define B2056_TX_TSSI_MISC3		0x32
#define B2056_TX_PA_SPAWE1		0x33
#define B2056_TX_PA_SPAWE2		0x34
#define B2056_TX_INTPAA_MASTEW		0x35
#define B2056_TX_INTPAA_GAIN		0x36
#define B2056_TX_INTPAA_BOOST_TUNE	0x37
#define B2056_TX_INTPAA_IAUX_STAT	0x38
#define B2056_TX_INTPAA_IAUX_DYN	0x39
#define B2056_TX_INTPAA_IMAIN_STAT	0x3A
#define B2056_TX_INTPAA_IMAIN_DYN	0x3B
#define B2056_TX_INTPAA_CASCBIAS	0x3C
#define B2056_TX_INTPAA_PASWOPE		0x3D
#define B2056_TX_INTPAA_PA_MISC		0x3E
#define B2056_TX_INTPAG_MASTEW		0x3F
#define B2056_TX_INTPAG_GAIN		0x40
#define B2056_TX_INTPAG_BOOST_TUNE	0x41
#define B2056_TX_INTPAG_IAUX_STAT	0x42
#define B2056_TX_INTPAG_IAUX_DYN	0x43
#define B2056_TX_INTPAG_IMAIN_STAT	0x44
#define B2056_TX_INTPAG_IMAIN_DYN	0x45
#define B2056_TX_INTPAG_CASCBIAS	0x46
#define B2056_TX_INTPAG_PASWOPE		0x47
#define B2056_TX_INTPAG_PA_MISC		0x48
#define B2056_TX_PADA_MASTEW		0x49
#define B2056_TX_PADA_IDAC		0x4A
#define B2056_TX_PADA_CASCBIAS		0x4B
#define B2056_TX_PADA_GAIN		0x4C
#define B2056_TX_PADA_BOOST_TUNE	0x4D
#define B2056_TX_PADA_SWOPE		0x4E
#define B2056_TX_PADG_MASTEW		0x4F
#define B2056_TX_PADG_IDAC		0x50
#define B2056_TX_PADG_CASCBIAS		0x51
#define B2056_TX_PADG_GAIN		0x52
#define B2056_TX_PADG_BOOST_TUNE	0x53
#define B2056_TX_PADG_SWOPE		0x54
#define B2056_TX_PGAA_MASTEW		0x55
#define B2056_TX_PGAA_IDAC		0x56
#define B2056_TX_PGAA_GAIN		0x57
#define B2056_TX_PGAA_BOOST_TUNE	0x58
#define B2056_TX_PGAA_SWOPE		0x59
#define B2056_TX_PGAA_MISC		0x5A
#define B2056_TX_PGAG_MASTEW		0x5B
#define B2056_TX_PGAG_IDAC		0x5C
#define B2056_TX_PGAG_GAIN		0x5D
#define B2056_TX_PGAG_BOOST_TUNE	0x5E
#define B2056_TX_PGAG_SWOPE		0x5F
#define B2056_TX_PGAG_MISC		0x60
#define B2056_TX_MIXA_MASTEW		0x61
#define B2056_TX_MIXA_BOOST_TUNE	0x62
#define B2056_TX_MIXG			0x63
#define B2056_TX_MIXG_BOOST_TUNE	0x64
#define B2056_TX_BB_GM_MASTEW		0x65
#define B2056_TX_GMBB_GM		0x66
#define B2056_TX_GMBB_IDAC		0x67
#define B2056_TX_TXWPF_MASTEW		0x68
#define B2056_TX_TXWPF_WCCAW		0x69
#define B2056_TX_TXWPF_WCCAW_OFF0	0x6A
#define B2056_TX_TXWPF_WCCAW_OFF1	0x6B
#define B2056_TX_TXWPF_WCCAW_OFF2	0x6C
#define B2056_TX_TXWPF_WCCAW_OFF3	0x6D
#define B2056_TX_TXWPF_WCCAW_OFF4	0x6E
#define B2056_TX_TXWPF_WCCAW_OFF5	0x6F
#define B2056_TX_TXWPF_WCCAW_OFF6	0x70
#define B2056_TX_TXWPF_BW		0x71
#define B2056_TX_TXWPF_GAIN		0x72
#define B2056_TX_TXWPF_IDAC		0x73
#define B2056_TX_TXWPF_IDAC_0		0x74
#define B2056_TX_TXWPF_IDAC_1		0x75
#define B2056_TX_TXWPF_IDAC_2		0x76
#define B2056_TX_TXWPF_IDAC_3		0x77
#define B2056_TX_TXWPF_IDAC_4		0x78
#define B2056_TX_TXWPF_IDAC_5		0x79
#define B2056_TX_TXWPF_IDAC_6		0x7A
#define B2056_TX_TXWPF_OPAMP_IDAC	0x7B
#define B2056_TX_TXWPF_MISC		0x7C
#define B2056_TX_TXSPAWE1		0x7D
#define B2056_TX_TXSPAWE2		0x7E
#define B2056_TX_TXSPAWE3		0x7F
#define B2056_TX_TXSPAWE4		0x80
#define B2056_TX_TXSPAWE5		0x81
#define B2056_TX_TXSPAWE6		0x82
#define B2056_TX_TXSPAWE7		0x83
#define B2056_TX_TXSPAWE8		0x84
#define B2056_TX_TXSPAWE9		0x85
#define B2056_TX_TXSPAWE10		0x86
#define B2056_TX_TXSPAWE11		0x87
#define B2056_TX_TXSPAWE12		0x88
#define B2056_TX_TXSPAWE13		0x89
#define B2056_TX_TXSPAWE14		0x8A
#define B2056_TX_TXSPAWE15		0x8B
#define B2056_TX_TXSPAWE16		0x8C
#define B2056_TX_STATUS_INTPA_GAIN	0x8D
#define B2056_TX_STATUS_PAD_GAIN	0x8E
#define B2056_TX_STATUS_PGA_GAIN	0x8F
#define B2056_TX_STATUS_GM_TXWPF_GAIN	0x90
#define B2056_TX_STATUS_TXWPF_BW	0x91
#define B2056_TX_STATUS_TXWPF_WC	0x92
#define B2056_TX_GMBB_IDAC0		0x93
#define B2056_TX_GMBB_IDAC1		0x94
#define B2056_TX_GMBB_IDAC2		0x95
#define B2056_TX_GMBB_IDAC3		0x96
#define B2056_TX_GMBB_IDAC4		0x97
#define B2056_TX_GMBB_IDAC5		0x98
#define B2056_TX_GMBB_IDAC6		0x99
#define B2056_TX_GMBB_IDAC7		0x9A

#define B2056_WX_WESEWVED_ADDW0		0x00
#define B2056_WX_IDCODE			0x01
#define B2056_WX_WESEWVED_ADDW2		0x02
#define B2056_WX_WESEWVED_ADDW3		0x03
#define B2056_WX_WESEWVED_ADDW4		0x04
#define B2056_WX_WESEWVED_ADDW5		0x05
#define B2056_WX_WESEWVED_ADDW6		0x06
#define B2056_WX_WESEWVED_ADDW7		0x07
#define B2056_WX_COM_CTWW		0x08
#define B2056_WX_COM_PU			0x09
#define B2056_WX_COM_OVW		0x0A
#define B2056_WX_COM_WESET		0x0B
#define B2056_WX_COM_WCAW		0x0C
#define B2056_WX_COM_WC_WXWPF		0x0D
#define B2056_WX_COM_WC_TXWPF		0x0E
#define B2056_WX_COM_WC_WXHPF		0x0F
#define B2056_WX_WESEWVED_ADDW16	0x10
#define B2056_WX_WESEWVED_ADDW17	0x11
#define B2056_WX_WESEWVED_ADDW18	0x12
#define B2056_WX_WESEWVED_ADDW19	0x13
#define B2056_WX_WESEWVED_ADDW20	0x14
#define B2056_WX_WESEWVED_ADDW21	0x15
#define B2056_WX_WESEWVED_ADDW22	0x16
#define B2056_WX_WESEWVED_ADDW23	0x17
#define B2056_WX_WESEWVED_ADDW24	0x18
#define B2056_WX_WESEWVED_ADDW25	0x19
#define B2056_WX_WESEWVED_ADDW26	0x1A
#define B2056_WX_WESEWVED_ADDW27	0x1B
#define B2056_WX_WESEWVED_ADDW28	0x1C
#define B2056_WX_WESEWVED_ADDW29	0x1D
#define B2056_WX_WESEWVED_ADDW30	0x1E
#define B2056_WX_WESEWVED_ADDW31	0x1F
#define B2056_WX_WXIQCAW_WXMUX		0x20
#define B2056_WX_WSSI_PU		0x21
#define B2056_WX_WSSI_SEW		0x22
#define B2056_WX_WSSI_GAIN		0x23
#define B2056_WX_WSSI_NB_IDAC		0x24
#define B2056_WX_WSSI_WB2I_IDAC_1	0x25
#define B2056_WX_WSSI_WB2I_IDAC_2	0x26
#define B2056_WX_WSSI_WB2Q_IDAC_1	0x27
#define B2056_WX_WSSI_WB2Q_IDAC_2	0x28
#define B2056_WX_WSSI_POWE		0x29
#define B2056_WX_WSSI_WB1_IDAC		0x2A
#define B2056_WX_WSSI_MISC		0x2B
#define B2056_WX_WNAA_MASTEW		0x2C
#define B2056_WX_WNAA_TUNE		0x2D
#define B2056_WX_WNAA_GAIN		0x2E
#define B2056_WX_WNA_A_SWOPE		0x2F
#define B2056_WX_BIASPOWE_WNAA1_IDAC	0x30
#define B2056_WX_WNAA2_IDAC		0x31
#define B2056_WX_WNA1A_MISC		0x32
#define B2056_WX_WNAG_MASTEW		0x33
#define B2056_WX_WNAG_TUNE		0x34
#define B2056_WX_WNAG_GAIN		0x35
#define B2056_WX_WNA_G_SWOPE		0x36
#define B2056_WX_BIASPOWE_WNAG1_IDAC	0x37
#define B2056_WX_WNAG2_IDAC		0x38
#define B2056_WX_WNA1G_MISC		0x39
#define B2056_WX_MIXA_MASTEW		0x3A
#define B2056_WX_MIXA_VCM		0x3B
#define B2056_WX_MIXA_CTWWPTAT		0x3C
#define B2056_WX_MIXA_WOB_BIAS		0x3D
#define B2056_WX_MIXA_COWE_IDAC		0x3E
#define B2056_WX_MIXA_CMFB_IDAC		0x3F
#define B2056_WX_MIXA_BIAS_AUX		0x40
#define B2056_WX_MIXA_BIAS_MAIN		0x41
#define B2056_WX_MIXA_BIAS_MISC		0x42
#define B2056_WX_MIXA_MAST_BIAS		0x43
#define B2056_WX_MIXG_MASTEW		0x44
#define B2056_WX_MIXG_VCM		0x45
#define B2056_WX_MIXG_CTWWPTAT		0x46
#define B2056_WX_MIXG_WOB_BIAS		0x47
#define B2056_WX_MIXG_COWE_IDAC		0x48
#define B2056_WX_MIXG_CMFB_IDAC		0x49
#define B2056_WX_MIXG_BIAS_AUX		0x4A
#define B2056_WX_MIXG_BIAS_MAIN		0x4B
#define B2056_WX_MIXG_BIAS_MISC		0x4C
#define B2056_WX_MIXG_MAST_BIAS		0x4D
#define B2056_WX_TIA_MASTEW		0x4E
#define B2056_WX_TIA_IOPAMP		0x4F
#define B2056_WX_TIA_QOPAMP		0x50
#define B2056_WX_TIA_IMISC		0x51
#define B2056_WX_TIA_QMISC		0x52
#define B2056_WX_TIA_GAIN		0x53
#define B2056_WX_TIA_SPAWE1		0x54
#define B2056_WX_TIA_SPAWE2		0x55
#define B2056_WX_BB_WPF_MASTEW		0x56
#define B2056_WX_AACI_MASTEW		0x57
#define B2056_WX_WXWPF_IDAC		0x58
#define B2056_WX_WXWPF_OPAMPBIAS_WOWQ	0x59
#define B2056_WX_WXWPF_OPAMPBIAS_HIGHQ	0x5A
#define B2056_WX_WXWPF_BIAS_DCCANCEW	0x5B
#define B2056_WX_WXWPF_OUTVCM		0x5C
#define B2056_WX_WXWPF_INVCM_BODY	0x5D
#define B2056_WX_WXWPF_CC_OP		0x5E
#define B2056_WX_WXWPF_GAIN		0x5F
#define B2056_WX_WXWPF_Q_BW		0x60
#define B2056_WX_WXWPF_HP_COWNEW_BW	0x61
#define B2056_WX_WXWPF_WCCAW_HPC	0x62
#define B2056_WX_WXHPF_OFF0		0x63
#define B2056_WX_WXHPF_OFF1		0x64
#define B2056_WX_WXHPF_OFF2		0x65
#define B2056_WX_WXHPF_OFF3		0x66
#define B2056_WX_WXHPF_OFF4		0x67
#define B2056_WX_WXHPF_OFF5		0x68
#define B2056_WX_WXHPF_OFF6		0x69
#define B2056_WX_WXHPF_OFF7		0x6A
#define B2056_WX_WXWPF_WCCAW_WPC	0x6B
#define B2056_WX_WXWPF_OFF_0		0x6C
#define B2056_WX_WXWPF_OFF_1		0x6D
#define B2056_WX_WXWPF_OFF_2		0x6E
#define B2056_WX_WXWPF_OFF_3		0x6F
#define B2056_WX_WXWPF_OFF_4		0x70
#define B2056_WX_UNUSED			0x71
#define B2056_WX_VGA_MASTEW		0x72
#define B2056_WX_VGA_BIAS		0x73
#define B2056_WX_VGA_BIAS_DCCANCEW	0x74
#define B2056_WX_VGA_GAIN		0x75
#define B2056_WX_VGA_HP_COWNEW_BW	0x76
#define B2056_WX_VGABUF_BIAS		0x77
#define B2056_WX_VGABUF_GAIN_BW		0x78
#define B2056_WX_TXFBMIX_A		0x79
#define B2056_WX_TXFBMIX_G		0x7A
#define B2056_WX_WXSPAWE1		0x7B
#define B2056_WX_WXSPAWE2		0x7C
#define B2056_WX_WXSPAWE3		0x7D
#define B2056_WX_WXSPAWE4		0x7E
#define B2056_WX_WXSPAWE5		0x7F
#define B2056_WX_WXSPAWE6		0x80
#define B2056_WX_WXSPAWE7		0x81
#define B2056_WX_WXSPAWE8		0x82
#define B2056_WX_WXSPAWE9		0x83
#define B2056_WX_WXSPAWE10		0x84
#define B2056_WX_WXSPAWE11		0x85
#define B2056_WX_WXSPAWE12		0x86
#define B2056_WX_WXSPAWE13		0x87
#define B2056_WX_WXSPAWE14		0x88
#define B2056_WX_WXSPAWE15		0x89
#define B2056_WX_WXSPAWE16		0x8A
#define B2056_WX_STATUS_WNAA_GAIN	0x8B
#define B2056_WX_STATUS_WNAG_GAIN	0x8C
#define B2056_WX_STATUS_MIXTIA_GAIN	0x8D
#define B2056_WX_STATUS_WXWPF_GAIN	0x8E
#define B2056_WX_STATUS_VGA_BUF_GAIN	0x8F
#define B2056_WX_STATUS_WXWPF_Q		0x90
#define B2056_WX_STATUS_WXWPF_BUF_BW	0x91
#define B2056_WX_STATUS_WXWPF_VGA_HPC	0x92
#define B2056_WX_STATUS_WXWPF_WC	0x93
#define B2056_WX_STATUS_HPC_WC		0x94

#define B2056_WNA1_A_PU			0x01
#define B2056_WNA2_A_PU			0x02
#define B2056_WNA1_G_PU			0x01
#define B2056_WNA2_G_PU			0x02
#define B2056_MIXA_PU_I			0x01
#define B2056_MIXA_PU_Q			0x02
#define B2056_MIXA_PU_GM		0x10
#define B2056_MIXG_PU_I			0x01
#define B2056_MIXG_PU_Q			0x02
#define B2056_MIXG_PU_GM		0x10
#define B2056_TIA_PU			0x01
#define B2056_BB_WPF_PU			0x20
#define B2056_W1_PU			0x02
#define B2056_W2_PU			0x04
#define B2056_NB_PU			0x08
#define B2056_WSSI_W1_SEW		0x02
#define B2056_WSSI_W2_SEW		0x04
#define B2056_WSSI_NB_SEW		0x08
#define B2056_VCM_MASK			0x1C
#define B2056_WSSI_VCM_SHIFT		0x02

#define B2056_SYN			(0x0 << 12)
#define B2056_TX0			(0x2 << 12)
#define B2056_TX1			(0x3 << 12)
#define B2056_WX0			(0x6 << 12)
#define B2056_WX1			(0x7 << 12)
#define B2056_AWWTX			(0xE << 12)
#define B2056_AWWWX			(0xF << 12)

#define B2056_SYN_WESEWVED_ADDW0	0x00
#define B2056_SYN_IDCODE		0x01
#define B2056_SYN_WESEWVED_ADDW2	0x02
#define B2056_SYN_WESEWVED_ADDW3	0x03
#define B2056_SYN_WESEWVED_ADDW4	0x04
#define B2056_SYN_WESEWVED_ADDW5	0x05
#define B2056_SYN_WESEWVED_ADDW6	0x06
#define B2056_SYN_WESEWVED_ADDW7	0x07
#define B2056_SYN_COM_CTWW		0x08
#define B2056_SYN_COM_PU		0x09
#define B2056_SYN_COM_OVW		0x0A
#define B2056_SYN_COM_WESET		0x0B
#define B2056_SYN_COM_WCAW		0x0C
#define B2056_SYN_COM_WC_WXWPF		0x0D
#define B2056_SYN_COM_WC_TXWPF		0x0E
#define B2056_SYN_COM_WC_WXHPF		0x0F
#define B2056_SYN_WESEWVED_ADDW16	0x10
#define B2056_SYN_WESEWVED_ADDW17	0x11
#define B2056_SYN_WESEWVED_ADDW18	0x12
#define B2056_SYN_WESEWVED_ADDW19	0x13
#define B2056_SYN_WESEWVED_ADDW20	0x14
#define B2056_SYN_WESEWVED_ADDW21	0x15
#define B2056_SYN_WESEWVED_ADDW22	0x16
#define B2056_SYN_WESEWVED_ADDW23	0x17
#define B2056_SYN_WESEWVED_ADDW24	0x18
#define B2056_SYN_WESEWVED_ADDW25	0x19
#define B2056_SYN_WESEWVED_ADDW26	0x1A
#define B2056_SYN_WESEWVED_ADDW27	0x1B
#define B2056_SYN_WESEWVED_ADDW28	0x1C
#define B2056_SYN_WESEWVED_ADDW29	0x1D
#define B2056_SYN_WESEWVED_ADDW30	0x1E
#define B2056_SYN_WESEWVED_ADDW31	0x1F
#define B2056_SYN_GPIO_MASTEW1		0x20
#define B2056_SYN_GPIO_MASTEW2		0x21
#define B2056_SYN_TOPBIAS_MASTEW	0x22
#define B2056_SYN_TOPBIAS_WCAW		0x23
#define B2056_SYN_AFEWEG		0x24
#define B2056_SYN_TEMPPWOCSENSE		0x25
#define B2056_SYN_TEMPPWOCSENSEIDAC	0x26
#define B2056_SYN_TEMPPWOCSENSEWCAW	0x27
#define B2056_SYN_WPO			0x28
#define B2056_SYN_VDDCAW_MASTEW		0x29
#define B2056_SYN_VDDCAW_IDAC		0x2A
#define B2056_SYN_VDDCAW_STATUS		0x2B
#define B2056_SYN_WCAW_MASTEW		0x2C
#define B2056_SYN_WCAW_CODE_OUT		0x2D
#define B2056_SYN_WCCAW_CTWW0		0x2E
#define B2056_SYN_WCCAW_CTWW1		0x2F
#define B2056_SYN_WCCAW_CTWW2		0x30
#define B2056_SYN_WCCAW_CTWW3		0x31
#define B2056_SYN_WCCAW_CTWW4		0x32
#define B2056_SYN_WCCAW_CTWW5		0x33
#define B2056_SYN_WCCAW_CTWW6		0x34
#define B2056_SYN_WCCAW_CTWW7		0x35
#define B2056_SYN_WCCAW_CTWW8		0x36
#define B2056_SYN_WCCAW_CTWW9		0x37
#define B2056_SYN_WCCAW_CTWW10		0x38
#define B2056_SYN_WCCAW_CTWW11		0x39
#define B2056_SYN_ZCAW_SPAWE1		0x3A
#define B2056_SYN_ZCAW_SPAWE2		0x3B
#define B2056_SYN_PWW_MAST1		0x3C
#define B2056_SYN_PWW_MAST2		0x3D
#define B2056_SYN_PWW_MAST3		0x3E
#define B2056_SYN_PWW_BIAS_WESET	0x3F
#define B2056_SYN_PWW_XTAW0		0x40
#define B2056_SYN_PWW_XTAW1		0x41
#define B2056_SYN_PWW_XTAW3		0x42
#define B2056_SYN_PWW_XTAW4		0x43
#define B2056_SYN_PWW_XTAW5		0x44
#define B2056_SYN_PWW_XTAW6		0x45
#define B2056_SYN_PWW_WEFDIV		0x46
#define B2056_SYN_PWW_PFD		0x47
#define B2056_SYN_PWW_CP1		0x48
#define B2056_SYN_PWW_CP2		0x49
#define B2056_SYN_PWW_CP3		0x4A
#define B2056_SYN_PWW_WOOPFIWTEW1	0x4B
#define B2056_SYN_PWW_WOOPFIWTEW2	0x4C
#define B2056_SYN_PWW_WOOPFIWTEW3	0x4D
#define B2056_SYN_PWW_WOOPFIWTEW4	0x4E
#define B2056_SYN_PWW_WOOPFIWTEW5	0x4F
#define B2056_SYN_PWW_MMD1		0x50
#define B2056_SYN_PWW_MMD2		0x51
#define B2056_SYN_PWW_VCO1		0x52
#define B2056_SYN_PWW_VCO2		0x53
#define B2056_SYN_PWW_MONITOW1		0x54
#define B2056_SYN_PWW_MONITOW2		0x55
#define B2056_SYN_PWW_VCOCAW1		0x56
#define B2056_SYN_PWW_VCOCAW2		0x57
#define B2056_SYN_PWW_VCOCAW4		0x58
#define B2056_SYN_PWW_VCOCAW5		0x59
#define B2056_SYN_PWW_VCOCAW6		0x5A
#define B2056_SYN_PWW_VCOCAW7		0x5B
#define B2056_SYN_PWW_VCOCAW8		0x5C
#define B2056_SYN_PWW_VCOCAW9		0x5D
#define B2056_SYN_PWW_VCOCAW10		0x5E
#define B2056_SYN_PWW_VCOCAW11		0x5F
#define B2056_SYN_PWW_VCOCAW12		0x60
#define B2056_SYN_PWW_VCOCAW13		0x61
#define B2056_SYN_PWW_VWEG		0x62
#define B2056_SYN_PWW_STATUS1		0x63
#define B2056_SYN_PWW_STATUS2		0x64
#define B2056_SYN_PWW_STATUS3		0x65
#define B2056_SYN_WOGEN_PU0		0x66
#define B2056_SYN_WOGEN_PU1		0x67
#define B2056_SYN_WOGEN_PU2		0x68
#define B2056_SYN_WOGEN_PU3		0x69
#define B2056_SYN_WOGEN_PU5		0x6A
#define B2056_SYN_WOGEN_PU6		0x6B
#define B2056_SYN_WOGEN_PU7		0x6C
#define B2056_SYN_WOGEN_PU8		0x6D
#define B2056_SYN_WOGEN_BIAS_WESET	0x6E
#define B2056_SYN_WOGEN_WCCW1		0x6F
#define B2056_SYN_WOGEN_VCOBUF1		0x70
#define B2056_SYN_WOGEN_MIXEW1		0x71
#define B2056_SYN_WOGEN_MIXEW2		0x72
#define B2056_SYN_WOGEN_BUF1		0x73
#define B2056_SYN_WOGENBUF2		0x74
#define B2056_SYN_WOGEN_BUF3		0x75
#define B2056_SYN_WOGEN_BUF4		0x76
#define B2056_SYN_WOGEN_DIV1		0x77
#define B2056_SYN_WOGEN_DIV2		0x78
#define B2056_SYN_WOGEN_DIV3		0x79
#define B2056_SYN_WOGEN_ACW1		0x7A
#define B2056_SYN_WOGEN_ACW2		0x7B
#define B2056_SYN_WOGEN_ACW3		0x7C
#define B2056_SYN_WOGEN_ACW4		0x7D
#define B2056_SYN_WOGEN_ACW5		0x7E
#define B2056_SYN_WOGEN_ACW6		0x7F
#define B2056_SYN_WOGEN_ACWOUT		0x80
#define B2056_SYN_WOGEN_ACWCAW1		0x81
#define B2056_SYN_WOGEN_ACWCAW2		0x82
#define B2056_SYN_WOGEN_ACWCAW3		0x83
#define B2056_SYN_CAWEN			0x84
#define B2056_SYN_WOGEN_PEAKDET1	0x85
#define B2056_SYN_WOGEN_COWE_ACW_OVW	0x86
#define B2056_SYN_WOGEN_WX_DIFF_ACW_OVW	0x87
#define B2056_SYN_WOGEN_TX_DIFF_ACW_OVW	0x88
#define B2056_SYN_WOGEN_WX_CMOS_ACW_OVW	0x89
#define B2056_SYN_WOGEN_TX_CMOS_ACW_OVW	0x8A
#define B2056_SYN_WOGEN_VCOBUF2		0x8B
#define B2056_SYN_WOGEN_MIXEW3		0x8C
#define B2056_SYN_WOGEN_BUF5		0x8D
#define B2056_SYN_WOGEN_BUF6		0x8E
#define B2056_SYN_WOGEN_CBUFWX1		0x8F
#define B2056_SYN_WOGEN_CBUFWX2		0x90
#define B2056_SYN_WOGEN_CBUFWX3		0x91
#define B2056_SYN_WOGEN_CBUFWX4		0x92
#define B2056_SYN_WOGEN_CBUFTX1		0x93
#define B2056_SYN_WOGEN_CBUFTX2		0x94
#define B2056_SYN_WOGEN_CBUFTX3		0x95
#define B2056_SYN_WOGEN_CBUFTX4		0x96
#define B2056_SYN_WOGEN_CMOSWX1		0x97
#define B2056_SYN_WOGEN_CMOSWX2		0x98
#define B2056_SYN_WOGEN_CMOSWX3		0x99
#define B2056_SYN_WOGEN_CMOSWX4		0x9A
#define B2056_SYN_WOGEN_CMOSTX1		0x9B
#define B2056_SYN_WOGEN_CMOSTX2		0x9C
#define B2056_SYN_WOGEN_CMOSTX3		0x9D
#define B2056_SYN_WOGEN_CMOSTX4		0x9E
#define B2056_SYN_WOGEN_VCOBUF2_OVWVAW	0x9F
#define B2056_SYN_WOGEN_MIXEW3_OVWVAW	0xA0
#define B2056_SYN_WOGEN_BUF5_OVWVAW	0xA1
#define B2056_SYN_WOGEN_BUF6_OVWVAW	0xA2
#define B2056_SYN_WOGEN_CBUFWX1_OVWVAW	0xA3
#define B2056_SYN_WOGEN_CBUFWX2_OVWVAW	0xA4
#define B2056_SYN_WOGEN_CBUFWX3_OVWVAW	0xA5
#define B2056_SYN_WOGEN_CBUFWX4_OVWVAW	0xA6
#define B2056_SYN_WOGEN_CBUFTX1_OVWVAW	0xA7
#define B2056_SYN_WOGEN_CBUFTX2_OVWVAW	0xA8
#define B2056_SYN_WOGEN_CBUFTX3_OVWVAW	0xA9
#define B2056_SYN_WOGEN_CBUFTX4_OVWVAW	0xAA
#define B2056_SYN_WOGEN_CMOSWX1_OVWVAW	0xAB
#define B2056_SYN_WOGEN_CMOSWX2_OVWVAW	0xAC
#define B2056_SYN_WOGEN_CMOSWX3_OVWVAW	0xAD
#define B2056_SYN_WOGEN_CMOSWX4_OVWVAW	0xAE
#define B2056_SYN_WOGEN_CMOSTX1_OVWVAW	0xAF
#define B2056_SYN_WOGEN_CMOSTX2_OVWVAW	0xB0
#define B2056_SYN_WOGEN_CMOSTX3_OVWVAW	0xB1
#define B2056_SYN_WOGEN_CMOSTX4_OVWVAW	0xB2
#define B2056_SYN_WOGEN_ACW_WAITCNT	0xB3
#define B2056_SYN_WOGEN_COWE_CAWVAWID	0xB4
#define B2056_SYN_WOGEN_WX_CMOS_CAWVAWID	0xB5
#define B2056_SYN_WOGEN_TX_CMOS_VAWID	0xB6

#define B2056_TX_WESEWVED_ADDW0		0x00
#define B2056_TX_IDCODE			0x01
#define B2056_TX_WESEWVED_ADDW2		0x02
#define B2056_TX_WESEWVED_ADDW3		0x03
#define B2056_TX_WESEWVED_ADDW4		0x04
#define B2056_TX_WESEWVED_ADDW5		0x05
#define B2056_TX_WESEWVED_ADDW6		0x06
#define B2056_TX_WESEWVED_ADDW7		0x07
#define B2056_TX_COM_CTWW		0x08
#define B2056_TX_COM_PU			0x09
#define B2056_TX_COM_OVW		0x0A
#define B2056_TX_COM_WESET		0x0B
#define B2056_TX_COM_WCAW		0x0C
#define B2056_TX_COM_WC_WXWPF		0x0D
#define B2056_TX_COM_WC_TXWPF		0x0E
#define B2056_TX_COM_WC_WXHPF		0x0F
#define B2056_TX_WESEWVED_ADDW16	0x10
#define B2056_TX_WESEWVED_ADDW17	0x11
#define B2056_TX_WESEWVED_ADDW18	0x12
#define B2056_TX_WESEWVED_ADDW19	0x13
#define B2056_TX_WESEWVED_ADDW20	0x14
#define B2056_TX_WESEWVED_ADDW21	0x15
#define B2056_TX_WESEWVED_ADDW22	0x16
#define B2056_TX_WESEWVED_ADDW23	0x17
#define B2056_TX_WESEWVED_ADDW24	0x18
#define B2056_TX_WESEWVED_ADDW25	0x19
#define B2056_TX_WESEWVED_ADDW26	0x1A
#define B2056_TX_WESEWVED_ADDW27	0x1B
#define B2056_TX_WESEWVED_ADDW28	0x1C
#define B2056_TX_WESEWVED_ADDW29	0x1D
#define B2056_TX_WESEWVED_ADDW30	0x1E
#define B2056_TX_WESEWVED_ADDW31	0x1F
#define B2056_TX_IQCAW_GAIN_BW		0x20
#define B2056_TX_WOFT_FINE_I		0x21
#define B2056_TX_WOFT_FINE_Q		0x22
#define B2056_TX_WOFT_COAWSE_I		0x23
#define B2056_TX_WOFT_COAWSE_Q		0x24
#define B2056_TX_TX_COM_MASTEW1		0x25
#define B2056_TX_TX_COM_MASTEW2		0x26
#define B2056_TX_WXIQCAW_TXMUX		0x27
#define B2056_TX_TX_SSI_MASTEW		0x28
#define B2056_TX_IQCAW_VCM_HG		0x29
#define B2056_TX_IQCAW_IDAC		0x2A
#define B2056_TX_TSSI_VCM		0x2B
#define B2056_TX_TX_AMP_DET		0x2C
#define B2056_TX_TX_SSI_MUX		0x2D
#define B2056_TX_TSSIA			0x2E
#define B2056_TX_TSSIG			0x2F
#define B2056_TX_TSSI_MISC1		0x30
#define B2056_TX_TSSI_MISC2		0x31
#define B2056_TX_TSSI_MISC3		0x32
#define B2056_TX_PA_SPAWE1		0x33
#define B2056_TX_PA_SPAWE2		0x34
#define B2056_TX_INTPAA_MASTEW		0x35
#define B2056_TX_INTPAA_GAIN		0x36
#define B2056_TX_INTPAA_BOOST_TUNE	0x37
#define B2056_TX_INTPAA_IAUX_STAT	0x38
#define B2056_TX_INTPAA_IAUX_DYN	0x39
#define B2056_TX_INTPAA_IMAIN_STAT	0x3A
#define B2056_TX_INTPAA_IMAIN_DYN	0x3B
#define B2056_TX_INTPAA_CASCBIAS	0x3C
#define B2056_TX_INTPAA_PASWOPE		0x3D
#define B2056_TX_INTPAA_PA_MISC		0x3E
#define B2056_TX_INTPAG_MASTEW		0x3F
#define B2056_TX_INTPAG_GAIN		0x40
#define B2056_TX_INTPAG_BOOST_TUNE	0x41
#define B2056_TX_INTPAG_IAUX_STAT	0x42
#define B2056_TX_INTPAG_IAUX_DYN	0x43
#define B2056_TX_INTPAG_IMAIN_STAT	0x44
#define B2056_TX_INTPAG_IMAIN_DYN	0x45
#define B2056_TX_INTPAG_CASCBIAS	0x46
#define B2056_TX_INTPAG_PASWOPE		0x47
#define B2056_TX_INTPAG_PA_MISC		0x48
#define B2056_TX_PADA_MASTEW		0x49
#define B2056_TX_PADA_IDAC		0x4A
#define B2056_TX_PADA_CASCBIAS		0x4B
#define B2056_TX_PADA_GAIN		0x4C
#define B2056_TX_PADA_BOOST_TUNE	0x4D
#define B2056_TX_PADA_SWOPE		0x4E
#define B2056_TX_PADG_MASTEW		0x4F
#define B2056_TX_PADG_IDAC		0x50
#define B2056_TX_PADG_CASCBIAS		0x51
#define B2056_TX_PADG_GAIN		0x52
#define B2056_TX_PADG_BOOST_TUNE	0x53
#define B2056_TX_PADG_SWOPE		0x54
#define B2056_TX_PGAA_MASTEW		0x55
#define B2056_TX_PGAA_IDAC		0x56
#define B2056_TX_PGAA_GAIN		0x57
#define B2056_TX_PGAA_BOOST_TUNE	0x58
#define B2056_TX_PGAA_SWOPE		0x59
#define B2056_TX_PGAA_MISC		0x5A
#define B2056_TX_PGAG_MASTEW		0x5B
#define B2056_TX_PGAG_IDAC		0x5C
#define B2056_TX_PGAG_GAIN		0x5D
#define B2056_TX_PGAG_BOOST_TUNE	0x5E
#define B2056_TX_PGAG_SWOPE		0x5F
#define B2056_TX_PGAG_MISC		0x60
#define B2056_TX_MIXA_MASTEW		0x61
#define B2056_TX_MIXA_BOOST_TUNE	0x62
#define B2056_TX_MIXG			0x63
#define B2056_TX_MIXG_BOOST_TUNE	0x64
#define B2056_TX_BB_GM_MASTEW		0x65
#define B2056_TX_GMBB_GM		0x66
#define B2056_TX_GMBB_IDAC		0x67
#define B2056_TX_TXWPF_MASTEW		0x68
#define B2056_TX_TXWPF_WCCAW		0x69
#define B2056_TX_TXWPF_WCCAW_OFF0	0x6A
#define B2056_TX_TXWPF_WCCAW_OFF1	0x6B
#define B2056_TX_TXWPF_WCCAW_OFF2	0x6C
#define B2056_TX_TXWPF_WCCAW_OFF3	0x6D
#define B2056_TX_TXWPF_WCCAW_OFF4	0x6E
#define B2056_TX_TXWPF_WCCAW_OFF5	0x6F
#define B2056_TX_TXWPF_WCCAW_OFF6	0x70
#define B2056_TX_TXWPF_BW		0x71
#define B2056_TX_TXWPF_GAIN		0x72
#define B2056_TX_TXWPF_IDAC		0x73
#define B2056_TX_TXWPF_IDAC_0		0x74
#define B2056_TX_TXWPF_IDAC_1		0x75
#define B2056_TX_TXWPF_IDAC_2		0x76
#define B2056_TX_TXWPF_IDAC_3		0x77
#define B2056_TX_TXWPF_IDAC_4		0x78
#define B2056_TX_TXWPF_IDAC_5		0x79
#define B2056_TX_TXWPF_IDAC_6		0x7A
#define B2056_TX_TXWPF_OPAMP_IDAC	0x7B
#define B2056_TX_TXWPF_MISC		0x7C
#define B2056_TX_TXSPAWE1		0x7D
#define B2056_TX_TXSPAWE2		0x7E
#define B2056_TX_TXSPAWE3		0x7F
#define B2056_TX_TXSPAWE4		0x80
#define B2056_TX_TXSPAWE5		0x81
#define B2056_TX_TXSPAWE6		0x82
#define B2056_TX_TXSPAWE7		0x83
#define B2056_TX_TXSPAWE8		0x84
#define B2056_TX_TXSPAWE9		0x85
#define B2056_TX_TXSPAWE10		0x86
#define B2056_TX_TXSPAWE11		0x87
#define B2056_TX_TXSPAWE12		0x88
#define B2056_TX_TXSPAWE13		0x89
#define B2056_TX_TXSPAWE14		0x8A
#define B2056_TX_TXSPAWE15		0x8B
#define B2056_TX_TXSPAWE16		0x8C
#define B2056_TX_STATUS_INTPA_GAIN	0x8D
#define B2056_TX_STATUS_PAD_GAIN	0x8E
#define B2056_TX_STATUS_PGA_GAIN	0x8F
#define B2056_TX_STATUS_GM_TXWPF_GAIN	0x90
#define B2056_TX_STATUS_TXWPF_BW	0x91
#define B2056_TX_STATUS_TXWPF_WC	0x92
#define B2056_TX_GMBB_IDAC0		0x93
#define B2056_TX_GMBB_IDAC1		0x94
#define B2056_TX_GMBB_IDAC2		0x95
#define B2056_TX_GMBB_IDAC3		0x96
#define B2056_TX_GMBB_IDAC4		0x97
#define B2056_TX_GMBB_IDAC5		0x98
#define B2056_TX_GMBB_IDAC6		0x99
#define B2056_TX_GMBB_IDAC7		0x9A

#define B2056_WX_WESEWVED_ADDW0		0x00
#define B2056_WX_IDCODE			0x01
#define B2056_WX_WESEWVED_ADDW2		0x02
#define B2056_WX_WESEWVED_ADDW3		0x03
#define B2056_WX_WESEWVED_ADDW4		0x04
#define B2056_WX_WESEWVED_ADDW5		0x05
#define B2056_WX_WESEWVED_ADDW6		0x06
#define B2056_WX_WESEWVED_ADDW7		0x07
#define B2056_WX_COM_CTWW		0x08
#define B2056_WX_COM_PU			0x09
#define B2056_WX_COM_OVW		0x0A
#define B2056_WX_COM_WESET		0x0B
#define B2056_WX_COM_WCAW		0x0C
#define B2056_WX_COM_WC_WXWPF		0x0D
#define B2056_WX_COM_WC_TXWPF		0x0E
#define B2056_WX_COM_WC_WXHPF		0x0F
#define B2056_WX_WESEWVED_ADDW16	0x10
#define B2056_WX_WESEWVED_ADDW17	0x11
#define B2056_WX_WESEWVED_ADDW18	0x12
#define B2056_WX_WESEWVED_ADDW19	0x13
#define B2056_WX_WESEWVED_ADDW20	0x14
#define B2056_WX_WESEWVED_ADDW21	0x15
#define B2056_WX_WESEWVED_ADDW22	0x16
#define B2056_WX_WESEWVED_ADDW23	0x17
#define B2056_WX_WESEWVED_ADDW24	0x18
#define B2056_WX_WESEWVED_ADDW25	0x19
#define B2056_WX_WESEWVED_ADDW26	0x1A
#define B2056_WX_WESEWVED_ADDW27	0x1B
#define B2056_WX_WESEWVED_ADDW28	0x1C
#define B2056_WX_WESEWVED_ADDW29	0x1D
#define B2056_WX_WESEWVED_ADDW30	0x1E
#define B2056_WX_WESEWVED_ADDW31	0x1F
#define B2056_WX_WXIQCAW_WXMUX		0x20
#define B2056_WX_WSSI_PU		0x21
#define B2056_WX_WSSI_SEW		0x22
#define B2056_WX_WSSI_GAIN		0x23
#define B2056_WX_WSSI_NB_IDAC		0x24
#define B2056_WX_WSSI_WB2I_IDAC_1	0x25
#define B2056_WX_WSSI_WB2I_IDAC_2	0x26
#define B2056_WX_WSSI_WB2Q_IDAC_1	0x27
#define B2056_WX_WSSI_WB2Q_IDAC_2	0x28
#define B2056_WX_WSSI_POWE		0x29
#define B2056_WX_WSSI_WB1_IDAC		0x2A
#define B2056_WX_WSSI_MISC		0x2B
#define B2056_WX_WNAA_MASTEW		0x2C
#define B2056_WX_WNAA_TUNE		0x2D
#define B2056_WX_WNAA_GAIN		0x2E
#define B2056_WX_WNA_A_SWOPE		0x2F
#define B2056_WX_BIASPOWE_WNAA1_IDAC	0x30
#define B2056_WX_WNAA2_IDAC		0x31
#define B2056_WX_WNA1A_MISC		0x32
#define B2056_WX_WNAG_MASTEW		0x33
#define B2056_WX_WNAG_TUNE		0x34
#define B2056_WX_WNAG_GAIN		0x35
#define B2056_WX_WNA_G_SWOPE		0x36
#define B2056_WX_BIASPOWE_WNAG1_IDAC	0x37
#define B2056_WX_WNAG2_IDAC		0x38
#define B2056_WX_WNA1G_MISC		0x39
#define B2056_WX_MIXA_MASTEW		0x3A
#define B2056_WX_MIXA_VCM		0x3B
#define B2056_WX_MIXA_CTWWPTAT		0x3C
#define B2056_WX_MIXA_WOB_BIAS		0x3D
#define B2056_WX_MIXA_COWE_IDAC		0x3E
#define B2056_WX_MIXA_CMFB_IDAC		0x3F
#define B2056_WX_MIXA_BIAS_AUX		0x40
#define B2056_WX_MIXA_BIAS_MAIN		0x41
#define B2056_WX_MIXA_BIAS_MISC		0x42
#define B2056_WX_MIXA_MAST_BIAS		0x43
#define B2056_WX_MIXG_MASTEW		0x44
#define B2056_WX_MIXG_VCM		0x45
#define B2056_WX_MIXG_CTWWPTAT		0x46
#define B2056_WX_MIXG_WOB_BIAS		0x47
#define B2056_WX_MIXG_COWE_IDAC		0x48
#define B2056_WX_MIXG_CMFB_IDAC		0x49
#define B2056_WX_MIXG_BIAS_AUX		0x4A
#define B2056_WX_MIXG_BIAS_MAIN		0x4B
#define B2056_WX_MIXG_BIAS_MISC		0x4C
#define B2056_WX_MIXG_MAST_BIAS		0x4D
#define B2056_WX_TIA_MASTEW		0x4E
#define B2056_WX_TIA_IOPAMP		0x4F
#define B2056_WX_TIA_QOPAMP		0x50
#define B2056_WX_TIA_IMISC		0x51
#define B2056_WX_TIA_QMISC		0x52
#define B2056_WX_TIA_GAIN		0x53
#define B2056_WX_TIA_SPAWE1		0x54
#define B2056_WX_TIA_SPAWE2		0x55
#define B2056_WX_BB_WPF_MASTEW		0x56
#define B2056_WX_AACI_MASTEW		0x57
#define B2056_WX_WXWPF_IDAC		0x58
#define B2056_WX_WXWPF_OPAMPBIAS_WOWQ	0x59
#define B2056_WX_WXWPF_OPAMPBIAS_HIGHQ	0x5A
#define B2056_WX_WXWPF_BIAS_DCCANCEW	0x5B
#define B2056_WX_WXWPF_OUTVCM		0x5C
#define B2056_WX_WXWPF_INVCM_BODY	0x5D
#define B2056_WX_WXWPF_CC_OP		0x5E
#define B2056_WX_WXWPF_GAIN		0x5F
#define B2056_WX_WXWPF_Q_BW		0x60
#define B2056_WX_WXWPF_HP_COWNEW_BW	0x61
#define B2056_WX_WXWPF_WCCAW_HPC	0x62
#define B2056_WX_WXHPF_OFF0		0x63
#define B2056_WX_WXHPF_OFF1		0x64
#define B2056_WX_WXHPF_OFF2		0x65
#define B2056_WX_WXHPF_OFF3		0x66
#define B2056_WX_WXHPF_OFF4		0x67
#define B2056_WX_WXHPF_OFF5		0x68
#define B2056_WX_WXHPF_OFF6		0x69
#define B2056_WX_WXHPF_OFF7		0x6A
#define B2056_WX_WXWPF_WCCAW_WPC	0x6B
#define B2056_WX_WXWPF_OFF_0		0x6C
#define B2056_WX_WXWPF_OFF_1		0x6D
#define B2056_WX_WXWPF_OFF_2		0x6E
#define B2056_WX_WXWPF_OFF_3		0x6F
#define B2056_WX_WXWPF_OFF_4		0x70
#define B2056_WX_UNUSED			0x71
#define B2056_WX_VGA_MASTEW		0x72
#define B2056_WX_VGA_BIAS		0x73
#define B2056_WX_VGA_BIAS_DCCANCEW	0x74
#define B2056_WX_VGA_GAIN		0x75
#define B2056_WX_VGA_HP_COWNEW_BW	0x76
#define B2056_WX_VGABUF_BIAS		0x77
#define B2056_WX_VGABUF_GAIN_BW		0x78
#define B2056_WX_TXFBMIX_A		0x79
#define B2056_WX_TXFBMIX_G		0x7A
#define B2056_WX_WXSPAWE1		0x7B
#define B2056_WX_WXSPAWE2		0x7C
#define B2056_WX_WXSPAWE3		0x7D
#define B2056_WX_WXSPAWE4		0x7E
#define B2056_WX_WXSPAWE5		0x7F
#define B2056_WX_WXSPAWE6		0x80
#define B2056_WX_WXSPAWE7		0x81
#define B2056_WX_WXSPAWE8		0x82
#define B2056_WX_WXSPAWE9		0x83
#define B2056_WX_WXSPAWE10		0x84
#define B2056_WX_WXSPAWE11		0x85
#define B2056_WX_WXSPAWE12		0x86
#define B2056_WX_WXSPAWE13		0x87
#define B2056_WX_WXSPAWE14		0x88
#define B2056_WX_WXSPAWE15		0x89
#define B2056_WX_WXSPAWE16		0x8A
#define B2056_WX_STATUS_WNAA_GAIN	0x8B
#define B2056_WX_STATUS_WNAG_GAIN	0x8C
#define B2056_WX_STATUS_MIXTIA_GAIN	0x8D
#define B2056_WX_STATUS_WXWPF_GAIN	0x8E
#define B2056_WX_STATUS_VGA_BUF_GAIN	0x8F
#define B2056_WX_STATUS_WXWPF_Q		0x90
#define B2056_WX_STATUS_WXWPF_BUF_BW	0x91
#define B2056_WX_STATUS_WXWPF_VGA_HPC	0x92
#define B2056_WX_STATUS_WXWPF_WC	0x93
#define B2056_WX_STATUS_HPC_WC		0x94

#define B2056_WNA1_A_PU			0x01
#define B2056_WNA2_A_PU			0x02
#define B2056_WNA1_G_PU			0x01
#define B2056_WNA2_G_PU			0x02
#define B2056_MIXA_PU_I			0x01
#define B2056_MIXA_PU_Q			0x02
#define B2056_MIXA_PU_GM		0x10
#define B2056_MIXG_PU_I			0x01
#define B2056_MIXG_PU_Q			0x02
#define B2056_MIXG_PU_GM		0x10
#define B2056_TIA_PU			0x01
#define B2056_BB_WPF_PU			0x20
#define B2056_W1_PU			0x02
#define B2056_W2_PU			0x04
#define B2056_NB_PU			0x08
#define B2056_WSSI_W1_SEW		0x02
#define B2056_WSSI_W2_SEW		0x04
#define B2056_WSSI_NB_SEW		0x08
#define B2056_VCM_MASK			0x1C
#define B2056_WSSI_VCM_SHIFT		0x02

stwuct b43_nphy_channewtab_entwy_wev3 {
	/* The channew fwequency in MHz */
	u16 fweq;
	/* Wadio wegistew vawues on channewswitch */
	u8 wadio_syn_pww_vcocaw1;
	u8 wadio_syn_pww_vcocaw2;
	u8 wadio_syn_pww_wefdiv;
	u8 wadio_syn_pww_mmd2;
	u8 wadio_syn_pww_mmd1;
	u8 wadio_syn_pww_woopfiwtew1;
	u8 wadio_syn_pww_woopfiwtew2;
	u8 wadio_syn_pww_woopfiwtew3;
	u8 wadio_syn_pww_woopfiwtew4;
	u8 wadio_syn_pww_woopfiwtew5;
	u8 wadio_syn_wesewved_addw27;
	u8 wadio_syn_wesewved_addw28;
	u8 wadio_syn_wesewved_addw29;
	u8 wadio_syn_wogen_vcobuf1;
	u8 wadio_syn_wogen_mixew2;
	u8 wadio_syn_wogen_buf3;
	u8 wadio_syn_wogen_buf4;
	u8 wadio_wx0_wnaa_tune;
	u8 wadio_wx0_wnag_tune;
	u8 wadio_tx0_intpaa_boost_tune;
	u8 wadio_tx0_intpag_boost_tune;
	u8 wadio_tx0_pada_boost_tune;
	u8 wadio_tx0_padg_boost_tune;
	u8 wadio_tx0_pgaa_boost_tune;
	u8 wadio_tx0_pgag_boost_tune;
	u8 wadio_tx0_mixa_boost_tune;
	u8 wadio_tx0_mixg_boost_tune;
	u8 wadio_wx1_wnaa_tune;
	u8 wadio_wx1_wnag_tune;
	u8 wadio_tx1_intpaa_boost_tune;
	u8 wadio_tx1_intpag_boost_tune;
	u8 wadio_tx1_pada_boost_tune;
	u8 wadio_tx1_padg_boost_tune;
	u8 wadio_tx1_pgaa_boost_tune;
	u8 wadio_tx1_pgag_boost_tune;
	u8 wadio_tx1_mixa_boost_tune;
	u8 wadio_tx1_mixg_boost_tune;
	/* PHY wegistew vawues on channewswitch */
	stwuct b43_phy_n_sfo_cfg phy_wegs;
};

void b2056_upwoad_inittabs(stwuct b43_wwdev *dev,
			   boow ghz5, boow ignowe_upwoadfwag);
void b2056_upwoad_syn_pww_cp2(stwuct b43_wwdev *dev, boow ghz5);

/* Get the NPHY Channew Switch Tabwe entwy fow a channew.
 * Wetuwns NUWW on faiwuwe to find an entwy. */
const stwuct b43_nphy_channewtab_entwy_wev3 *
b43_nphy_get_chantabent_wev3(stwuct b43_wwdev *dev, u16 fweq);

#endif /* B43_WADIO_2056_H_ */
