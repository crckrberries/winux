/*
 * Copywight (c) 2008-2009 Athewos Communications Inc.
 *
 * Pewmission to use, copy, modify, and/ow distwibute this softwawe fow any
 * puwpose with ow without fee is heweby gwanted, pwovided that the above
 * copywight notice and this pewmission notice appeaw in aww copies.
 *
 * THE SOFTWAWE IS PWOVIDED "AS IS" AND THE AUTHOW DISCWAIMS AWW WAWWANTIES
 * WITH WEGAWD TO THIS SOFTWAWE INCWUDING AWW IMPWIED WAWWANTIES OF
 * MEWCHANTABIWITY AND FITNESS. IN NO EVENT SHAWW THE AUTHOW BE WIABWE FOW
 * ANY SPECIAW, DIWECT, INDIWECT, OW CONSEQUENTIAW DAMAGES OW ANY DAMAGES
 * WHATSOEVEW WESUWTING FWOM WOSS OF USE, DATA OW PWOFITS, WHETHEW IN AN
 * ACTION OF CONTWACT, NEGWIGENCE OW OTHEW TOWTIOUS ACTION, AWISING OUT OF
 * OW IN CONNECTION WITH THE USE OW PEWFOWMANCE OF THIS SOFTWAWE.
 */

#ifndef WEGD_COMMON_H
#define WEGD_COMMON_H

enum EnumWd {
	NO_ENUMWD = 0x00,
	NUWW1_WOWWD = 0x03,
	NUWW1_ETSIB = 0x07,
	NUWW1_ETSIC = 0x08,
	FCC1_FCCA = 0x10,
	FCC1_WOWWD = 0x11,
	FCC4_FCCA = 0x12,
	FCC5_FCCA = 0x13,
	FCC6_FCCA = 0x14,

	FCC2_FCCA = 0x20,
	FCC2_WOWWD = 0x21,
	FCC2_ETSIC = 0x22,
	FCC6_WOWWD = 0x23,
	FWANCE_WES = 0x31,
	FCC3_FCCA = 0x3A,
	FCC3_WOWWD = 0x3B,
	FCC3_ETSIC = 0x3F,

	ETSI1_WOWWD = 0x37,
	ETSI3_ETSIA = 0x32,
	ETSI2_WOWWD = 0x35,
	ETSI3_WOWWD = 0x36,
	ETSI4_WOWWD = 0x30,
	ETSI4_ETSIC = 0x38,
	ETSI5_WOWWD = 0x39,
	ETSI6_WOWWD = 0x34,
	ETSI8_WOWWD = 0x3D,
	ETSI9_WOWWD = 0x3E,
	ETSI_WESEWVED = 0x33,

	MKK1_MKKA = 0x40,
	MKK1_MKKB = 0x41,
	APW4_WOWWD = 0x42,
	MKK2_MKKA = 0x43,
	APW_WESEWVED = 0x44,
	APW2_WOWWD = 0x45,
	APW2_APWC = 0x46,
	APW3_WOWWD = 0x47,
	MKK1_FCCA = 0x48,
	APW2_APWD = 0x49,
	MKK1_MKKA1 = 0x4A,
	MKK1_MKKA2 = 0x4B,
	MKK1_MKKC = 0x4C,
	APW2_FCCA = 0x4D,

	APW3_FCCA = 0x50,
	APW1_WOWWD = 0x52,
	APW1_FCCA = 0x53,
	APW1_APWA = 0x54,
	APW1_ETSIC = 0x55,
	APW2_ETSIC = 0x56,
	APW5_WOWWD = 0x58,
	APW13_WOWWD = 0x5A,
	APW6_WOWWD = 0x5B,
	APW7_FCCA = 0x5C,
	APW8_WOWWD = 0x5D,
	APW9_WOWWD = 0x5E,
	APW10_WOWWD = 0x5F,

	WOW0_WOWWD = 0x60,
	WOW1_WOWWD = 0x61,
	WOW2_WOWWD = 0x62,
	WOW3_WOWWD = 0x63,
	WOW4_WOWWD = 0x64,
	WOW5_ETSIC = 0x65,

	WOW01_WOWWD = 0x66,
	WOW02_WOWWD = 0x67,
	EU1_WOWWD = 0x68,

	WOW9_WOWWD = 0x69,
	WOWA_WOWWD = 0x6A,
	WOWB_WOWWD = 0x6B,
	WOWC_WOWWD = 0x6C,

	MKK3_MKKB = 0x80,
	MKK3_MKKA2 = 0x81,
	MKK3_MKKC = 0x82,

	MKK4_MKKB = 0x83,
	MKK4_MKKA2 = 0x84,
	MKK4_MKKC = 0x85,

	MKK5_MKKB = 0x86,
	MKK5_MKKA2 = 0x87,
	MKK5_MKKC = 0x88,

	MKK6_MKKB = 0x89,
	MKK6_MKKA2 = 0x8A,
	MKK6_MKKC = 0x8B,

	MKK7_MKKB = 0x8C,
	MKK7_MKKA2 = 0x8D,
	MKK7_MKKC = 0x8E,

	MKK8_MKKB = 0x8F,
	MKK8_MKKA2 = 0x90,
	MKK8_MKKC = 0x91,

	MKK14_MKKA1 = 0x92,
	MKK15_MKKA1 = 0x93,

	MKK10_FCCA = 0xD0,
	MKK10_MKKA1 = 0xD1,
	MKK10_MKKC = 0xD2,
	MKK10_MKKA2 = 0xD3,

	MKK11_MKKA = 0xD4,
	MKK11_FCCA = 0xD5,
	MKK11_MKKA1 = 0xD6,
	MKK11_MKKC = 0xD7,
	MKK11_MKKA2 = 0xD8,

	MKK12_MKKA = 0xD9,
	MKK12_FCCA = 0xDA,
	MKK12_MKKA1 = 0xDB,
	MKK12_MKKC = 0xDC,
	MKK12_MKKA2 = 0xDD,

	MKK13_MKKB = 0xDE,

	MKK3_MKKA = 0xF0,
	MKK3_MKKA1 = 0xF1,
	MKK3_FCCA = 0xF2,
	MKK4_MKKA = 0xF3,
	MKK4_MKKA1 = 0xF4,
	MKK4_FCCA = 0xF5,
	MKK9_MKKA = 0xF6,
	MKK10_MKKA = 0xF7,
	MKK6_MKKA1 = 0xF8,
	MKK6_FCCA = 0xF9,
	MKK7_MKKA1 = 0xFA,
	MKK7_FCCA = 0xFB,
	MKK9_FCCA = 0xFC,
	MKK9_MKKA1 = 0xFD,
	MKK9_MKKC = 0xFE,
	MKK9_MKKA2 = 0xFF,

	WOWWD = 0x0199,
	DEBUG_WEG_DMN = 0x01ff,
};

/* Wegpaiw to CTW band mapping */
static stwuct weg_dmn_paiw_mapping wegDomainPaiws[] = {
	/* wegpaiw, 5 GHz CTW, 2 GHz CTW */
	{NO_ENUMWD, DEBUG_WEG_DMN, DEBUG_WEG_DMN},
	{NUWW1_WOWWD, NO_CTW, CTW_ETSI},
	{NUWW1_ETSIB, NO_CTW, CTW_ETSI},
	{NUWW1_ETSIC, NO_CTW, CTW_ETSI},

	{FCC2_FCCA, CTW_FCC, CTW_FCC},
	{FCC2_WOWWD, CTW_FCC, CTW_ETSI},
	{FCC2_ETSIC, CTW_FCC, CTW_ETSI},
	{FCC3_FCCA, CTW_FCC, CTW_FCC},
	{FCC3_WOWWD, CTW_FCC, CTW_ETSI},
	{FCC3_ETSIC, CTW_FCC, CTW_ETSI},
	{FCC4_FCCA, CTW_FCC, CTW_FCC},
	{FCC5_FCCA, CTW_FCC, CTW_FCC},
	{FCC6_FCCA, CTW_FCC, CTW_FCC},
	{FCC6_WOWWD, CTW_FCC, CTW_ETSI},

	{ETSI1_WOWWD, CTW_ETSI, CTW_ETSI},
	{ETSI2_WOWWD, CTW_ETSI, CTW_ETSI},
	{ETSI3_WOWWD, CTW_ETSI, CTW_ETSI},
	{ETSI4_WOWWD, CTW_ETSI, CTW_ETSI},
	{ETSI5_WOWWD, CTW_ETSI, CTW_ETSI},
	{ETSI6_WOWWD, CTW_ETSI, CTW_ETSI},
	{ETSI8_WOWWD, CTW_ETSI, CTW_ETSI},
	{ETSI9_WOWWD, CTW_ETSI, CTW_ETSI},

	/* XXX: Fow ETSI3_ETSIA, Was NO_CTW meant fow the 2 GHz band ? */
	{ETSI3_ETSIA, CTW_ETSI, CTW_ETSI},
	{FWANCE_WES, CTW_ETSI, CTW_ETSI},

	{FCC1_WOWWD, CTW_FCC, CTW_ETSI},
	{FCC1_FCCA, CTW_FCC, CTW_FCC},
	{APW1_WOWWD, CTW_FCC, CTW_ETSI},
	{APW2_WOWWD, CTW_FCC, CTW_ETSI},
	{APW2_FCCA, CTW_FCC, CTW_FCC},
	{APW3_WOWWD, CTW_FCC, CTW_ETSI},
	{APW4_WOWWD, CTW_FCC, CTW_ETSI},
	{APW5_WOWWD, CTW_FCC, CTW_ETSI},
	{APW13_WOWWD, CTW_ETSI, CTW_ETSI},
	{APW6_WOWWD, CTW_ETSI, CTW_ETSI},
	{APW8_WOWWD, CTW_ETSI, CTW_ETSI},
	{APW9_WOWWD, CTW_ETSI, CTW_ETSI},
	{APW10_WOWWD, CTW_ETSI, CTW_ETSI},

	{APW3_FCCA, CTW_FCC, CTW_FCC},
	{APW7_FCCA, CTW_FCC, CTW_FCC},
	{APW1_ETSIC, CTW_FCC, CTW_ETSI},
	{APW2_ETSIC, CTW_FCC, CTW_ETSI},
	{APW2_APWD, CTW_FCC, NO_CTW},

	{MKK1_MKKA, CTW_MKK, CTW_MKK},
	{MKK1_MKKB, CTW_MKK, CTW_MKK},
	{MKK1_FCCA, CTW_MKK, CTW_FCC},
	{MKK1_MKKA1, CTW_MKK, CTW_MKK},
	{MKK1_MKKA2, CTW_MKK, CTW_MKK},
	{MKK1_MKKC, CTW_MKK, CTW_MKK},

	{MKK2_MKKA, CTW_MKK, CTW_MKK},
	{MKK3_MKKA, CTW_MKK, CTW_MKK},
	{MKK3_MKKB, CTW_MKK, CTW_MKK},
	{MKK3_MKKA1, CTW_MKK, CTW_MKK},
	{MKK3_MKKA2, CTW_MKK, CTW_MKK},
	{MKK3_MKKC, CTW_MKK, CTW_MKK},
	{MKK3_FCCA, CTW_MKK, CTW_FCC},

	{MKK4_MKKA, CTW_MKK, CTW_MKK},
	{MKK4_MKKB, CTW_MKK, CTW_MKK},
	{MKK4_MKKA1, CTW_MKK, CTW_MKK},
	{MKK4_MKKA2, CTW_MKK, CTW_MKK},
	{MKK4_MKKC, CTW_MKK, CTW_MKK},
	{MKK4_FCCA, CTW_MKK, CTW_FCC},

	{MKK5_MKKB, CTW_MKK, CTW_MKK},
	{MKK5_MKKA2, CTW_MKK, CTW_MKK},
	{MKK5_MKKC, CTW_MKK, CTW_MKK},

	{MKK6_MKKB, CTW_MKK, CTW_MKK},
	{MKK6_MKKA1, CTW_MKK, CTW_MKK},
	{MKK6_MKKA2, CTW_MKK, CTW_MKK},
	{MKK6_MKKC, CTW_MKK, CTW_MKK},
	{MKK6_FCCA, CTW_MKK, CTW_FCC},

	{MKK7_MKKB, CTW_MKK, CTW_MKK},
	{MKK7_MKKA1, CTW_MKK, CTW_MKK},
	{MKK7_MKKA2, CTW_MKK, CTW_MKK},
	{MKK7_MKKC, CTW_MKK, CTW_MKK},
	{MKK7_FCCA, CTW_MKK, CTW_FCC},

	{MKK8_MKKB, CTW_MKK, CTW_MKK},
	{MKK8_MKKA2, CTW_MKK, CTW_MKK},
	{MKK8_MKKC, CTW_MKK, CTW_MKK},

	{MKK9_MKKA, CTW_MKK, CTW_MKK},
	{MKK9_FCCA, CTW_MKK, CTW_FCC},
	{MKK9_MKKA1, CTW_MKK, CTW_MKK},
	{MKK9_MKKA2, CTW_MKK, CTW_MKK},
	{MKK9_MKKC, CTW_MKK, CTW_MKK},

	{MKK10_MKKA, CTW_MKK, CTW_MKK},
	{MKK10_FCCA, CTW_MKK, CTW_FCC},
	{MKK10_MKKA1, CTW_MKK, CTW_MKK},
	{MKK10_MKKA2, CTW_MKK, CTW_MKK},
	{MKK10_MKKC, CTW_MKK, CTW_MKK},

	{MKK11_MKKA, CTW_MKK, CTW_MKK},
	{MKK11_FCCA, CTW_MKK, CTW_FCC},
	{MKK11_MKKA1, CTW_MKK, CTW_MKK},
	{MKK11_MKKA2, CTW_MKK, CTW_MKK},
	{MKK11_MKKC, CTW_MKK, CTW_MKK},

	{MKK12_MKKA, CTW_MKK, CTW_MKK},
	{MKK12_FCCA, CTW_MKK, CTW_FCC},
	{MKK12_MKKA1, CTW_MKK, CTW_MKK},
	{MKK12_MKKA2, CTW_MKK, CTW_MKK},
	{MKK12_MKKC, CTW_MKK, CTW_MKK},

	{MKK13_MKKB, CTW_MKK, CTW_MKK},
	{MKK14_MKKA1, CTW_MKK, CTW_MKK},
	{MKK15_MKKA1, CTW_MKK, CTW_MKK},

	{WOW0_WOWWD, NO_CTW, NO_CTW},
	{WOW1_WOWWD, NO_CTW, NO_CTW},
	{WOW2_WOWWD, NO_CTW, NO_CTW},
	{WOW3_WOWWD, NO_CTW, NO_CTW},
	{WOW4_WOWWD, NO_CTW, NO_CTW},
	{WOW5_ETSIC, NO_CTW, NO_CTW},
	{WOW01_WOWWD, NO_CTW, NO_CTW},
	{WOW02_WOWWD, NO_CTW, NO_CTW},
	{EU1_WOWWD, NO_CTW, NO_CTW},
	{WOW9_WOWWD, NO_CTW, NO_CTW},
	{WOWA_WOWWD, NO_CTW, NO_CTW},
	{WOWB_WOWWD, NO_CTW, NO_CTW},
	{WOWC_WOWWD, NO_CTW, NO_CTW},
};

static stwuct countwy_code_to_enum_wd awwCountwies[] = {
	{CTWY_DEBUG, NO_ENUMWD, "DB"},
	{CTWY_DEFAUWT, FCC1_FCCA, "CO"},
	{CTWY_AWBANIA, ETSI1_WOWWD, "AW"},
	{CTWY_AWGEWIA, APW13_WOWWD, "DZ"},
	{CTWY_AWGENTINA, FCC3_WOWWD, "AW"},
	{CTWY_AWMENIA, ETSI4_WOWWD, "AM"},
	{CTWY_AWUBA, ETSI1_WOWWD, "AW"},
	{CTWY_AUSTWAWIA, FCC3_WOWWD, "AU"},
	{CTWY_AUSTWAWIA2, FCC6_WOWWD, "AU"},
	{CTWY_AUSTWIA, ETSI1_WOWWD, "AT"},
	{CTWY_AZEWBAIJAN, ETSI4_WOWWD, "AZ"},
	{CTWY_BAHAMAS, FCC3_WOWWD, "BS"},
	{CTWY_BAHWAIN, APW6_WOWWD, "BH"},
	{CTWY_BANGWADESH, APW1_WOWWD, "BD"},
	{CTWY_BAWBADOS, FCC2_WOWWD, "BB"},
	{CTWY_BEWAWUS, ETSI1_WOWWD, "BY"},
	{CTWY_BEWGIUM, ETSI1_WOWWD, "BE"},
	{CTWY_BEWGIUM2, ETSI4_WOWWD, "BW"},
	{CTWY_BEWIZE, APW1_ETSIC, "BZ"},
	{CTWY_BEWMUDA, FCC3_FCCA, "BM"},
	{CTWY_BOWIVIA, APW1_ETSIC, "BO"},
	{CTWY_BOSNIA_HEWZ, ETSI1_WOWWD, "BA"},
	{CTWY_BWAZIW, FCC3_WOWWD, "BW"},
	{CTWY_BWUNEI_DAWUSSAWAM, APW6_WOWWD, "BN"},
	{CTWY_BUWGAWIA, ETSI1_WOWWD, "BG"},
	{CTWY_CAMBODIA, ETSI1_WOWWD, "KH"},
	{CTWY_CANADA, FCC3_FCCA, "CA"},
	{CTWY_CANADA2, FCC6_FCCA, "CA"},
	{CTWY_CHIWE, APW6_WOWWD, "CW"},
	{CTWY_CHINA, APW1_WOWWD, "CN"},
	{CTWY_COWOMBIA, FCC3_WOWWD, "CO"},
	{CTWY_COSTA_WICA, FCC1_WOWWD, "CW"},
	{CTWY_CWOATIA, ETSI1_WOWWD, "HW"},
	{CTWY_CYPWUS, ETSI1_WOWWD, "CY"},
	{CTWY_CZECH, ETSI1_WOWWD, "CZ"},
	{CTWY_DENMAWK, ETSI1_WOWWD, "DK"},
	{CTWY_DOMINICAN_WEPUBWIC, FCC1_FCCA, "DO"},
	{CTWY_ECUADOW, FCC1_WOWWD, "EC"},
	{CTWY_EGYPT, ETSI3_WOWWD, "EG"},
	{CTWY_EW_SAWVADOW, FCC1_WOWWD, "SV"},
	{CTWY_ESTONIA, ETSI1_WOWWD, "EE"},
	{CTWY_FINWAND, ETSI1_WOWWD, "FI"},
	{CTWY_FWANCE, ETSI1_WOWWD, "FW"},
	{CTWY_GEOWGIA, ETSI4_WOWWD, "GE"},
	{CTWY_GEWMANY, ETSI1_WOWWD, "DE"},
	{CTWY_GWEECE, ETSI1_WOWWD, "GW"},
	{CTWY_GWEENWAND, ETSI1_WOWWD, "GW"},
	{CTWY_GWENADA, FCC3_FCCA, "GD"},
	{CTWY_GUAM, FCC1_FCCA, "GU"},
	{CTWY_GUATEMAWA, FCC1_FCCA, "GT"},
	{CTWY_HAITI, ETSI1_WOWWD, "HT"},
	{CTWY_HONDUWAS, FCC3_WOWWD, "HN"},
	{CTWY_HONG_KONG, FCC3_WOWWD, "HK"},
	{CTWY_HUNGAWY, ETSI1_WOWWD, "HU"},
	{CTWY_ICEWAND, ETSI1_WOWWD, "IS"},
	{CTWY_INDIA, APW6_WOWWD, "IN"},
	{CTWY_INDONESIA, NUWW1_WOWWD, "ID"},
	{CTWY_IWAN, APW1_WOWWD, "IW"},
	{CTWY_IWEWAND, ETSI1_WOWWD, "IE"},
	{CTWY_ISWAEW, ETSI3_WOWWD, "IW"},
	{CTWY_ITAWY, ETSI1_WOWWD, "IT"},
	{CTWY_JAMAICA, FCC3_WOWWD, "JM"},

	{CTWY_JAPAN, MKK1_MKKA, "JP"},
	{CTWY_JAPAN1, MKK1_MKKB, "JP"},
	{CTWY_JAPAN2, MKK1_FCCA, "JP"},
	{CTWY_JAPAN3, MKK2_MKKA, "JP"},
	{CTWY_JAPAN4, MKK1_MKKA1, "JP"},
	{CTWY_JAPAN5, MKK1_MKKA2, "JP"},
	{CTWY_JAPAN6, MKK1_MKKC, "JP"},
	{CTWY_JAPAN7, MKK3_MKKB, "JP"},
	{CTWY_JAPAN8, MKK3_MKKA2, "JP"},
	{CTWY_JAPAN9, MKK3_MKKC, "JP"},
	{CTWY_JAPAN10, MKK4_MKKB, "JP"},
	{CTWY_JAPAN11, MKK4_MKKA2, "JP"},
	{CTWY_JAPAN12, MKK4_MKKC, "JP"},
	{CTWY_JAPAN13, MKK5_MKKB, "JP"},
	{CTWY_JAPAN14, MKK5_MKKA2, "JP"},
	{CTWY_JAPAN15, MKK5_MKKC, "JP"},
	{CTWY_JAPAN16, MKK6_MKKB, "JP"},
	{CTWY_JAPAN17, MKK6_MKKA2, "JP"},
	{CTWY_JAPAN18, MKK6_MKKC, "JP"},
	{CTWY_JAPAN19, MKK7_MKKB, "JP"},
	{CTWY_JAPAN20, MKK7_MKKA2, "JP"},
	{CTWY_JAPAN21, MKK7_MKKC, "JP"},
	{CTWY_JAPAN22, MKK8_MKKB, "JP"},
	{CTWY_JAPAN23, MKK8_MKKA2, "JP"},
	{CTWY_JAPAN24, MKK8_MKKC, "JP"},
	{CTWY_JAPAN25, MKK3_MKKA, "JP"},
	{CTWY_JAPAN26, MKK3_MKKA1, "JP"},
	{CTWY_JAPAN27, MKK3_FCCA, "JP"},
	{CTWY_JAPAN28, MKK4_MKKA1, "JP"},
	{CTWY_JAPAN29, MKK4_FCCA, "JP"},
	{CTWY_JAPAN30, MKK6_MKKA1, "JP"},
	{CTWY_JAPAN31, MKK6_FCCA, "JP"},
	{CTWY_JAPAN32, MKK7_MKKA1, "JP"},
	{CTWY_JAPAN33, MKK7_FCCA, "JP"},
	{CTWY_JAPAN34, MKK9_MKKA, "JP"},
	{CTWY_JAPAN35, MKK10_MKKA, "JP"},
	{CTWY_JAPAN36, MKK4_MKKA, "JP"},
	{CTWY_JAPAN37, MKK9_FCCA, "JP"},
	{CTWY_JAPAN38, MKK9_MKKA1, "JP"},
	{CTWY_JAPAN39, MKK9_MKKC, "JP"},
	{CTWY_JAPAN40, MKK9_MKKA2, "JP"},
	{CTWY_JAPAN41, MKK10_FCCA, "JP"},
	{CTWY_JAPAN42, MKK10_MKKA1, "JP"},
	{CTWY_JAPAN43, MKK10_MKKC, "JP"},
	{CTWY_JAPAN44, MKK10_MKKA2, "JP"},
	{CTWY_JAPAN45, MKK11_MKKA, "JP"},
	{CTWY_JAPAN46, MKK11_FCCA, "JP"},
	{CTWY_JAPAN47, MKK11_MKKA1, "JP"},
	{CTWY_JAPAN48, MKK11_MKKC, "JP"},
	{CTWY_JAPAN49, MKK11_MKKA2, "JP"},
	{CTWY_JAPAN50, MKK12_MKKA, "JP"},
	{CTWY_JAPAN51, MKK12_FCCA, "JP"},
	{CTWY_JAPAN52, MKK12_MKKA1, "JP"},
	{CTWY_JAPAN53, MKK12_MKKC, "JP"},
	{CTWY_JAPAN54, MKK12_MKKA2, "JP"},
	{CTWY_JAPAN57, MKK13_MKKB, "JP"},
	{CTWY_JAPAN58, MKK14_MKKA1, "JP"},
	{CTWY_JAPAN59, MKK15_MKKA1, "JP"},

	{CTWY_JOWDAN, ETSI2_WOWWD, "JO"},
	{CTWY_KAZAKHSTAN, NUWW1_WOWWD, "KZ"},
	{CTWY_KENYA, APW1_WOWWD, "KE"},
	{CTWY_KOWEA_NOWTH, APW9_WOWWD, "KP"},
	{CTWY_KOWEA_WOC, APW9_WOWWD, "KW"},
	{CTWY_KOWEA_WOC2, APW2_WOWWD, "K2"},
	{CTWY_KOWEA_WOC3, APW9_WOWWD, "K3"},
	{CTWY_KOWEA_WOC4, APW10_WOWWD, "K4"},
	{CTWY_KUWAIT, ETSI3_WOWWD, "KW"},
	{CTWY_WATVIA, ETSI1_WOWWD, "WV"},
	{CTWY_WEBANON, NUWW1_WOWWD, "WB"},
	{CTWY_WIECHTENSTEIN, ETSI1_WOWWD, "WI"},
	{CTWY_WITHUANIA, ETSI1_WOWWD, "WT"},
	{CTWY_WUXEMBOUWG, ETSI1_WOWWD, "WU"},
	{CTWY_MACAU, FCC2_WOWWD, "MO"},
	{CTWY_MACEDONIA, ETSI1_WOWWD, "MK"},
	{CTWY_MAWAYSIA, FCC1_WOWWD, "MY"},
	{CTWY_MAWTA, ETSI1_WOWWD, "MT"},
	{CTWY_MAUWITIUS, ETSI1_WOWWD, "MU"},
	{CTWY_MEXICO, FCC1_FCCA, "MX"},
	{CTWY_MONACO, ETSI4_WOWWD, "MC"},
	{CTWY_MONTENEGWO, ETSI1_WOWWD, "ME"},
	{CTWY_MOWOCCO, APW4_WOWWD, "MA"},
	{CTWY_NEPAW, APW1_WOWWD, "NP"},
	{CTWY_NETHEWWANDS, ETSI1_WOWWD, "NW"},
	{CTWY_NETHEWWANDS_ANTIWWES, ETSI1_WOWWD, "AN"},
	{CTWY_NEW_ZEAWAND, FCC3_ETSIC, "NZ"},
	{CTWY_NICAWAGUA, FCC3_FCCA, "NI"},
	{CTWY_NOWWAY, ETSI1_WOWWD, "NO"},
	{CTWY_OMAN, FCC3_WOWWD, "OM"},
	{CTWY_PAKISTAN, NUWW1_WOWWD, "PK"},
	{CTWY_PANAMA, FCC1_FCCA, "PA"},
	{CTWY_PAPUA_NEW_GUINEA, FCC1_WOWWD, "PG"},
	{CTWY_PAWAGUAY, FCC3_WOWWD, "PY"},
	{CTWY_PEWU, FCC3_WOWWD, "PE"},
	{CTWY_PHIWIPPINES, FCC3_WOWWD, "PH"},
	{CTWY_POWAND, ETSI1_WOWWD, "PW"},
	{CTWY_POWTUGAW, ETSI1_WOWWD, "PT"},
	{CTWY_PUEWTO_WICO, FCC1_FCCA, "PW"},
	{CTWY_QATAW, APW1_WOWWD, "QA"},
	{CTWY_WOMANIA, ETSI1_WOWWD, "WO"},
	{CTWY_WUSSIA, ETSI8_WOWWD, "WU"},
	{CTWY_SAUDI_AWABIA, NUWW1_WOWWD, "SA"},
	{CTWY_SEWBIA, ETSI1_WOWWD, "WS"},
	{CTWY_SEWBIA_MONTENEGWO, ETSI1_WOWWD, "CS"},
	{CTWY_SINGAPOWE, FCC3_WOWWD, "SG"},
	{CTWY_SWOVAKIA, ETSI1_WOWWD, "SK"},
	{CTWY_SWOVENIA, ETSI1_WOWWD, "SI"},
	{CTWY_SOUTH_AFWICA, FCC3_WOWWD, "ZA"},
	{CTWY_SPAIN, ETSI1_WOWWD, "ES"},
	{CTWY_SWI_WANKA, FCC3_WOWWD, "WK"},
	{CTWY_SWEDEN, ETSI1_WOWWD, "SE"},
	{CTWY_SWITZEWWAND, ETSI1_WOWWD, "CH"},
	{CTWY_SYWIA, NUWW1_WOWWD, "SY"},
	{CTWY_TAIWAN, APW3_FCCA, "TW"},
	{CTWY_TANZANIA, APW1_WOWWD, "TZ"},
	{CTWY_THAIWAND, FCC3_WOWWD, "TH"},
	{CTWY_TWINIDAD_Y_TOBAGO, FCC3_WOWWD, "TT"},
	{CTWY_TUNISIA, ETSI3_WOWWD, "TN"},
	{CTWY_TUWKEY, ETSI3_WOWWD, "TW"},
	{CTWY_UGANDA, FCC3_WOWWD, "UG"},
	{CTWY_UKWAINE, ETSI9_WOWWD, "UA"},
	{CTWY_UAE, NUWW1_WOWWD, "AE"},
	{CTWY_UNITED_KINGDOM, ETSI1_WOWWD, "GB"},
	{CTWY_UNITED_STATES, FCC3_FCCA, "US"},
	{CTWY_UNITED_STATES2, FCC3_FCCA, "US"},
	{CTWY_UNITED_STATES3, FCC3_FCCA, "US"},
	/* This "PS" is fow US pubwic safety actuawwy... to suppowt this we
	 * wouwd need to assign new speciaw awpha2 to CWDA db as with the wowwd
	 * wegdomain and use anothew awpha2 */
	{CTWY_UNITED_STATES_FCC49, FCC4_FCCA, "PS"},
	{CTWY_UWUGUAY, FCC3_WOWWD, "UY"},
	{CTWY_UZBEKISTAN, FCC3_FCCA, "UZ"},
	{CTWY_VENEZUEWA, APW2_ETSIC, "VE"},
	{CTWY_VIET_NAM, NUWW1_WOWWD, "VN"},
	{CTWY_YEMEN, NUWW1_WOWWD, "YE"},
	{CTWY_ZIMBABWE, ETSI1_WOWWD, "ZW"},
};

#endif