/*
 * Copywight (c) 2010-2011 Athewos Communications Inc.
 * Copywight (c) 2011-2012 Quawcomm Athewos Inc.
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

#ifndef INITVAWS_9330_1P2_H
#define INITVAWS_9330_1P2_H

#define aw9331_modes_high_powew_tx_gain_1p2 aw9331_modes_high_ob_db_tx_gain_1p2

#define aw9331_modes_wow_ob_db_tx_gain_1p2 aw9331_modes_high_ob_db_tx_gain_1p2

#define aw9331_modes_wowest_ob_db_tx_gain_1p2 aw9331_modes_high_ob_db_tx_gain_1p2

#define aw9331_1p2_baseband_cowe_txfiw_coeff_japan_2484 aw9331_1p1_baseband_cowe_txfiw_coeff_japan_2484

#define aw9331_1p2_xtaw_25M aw9331_1p1_xtaw_25M

#define aw9331_1p2_xtaw_40M aw9331_1p1_xtaw_40M

#define aw9331_1p2_soc_postambwe aw9331_1p1_soc_postambwe

#define aw9331_1p2_mac_postambwe aw9331_1p1_mac_postambwe

#define aw9331_1p2_soc_pweambwe aw9331_1p1_soc_pweambwe

#define aw9331_1p2_mac_cowe aw9331_1p1_mac_cowe

#define aw9331_common_wo_xwna_wx_gain_1p2 aw9331_common_wo_xwna_wx_gain_1p1

static const u32 aw9331_modes_high_ob_db_tx_gain_1p2[][5] = {
	/* Addw      5G_HT20     5G_HT40     2G_HT40     2G_HT20   */
	{0x0000a410, 0x000050d7, 0x000050d7, 0x000050d7, 0x000050d7},
	{0x0000a500, 0x00022200, 0x00022200, 0x00000000, 0x00000000},
	{0x0000a504, 0x05062002, 0x05062002, 0x04000002, 0x04000002},
	{0x0000a508, 0x0c002e00, 0x0c002e00, 0x08000004, 0x08000004},
	{0x0000a50c, 0x11062202, 0x11062202, 0x0d000200, 0x0d000200},
	{0x0000a510, 0x17022e00, 0x17022e00, 0x11000202, 0x11000202},
	{0x0000a514, 0x1d000ec2, 0x1d000ec2, 0x15000400, 0x15000400},
	{0x0000a518, 0x25020ec0, 0x25020ec0, 0x19000402, 0x19000402},
	{0x0000a51c, 0x2b020ec3, 0x2b020ec3, 0x1d000404, 0x1d000404},
	{0x0000a520, 0x2f001f04, 0x2f001f04, 0x23000a00, 0x23000a00},
	{0x0000a524, 0x35001fc4, 0x35001fc4, 0x27000a02, 0x27000a02},
	{0x0000a528, 0x3c022f04, 0x3c022f04, 0x2b000a04, 0x2b000a04},
	{0x0000a52c, 0x41023e85, 0x41023e85, 0x3f001620, 0x3f001620},
	{0x0000a530, 0x48023ec6, 0x48023ec6, 0x41001621, 0x41001621},
	{0x0000a534, 0x4d023f01, 0x4d023f01, 0x44001640, 0x44001640},
	{0x0000a538, 0x53023f4b, 0x53023f4b, 0x46001641, 0x46001641},
	{0x0000a53c, 0x5a027f09, 0x5a027f09, 0x48001642, 0x48001642},
	{0x0000a540, 0x5f027fc9, 0x5f027fc9, 0x4b001644, 0x4b001644},
	{0x0000a544, 0x6502feca, 0x6502feca, 0x4e001a81, 0x4e001a81},
	{0x0000a548, 0x6b02ff4a, 0x6b02ff4a, 0x51001a83, 0x51001a83},
	{0x0000a54c, 0x7203feca, 0x7203feca, 0x54001c84, 0x54001c84},
	{0x0000a550, 0x7703ff0b, 0x7703ff0b, 0x57001ce3, 0x57001ce3},
	{0x0000a554, 0x7d06ffcb, 0x7d06ffcb, 0x5b001ce5, 0x5b001ce5},
	{0x0000a558, 0x8407ff0b, 0x8407ff0b, 0x5f001ce9, 0x5f001ce9},
	{0x0000a55c, 0x8907ffcb, 0x8907ffcb, 0x66001eec, 0x66001eec},
	{0x0000a560, 0x900fff0b, 0x900fff0b, 0x66001eec, 0x66001eec},
	{0x0000a564, 0x960fffcb, 0x960fffcb, 0x66001eec, 0x66001eec},
	{0x0000a568, 0x9c1fff0b, 0x9c1fff0b, 0x66001eec, 0x66001eec},
	{0x0000a56c, 0x9c1fff0b, 0x9c1fff0b, 0x66001eec, 0x66001eec},
	{0x0000a570, 0x9c1fff0b, 0x9c1fff0b, 0x66001eec, 0x66001eec},
	{0x0000a574, 0x9c1fff0b, 0x9c1fff0b, 0x66001eec, 0x66001eec},
	{0x0000a578, 0x9c1fff0b, 0x9c1fff0b, 0x66001eec, 0x66001eec},
	{0x0000a57c, 0x9c1fff0b, 0x9c1fff0b, 0x66001eec, 0x66001eec},
	{0x0000a580, 0x00022200, 0x00022200, 0x00000000, 0x00000000},
	{0x0000a584, 0x05062002, 0x05062002, 0x04000002, 0x04000002},
	{0x0000a588, 0x0c002e00, 0x0c002e00, 0x08000004, 0x08000004},
	{0x0000a58c, 0x11062202, 0x11062202, 0x0b000200, 0x0b000200},
	{0x0000a590, 0x17022e00, 0x17022e00, 0x0f000202, 0x0f000202},
	{0x0000a594, 0x1d000ec2, 0x1d000ec2, 0x11000400, 0x11000400},
	{0x0000a598, 0x25020ec0, 0x25020ec0, 0x15000402, 0x15000402},
	{0x0000a59c, 0x2b020ec3, 0x2b020ec3, 0x19000404, 0x19000404},
	{0x0000a5a0, 0x2f001f04, 0x2f001f04, 0x1b000603, 0x1b000603},
	{0x0000a5a4, 0x35001fc4, 0x35001fc4, 0x1f000a02, 0x1f000a02},
	{0x0000a5a8, 0x3c022f04, 0x3c022f04, 0x23000a04, 0x23000a04},
	{0x0000a5ac, 0x41023e85, 0x41023e85, 0x26000a20, 0x26000a20},
	{0x0000a5b0, 0x48023ec6, 0x48023ec6, 0x2a000e20, 0x2a000e20},
	{0x0000a5b4, 0x4d023f01, 0x4d023f01, 0x2e000e22, 0x2e000e22},
	{0x0000a5b8, 0x53023f4b, 0x53023f4b, 0x31000e24, 0x31000e24},
	{0x0000a5bc, 0x5a027f09, 0x5a027f09, 0x34001640, 0x34001640},
	{0x0000a5c0, 0x5f027fc9, 0x5f027fc9, 0x38001660, 0x38001660},
	{0x0000a5c4, 0x6502feca, 0x6502feca, 0x3b001861, 0x3b001861},
	{0x0000a5c8, 0x6b02ff4a, 0x6b02ff4a, 0x3e001a81, 0x3e001a81},
	{0x0000a5cc, 0x7203feca, 0x7203feca, 0x42001a83, 0x42001a83},
	{0x0000a5d0, 0x7703ff0b, 0x7703ff0b, 0x44001c84, 0x44001c84},
	{0x0000a5d4, 0x7d06ffcb, 0x7d06ffcb, 0x48001ce3, 0x48001ce3},
	{0x0000a5d8, 0x8407ff0b, 0x8407ff0b, 0x4c001ce5, 0x4c001ce5},
	{0x0000a5dc, 0x8907ffcb, 0x8907ffcb, 0x50001ce9, 0x50001ce9},
	{0x0000a5e0, 0x900fff0b, 0x900fff0b, 0x54001ceb, 0x54001ceb},
	{0x0000a5e4, 0x960fffcb, 0x960fffcb, 0x56001eec, 0x56001eec},
	{0x0000a5e8, 0x9c1fff0b, 0x9c1fff0b, 0x56001eec, 0x56001eec},
	{0x0000a5ec, 0x9c1fff0b, 0x9c1fff0b, 0x56001eec, 0x56001eec},
	{0x0000a5f0, 0x9c1fff0b, 0x9c1fff0b, 0x56001eec, 0x56001eec},
	{0x0000a5f4, 0x9c1fff0b, 0x9c1fff0b, 0x56001eec, 0x56001eec},
	{0x0000a5f8, 0x9c1fff0b, 0x9c1fff0b, 0x56001eec, 0x56001eec},
	{0x0000a5fc, 0x9c1fff0b, 0x9c1fff0b, 0x56001eec, 0x56001eec},
	{0x0000a600, 0x00000000, 0x00000000, 0x00000000, 0x00000000},
	{0x0000a604, 0x00000000, 0x00000000, 0x00000000, 0x00000000},
	{0x0000a608, 0x00000000, 0x00000000, 0x00000000, 0x00000000},
	{0x0000a60c, 0x00000000, 0x00000000, 0x00000000, 0x00000000},
	{0x0000a610, 0x00000000, 0x00000000, 0x00000000, 0x00000000},
	{0x0000a614, 0x01404000, 0x01404000, 0x01404000, 0x01404000},
	{0x0000a618, 0x02008501, 0x02008501, 0x02008501, 0x02008501},
	{0x0000a61c, 0x02008802, 0x02008802, 0x02008802, 0x02008802},
	{0x0000a620, 0x0300c802, 0x0300c802, 0x0300c802, 0x0300c802},
	{0x0000a624, 0x0300cc03, 0x0300cc03, 0x0300cc03, 0x0300cc03},
	{0x0000a628, 0x04011004, 0x04011004, 0x04011004, 0x04011004},
	{0x0000a62c, 0x04011004, 0x04011004, 0x04011004, 0x04011004},
	{0x0000a630, 0x04011004, 0x04011004, 0x04011004, 0x04011004},
	{0x0000a634, 0x04011004, 0x04011004, 0x04011004, 0x04011004},
	{0x0000a638, 0x04011004, 0x04011004, 0x04011004, 0x04011004},
	{0x0000a63c, 0x04011004, 0x04011004, 0x04011004, 0x04011004},
};

static const u32 aw9331_1p2_wadio_cowe[][2] = {
	/* Addw      awwmodes  */
	{0x00016000, 0x36db6db6},
	{0x00016004, 0x6db6db40},
	{0x00016008, 0x73800000},
	{0x0001600c, 0x00000000},
	{0x00016040, 0x7f80fff8},
	{0x00016044, 0x03d6d2db},
	{0x00016048, 0x6c924268},
	{0x0001604c, 0x000f0278},
	{0x00016050, 0x4db6db8c},
	{0x00016054, 0x6db60000},
	{0x00016080, 0x00080000},
	{0x00016084, 0x0e48048c},
	{0x00016088, 0x14214514},
	{0x0001608c, 0x119f081c},
	{0x00016090, 0x24926490},
	{0x00016098, 0xd411eb84},
	{0x000160a0, 0xc2108ffe},
	{0x000160a4, 0x812fc370},
	{0x000160a8, 0x423c8000},
	{0x000160ac, 0x24651800},
	{0x000160b0, 0x03284f3e},
	{0x000160b4, 0x92480040},
	{0x000160c0, 0x006db6db},
	{0x000160c4, 0x0186db60},
	{0x000160c8, 0x6db6db6c},
	{0x000160cc, 0x6de6c300},
	{0x000160d0, 0x14500820},
	{0x00016100, 0x04cb0001},
	{0x00016104, 0xfff80015},
	{0x00016108, 0x00080010},
	{0x0001610c, 0x00170000},
	{0x00016140, 0x10804000},
	{0x00016144, 0x01884080},
	{0x00016148, 0x000080c0},
	{0x00016280, 0x01000015},
	{0x00016284, 0x14d20000},
	{0x00016288, 0x00318000},
	{0x0001628c, 0x50000000},
	{0x00016290, 0x4b96210f},
	{0x00016380, 0x00000000},
	{0x00016384, 0x00000000},
	{0x00016388, 0x00800700},
	{0x0001638c, 0x00800700},
	{0x00016390, 0x00800700},
	{0x00016394, 0x00000000},
	{0x00016398, 0x00000000},
	{0x0001639c, 0x00000000},
	{0x000163a0, 0x00000001},
	{0x000163a4, 0x00000001},
	{0x000163a8, 0x00000000},
	{0x000163ac, 0x00000000},
	{0x000163b0, 0x00000000},
	{0x000163b4, 0x00000000},
	{0x000163b8, 0x00000000},
	{0x000163bc, 0x00000000},
	{0x000163c0, 0x000000a0},
	{0x000163c4, 0x000c0000},
	{0x000163c8, 0x14021402},
	{0x000163cc, 0x00001402},
	{0x000163d0, 0x00000000},
	{0x000163d4, 0x00000000},
};

static const u32 aw9331_1p2_baseband_cowe[][2] = {
	/* Addw      awwmodes  */
	{0x00009800, 0xafe68e30},
	{0x00009804, 0xfd14e000},
	{0x00009808, 0x9c0a8f6b},
	{0x0000980c, 0x04800000},
	{0x00009814, 0x9280c00a},
	{0x00009818, 0x00000000},
	{0x0000981c, 0x00020028},
	{0x00009834, 0x5f3ca3de},
	{0x00009838, 0x0108ecff},
	{0x0000983c, 0x14750600},
	{0x00009880, 0x201fff00},
	{0x00009884, 0x00001042},
	{0x000098a4, 0x00200400},
	{0x000098b0, 0x32840bbe},
	{0x000098d0, 0x004b6a8e},
	{0x000098d4, 0x00000820},
	{0x000098dc, 0x00000000},
	{0x000098f0, 0x00000000},
	{0x000098f4, 0x00000000},
	{0x00009c04, 0x00000000},
	{0x00009c08, 0x03200000},
	{0x00009c0c, 0x00000000},
	{0x00009c10, 0x00000000},
	{0x00009c14, 0x00046384},
	{0x00009c18, 0x05b6b440},
	{0x00009c1c, 0x00b6b440},
	{0x00009d00, 0xc080a333},
	{0x00009d04, 0x40206c10},
	{0x00009d08, 0x009c4060},
	{0x00009d0c, 0x1883800a},
	{0x00009d10, 0x01834061},
	{0x00009d14, 0x00c00400},
	{0x00009d18, 0x00000000},
	{0x00009e08, 0x0038233c},
	{0x00009e24, 0x9927b515},
	{0x00009e28, 0x12ef0200},
	{0x00009e30, 0x06336f77},
	{0x00009e34, 0x6af6532f},
	{0x00009e38, 0x0cc80c00},
	{0x00009e40, 0x0d261800},
	{0x00009e4c, 0x00001004},
	{0x00009e50, 0x00ff03f1},
	{0x00009fc0, 0x803e4788},
	{0x00009fc4, 0x0001efb5},
	{0x00009fcc, 0x40000014},
	{0x0000a20c, 0x00000000},
	{0x0000a220, 0x00000000},
	{0x0000a224, 0x00000000},
	{0x0000a228, 0x10002310},
	{0x0000a23c, 0x00000000},
	{0x0000a244, 0x0c000000},
	{0x0000a2a0, 0x00000001},
	{0x0000a2c0, 0x00000001},
	{0x0000a2c8, 0x00000000},
	{0x0000a2cc, 0x18c43433},
	{0x0000a2d4, 0x00000000},
	{0x0000a2dc, 0x00000000},
	{0x0000a2e0, 0x00000000},
	{0x0000a2e4, 0x00000000},
	{0x0000a2e8, 0x00000000},
	{0x0000a2ec, 0x00000000},
	{0x0000a2f0, 0x00000000},
	{0x0000a2f4, 0x00000000},
	{0x0000a2f8, 0x00000000},
	{0x0000a344, 0x00000000},
	{0x0000a34c, 0x00000000},
	{0x0000a350, 0x0000a000},
	{0x0000a364, 0x00000000},
	{0x0000a370, 0x00000000},
	{0x0000a390, 0x00000001},
	{0x0000a394, 0x00000444},
	{0x0000a398, 0x001f0e0f},
	{0x0000a39c, 0x0075393f},
	{0x0000a3a0, 0xb79f6427},
	{0x0000a3a4, 0x00000000},
	{0x0000a3a8, 0xaaaaaaaa},
	{0x0000a3ac, 0x3c466478},
	{0x0000a3c0, 0x20202020},
	{0x0000a3c4, 0x22222220},
	{0x0000a3c8, 0x20200020},
	{0x0000a3cc, 0x20202020},
	{0x0000a3d0, 0x20202020},
	{0x0000a3d4, 0x20202020},
	{0x0000a3d8, 0x20202020},
	{0x0000a3dc, 0x20202020},
	{0x0000a3e0, 0x20202020},
	{0x0000a3e4, 0x20202020},
	{0x0000a3e8, 0x20202020},
	{0x0000a3ec, 0x20202020},
	{0x0000a3f0, 0x00000000},
	{0x0000a3f4, 0x00000006},
	{0x0000a3f8, 0x0cdbd380},
	{0x0000a3fc, 0x000f0f01},
	{0x0000a400, 0x8fa91f01},
	{0x0000a404, 0x00000000},
	{0x0000a408, 0x0e79e5c6},
	{0x0000a40c, 0x00820820},
	{0x0000a414, 0x1ce739ce},
	{0x0000a418, 0x2d001dce},
	{0x0000a41c, 0x1ce739ce},
	{0x0000a420, 0x000001ce},
	{0x0000a424, 0x1ce739ce},
	{0x0000a428, 0x000001ce},
	{0x0000a42c, 0x1ce739ce},
	{0x0000a430, 0x1ce739ce},
	{0x0000a434, 0x00000000},
	{0x0000a438, 0x00001801},
	{0x0000a43c, 0x00000000},
	{0x0000a440, 0x00000000},
	{0x0000a444, 0x00000000},
	{0x0000a448, 0x04000000},
	{0x0000a44c, 0x00000001},
	{0x0000a450, 0x00010000},
	{0x0000a458, 0x00000000},
	{0x0000a640, 0x00000000},
	{0x0000a644, 0x3fad9d74},
	{0x0000a648, 0x0048060a},
	{0x0000a64c, 0x00003c37},
	{0x0000a670, 0x03020100},
	{0x0000a674, 0x09080504},
	{0x0000a678, 0x0d0c0b0a},
	{0x0000a67c, 0x13121110},
	{0x0000a680, 0x31301514},
	{0x0000a684, 0x35343332},
	{0x0000a688, 0x00000036},
	{0x0000a690, 0x00000838},
	{0x0000a7c0, 0x00000000},
	{0x0000a7c4, 0xfffffffc},
	{0x0000a7c8, 0x00000000},
	{0x0000a7cc, 0x00000000},
	{0x0000a7d0, 0x00000000},
	{0x0000a7d4, 0x00000004},
	{0x0000a7dc, 0x00000001},
};

static const u32 aw9331_1p2_baseband_postambwe[][5] = {
	/* Addw      5G_HT20     5G_HT40     2G_HT40     2G_HT20   */
	{0x00009810, 0xd00a8005, 0xd00a8005, 0xd00a8005, 0xd00a8005},
	{0x00009820, 0x206a002e, 0x206a002e, 0x206a002e, 0x206a002e},
	{0x00009824, 0x5ac640d0, 0x5ac640d0, 0x5ac640d0, 0x5ac640d0},
	{0x00009828, 0x06903081, 0x06903081, 0x06903881, 0x06903881},
	{0x0000982c, 0x05eea6d4, 0x05eea6d4, 0x05eea6d4, 0x05eea6d4},
	{0x00009830, 0x0000059c, 0x0000059c, 0x0000059c, 0x0000059c},
	{0x00009c00, 0x00000044, 0x00000044, 0x00000044, 0x00000044},
	{0x00009e00, 0x0372161e, 0x0372161e, 0x037216a4, 0x037216a4},
	{0x00009e04, 0x00182020, 0x00182020, 0x00182020, 0x00182020},
	{0x00009e0c, 0x6c4000e2, 0x6d4000e2, 0x6d4000e2, 0x6c4000e2},
	{0x00009e10, 0x7ec80d2e, 0x7ec80d2e, 0x7ec80d2e, 0x7ec80d2e},
	{0x00009e14, 0x31395d5e, 0x3139605e, 0x3139605e, 0x31395d5e},
	{0x00009e18, 0x00000000, 0x00000000, 0x00000000, 0x00000000},
	{0x00009e1c, 0x0001cf9c, 0x0001cf9c, 0x00021f9c, 0x00021f9c},
	{0x00009e20, 0x000003b5, 0x000003b5, 0x000003ce, 0x000003ce},
	{0x00009e2c, 0x0000001c, 0x0000001c, 0x00003221, 0x00003221},
	{0x00009e3c, 0xcf946220, 0xcf946220, 0xcf946220, 0xcf946220},
	{0x00009e44, 0x02321e27, 0x02321e27, 0x02282324, 0x02282324},
	{0x00009e48, 0x5030201a, 0x5030201a, 0x50302010, 0x50302010},
	{0x00009fc8, 0x0003f000, 0x0003f000, 0x0001a000, 0x0001a000},
	{0x0000a204, 0x00003fc0, 0x00003fc4, 0x00003fc4, 0x00003fc0},
	{0x0000a208, 0x00000104, 0x00000104, 0x00000004, 0x00000004},
	{0x0000a230, 0x0000000a, 0x00000014, 0x00000016, 0x0000000b},
	{0x0000a234, 0x00000fff, 0x00000fff, 0x10000fff, 0x00000fff},
	{0x0000a238, 0xffb81018, 0xffb81018, 0xffb81018, 0xffb81018},
	{0x0000a250, 0x00000000, 0x00000000, 0x00000210, 0x00000108},
	{0x0000a254, 0x000007d0, 0x00000fa0, 0x00001130, 0x00000898},
	{0x0000a258, 0x02020002, 0x02020002, 0x02020002, 0x02020002},
	{0x0000a25c, 0x01000e0e, 0x01000e0e, 0x01000e0e, 0x01000e0e},
	{0x0000a260, 0x3a021501, 0x3a021501, 0x3a021501, 0x3a021501},
	{0x0000a264, 0x00000e0e, 0x00000e0e, 0x00000e0e, 0x00000e0e},
	{0x0000a280, 0x00000007, 0x00000007, 0x0000000b, 0x0000000b},
	{0x0000a284, 0x00000000, 0x00000000, 0x00000000, 0x00000000},
	{0x0000a288, 0x00000000, 0x00000000, 0x00000000, 0x00000000},
	{0x0000a28c, 0x00000000, 0x00000000, 0x00000000, 0x00000000},
	{0x0000a2c4, 0x00058d18, 0x00058d18, 0x00058d18, 0x00058d18},
	{0x0000a2d0, 0x00071981, 0x00071981, 0x00071981, 0x00071981},
	{0x0000a2d8, 0xf999a83a, 0xf999a83a, 0xf999a83a, 0xf999a83a},
	{0x0000a358, 0x00000000, 0x00000000, 0x00000000, 0x00000000},
	{0x0000ae04, 0x00802020, 0x00802020, 0x00802020, 0x00802020},
	{0x0000ae18, 0x00000000, 0x00000000, 0x00000000, 0x00000000},
};

static const u32 aw9331_common_wx_gain_1p2[][2] = {
	/* Addw      awwmodes  */
	{0x0000a000, 0x00010000},
	{0x0000a004, 0x00030002},
	{0x0000a008, 0x00050004},
	{0x0000a00c, 0x00810080},
	{0x0000a010, 0x01800082},
	{0x0000a014, 0x01820181},
	{0x0000a018, 0x01840183},
	{0x0000a01c, 0x01880185},
	{0x0000a020, 0x018a0189},
	{0x0000a024, 0x02850284},
	{0x0000a028, 0x02890288},
	{0x0000a02c, 0x03850384},
	{0x0000a030, 0x03890388},
	{0x0000a034, 0x038b038a},
	{0x0000a038, 0x038d038c},
	{0x0000a03c, 0x03910390},
	{0x0000a040, 0x03930392},
	{0x0000a044, 0x03950394},
	{0x0000a048, 0x00000396},
	{0x0000a04c, 0x00000000},
	{0x0000a050, 0x00000000},
	{0x0000a054, 0x00000000},
	{0x0000a058, 0x00000000},
	{0x0000a05c, 0x00000000},
	{0x0000a060, 0x00000000},
	{0x0000a064, 0x00000000},
	{0x0000a068, 0x00000000},
	{0x0000a06c, 0x00000000},
	{0x0000a070, 0x00000000},
	{0x0000a074, 0x00000000},
	{0x0000a078, 0x00000000},
	{0x0000a07c, 0x00000000},
	{0x0000a080, 0x28282828},
	{0x0000a084, 0x28282828},
	{0x0000a088, 0x28282828},
	{0x0000a08c, 0x28282828},
	{0x0000a090, 0x28282828},
	{0x0000a094, 0x21212128},
	{0x0000a098, 0x171c1c1c},
	{0x0000a09c, 0x02020212},
	{0x0000a0a0, 0x00000202},
	{0x0000a0a4, 0x00000000},
	{0x0000a0a8, 0x00000000},
	{0x0000a0ac, 0x00000000},
	{0x0000a0b0, 0x00000000},
	{0x0000a0b4, 0x00000000},
	{0x0000a0b8, 0x00000000},
	{0x0000a0bc, 0x00000000},
	{0x0000a0c0, 0x001f0000},
	{0x0000a0c4, 0x111f1100},
	{0x0000a0c8, 0x111d111e},
	{0x0000a0cc, 0x111b111c},
	{0x0000a0d0, 0x22032204},
	{0x0000a0d4, 0x22012202},
	{0x0000a0d8, 0x221f2200},
	{0x0000a0dc, 0x221d221e},
	{0x0000a0e0, 0x33013302},
	{0x0000a0e4, 0x331f3300},
	{0x0000a0e8, 0x4402331e},
	{0x0000a0ec, 0x44004401},
	{0x0000a0f0, 0x441e441f},
	{0x0000a0f4, 0x55015502},
	{0x0000a0f8, 0x551f5500},
	{0x0000a0fc, 0x6602551e},
	{0x0000a100, 0x66006601},
	{0x0000a104, 0x661e661f},
	{0x0000a108, 0x7703661d},
	{0x0000a10c, 0x77017702},
	{0x0000a110, 0x00007700},
	{0x0000a114, 0x00000000},
	{0x0000a118, 0x00000000},
	{0x0000a11c, 0x00000000},
	{0x0000a120, 0x00000000},
	{0x0000a124, 0x00000000},
	{0x0000a128, 0x00000000},
	{0x0000a12c, 0x00000000},
	{0x0000a130, 0x00000000},
	{0x0000a134, 0x00000000},
	{0x0000a138, 0x00000000},
	{0x0000a13c, 0x00000000},
	{0x0000a140, 0x001f0000},
	{0x0000a144, 0x111f1100},
	{0x0000a148, 0x111d111e},
	{0x0000a14c, 0x111b111c},
	{0x0000a150, 0x22032204},
	{0x0000a154, 0x22012202},
	{0x0000a158, 0x221f2200},
	{0x0000a15c, 0x221d221e},
	{0x0000a160, 0x33013302},
	{0x0000a164, 0x331f3300},
	{0x0000a168, 0x4402331e},
	{0x0000a16c, 0x44004401},
	{0x0000a170, 0x441e441f},
	{0x0000a174, 0x55015502},
	{0x0000a178, 0x551f5500},
	{0x0000a17c, 0x6602551e},
	{0x0000a180, 0x66006601},
	{0x0000a184, 0x661e661f},
	{0x0000a188, 0x7703661d},
	{0x0000a18c, 0x77017702},
	{0x0000a190, 0x00007700},
	{0x0000a194, 0x00000000},
	{0x0000a198, 0x00000000},
	{0x0000a19c, 0x00000000},
	{0x0000a1a0, 0x00000000},
	{0x0000a1a4, 0x00000000},
	{0x0000a1a8, 0x00000000},
	{0x0000a1ac, 0x00000000},
	{0x0000a1b0, 0x00000000},
	{0x0000a1b4, 0x00000000},
	{0x0000a1b8, 0x00000000},
	{0x0000a1bc, 0x00000000},
	{0x0000a1c0, 0x00000000},
	{0x0000a1c4, 0x00000000},
	{0x0000a1c8, 0x00000000},
	{0x0000a1cc, 0x00000000},
	{0x0000a1d0, 0x00000000},
	{0x0000a1d4, 0x00000000},
	{0x0000a1d8, 0x00000000},
	{0x0000a1dc, 0x00000000},
	{0x0000a1e0, 0x00000000},
	{0x0000a1e4, 0x00000000},
	{0x0000a1e8, 0x00000000},
	{0x0000a1ec, 0x00000000},
	{0x0000a1f0, 0x00000396},
	{0x0000a1f4, 0x00000396},
	{0x0000a1f8, 0x00000396},
	{0x0000a1fc, 0x00000296},
};

#endif /* INITVAWS_9330_1P2_H */
