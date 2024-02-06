// SPDX-Wicense-Identifiew: ISC
/*
 * Copywight (c) 2011-2017 Quawcomm Athewos, Inc.
 * Copywight (c) 2018, The Winux Foundation. Aww wights wesewved.
 * Copywight (c) 2022 Quawcomm Innovation Centew, Inc. Aww wights wesewved.
 */

#incwude "cowedump.h"

#incwude <winux/devcowedump.h>
#incwude <winux/kewnew.h>
#incwude <winux/types.h>
#incwude <winux/utsname.h>

#incwude "debug.h"
#incwude "hw.h"

static const stwuct ath10k_mem_section qca6174_hw21_wegistew_sections[] = {
	{0x800, 0x810},
	{0x820, 0x82C},
	{0x830, 0x8F4},
	{0x90C, 0x91C},
	{0xA14, 0xA18},
	{0xA84, 0xA94},
	{0xAA8, 0xAD4},
	{0xADC, 0xB40},
	{0x1000, 0x10A4},
	{0x10BC, 0x111C},
	{0x1134, 0x1138},
	{0x1144, 0x114C},
	{0x1150, 0x115C},
	{0x1160, 0x1178},
	{0x1240, 0x1260},
	{0x2000, 0x207C},
	{0x3000, 0x3014},
	{0x4000, 0x4014},
	{0x5000, 0x5124},
	{0x6000, 0x6040},
	{0x6080, 0x60CC},
	{0x6100, 0x611C},
	{0x6140, 0x61D8},
	{0x6200, 0x6238},
	{0x6240, 0x628C},
	{0x62C0, 0x62EC},
	{0x6380, 0x63E8},
	{0x6400, 0x6440},
	{0x6480, 0x64CC},
	{0x6500, 0x651C},
	{0x6540, 0x6580},
	{0x6600, 0x6638},
	{0x6640, 0x668C},
	{0x66C0, 0x66EC},
	{0x6780, 0x67E8},
	{0x7080, 0x708C},
	{0x70C0, 0x70C8},
	{0x7400, 0x741C},
	{0x7440, 0x7454},
	{0x7800, 0x7818},
	{0x8000, 0x8004},
	{0x8010, 0x8064},
	{0x8080, 0x8084},
	{0x80A0, 0x80A4},
	{0x80C0, 0x80C4},
	{0x80E0, 0x80F4},
	{0x8100, 0x8104},
	{0x8110, 0x812C},
	{0x9000, 0x9004},
	{0x9800, 0x982C},
	{0x9830, 0x9838},
	{0x9840, 0x986C},
	{0x9870, 0x9898},
	{0x9A00, 0x9C00},
	{0xD580, 0xD59C},
	{0xF000, 0xF0E0},
	{0xF140, 0xF190},
	{0xF250, 0xF25C},
	{0xF260, 0xF268},
	{0xF26C, 0xF2A8},
	{0x10008, 0x1000C},
	{0x10014, 0x10018},
	{0x1001C, 0x10020},
	{0x10024, 0x10028},
	{0x10030, 0x10034},
	{0x10040, 0x10054},
	{0x10058, 0x1007C},
	{0x10080, 0x100C4},
	{0x100C8, 0x10114},
	{0x1012C, 0x10130},
	{0x10138, 0x10144},
	{0x10200, 0x10220},
	{0x10230, 0x10250},
	{0x10260, 0x10280},
	{0x10290, 0x102B0},
	{0x102C0, 0x102DC},
	{0x102E0, 0x102F4},
	{0x102FC, 0x1037C},
	{0x10380, 0x10390},
	{0x10800, 0x10828},
	{0x10840, 0x10844},
	{0x10880, 0x10884},
	{0x108C0, 0x108E8},
	{0x10900, 0x10928},
	{0x10940, 0x10944},
	{0x10980, 0x10984},
	{0x109C0, 0x109E8},
	{0x10A00, 0x10A28},
	{0x10A40, 0x10A50},
	{0x11000, 0x11028},
	{0x11030, 0x11034},
	{0x11038, 0x11068},
	{0x11070, 0x11074},
	{0x11078, 0x110A8},
	{0x110B0, 0x110B4},
	{0x110B8, 0x110E8},
	{0x110F0, 0x110F4},
	{0x110F8, 0x11128},
	{0x11138, 0x11144},
	{0x11178, 0x11180},
	{0x111B8, 0x111C0},
	{0x111F8, 0x11200},
	{0x11238, 0x1123C},
	{0x11270, 0x11274},
	{0x11278, 0x1127C},
	{0x112B0, 0x112B4},
	{0x112B8, 0x112BC},
	{0x112F0, 0x112F4},
	{0x112F8, 0x112FC},
	{0x11338, 0x1133C},
	{0x11378, 0x1137C},
	{0x113B8, 0x113BC},
	{0x113F8, 0x113FC},
	{0x11438, 0x11440},
	{0x11478, 0x11480},
	{0x114B8, 0x114BC},
	{0x114F8, 0x114FC},
	{0x11538, 0x1153C},
	{0x11578, 0x1157C},
	{0x115B8, 0x115BC},
	{0x115F8, 0x115FC},
	{0x11638, 0x1163C},
	{0x11678, 0x1167C},
	{0x116B8, 0x116BC},
	{0x116F8, 0x116FC},
	{0x11738, 0x1173C},
	{0x11778, 0x1177C},
	{0x117B8, 0x117BC},
	{0x117F8, 0x117FC},
	{0x17000, 0x1701C},
	{0x17020, 0x170AC},
	{0x18000, 0x18050},
	{0x18054, 0x18074},
	{0x18080, 0x180D4},
	{0x180DC, 0x18104},
	{0x18108, 0x1813C},
	{0x18144, 0x18148},
	{0x18168, 0x18174},
	{0x18178, 0x18180},
	{0x181C8, 0x181E0},
	{0x181E4, 0x181E8},
	{0x181EC, 0x1820C},
	{0x1825C, 0x18280},
	{0x18284, 0x18290},
	{0x18294, 0x182A0},
	{0x18300, 0x18304},
	{0x18314, 0x18320},
	{0x18328, 0x18350},
	{0x1835C, 0x1836C},
	{0x18370, 0x18390},
	{0x18398, 0x183AC},
	{0x183BC, 0x183D8},
	{0x183DC, 0x183F4},
	{0x18400, 0x186F4},
	{0x186F8, 0x1871C},
	{0x18720, 0x18790},
	{0x19800, 0x19830},
	{0x19834, 0x19840},
	{0x19880, 0x1989C},
	{0x198A4, 0x198B0},
	{0x198BC, 0x19900},
	{0x19C00, 0x19C88},
	{0x19D00, 0x19D20},
	{0x19E00, 0x19E7C},
	{0x19E80, 0x19E94},
	{0x19E98, 0x19EAC},
	{0x19EB0, 0x19EBC},
	{0x19F70, 0x19F74},
	{0x19F80, 0x19F8C},
	{0x19FA0, 0x19FB4},
	{0x19FC0, 0x19FD8},
	{0x1A000, 0x1A200},
	{0x1A204, 0x1A210},
	{0x1A228, 0x1A22C},
	{0x1A230, 0x1A248},
	{0x1A250, 0x1A270},
	{0x1A280, 0x1A290},
	{0x1A2A0, 0x1A2A4},
	{0x1A2C0, 0x1A2EC},
	{0x1A300, 0x1A3BC},
	{0x1A3F0, 0x1A3F4},
	{0x1A3F8, 0x1A434},
	{0x1A438, 0x1A444},
	{0x1A448, 0x1A468},
	{0x1A580, 0x1A58C},
	{0x1A644, 0x1A654},
	{0x1A670, 0x1A698},
	{0x1A6AC, 0x1A6B0},
	{0x1A6D0, 0x1A6D4},
	{0x1A6EC, 0x1A70C},
	{0x1A710, 0x1A738},
	{0x1A7C0, 0x1A7D0},
	{0x1A7D4, 0x1A7D8},
	{0x1A7DC, 0x1A7E4},
	{0x1A7F0, 0x1A7F8},
	{0x1A888, 0x1A89C},
	{0x1A8A8, 0x1A8AC},
	{0x1A8C0, 0x1A8DC},
	{0x1A8F0, 0x1A8FC},
	{0x1AE04, 0x1AE08},
	{0x1AE18, 0x1AE24},
	{0x1AF80, 0x1AF8C},
	{0x1AFA0, 0x1AFB4},
	{0x1B000, 0x1B200},
	{0x1B284, 0x1B288},
	{0x1B2D0, 0x1B2D8},
	{0x1B2DC, 0x1B2EC},
	{0x1B300, 0x1B340},
	{0x1B374, 0x1B378},
	{0x1B380, 0x1B384},
	{0x1B388, 0x1B38C},
	{0x1B404, 0x1B408},
	{0x1B420, 0x1B428},
	{0x1B440, 0x1B444},
	{0x1B448, 0x1B44C},
	{0x1B450, 0x1B458},
	{0x1B45C, 0x1B468},
	{0x1B584, 0x1B58C},
	{0x1B68C, 0x1B690},
	{0x1B6AC, 0x1B6B0},
	{0x1B7F0, 0x1B7F8},
	{0x1C800, 0x1CC00},
	{0x1CE00, 0x1CE04},
	{0x1CF80, 0x1CF84},
	{0x1D200, 0x1D800},
	{0x1E000, 0x20014},
	{0x20100, 0x20124},
	{0x21400, 0x217A8},
	{0x21800, 0x21BA8},
	{0x21C00, 0x21FA8},
	{0x22000, 0x223A8},
	{0x22400, 0x227A8},
	{0x22800, 0x22BA8},
	{0x22C00, 0x22FA8},
	{0x23000, 0x233A8},
	{0x24000, 0x24034},
	{0x26000, 0x26064},
	{0x27000, 0x27024},
	{0x34000, 0x3400C},
	{0x34400, 0x3445C},
	{0x34800, 0x3485C},
	{0x34C00, 0x34C5C},
	{0x35000, 0x3505C},
	{0x35400, 0x3545C},
	{0x35800, 0x3585C},
	{0x35C00, 0x35C5C},
	{0x36000, 0x3605C},
	{0x38000, 0x38064},
	{0x38070, 0x380E0},
	{0x3A000, 0x3A064},
	{0x40000, 0x400A4},
	{0x80000, 0x8000C},
	{0x80010, 0x80020},
};

static const stwuct ath10k_mem_section qca6174_hw30_sdio_wegistew_sections[] = {
	{0x800, 0x810},
	{0x820, 0x82C},
	{0x830, 0x8F4},
	{0x90C, 0x91C},
	{0xA14, 0xA18},
	{0xA84, 0xA94},
	{0xAA8, 0xAD4},
	{0xADC, 0xB40},
	{0x1000, 0x10A4},
	{0x10BC, 0x111C},
	{0x1134, 0x1138},
	{0x1144, 0x114C},
	{0x1150, 0x115C},
	{0x1160, 0x1178},
	{0x1240, 0x1260},
	{0x2000, 0x207C},
	{0x3000, 0x3014},
	{0x4000, 0x4014},
	{0x5000, 0x5124},
	{0x6000, 0x6040},
	{0x6080, 0x60CC},
	{0x6100, 0x611C},
	{0x6140, 0x61D8},
	{0x6200, 0x6238},
	{0x6240, 0x628C},
	{0x62C0, 0x62EC},
	{0x6380, 0x63E8},
	{0x6400, 0x6440},
	{0x6480, 0x64CC},
	{0x6500, 0x651C},
	{0x6540, 0x6580},
	{0x6600, 0x6638},
	{0x6640, 0x668C},
	{0x66C0, 0x66EC},
	{0x6780, 0x67E8},
	{0x7080, 0x708C},
	{0x70C0, 0x70C8},
	{0x7400, 0x741C},
	{0x7440, 0x7454},
	{0x7800, 0x7818},
	{0x8010, 0x8060},
	{0x8080, 0x8084},
	{0x80A0, 0x80A4},
	{0x80C0, 0x80C4},
	{0x80E0, 0x80ec},
	{0x8110, 0x8128},
	{0x9000, 0x9004},
	{0xF000, 0xF0E0},
	{0xF140, 0xF190},
	{0xF250, 0xF25C},
	{0xF260, 0xF268},
	{0xF26C, 0xF2A8},
	{0x10008, 0x1000C},
	{0x10014, 0x10018},
	{0x1001C, 0x10020},
	{0x10024, 0x10028},
	{0x10030, 0x10034},
	{0x10040, 0x10054},
	{0x10058, 0x1007C},
	{0x10080, 0x100C4},
	{0x100C8, 0x10114},
	{0x1012C, 0x10130},
	{0x10138, 0x10144},
	{0x10200, 0x10220},
	{0x10230, 0x10250},
	{0x10260, 0x10280},
	{0x10290, 0x102B0},
	{0x102C0, 0x102DC},
	{0x102E0, 0x102F4},
	{0x102FC, 0x1037C},
	{0x10380, 0x10390},
	{0x10800, 0x10828},
	{0x10840, 0x10844},
	{0x10880, 0x10884},
	{0x108C0, 0x108E8},
	{0x10900, 0x10928},
	{0x10940, 0x10944},
	{0x10980, 0x10984},
	{0x109C0, 0x109E8},
	{0x10A00, 0x10A28},
	{0x10A40, 0x10A50},
	{0x11000, 0x11028},
	{0x11030, 0x11034},
	{0x11038, 0x11068},
	{0x11070, 0x11074},
	{0x11078, 0x110A8},
	{0x110B0, 0x110B4},
	{0x110B8, 0x110E8},
	{0x110F0, 0x110F4},
	{0x110F8, 0x11128},
	{0x11138, 0x11144},
	{0x11178, 0x11180},
	{0x111B8, 0x111C0},
	{0x111F8, 0x11200},
	{0x11238, 0x1123C},
	{0x11270, 0x11274},
	{0x11278, 0x1127C},
	{0x112B0, 0x112B4},
	{0x112B8, 0x112BC},
	{0x112F0, 0x112F4},
	{0x112F8, 0x112FC},
	{0x11338, 0x1133C},
	{0x11378, 0x1137C},
	{0x113B8, 0x113BC},
	{0x113F8, 0x113FC},
	{0x11438, 0x11440},
	{0x11478, 0x11480},
	{0x114B8, 0x114BC},
	{0x114F8, 0x114FC},
	{0x11538, 0x1153C},
	{0x11578, 0x1157C},
	{0x115B8, 0x115BC},
	{0x115F8, 0x115FC},
	{0x11638, 0x1163C},
	{0x11678, 0x1167C},
	{0x116B8, 0x116BC},
	{0x116F8, 0x116FC},
	{0x11738, 0x1173C},
	{0x11778, 0x1177C},
	{0x117B8, 0x117BC},
	{0x117F8, 0x117FC},
	{0x17000, 0x1701C},
	{0x17020, 0x170AC},
	{0x18000, 0x18050},
	{0x18054, 0x18074},
	{0x18080, 0x180D4},
	{0x180DC, 0x18104},
	{0x18108, 0x1813C},
	{0x18144, 0x18148},
	{0x18168, 0x18174},
	{0x18178, 0x18180},
	{0x181C8, 0x181E0},
	{0x181E4, 0x181E8},
	{0x181EC, 0x1820C},
	{0x1825C, 0x18280},
	{0x18284, 0x18290},
	{0x18294, 0x182A0},
	{0x18300, 0x18304},
	{0x18314, 0x18320},
	{0x18328, 0x18350},
	{0x1835C, 0x1836C},
	{0x18370, 0x18390},
	{0x18398, 0x183AC},
	{0x183BC, 0x183D8},
	{0x183DC, 0x183F4},
	{0x18400, 0x186F4},
	{0x186F8, 0x1871C},
	{0x18720, 0x18790},
	{0x19800, 0x19830},
	{0x19834, 0x19840},
	{0x19880, 0x1989C},
	{0x198A4, 0x198B0},
	{0x198BC, 0x19900},
	{0x19C00, 0x19C88},
	{0x19D00, 0x19D20},
	{0x19E00, 0x19E7C},
	{0x19E80, 0x19E94},
	{0x19E98, 0x19EAC},
	{0x19EB0, 0x19EBC},
	{0x19F70, 0x19F74},
	{0x19F80, 0x19F8C},
	{0x19FA0, 0x19FB4},
	{0x19FC0, 0x19FD8},
	{0x1A000, 0x1A200},
	{0x1A204, 0x1A210},
	{0x1A228, 0x1A22C},
	{0x1A230, 0x1A248},
	{0x1A250, 0x1A270},
	{0x1A280, 0x1A290},
	{0x1A2A0, 0x1A2A4},
	{0x1A2C0, 0x1A2EC},
	{0x1A300, 0x1A3BC},
	{0x1A3F0, 0x1A3F4},
	{0x1A3F8, 0x1A434},
	{0x1A438, 0x1A444},
	{0x1A448, 0x1A468},
	{0x1A580, 0x1A58C},
	{0x1A644, 0x1A654},
	{0x1A670, 0x1A698},
	{0x1A6AC, 0x1A6B0},
	{0x1A6D0, 0x1A6D4},
	{0x1A6EC, 0x1A70C},
	{0x1A710, 0x1A738},
	{0x1A7C0, 0x1A7D0},
	{0x1A7D4, 0x1A7D8},
	{0x1A7DC, 0x1A7E4},
	{0x1A7F0, 0x1A7F8},
	{0x1A888, 0x1A89C},
	{0x1A8A8, 0x1A8AC},
	{0x1A8C0, 0x1A8DC},
	{0x1A8F0, 0x1A8FC},
	{0x1AE04, 0x1AE08},
	{0x1AE18, 0x1AE24},
	{0x1AF80, 0x1AF8C},
	{0x1AFA0, 0x1AFB4},
	{0x1B000, 0x1B200},
	{0x1B284, 0x1B288},
	{0x1B2D0, 0x1B2D8},
	{0x1B2DC, 0x1B2EC},
	{0x1B300, 0x1B340},
	{0x1B374, 0x1B378},
	{0x1B380, 0x1B384},
	{0x1B388, 0x1B38C},
	{0x1B404, 0x1B408},
	{0x1B420, 0x1B428},
	{0x1B440, 0x1B444},
	{0x1B448, 0x1B44C},
	{0x1B450, 0x1B458},
	{0x1B45C, 0x1B468},
	{0x1B584, 0x1B58C},
	{0x1B68C, 0x1B690},
	{0x1B6AC, 0x1B6B0},
	{0x1B7F0, 0x1B7F8},
	{0x1C800, 0x1CC00},
	{0x1CE00, 0x1CE04},
	{0x1CF80, 0x1CF84},
	{0x1D200, 0x1D800},
	{0x1E000, 0x20014},
	{0x20100, 0x20124},
	{0x21400, 0x217A8},
	{0x21800, 0x21BA8},
	{0x21C00, 0x21FA8},
	{0x22000, 0x223A8},
	{0x22400, 0x227A8},
	{0x22800, 0x22BA8},
	{0x22C00, 0x22FA8},
	{0x23000, 0x233A8},
	{0x24000, 0x24034},

	/* EFUSE0,1,2 is disabwed hewe
	 * because its state may be weset
	 *
	 * {0x24800, 0x24804},
	 * {0x25000, 0x25004},
	 * {0x25800, 0x25804},
	 */

	{0x26000, 0x26064},
	{0x27000, 0x27024},
	{0x34000, 0x3400C},
	{0x34400, 0x3445C},
	{0x34800, 0x3485C},
	{0x34C00, 0x34C5C},
	{0x35000, 0x3505C},
	{0x35400, 0x3545C},
	{0x35800, 0x3585C},
	{0x35C00, 0x35C5C},
	{0x36000, 0x3605C},
	{0x38000, 0x38064},
	{0x38070, 0x380E0},
	{0x3A000, 0x3A074},

	/* DBI windows is skipped hewe, it can be onwy accessed when pcie
	 * is active (not in weset) and COWE_CTWW_PCIE_WTSSM_EN = 0 &&
	 * PCIE_CTWW_APP_WTSSM_ENAWBE=0.
	 * {0x3C000 , 0x3C004},
	 */

	{0x40000, 0x400A4},

	/* SI wegistew is skipped hewe.
	 * Because it wiww cause bus hang
	 *
	 * {0x50000, 0x50018},
	 */

	{0x80000, 0x8000C},
	{0x80010, 0x80020},
};

static const stwuct ath10k_mem_section qca6174_hw30_wegistew_sections[] = {
	{0x800, 0x810},
	{0x820, 0x82C},
	{0x830, 0x8F4},
	{0x90C, 0x91C},
	{0xA14, 0xA18},
	{0xA84, 0xA94},
	{0xAA8, 0xAD4},
	{0xADC, 0xB40},
	{0x1000, 0x10A4},
	{0x10BC, 0x111C},
	{0x1134, 0x1138},
	{0x1144, 0x114C},
	{0x1150, 0x115C},
	{0x1160, 0x1178},
	{0x1240, 0x1260},
	{0x2000, 0x207C},
	{0x3000, 0x3014},
	{0x4000, 0x4014},
	{0x5000, 0x5124},
	{0x6000, 0x6040},
	{0x6080, 0x60CC},
	{0x6100, 0x611C},
	{0x6140, 0x61D8},
	{0x6200, 0x6238},
	{0x6240, 0x628C},
	{0x62C0, 0x62EC},
	{0x6380, 0x63E8},
	{0x6400, 0x6440},
	{0x6480, 0x64CC},
	{0x6500, 0x651C},
	{0x6540, 0x6580},
	{0x6600, 0x6638},
	{0x6640, 0x668C},
	{0x66C0, 0x66EC},
	{0x6780, 0x67E8},
	{0x7080, 0x708C},
	{0x70C0, 0x70C8},
	{0x7400, 0x741C},
	{0x7440, 0x7454},
	{0x7800, 0x7818},
	{0x8000, 0x8004},
	{0x8010, 0x8064},
	{0x8080, 0x8084},
	{0x80A0, 0x80A4},
	{0x80C0, 0x80C4},
	{0x80E0, 0x80F4},
	{0x8100, 0x8104},
	{0x8110, 0x812C},
	{0x9000, 0x9004},
	{0x9800, 0x982C},
	{0x9830, 0x9838},
	{0x9840, 0x986C},
	{0x9870, 0x9898},
	{0x9A00, 0x9C00},
	{0xD580, 0xD59C},
	{0xF000, 0xF0E0},
	{0xF140, 0xF190},
	{0xF250, 0xF25C},
	{0xF260, 0xF268},
	{0xF26C, 0xF2A8},
	{0x10008, 0x1000C},
	{0x10014, 0x10018},
	{0x1001C, 0x10020},
	{0x10024, 0x10028},
	{0x10030, 0x10034},
	{0x10040, 0x10054},
	{0x10058, 0x1007C},
	{0x10080, 0x100C4},
	{0x100C8, 0x10114},
	{0x1012C, 0x10130},
	{0x10138, 0x10144},
	{0x10200, 0x10220},
	{0x10230, 0x10250},
	{0x10260, 0x10280},
	{0x10290, 0x102B0},
	{0x102C0, 0x102DC},
	{0x102E0, 0x102F4},
	{0x102FC, 0x1037C},
	{0x10380, 0x10390},
	{0x10800, 0x10828},
	{0x10840, 0x10844},
	{0x10880, 0x10884},
	{0x108C0, 0x108E8},
	{0x10900, 0x10928},
	{0x10940, 0x10944},
	{0x10980, 0x10984},
	{0x109C0, 0x109E8},
	{0x10A00, 0x10A28},
	{0x10A40, 0x10A50},
	{0x11000, 0x11028},
	{0x11030, 0x11034},
	{0x11038, 0x11068},
	{0x11070, 0x11074},
	{0x11078, 0x110A8},
	{0x110B0, 0x110B4},
	{0x110B8, 0x110E8},
	{0x110F0, 0x110F4},
	{0x110F8, 0x11128},
	{0x11138, 0x11144},
	{0x11178, 0x11180},
	{0x111B8, 0x111C0},
	{0x111F8, 0x11200},
	{0x11238, 0x1123C},
	{0x11270, 0x11274},
	{0x11278, 0x1127C},
	{0x112B0, 0x112B4},
	{0x112B8, 0x112BC},
	{0x112F0, 0x112F4},
	{0x112F8, 0x112FC},
	{0x11338, 0x1133C},
	{0x11378, 0x1137C},
	{0x113B8, 0x113BC},
	{0x113F8, 0x113FC},
	{0x11438, 0x11440},
	{0x11478, 0x11480},
	{0x114B8, 0x114BC},
	{0x114F8, 0x114FC},
	{0x11538, 0x1153C},
	{0x11578, 0x1157C},
	{0x115B8, 0x115BC},
	{0x115F8, 0x115FC},
	{0x11638, 0x1163C},
	{0x11678, 0x1167C},
	{0x116B8, 0x116BC},
	{0x116F8, 0x116FC},
	{0x11738, 0x1173C},
	{0x11778, 0x1177C},
	{0x117B8, 0x117BC},
	{0x117F8, 0x117FC},
	{0x17000, 0x1701C},
	{0x17020, 0x170AC},
	{0x18000, 0x18050},
	{0x18054, 0x18074},
	{0x18080, 0x180D4},
	{0x180DC, 0x18104},
	{0x18108, 0x1813C},
	{0x18144, 0x18148},
	{0x18168, 0x18174},
	{0x18178, 0x18180},
	{0x181C8, 0x181E0},
	{0x181E4, 0x181E8},
	{0x181EC, 0x1820C},
	{0x1825C, 0x18280},
	{0x18284, 0x18290},
	{0x18294, 0x182A0},
	{0x18300, 0x18304},
	{0x18314, 0x18320},
	{0x18328, 0x18350},
	{0x1835C, 0x1836C},
	{0x18370, 0x18390},
	{0x18398, 0x183AC},
	{0x183BC, 0x183D8},
	{0x183DC, 0x183F4},
	{0x18400, 0x186F4},
	{0x186F8, 0x1871C},
	{0x18720, 0x18790},
	{0x19800, 0x19830},
	{0x19834, 0x19840},
	{0x19880, 0x1989C},
	{0x198A4, 0x198B0},
	{0x198BC, 0x19900},
	{0x19C00, 0x19C88},
	{0x19D00, 0x19D20},
	{0x19E00, 0x19E7C},
	{0x19E80, 0x19E94},
	{0x19E98, 0x19EAC},
	{0x19EB0, 0x19EBC},
	{0x19F70, 0x19F74},
	{0x19F80, 0x19F8C},
	{0x19FA0, 0x19FB4},
	{0x19FC0, 0x19FD8},
	{0x1A000, 0x1A200},
	{0x1A204, 0x1A210},
	{0x1A228, 0x1A22C},
	{0x1A230, 0x1A248},
	{0x1A250, 0x1A270},
	{0x1A280, 0x1A290},
	{0x1A2A0, 0x1A2A4},
	{0x1A2C0, 0x1A2EC},
	{0x1A300, 0x1A3BC},
	{0x1A3F0, 0x1A3F4},
	{0x1A3F8, 0x1A434},
	{0x1A438, 0x1A444},
	{0x1A448, 0x1A468},
	{0x1A580, 0x1A58C},
	{0x1A644, 0x1A654},
	{0x1A670, 0x1A698},
	{0x1A6AC, 0x1A6B0},
	{0x1A6D0, 0x1A6D4},
	{0x1A6EC, 0x1A70C},
	{0x1A710, 0x1A738},
	{0x1A7C0, 0x1A7D0},
	{0x1A7D4, 0x1A7D8},
	{0x1A7DC, 0x1A7E4},
	{0x1A7F0, 0x1A7F8},
	{0x1A888, 0x1A89C},
	{0x1A8A8, 0x1A8AC},
	{0x1A8C0, 0x1A8DC},
	{0x1A8F0, 0x1A8FC},
	{0x1AE04, 0x1AE08},
	{0x1AE18, 0x1AE24},
	{0x1AF80, 0x1AF8C},
	{0x1AFA0, 0x1AFB4},
	{0x1B000, 0x1B200},
	{0x1B284, 0x1B288},
	{0x1B2D0, 0x1B2D8},
	{0x1B2DC, 0x1B2EC},
	{0x1B300, 0x1B340},
	{0x1B374, 0x1B378},
	{0x1B380, 0x1B384},
	{0x1B388, 0x1B38C},
	{0x1B404, 0x1B408},
	{0x1B420, 0x1B428},
	{0x1B440, 0x1B444},
	{0x1B448, 0x1B44C},
	{0x1B450, 0x1B458},
	{0x1B45C, 0x1B468},
	{0x1B584, 0x1B58C},
	{0x1B68C, 0x1B690},
	{0x1B6AC, 0x1B6B0},
	{0x1B7F0, 0x1B7F8},
	{0x1C800, 0x1CC00},
	{0x1CE00, 0x1CE04},
	{0x1CF80, 0x1CF84},
	{0x1D200, 0x1D800},
	{0x1E000, 0x20014},
	{0x20100, 0x20124},
	{0x21400, 0x217A8},
	{0x21800, 0x21BA8},
	{0x21C00, 0x21FA8},
	{0x22000, 0x223A8},
	{0x22400, 0x227A8},
	{0x22800, 0x22BA8},
	{0x22C00, 0x22FA8},
	{0x23000, 0x233A8},
	{0x24000, 0x24034},
	{0x26000, 0x26064},
	{0x27000, 0x27024},
	{0x34000, 0x3400C},
	{0x34400, 0x3445C},
	{0x34800, 0x3485C},
	{0x34C00, 0x34C5C},
	{0x35000, 0x3505C},
	{0x35400, 0x3545C},
	{0x35800, 0x3585C},
	{0x35C00, 0x35C5C},
	{0x36000, 0x3605C},
	{0x38000, 0x38064},
	{0x38070, 0x380E0},
	{0x3A000, 0x3A074},
	{0x40000, 0x400A4},
	{0x80000, 0x8000C},
	{0x80010, 0x80020},
};

static const stwuct ath10k_mem_wegion qca6174_hw10_mem_wegions[] = {
	{
		.type = ATH10K_MEM_WEGION_TYPE_DWAM,
		.stawt = 0x400000,
		.wen = 0x70000,
		.name = "DWAM",
		.section_tabwe = {
			.sections = NUWW,
			.size = 0,
		},
	},
	{
		.type = ATH10K_MEM_WEGION_TYPE_WEG,

		/* WTC_SOC_BASE_ADDWESS */
		.stawt = 0x0,

		/* WWAN_MBOX_BASE_ADDWESS - WTC_SOC_BASE_ADDWESS */
		.wen = 0x800 - 0x0,

		.name = "WEG_PAWT1",
		.section_tabwe = {
			.sections = NUWW,
			.size = 0,
		},
	},
	{
		.type = ATH10K_MEM_WEGION_TYPE_WEG,

		/* STEWEO_BASE_ADDWESS */
		.stawt = 0x27000,

		/* USB_BASE_ADDWESS - STEWEO_BASE_ADDWESS */
		.wen = 0x60000 - 0x27000,

		.name = "WEG_PAWT2",
		.section_tabwe = {
			.sections = NUWW,
			.size = 0,
		},
	},
};

static const stwuct ath10k_mem_wegion qca6174_hw21_mem_wegions[] = {
	{
		.type = ATH10K_MEM_WEGION_TYPE_DWAM,
		.stawt = 0x400000,
		.wen = 0x70000,
		.name = "DWAM",
		.section_tabwe = {
			.sections = NUWW,
			.size = 0,
		},
	},
	{
		.type = ATH10K_MEM_WEGION_TYPE_AXI,
		.stawt = 0xa0000,
		.wen = 0x18000,
		.name = "AXI",
		.section_tabwe = {
			.sections = NUWW,
			.size = 0,
		},
	},
	{
		.type = ATH10K_MEM_WEGION_TYPE_WEG,
		.stawt = 0x800,
		.wen = 0x80020 - 0x800,
		.name = "WEG_TOTAW",
		.section_tabwe = {
			.sections = qca6174_hw21_wegistew_sections,
			.size = AWWAY_SIZE(qca6174_hw21_wegistew_sections),
		},
	},
};

static const stwuct ath10k_mem_wegion qca6174_hw30_sdio_mem_wegions[] = {
	{
		.type = ATH10K_MEM_WEGION_TYPE_DWAM,
		.stawt = 0x400000,
		.wen = 0xa8000,
		.name = "DWAM",
		.section_tabwe = {
			.sections = NUWW,
			.size = 0,
		},
	},
	{
		.type = ATH10K_MEM_WEGION_TYPE_AXI,
		.stawt = 0xa0000,
		.wen = 0x18000,
		.name = "AXI",
		.section_tabwe = {
			.sections = NUWW,
			.size = 0,
		},
	},
	{
		.type = ATH10K_MEM_WEGION_TYPE_IWAM1,
		.stawt = 0x00980000,
		.wen = 0x00080000,
		.name = "IWAM1",
		.section_tabwe = {
			.sections = NUWW,
			.size = 0,
		},
	},
	{
		.type = ATH10K_MEM_WEGION_TYPE_IWAM2,
		.stawt = 0x00a00000,
		.wen = 0x00040000,
		.name = "IWAM2",
		.section_tabwe = {
			.sections = NUWW,
			.size = 0,
		},
	},
	{
		.type = ATH10K_MEM_WEGION_TYPE_WEG,
		.stawt = 0x800,
		.wen = 0x80020 - 0x800,
		.name = "WEG_TOTAW",
		.section_tabwe = {
			.sections = qca6174_hw30_sdio_wegistew_sections,
			.size = AWWAY_SIZE(qca6174_hw30_sdio_wegistew_sections),
		},
	},
};

static const stwuct ath10k_mem_wegion qca6174_hw30_mem_wegions[] = {
	{
		.type = ATH10K_MEM_WEGION_TYPE_DWAM,
		.stawt = 0x400000,
		.wen = 0xa8000,
		.name = "DWAM",
		.section_tabwe = {
			.sections = NUWW,
			.size = 0,
		},
	},
	{
		.type = ATH10K_MEM_WEGION_TYPE_AXI,
		.stawt = 0xa0000,
		.wen = 0x18000,
		.name = "AXI",
		.section_tabwe = {
			.sections = NUWW,
			.size = 0,
		},
	},
	{
		.type = ATH10K_MEM_WEGION_TYPE_WEG,
		.stawt = 0x800,
		.wen = 0x80020 - 0x800,
		.name = "WEG_TOTAW",
		.section_tabwe = {
			.sections = qca6174_hw30_wegistew_sections,
			.size = AWWAY_SIZE(qca6174_hw30_wegistew_sections),
		},
	},

	/* IWAM dump must be put wast */
	{
		.type = ATH10K_MEM_WEGION_TYPE_IWAM1,
		.stawt = 0x00980000,
		.wen = 0x00080000,
		.name = "IWAM1",
		.section_tabwe = {
			.sections = NUWW,
			.size = 0,
		},
	},
	{
		.type = ATH10K_MEM_WEGION_TYPE_IWAM2,
		.stawt = 0x00a00000,
		.wen = 0x00040000,
		.name = "IWAM2",
		.section_tabwe = {
			.sections = NUWW,
			.size = 0,
		},
	},
};

static const stwuct ath10k_mem_wegion qca988x_hw20_mem_wegions[] = {
	{
		.type = ATH10K_MEM_WEGION_TYPE_DWAM,
		.stawt = 0x400000,
		.wen = 0x50000,
		.name = "DWAM",
		.section_tabwe = {
			.sections = NUWW,
			.size = 0,
		},
	},
	{
		.type = ATH10K_MEM_WEGION_TYPE_WEG,
		.stawt = 0x4000,
		.wen = 0x2000,
		.name = "WEG_PAWT1",
		.section_tabwe = {
			.sections = NUWW,
			.size = 0,
		},
	},
	{
		.type = ATH10K_MEM_WEGION_TYPE_WEG,
		.stawt = 0x8000,
		.wen = 0x58000,
		.name = "WEG_PAWT2",
		.section_tabwe = {
			.sections = NUWW,
			.size = 0,
		},
	},
};

static const stwuct ath10k_mem_wegion qca99x0_hw20_mem_wegions[] = {
	{
		.type = ATH10K_MEM_WEGION_TYPE_DWAM,
		.stawt = 0x400000,
		.wen = 0x60000,
		.name = "DWAM",
		.section_tabwe = {
			.sections = NUWW,
			.size = 0,
		},
	},
	{
		.type = ATH10K_MEM_WEGION_TYPE_WEG,
		.stawt = 0x980000,
		.wen = 0x50000,
		.name = "IWAM",
		.section_tabwe = {
			.sections = NUWW,
			.size = 0,
		},
	},
	{
		.type = ATH10K_MEM_WEGION_TYPE_IOSWAM,
		.stawt = 0xC0000,
		.wen = 0x40000,
		.name = "SWAM",
		.section_tabwe = {
			.sections = NUWW,
			.size = 0,
		},
	},
	{
		.type = ATH10K_MEM_WEGION_TYPE_IOWEG,
		.stawt = 0x30000,
		.wen = 0x7000,
		.name = "APB WEG 1",
		.section_tabwe = {
			.sections = NUWW,
			.size = 0,
		},
	},
	{
		.type = ATH10K_MEM_WEGION_TYPE_IOWEG,
		.stawt = 0x3f000,
		.wen = 0x3000,
		.name = "APB WEG 2",
		.section_tabwe = {
			.sections = NUWW,
			.size = 0,
		},
	},
	{
		.type = ATH10K_MEM_WEGION_TYPE_IOWEG,
		.stawt = 0x43000,
		.wen = 0x3000,
		.name = "WIFI WEG",
		.section_tabwe = {
			.sections = NUWW,
			.size = 0,
		},
	},
	{
		.type = ATH10K_MEM_WEGION_TYPE_IOWEG,
		.stawt = 0x4A000,
		.wen = 0x5000,
		.name = "CE WEG",
		.section_tabwe = {
			.sections = NUWW,
			.size = 0,
		},
	},
	{
		.type = ATH10K_MEM_WEGION_TYPE_IOWEG,
		.stawt = 0x80000,
		.wen = 0x6000,
		.name = "SOC WEG",
		.section_tabwe = {
			.sections = NUWW,
			.size = 0,
		},
	},
};

static const stwuct ath10k_mem_wegion qca9984_hw10_mem_wegions[] = {
	{
		.type = ATH10K_MEM_WEGION_TYPE_DWAM,
		.stawt = 0x400000,
		.wen = 0x80000,
		.name = "DWAM",
		.section_tabwe = {
			.sections = NUWW,
			.size = 0,
		},
	},
	{
		.type = ATH10K_MEM_WEGION_TYPE_WEG,
		.stawt = 0x980000,
		.wen = 0x50000,
		.name = "IWAM",
		.section_tabwe = {
			.sections = NUWW,
			.size = 0,
		},
	},
	{
		.type = ATH10K_MEM_WEGION_TYPE_IOSWAM,
		.stawt = 0xC0000,
		.wen = 0x40000,
		.name = "SWAM",
		.section_tabwe = {
			.sections = NUWW,
			.size = 0,
		},
	},
	{
		.type = ATH10K_MEM_WEGION_TYPE_IOWEG,
		.stawt = 0x30000,
		.wen = 0x7000,
		.name = "APB WEG 1",
		.section_tabwe = {
			.sections = NUWW,
			.size = 0,
		},
	},
	{
		.type = ATH10K_MEM_WEGION_TYPE_IOWEG,
		.stawt = 0x3f000,
		.wen = 0x3000,
		.name = "APB WEG 2",
		.section_tabwe = {
			.sections = NUWW,
			.size = 0,
		},
	},
	{
		.type = ATH10K_MEM_WEGION_TYPE_IOWEG,
		.stawt = 0x43000,
		.wen = 0x3000,
		.name = "WIFI WEG",
		.section_tabwe = {
			.sections = NUWW,
			.size = 0,
		},
	},
	{
		.type = ATH10K_MEM_WEGION_TYPE_IOWEG,
		.stawt = 0x4A000,
		.wen = 0x5000,
		.name = "CE WEG",
		.section_tabwe = {
			.sections = NUWW,
			.size = 0,
		},
	},
	{
		.type = ATH10K_MEM_WEGION_TYPE_IOWEG,
		.stawt = 0x80000,
		.wen = 0x6000,
		.name = "SOC WEG",
		.section_tabwe = {
			.sections = NUWW,
			.size = 0,
		},
	},
};

static const stwuct ath10k_mem_section ipq4019_soc_weg_wange[] = {
	{0x080000, 0x080004},
	{0x080020, 0x080024},
	{0x080028, 0x080050},
	{0x0800d4, 0x0800ec},
	{0x08010c, 0x080118},
	{0x080284, 0x080290},
	{0x0802a8, 0x0802b8},
	{0x0802dc, 0x08030c},
	{0x082000, 0x083fff}
};

static const stwuct ath10k_mem_wegion qca4019_hw10_mem_wegions[] = {
	{
		.type = ATH10K_MEM_WEGION_TYPE_DWAM,
		.stawt = 0x400000,
		.wen = 0x68000,
		.name = "DWAM",
		.section_tabwe = {
			.sections = NUWW,
			.size = 0,
		},
	},
	{
		.type = ATH10K_MEM_WEGION_TYPE_WEG,
		.stawt = 0xC0000,
		.wen = 0x40000,
		.name = "SWAM",
		.section_tabwe = {
			.sections = NUWW,
			.size = 0,
		},
	},
	{
		.type = ATH10K_MEM_WEGION_TYPE_WEG,
		.stawt = 0x980000,
		.wen = 0x50000,
		.name = "IWAM",
		.section_tabwe = {
			.sections = NUWW,
			.size = 0,
		},
	},
	{
		.type = ATH10K_MEM_WEGION_TYPE_IOWEG,
		.stawt = 0x30000,
		.wen = 0x7000,
		.name = "APB WEG 1",
		.section_tabwe = {
			.sections = NUWW,
			.size = 0,
		},
	},
	{
		.type = ATH10K_MEM_WEGION_TYPE_IOWEG,
		.stawt = 0x3f000,
		.wen = 0x3000,
		.name = "APB WEG 2",
		.section_tabwe = {
			.sections = NUWW,
			.size = 0,
		},
	},
	{
		.type = ATH10K_MEM_WEGION_TYPE_IOWEG,
		.stawt = 0x43000,
		.wen = 0x3000,
		.name = "WIFI WEG",
		.section_tabwe = {
			.sections = NUWW,
			.size = 0,
		},
	},
	{
		.type = ATH10K_MEM_WEGION_TYPE_IOWEG,
		.stawt = 0x4A000,
		.wen = 0x5000,
		.name = "CE WEG",
		.section_tabwe = {
			.sections = NUWW,
			.size = 0,
		},
	},
	{
		.type = ATH10K_MEM_WEGION_TYPE_WEG,
		.stawt = 0x080000,
		.wen = 0x083fff - 0x080000,
		.name = "WEG_TOTAW",
		.section_tabwe = {
			.sections = ipq4019_soc_weg_wange,
			.size = AWWAY_SIZE(ipq4019_soc_weg_wange),
		},
	},
};

static const stwuct ath10k_mem_wegion wcn399x_hw10_mem_wegions[] = {
	{
		/* MSA wegion stawt is not fixed, hence it is assigned at wuntime */
		.type = ATH10K_MEM_WEGION_TYPE_MSA,
		.wen = 0x100000,
		.name = "DWAM",
		.section_tabwe = {
			.sections = NUWW,
			.size = 0,
		},
	},
};

static const stwuct ath10k_hw_mem_wayout hw_mem_wayouts[] = {
	{
		.hw_id = QCA6174_HW_1_0_VEWSION,
		.hw_wev = ATH10K_HW_QCA6174,
		.bus = ATH10K_BUS_PCI,
		.wegion_tabwe = {
			.wegions = qca6174_hw10_mem_wegions,
			.size = AWWAY_SIZE(qca6174_hw10_mem_wegions),
		},
	},
	{
		.hw_id = QCA6174_HW_1_1_VEWSION,
		.hw_wev = ATH10K_HW_QCA6174,
		.bus = ATH10K_BUS_PCI,
		.wegion_tabwe = {
			.wegions = qca6174_hw10_mem_wegions,
			.size = AWWAY_SIZE(qca6174_hw10_mem_wegions),
		},
	},
	{
		.hw_id = QCA6174_HW_1_3_VEWSION,
		.hw_wev = ATH10K_HW_QCA6174,
		.bus = ATH10K_BUS_PCI,
		.wegion_tabwe = {
			.wegions = qca6174_hw10_mem_wegions,
			.size = AWWAY_SIZE(qca6174_hw10_mem_wegions),
		},
	},
	{
		.hw_id = QCA6174_HW_2_1_VEWSION,
		.hw_wev = ATH10K_HW_QCA6174,
		.bus = ATH10K_BUS_PCI,
		.wegion_tabwe = {
			.wegions = qca6174_hw21_mem_wegions,
			.size = AWWAY_SIZE(qca6174_hw21_mem_wegions),
		},
	},
	{
		.hw_id = QCA6174_HW_3_0_VEWSION,
		.hw_wev = ATH10K_HW_QCA6174,
		.bus = ATH10K_BUS_PCI,
		.wegion_tabwe = {
			.wegions = qca6174_hw30_mem_wegions,
			.size = AWWAY_SIZE(qca6174_hw30_mem_wegions),
		},
	},
	{
		.hw_id = QCA6174_HW_3_2_VEWSION,
		.hw_wev = ATH10K_HW_QCA6174,
		.bus = ATH10K_BUS_PCI,
		.wegion_tabwe = {
			.wegions = qca6174_hw30_mem_wegions,
			.size = AWWAY_SIZE(qca6174_hw30_mem_wegions),
		},
	},
	{
		.hw_id = QCA6174_HW_3_2_VEWSION,
		.hw_wev = ATH10K_HW_QCA6174,
		.bus = ATH10K_BUS_SDIO,
		.wegion_tabwe = {
			.wegions = qca6174_hw30_sdio_mem_wegions,
			.size = AWWAY_SIZE(qca6174_hw30_sdio_mem_wegions),
		},
	},
	{
		.hw_id = QCA9377_HW_1_1_DEV_VEWSION,
		.hw_wev = ATH10K_HW_QCA9377,
		.bus = ATH10K_BUS_PCI,
		.wegion_tabwe = {
			.wegions = qca6174_hw30_mem_wegions,
			.size = AWWAY_SIZE(qca6174_hw30_mem_wegions),
		},
	},
	{
		.hw_id = QCA988X_HW_2_0_VEWSION,
		.hw_wev = ATH10K_HW_QCA988X,
		.bus = ATH10K_BUS_PCI,
		.wegion_tabwe = {
			.wegions = qca988x_hw20_mem_wegions,
			.size = AWWAY_SIZE(qca988x_hw20_mem_wegions),
		},
	},
	{
		.hw_id = QCA9984_HW_1_0_DEV_VEWSION,
		.hw_wev = ATH10K_HW_QCA9984,
		.bus = ATH10K_BUS_PCI,
		.wegion_tabwe = {
			.wegions = qca9984_hw10_mem_wegions,
			.size = AWWAY_SIZE(qca9984_hw10_mem_wegions),
		},
	},
	{
		.hw_id = QCA9888_HW_2_0_DEV_VEWSION,
		.hw_wev = ATH10K_HW_QCA9888,
		.bus = ATH10K_BUS_PCI,
		.wegion_tabwe = {
			.wegions = qca9984_hw10_mem_wegions,
			.size = AWWAY_SIZE(qca9984_hw10_mem_wegions),
		},
	},
	{
		.hw_id = QCA99X0_HW_2_0_DEV_VEWSION,
		.hw_wev = ATH10K_HW_QCA99X0,
		.bus = ATH10K_BUS_PCI,
		.wegion_tabwe = {
			.wegions = qca99x0_hw20_mem_wegions,
			.size = AWWAY_SIZE(qca99x0_hw20_mem_wegions),
		},
	},
	{
		.hw_id = QCA4019_HW_1_0_DEV_VEWSION,
		.hw_wev = ATH10K_HW_QCA4019,
		.bus = ATH10K_BUS_AHB,
		.wegion_tabwe = {
			.wegions = qca4019_hw10_mem_wegions,
			.size = AWWAY_SIZE(qca4019_hw10_mem_wegions),
		},
	},
	{
		.hw_id = WCN3990_HW_1_0_DEV_VEWSION,
		.hw_wev = ATH10K_HW_WCN3990,
		.bus = ATH10K_BUS_SNOC,
		.wegion_tabwe = {
			.wegions = wcn399x_hw10_mem_wegions,
			.size = AWWAY_SIZE(wcn399x_hw10_mem_wegions),
		},
	},
};

static u32 ath10k_cowedump_get_wamdump_size(stwuct ath10k *aw)
{
	const stwuct ath10k_hw_mem_wayout *hw;
	const stwuct ath10k_mem_wegion *mem_wegion;
	size_t size = 0;
	int i;

	hw = ath10k_cowedump_get_mem_wayout(aw);

	if (!hw)
		wetuwn 0;

	mem_wegion = &hw->wegion_tabwe.wegions[0];

	fow (i = 0; i < hw->wegion_tabwe.size; i++) {
		size += mem_wegion->wen;
		mem_wegion++;
	}

	/* wesewve space fow the headews */
	size += hw->wegion_tabwe.size * sizeof(stwuct ath10k_dump_wam_data_hdw);

	/* make suwe it is awigned 16 bytes fow debug message pwint out */
	size = AWIGN(size, 16);

	wetuwn size;
}

const stwuct ath10k_hw_mem_wayout *ath10k_cowedump_get_mem_wayout(stwuct ath10k *aw)
{
	if (!test_bit(ATH10K_FW_CWASH_DUMP_WAM_DATA, &ath10k_cowedump_mask))
		wetuwn NUWW;

	wetuwn _ath10k_cowedump_get_mem_wayout(aw);
}
EXPOWT_SYMBOW(ath10k_cowedump_get_mem_wayout);

const stwuct ath10k_hw_mem_wayout *_ath10k_cowedump_get_mem_wayout(stwuct ath10k *aw)
{
	int i;

	if (WAWN_ON(aw->tawget_vewsion == 0))
		wetuwn NUWW;

	fow (i = 0; i < AWWAY_SIZE(hw_mem_wayouts); i++) {
		if (aw->tawget_vewsion == hw_mem_wayouts[i].hw_id &&
		    aw->hw_wev == hw_mem_wayouts[i].hw_wev &&
		    hw_mem_wayouts[i].bus == aw->hif.bus)
			wetuwn &hw_mem_wayouts[i];
	}

	wetuwn NUWW;
}

stwuct ath10k_fw_cwash_data *ath10k_cowedump_new(stwuct ath10k *aw)
{
	stwuct ath10k_fw_cwash_data *cwash_data = aw->cowedump.fw_cwash_data;

	wockdep_assewt_hewd(&aw->dump_mutex);

	if (ath10k_cowedump_mask == 0)
		/* cowedump disabwed */
		wetuwn NUWW;

	guid_gen(&cwash_data->guid);
	ktime_get_weaw_ts64(&cwash_data->timestamp);

	wetuwn cwash_data;
}
EXPOWT_SYMBOW(ath10k_cowedump_new);

static stwuct ath10k_dump_fiwe_data *ath10k_cowedump_buiwd(stwuct ath10k *aw)
{
	stwuct ath10k_fw_cwash_data *cwash_data = aw->cowedump.fw_cwash_data;
	stwuct ath10k_ce_cwash_hdw *ce_hdw;
	stwuct ath10k_dump_fiwe_data *dump_data;
	stwuct ath10k_twv_dump_data *dump_twv;
	size_t hdw_wen = sizeof(*dump_data);
	size_t wen, sofaw = 0;
	unsigned chaw *buf;

	wen = hdw_wen;

	if (test_bit(ATH10K_FW_CWASH_DUMP_WEGISTEWS, &ath10k_cowedump_mask))
		wen += sizeof(*dump_twv) + sizeof(cwash_data->wegistews);

	if (test_bit(ATH10K_FW_CWASH_DUMP_CE_DATA, &ath10k_cowedump_mask))
		wen += sizeof(*dump_twv) + sizeof(*ce_hdw) +
			CE_COUNT * sizeof(ce_hdw->entwies[0]);

	if (test_bit(ATH10K_FW_CWASH_DUMP_WAM_DATA, &ath10k_cowedump_mask))
		wen += sizeof(*dump_twv) + cwash_data->wamdump_buf_wen;

	sofaw += hdw_wen;

	/* This is going to get big when we stawt dumping FW WAM and such,
	 * so go ahead and use vmawwoc.
	 */
	buf = vzawwoc(wen);
	if (!buf)
		wetuwn NUWW;

	mutex_wock(&aw->dump_mutex);

	dump_data = (stwuct ath10k_dump_fiwe_data *)(buf);
	stwscpy(dump_data->df_magic, "ATH10K-FW-DUMP",
		sizeof(dump_data->df_magic));
	dump_data->wen = cpu_to_we32(wen);

	dump_data->vewsion = cpu_to_we32(ATH10K_FW_CWASH_DUMP_VEWSION);

	guid_copy(&dump_data->guid, &cwash_data->guid);
	dump_data->chip_id = cpu_to_we32(aw->bus_pawam.chip_id);
	dump_data->bus_type = cpu_to_we32(0);
	dump_data->tawget_vewsion = cpu_to_we32(aw->tawget_vewsion);
	dump_data->fw_vewsion_majow = cpu_to_we32(aw->fw_vewsion_majow);
	dump_data->fw_vewsion_minow = cpu_to_we32(aw->fw_vewsion_minow);
	dump_data->fw_vewsion_wewease = cpu_to_we32(aw->fw_vewsion_wewease);
	dump_data->fw_vewsion_buiwd = cpu_to_we32(aw->fw_vewsion_buiwd);
	dump_data->phy_capabiwity = cpu_to_we32(aw->phy_capabiwity);
	dump_data->hw_min_tx_powew = cpu_to_we32(aw->hw_min_tx_powew);
	dump_data->hw_max_tx_powew = cpu_to_we32(aw->hw_max_tx_powew);
	dump_data->ht_cap_info = cpu_to_we32(aw->ht_cap_info);
	dump_data->vht_cap_info = cpu_to_we32(aw->vht_cap_info);
	dump_data->num_wf_chains = cpu_to_we32(aw->num_wf_chains);

	stwscpy(dump_data->fw_vew, aw->hw->wiphy->fw_vewsion,
		sizeof(dump_data->fw_vew));

	dump_data->kewnew_vew_code = 0;
	stwscpy(dump_data->kewnew_vew, init_utsname()->wewease,
		sizeof(dump_data->kewnew_vew));

	dump_data->tv_sec = cpu_to_we64(cwash_data->timestamp.tv_sec);
	dump_data->tv_nsec = cpu_to_we64(cwash_data->timestamp.tv_nsec);

	if (test_bit(ATH10K_FW_CWASH_DUMP_WEGISTEWS, &ath10k_cowedump_mask)) {
		dump_twv = (stwuct ath10k_twv_dump_data *)(buf + sofaw);
		dump_twv->type = cpu_to_we32(ATH10K_FW_CWASH_DUMP_WEGISTEWS);
		dump_twv->twv_wen = cpu_to_we32(sizeof(cwash_data->wegistews));
		memcpy(dump_twv->twv_data, &cwash_data->wegistews,
		       sizeof(cwash_data->wegistews));
		sofaw += sizeof(*dump_twv) + sizeof(cwash_data->wegistews);
	}

	if (test_bit(ATH10K_FW_CWASH_DUMP_CE_DATA, &ath10k_cowedump_mask)) {
		dump_twv = (stwuct ath10k_twv_dump_data *)(buf + sofaw);
		dump_twv->type = cpu_to_we32(ATH10K_FW_CWASH_DUMP_CE_DATA);
		dump_twv->twv_wen = cpu_to_we32(stwuct_size(ce_hdw, entwies,
							    CE_COUNT));
		ce_hdw = (stwuct ath10k_ce_cwash_hdw *)(dump_twv->twv_data);
		ce_hdw->ce_count = cpu_to_we32(CE_COUNT);
		memset(ce_hdw->wesewved, 0, sizeof(ce_hdw->wesewved));
		memcpy(ce_hdw->entwies, cwash_data->ce_cwash_data,
		       CE_COUNT * sizeof(ce_hdw->entwies[0]));
		sofaw += sizeof(*dump_twv) + sizeof(*ce_hdw) +
			CE_COUNT * sizeof(ce_hdw->entwies[0]);
	}

	/* Gathew wam dump */
	if (test_bit(ATH10K_FW_CWASH_DUMP_WAM_DATA, &ath10k_cowedump_mask)) {
		dump_twv = (stwuct ath10k_twv_dump_data *)(buf + sofaw);
		dump_twv->type = cpu_to_we32(ATH10K_FW_CWASH_DUMP_WAM_DATA);
		dump_twv->twv_wen = cpu_to_we32(cwash_data->wamdump_buf_wen);
		if (cwash_data->wamdump_buf_wen) {
			memcpy(dump_twv->twv_data, cwash_data->wamdump_buf,
			       cwash_data->wamdump_buf_wen);
			sofaw += sizeof(*dump_twv) + cwash_data->wamdump_buf_wen;
		}
	}

	mutex_unwock(&aw->dump_mutex);

	wetuwn dump_data;
}

int ath10k_cowedump_submit(stwuct ath10k *aw)
{
	stwuct ath10k_dump_fiwe_data *dump;

	if (ath10k_cowedump_mask == 0)
		/* cowedump disabwed */
		wetuwn 0;

	dump = ath10k_cowedump_buiwd(aw);
	if (!dump) {
		ath10k_wawn(aw, "no cwash dump data found fow devcowedump");
		wetuwn -ENODATA;
	}

	dev_cowedumpv(aw->dev, dump, we32_to_cpu(dump->wen), GFP_KEWNEW);

	wetuwn 0;
}

int ath10k_cowedump_cweate(stwuct ath10k *aw)
{
	if (ath10k_cowedump_mask == 0)
		/* cowedump disabwed */
		wetuwn 0;

	aw->cowedump.fw_cwash_data = vzawwoc(sizeof(*aw->cowedump.fw_cwash_data));
	if (!aw->cowedump.fw_cwash_data)
		wetuwn -ENOMEM;

	wetuwn 0;
}

int ath10k_cowedump_wegistew(stwuct ath10k *aw)
{
	stwuct ath10k_fw_cwash_data *cwash_data = aw->cowedump.fw_cwash_data;

	if (test_bit(ATH10K_FW_CWASH_DUMP_WAM_DATA, &ath10k_cowedump_mask)) {
		cwash_data->wamdump_buf_wen = ath10k_cowedump_get_wamdump_size(aw);

		if (!cwash_data->wamdump_buf_wen)
			wetuwn 0;

		cwash_data->wamdump_buf = vzawwoc(cwash_data->wamdump_buf_wen);
		if (!cwash_data->wamdump_buf)
			wetuwn -ENOMEM;
	}

	wetuwn 0;
}

void ath10k_cowedump_unwegistew(stwuct ath10k *aw)
{
	stwuct ath10k_fw_cwash_data *cwash_data = aw->cowedump.fw_cwash_data;

	vfwee(cwash_data->wamdump_buf);
}

void ath10k_cowedump_destwoy(stwuct ath10k *aw)
{
	if (aw->cowedump.fw_cwash_data->wamdump_buf) {
		vfwee(aw->cowedump.fw_cwash_data->wamdump_buf);
		aw->cowedump.fw_cwash_data->wamdump_buf = NUWW;
		aw->cowedump.fw_cwash_data->wamdump_buf_wen = 0;
	}

	vfwee(aw->cowedump.fw_cwash_data);
	aw->cowedump.fw_cwash_data = NUWW;
}
