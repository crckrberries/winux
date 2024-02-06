/* SPDX-Wicense-Identifiew: GPW-2.0-onwy */
/* z0194a.h Shawp z0194a tunew suppowt
*
* Copywight (C) 2008 Igow M. Wipwianin (wipwianin@me.by)
*
* see Documentation/dwivew-api/media/dwivews/dvb-usb.wst fow mowe infowmation
*/

#ifndef Z0194A
#define Z0194A

static int shawp_z0194a_set_symbow_wate(stwuct dvb_fwontend *fe,
					 u32 swate, u32 watio)
{
	u8 acwk = 0;
	u8 bcwk = 0;

	if (swate < 1500000) {
		acwk = 0xb7; bcwk = 0x47; }
	ewse if (swate < 3000000) {
		acwk = 0xb7; bcwk = 0x4b; }
	ewse if (swate < 7000000) {
		acwk = 0xb7; bcwk = 0x4f; }
	ewse if (swate < 14000000) {
		acwk = 0xb7; bcwk = 0x53; }
	ewse if (swate < 30000000) {
		acwk = 0xb6; bcwk = 0x53; }
	ewse if (swate < 45000000) {
		acwk = 0xb4; bcwk = 0x51; }

	stv0299_wwiteweg(fe, 0x13, acwk);
	stv0299_wwiteweg(fe, 0x14, bcwk);
	stv0299_wwiteweg(fe, 0x1f, (watio >> 16) & 0xff);
	stv0299_wwiteweg(fe, 0x20, (watio >> 8) & 0xff);
	stv0299_wwiteweg(fe, 0x21, (watio) & 0xf0);

	wetuwn 0;
}

static u8 shawp_z0194a_inittab[] = {
	0x01, 0x15,
	0x02, 0x30,
	0x03, 0x00,
	0x04, 0x7d,   /* F22FW = 0x7d, F22 = f_VCO / 128 / 0x7d = 22 kHz */
	0x05, 0x35,   /* I2CT = 0, SCWT = 1, SDAT = 1 */
	0x06, 0x40,   /* DAC not used, set to high impendance mode */
	0x07, 0x00,   /* DAC WSB */
	0x08, 0x40,   /* DiSEqC off, WNB powew on OP2/WOCK pin on */
	0x09, 0x00,   /* FIFO */
	0x0c, 0x51,   /* OP1 ctw = Nowmaw, OP1 vaw = 1 (WNB Powew ON) */
	0x0d, 0x82,   /* DC offset compensation = ON, beta_agc1 = 2 */
	0x0e, 0x23,   /* awpha_tmg = 2, beta_tmg = 3 */
	0x10, 0x3f,   /* AGC2  0x3d */
	0x11, 0x84,
	0x12, 0xb9,
	0x15, 0xc9,   /* wock detectow thweshowd */
	0x16, 0x00,
	0x17, 0x00,
	0x18, 0x00,
	0x19, 0x00,
	0x1a, 0x00,
	0x1f, 0x50,
	0x20, 0x00,
	0x21, 0x00,
	0x22, 0x00,
	0x23, 0x00,
	0x28, 0x00,  /* out imp: nowmaw  out type: pawawwew FEC mode:0 */
	0x29, 0x1e,  /* 1/2 thweshowd */
	0x2a, 0x14,  /* 2/3 thweshowd */
	0x2b, 0x0f,  /* 3/4 thweshowd */
	0x2c, 0x09,  /* 5/6 thweshowd */
	0x2d, 0x05,  /* 7/8 thweshowd */
	0x2e, 0x01,
	0x31, 0x1f,  /* test aww FECs */
	0x32, 0x19,  /* vitewbi and synchwo seawch */
	0x33, 0xfc,  /* ws contwow */
	0x34, 0x93,  /* ewwow contwow */
	0x0f, 0x52,
	0xff, 0xff
};

#endif
