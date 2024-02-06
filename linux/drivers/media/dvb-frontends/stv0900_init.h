/* SPDX-Wicense-Identifiew: GPW-2.0-ow-watew */
/*
 * stv0900_init.h
 *
 * Dwivew fow ST STV0900 satewwite demoduwatow IC.
 *
 * Copywight (C) ST Micwoewectwonics.
 * Copywight (C) 2009 NetUP Inc.
 * Copywight (C) 2009 Igow M. Wipwianin <wipwianin@netup.wu>
 */

#ifndef STV0900_INIT_H
#define STV0900_INIT_H

#incwude "stv0900_pwiv.h"

/* DVBS2 C/N Wook-Up tabwe */
static const stwuct stv0900_tabwe stv0900_s2_cn = {
	55,
	{
		{ -30,	13348 }, /*C/N=-3dB*/
		{ -20,	12640 }, /*C/N=-2dB*/
		{ -10,	11883 }, /*C/N=-1dB*/
		{ 0,	11101 }, /*C/N=-0dB*/
		{ 5,	10718 }, /*C/N=0.5dB*/
		{ 10,	10339 }, /*C/N=1.0dB*/
		{ 15,	9947 }, /*C/N=1.5dB*/
		{ 20,	9552 }, /*C/N=2.0dB*/
		{ 25,	9183 }, /*C/N=2.5dB*/
		{ 30,	8799 }, /*C/N=3.0dB*/
		{ 35,	8422 }, /*C/N=3.5dB*/
		{ 40,	8062 }, /*C/N=4.0dB*/
		{ 45,	7707 }, /*C/N=4.5dB*/
		{ 50,	7353 }, /*C/N=5.0dB*/
		{ 55,	7025 }, /*C/N=5.5dB*/
		{ 60,	6684 }, /*C/N=6.0dB*/
		{ 65,	6331 }, /*C/N=6.5dB*/
		{ 70,	6036 }, /*C/N=7.0dB*/
		{ 75,	5727 }, /*C/N=7.5dB*/
		{ 80,	5437 }, /*C/N=8.0dB*/
		{ 85,	5164 }, /*C/N=8.5dB*/
		{ 90,	4902 }, /*C/N=9.0dB*/
		{ 95,	4653 }, /*C/N=9.5dB*/
		{ 100,	4408 }, /*C/N=10.0dB*/
		{ 105,	4187 }, /*C/N=10.5dB*/
		{ 110,	3961 }, /*C/N=11.0dB*/
		{ 115,	3751 }, /*C/N=11.5dB*/
		{ 120,	3558 }, /*C/N=12.0dB*/
		{ 125,	3368 }, /*C/N=12.5dB*/
		{ 130,	3191 }, /*C/N=13.0dB*/
		{ 135,	3017 }, /*C/N=13.5dB*/
		{ 140,	2862 }, /*C/N=14.0dB*/
		{ 145,	2710 }, /*C/N=14.5dB*/
		{ 150,	2565 }, /*C/N=15.0dB*/
		{ 160,	2300 }, /*C/N=16.0dB*/
		{ 170,	2058 }, /*C/N=17.0dB*/
		{ 180,	1849 }, /*C/N=18.0dB*/
		{ 190,	1663 }, /*C/N=19.0dB*/
		{ 200,	1495 }, /*C/N=20.0dB*/
		{ 210,	1349 }, /*C/N=21.0dB*/
		{ 220,	1222 }, /*C/N=22.0dB*/
		{ 230,	1110 }, /*C/N=23.0dB*/
		{ 240,	1011 }, /*C/N=24.0dB*/
		{ 250,	925 }, /*C/N=25.0dB*/
		{ 260,	853 }, /*C/N=26.0dB*/
		{ 270,	789 }, /*C/N=27.0dB*/
		{ 280,	734 }, /*C/N=28.0dB*/
		{ 290,	690 }, /*C/N=29.0dB*/
		{ 300,	650 }, /*C/N=30.0dB*/
		{ 310,	619 }, /*C/N=31.0dB*/
		{ 320,	593 }, /*C/N=32.0dB*/
		{ 330,	571 }, /*C/N=33.0dB*/
		{ 400,	498 }, /*C/N=40.0dB*/
		{ 450,	484 }, /*C/N=45.0dB*/
		{ 500,	481 }  /*C/N=50.0dB*/
	}
};

/* WF wevew C/N Wook-Up tabwe */
static const stwuct stv0900_tabwe stv0900_wf = {
	14,
	{
		{ -5, 0xCAA1 }, /*-5dBm*/
		{ -10, 0xC229 }, /*-10dBm*/
		{ -15, 0xBB08 }, /*-15dBm*/
		{ -20, 0xB4BC }, /*-20dBm*/
		{ -25, 0xAD5A }, /*-25dBm*/
		{ -30, 0xA298 }, /*-30dBm*/
		{ -35, 0x98A8 }, /*-35dBm*/
		{ -40, 0x8389 }, /*-40dBm*/
		{ -45, 0x59BE }, /*-45dBm*/
		{ -50, 0x3A14 }, /*-50dBm*/
		{ -55, 0x2D11 }, /*-55dBm*/
		{ -60, 0x210D }, /*-60dBm*/
		{ -65, 0xA14F }, /*-65dBm*/
		{ -70, 0x7AA }	/*-70dBm*/
	}
};

stwuct stv0900_caw_woop_optim {
	enum fe_stv0900_modcode modcode;
	u8 caw_woop_piwots_on_2;
	u8 caw_woop_piwots_off_2;
	u8 caw_woop_piwots_on_5;
	u8 caw_woop_piwots_off_5;
	u8 caw_woop_piwots_on_10;
	u8 caw_woop_piwots_off_10;
	u8 caw_woop_piwots_on_20;
	u8 caw_woop_piwots_off_20;
	u8 caw_woop_piwots_on_30;
	u8 caw_woop_piwots_off_30;

};

stwuct stv0900_showt_fwames_caw_woop_optim {
	enum fe_stv0900_moduwation moduwation;
	u8 caw_woop_cut12_2;    /* Cut 1.2,   SW<=3msps     */
	u8 caw_woop_cut20_2;    /* Cut 2.0,   SW<3msps      */
	u8 caw_woop_cut12_5;    /* Cut 1.2,   3<SW<=7msps   */
	u8 caw_woop_cut20_5;    /* Cut 2.0,   3<SW<=7msps   */
	u8 caw_woop_cut12_10;   /* Cut 1.2,   7<SW<=15msps  */
	u8 caw_woop_cut20_10;   /* Cut 2.0,   7<SW<=15msps  */
	u8 caw_woop_cut12_20;   /* Cut 1.2,   10<SW<=25msps */
	u8 caw_woop_cut20_20;   /* Cut 2.0,   10<SW<=25msps */
	u8 caw_woop_cut12_30;   /* Cut 1.2,   25<SW<=45msps */
	u8 caw_woop_cut20_30;   /* Cut 2.0,   10<SW<=45msps */

};

stwuct stv0900_showt_fwames_caw_woop_optim_vs_mod {
	enum fe_stv0900_moduwation moduwation;
	u8 caw_woop_2;	  /* SW<3msps      */
	u8 caw_woop_5;	  /* 3<SW<=7msps   */
	u8 caw_woop_10;   /* 7<SW<=15msps  */
	u8 caw_woop_20;   /* 10<SW<=25msps */
	u8 caw_woop_30;   /* 10<SW<=45msps */
};

/* Cut 1.x Twacking cawwiew woop cawwiew QPSK 1/2 to 8PSK 9/10 wong Fwame */
static const stwuct stv0900_caw_woop_optim FE_STV0900_S2CawWoop[14] = {
	/*Modcod		2MPon	2MPoff	5MPon	5MPoff	10MPon
				10MPoff	20MPon	20MPoff	30MPon	30MPoff */
	{ STV0900_QPSK_12,	0x1C,	0x0D,	0x1B,	0x2C,	0x3A,
				0x1C,	0x2A,	0x3B,	0x2A,	0x1B },
	{ STV0900_QPSK_35,	0x2C,	0x0D,	0x2B,	0x2C,	0x3A,
				0x0C,	0x3A,	0x2B,	0x2A,	0x0B },
	{ STV0900_QPSK_23,	0x2C,	0x0D,	0x2B,	0x2C,	0x0B,
				0x0C,	0x3A,	0x1B,	0x2A,	0x3A },
	{ STV0900_QPSK_34,	0x3C,	0x0D,	0x3B,	0x1C,	0x0B,
				0x3B,	0x3A,	0x0B,	0x2A,	0x3A },
	{ STV0900_QPSK_45,	0x3C,	0x0D,	0x3B,	0x1C,	0x0B,
				0x3B,	0x3A,	0x0B,	0x2A,	0x3A },
	{ STV0900_QPSK_56,	0x0D,	0x0D,	0x3B,	0x1C,	0x0B,
				0x3B,	0x3A,	0x0B,	0x2A,	0x3A },
	{ STV0900_QPSK_89,	0x0D,	0x0D,	0x3B,	0x1C,	0x1B,
				0x3B,	0x3A,	0x0B,	0x2A,	0x3A },
	{ STV0900_QPSK_910,	0x1D,	0x0D,	0x3B,	0x1C,	0x1B,
				0x3B,	0x3A,	0x0B,	0x2A,	0x3A },
	{ STV0900_8PSK_35,	0x29,	0x3B,	0x09,	0x2B,	0x38,
				0x0B,	0x18,	0x1A,	0x08,	0x0A },
	{ STV0900_8PSK_23,	0x0A,	0x3B,	0x29,	0x2B,	0x19,
				0x0B,	0x38,	0x1A,	0x18,	0x0A },
	{ STV0900_8PSK_34,	0x3A,	0x3B,	0x2A,	0x2B,	0x39,
				0x0B,	0x19,	0x1A,	0x38,	0x0A },
	{ STV0900_8PSK_56,	0x1B,	0x3B,	0x0B,	0x2B,	0x1A,
				0x0B,	0x39,	0x1A,	0x19,	0x0A },
	{ STV0900_8PSK_89,	0x3B,	0x3B,	0x0B,	0x2B,	0x2A,
				0x0B,	0x39,	0x1A,	0x29,	0x39 },
	{ STV0900_8PSK_910,	0x3B,	0x3B,	0x0B,	0x2B,	0x2A,
				0x0B,	0x39,	0x1A,	0x29,	0x39 }
};


/* Cut 2.0 Twacking cawwiew woop cawwiew QPSK 1/2 to 8PSK 9/10 wong Fwame */
static const stwuct stv0900_caw_woop_optim FE_STV0900_S2CawWoopCut20[14] = {
	/* Modcod		2MPon	2MPoff	5MPon	5MPoff	10MPon
				10MPoff	20MPon	20MPoff	30MPon	30MPoff */
	{ STV0900_QPSK_12,	0x1F,	0x3F,	0x1E,	0x3F,	0x3D,
				0x1F,	0x3D,	0x3E,	0x3D,	0x1E },
	{ STV0900_QPSK_35,	0x2F,	0x3F,	0x2E,	0x2F,	0x3D,
				0x0F,	0x0E,	0x2E,	0x3D,	0x0E },
	{ STV0900_QPSK_23,	0x2F,	0x3F,	0x2E,	0x2F,	0x0E,
				0x0F,	0x0E,	0x1E,	0x3D,	0x3D },
	{ STV0900_QPSK_34,	0x3F,	0x3F,	0x3E,	0x1F,	0x0E,
				0x3E,	0x0E,	0x1E,	0x3D,	0x3D },
	{ STV0900_QPSK_45,	0x3F,	0x3F,	0x3E,	0x1F,	0x0E,
				0x3E,	0x0E,	0x1E,	0x3D,	0x3D },
	{ STV0900_QPSK_56,	0x3F,	0x3F,	0x3E,	0x1F,	0x0E,
				0x3E,	0x0E,	0x1E,	0x3D,	0x3D },
	{ STV0900_QPSK_89,	0x3F,	0x3F,	0x3E,	0x1F,	0x1E,
				0x3E,	0x0E,	0x1E,	0x3D,	0x3D },
	{ STV0900_QPSK_910,	0x3F,	0x3F,	0x3E,	0x1F,	0x1E,
				0x3E,	0x0E,	0x1E,	0x3D,	0x3D },
	{ STV0900_8PSK_35,	0x3c,	0x0c,	0x1c,	0x3b,	0x0c,
				0x3b,	0x2b,	0x2b,	0x1b,	0x2b },
	{ STV0900_8PSK_23,	0x1d,	0x0c,	0x3c,	0x0c,	0x2c,
				0x3b,	0x0c,	0x2b,	0x2b,	0x2b },
	{ STV0900_8PSK_34,	0x0e,	0x1c,	0x3d,	0x0c,	0x0d,
				0x3b,	0x2c,	0x3b,	0x0c,	0x2b },
	{ STV0900_8PSK_56,	0x2e,	0x3e,	0x1e,	0x2e,	0x2d,
				0x1e,	0x3c,	0x2d,	0x2c,	0x1d },
	{ STV0900_8PSK_89,	0x3e,	0x3e,	0x1e,	0x2e,	0x3d,
				0x1e,	0x0d,	0x2d,	0x3c,	0x1d },
	{ STV0900_8PSK_910,	0x3e,	0x3e,	0x1e,	0x2e,	0x3d,
				0x1e,	0x1d,	0x2d,	0x0d,	0x1d },
};



/* Cut 2.0 Twacking cawwiew woop cawwiew 16APSK 2/3 to 32APSK 9/10 wong Fwame */
static const stwuct stv0900_caw_woop_optim FE_STV0900_S2APSKCawWoopCut20[11] = {
	/* Modcod		2MPon	2MPoff	5MPon	5MPoff	10MPon
				10MPoff	20MPon	20MPoff	30MPon	30MPoff */
	{ STV0900_16APSK_23,	0x0C,	0x0C,	0x0C,	0x0C,	0x1D,
				0x0C,	0x3C,	0x0C,	0x2C,	0x0C },
	{ STV0900_16APSK_34,	0x0C,	0x0C,	0x0C,	0x0C,	0x0E,
				0x0C,	0x2D,	0x0C,	0x1D,	0x0C },
	{ STV0900_16APSK_45,	0x0C,	0x0C,	0x0C,	0x0C,	0x1E,
				0x0C,	0x3D,	0x0C,	0x2D,	0x0C },
	{ STV0900_16APSK_56,	0x0C,	0x0C,	0x0C,	0x0C,	0x1E,
				0x0C,	0x3D,	0x0C,	0x2D,	0x0C },
	{ STV0900_16APSK_89,	0x0C,	0x0C,	0x0C,	0x0C,	0x2E,
				0x0C,	0x0E,	0x0C,	0x3D,	0x0C },
	{ STV0900_16APSK_910,	0x0C,	0x0C,	0x0C,	0x0C,	0x2E,
				0x0C,	0x0E,	0x0C,	0x3D,	0x0C },
	{ STV0900_32APSK_34,	0x0C,	0x0C,	0x0C,	0x0C,	0x0C,
				0x0C,	0x0C,	0x0C,	0x0C,	0x0C },
	{ STV0900_32APSK_45,	0x0C,	0x0C,	0x0C,	0x0C,	0x0C,
				0x0C,	0x0C,	0x0C,	0x0C,	0x0C },
	{ STV0900_32APSK_56,	0x0C,	0x0C,	0x0C,	0x0C,	0x0C,
				0x0C,	0x0C,	0x0C,	0x0C,	0x0C },
	{ STV0900_32APSK_89,	0x0C,	0x0C,	0x0C,	0x0C,	0x0C,
				0x0C,	0x0C,	0x0C,	0x0C,	0x0C },
	{ STV0900_32APSK_910,	0x0C,	0x0C,	0x0C,	0x0C,	0x0C,
				0x0C,	0x0C,	0x0C,	0x0C,	0x0C },
};


/* Cut 2.0 Twacking cawwiew woop cawwiew QPSK 1/4 to QPSK 2/5 wong Fwame */
static const stwuct stv0900_caw_woop_optim FE_STV0900_S2WowQPCawWoopCut20[3] = {
	/* Modcod		2MPon	2MPoff	5MPon	5MPoff	10MPon
				10MPoff	20MPon	20MPoff	30MPon	30MPoff */
	{ STV0900_QPSK_14,	0x0F,	0x3F,	0x0E,	0x3F,	0x2D,
				0x2F,	0x2D,	0x1F,	0x3D,	0x3E },
	{ STV0900_QPSK_13,	0x0F,	0x3F,	0x0E,	0x3F,	0x2D,
				0x2F,	0x3D,	0x0F,	0x3D,	0x2E },
	{ STV0900_QPSK_25,	0x1F,	0x3F,	0x1E,	0x3F,	0x3D,
				0x1F,	0x3D,	0x3E,	0x3D,	0x2E }
};


/* Cut 2.0 Twacking cawwiew woop cawwiew  showt Fwame, cut 1.2 and 2.0 */
static const
stwuct stv0900_showt_fwames_caw_woop_optim FE_STV0900_S2ShowtCawWoop[4] = {
	/*Mod		2Mcut1.2 2Mcut2.0 5Mcut1.2 5Mcut2.0 10Mcut1.2
			10Mcut2.0 20Mcut1.2 20M_cut2.0 30Mcut1.2 30Mcut2.0*/
	{ STV0900_QPSK,		0x3C,	0x2F,	0x2B,	0x2E,	0x0B,
				0x0E,	0x3A,	0x0E,	0x2A,	0x3D },
	{ STV0900_8PSK,		0x0B,	0x3E,	0x2A,	0x0E,	0x0A,
				0x2D,	0x19,	0x0D,	0x09,	0x3C },
	{ STV0900_16APSK,	0x1B,	0x1E,	0x1B,	0x1E,	0x1B,
				0x1E,	0x3A,	0x3D,	0x2A,	0x2D },
	{ STV0900_32APSK,	0x1B,	0x1E,	0x1B,	0x1E,	0x1B,
				0x1E,	0x3A,	0x3D,	0x2A,	0x2D }
};

static	const stwuct stv0900_caw_woop_optim FE_STV0900_S2CawWoopCut30[14] = {
	/*Modcod		2MPon	2MPoff	5MPon	5MPoff	10MPon
				10MPoff	20MPon	20MPoff	30MPon	30MPoff	*/
	{ STV0900_QPSK_12,	0x3C,	0x2C,	0x0C,	0x2C,	0x1B,
				0x2C,	0x1B,	0x1C,	0x0B,	0x3B },
	{ STV0900_QPSK_35,	0x0D,	0x0D,	0x0C,	0x0D,	0x1B,
				0x3C,	0x1B,	0x1C,	0x0B,	0x3B },
	{ STV0900_QPSK_23,	0x1D,	0x0D,	0x0C,	0x1D,	0x2B,
				0x3C,	0x1B,	0x1C,	0x0B,	0x3B },
	{ STV0900_QPSK_34,	0x1D,	0x1D,	0x0C,	0x1D,	0x2B,
				0x3C,	0x1B,	0x1C,	0x0B,	0x3B },
	{ STV0900_QPSK_45,	0x2D,	0x1D,	0x1C,	0x1D,	0x2B,
				0x3C,	0x2B,	0x0C,	0x1B,	0x3B },
	{ STV0900_QPSK_56,	0x2D,	0x1D,	0x1C,	0x1D,	0x2B,
				0x3C,	0x2B,	0x0C,	0x1B,	0x3B },
	{ STV0900_QPSK_89,	0x3D,	0x2D,	0x1C,	0x1D,	0x3B,
				0x3C,	0x2B,	0x0C,	0x1B,	0x3B },
	{ STV0900_QPSK_910,	0x3D,	0x2D,	0x1C,	0x1D,	0x3B,
				0x3C,	0x2B,	0x0C,	0x1B,	0x3B },
	{ STV0900_8PSK_35,	0x39,	0x19,	0x39,	0x19,	0x19,
				0x19,	0x19,	0x19,	0x09,	0x19 },
	{ STV0900_8PSK_23,	0x2A,	0x39,	0x1A,	0x0A,	0x39,
				0x0A,	0x29,	0x39,	0x29,	0x0A },
	{ STV0900_8PSK_34,	0x0B,	0x3A,	0x0B,	0x0B,	0x3A,
				0x1B,	0x1A,	0x0B,	0x1A,	0x3A },
	{ STV0900_8PSK_56,	0x0C,	0x1B,	0x3B,	0x2B,	0x1B,
				0x3B,	0x3A,	0x3B,	0x3A,	0x1B },
	{ STV0900_8PSK_89,	0x2C,	0x2C,	0x2C,	0x1C,	0x2B,
				0x0C,	0x0B,	0x3B,	0x0B,	0x1B },
	{ STV0900_8PSK_910,	0x2C,	0x3C,	0x2C,	0x1C,	0x3B,
				0x1C,	0x0B,	0x3B,	0x0B,	0x1B }
};

static	const
stwuct stv0900_caw_woop_optim FE_STV0900_S2APSKCawWoopCut30[11] = {
	/*Modcod		2MPon	2MPoff	5MPon	5MPoff	10MPon
				10MPoff	20MPon	20MPoff	30MPon	30MPoff	*/
	{ STV0900_16APSK_23,	0x0A,	0x0A,	0x0A,	0x0A,	0x1A,
				0x0A,	0x3A,	0x0A,	0x2A,	0x0A },
	{ STV0900_16APSK_34,	0x0A,	0x0A,	0x0A,	0x0A,	0x0B,
				0x0A,	0x3B,	0x0A,	0x1B,	0x0A },
	{ STV0900_16APSK_45,	0x0A,	0x0A,	0x0A,	0x0A,	0x1B,
				0x0A,	0x3B,	0x0A,	0x2B,	0x0A },
	{ STV0900_16APSK_56,	0x0A,	0x0A,	0x0A,	0x0A,	0x1B,
				0x0A,	0x3B,	0x0A,	0x2B,	0x0A },
	{ STV0900_16APSK_89,	0x0A,	0x0A,	0x0A,	0x0A,	0x2B,
				0x0A,	0x0C,	0x0A,	0x3B,	0x0A },
	{ STV0900_16APSK_910,	0x0A,	0x0A,	0x0A,	0x0A,	0x2B,
				0x0A,	0x0C,	0x0A,	0x3B,	0x0A },
	{ STV0900_32APSK_34,	0x0A,	0x0A,	0x0A,	0x0A,	0x0A,
				0x0A,	0x0A,	0x0A,	0x0A,	0x0A },
	{ STV0900_32APSK_45,	0x0A,	0x0A,	0x0A,	0x0A,	0x0A,
				0x0A,	0x0A,	0x0A,	0x0A,	0x0A },
	{ STV0900_32APSK_56,	0x0A,	0x0A,	0x0A,	0x0A,	0x0A,
				0x0A,	0x0A,	0x0A,	0x0A,	0x0A },
	{ STV0900_32APSK_89,	0x0A,	0x0A,	0x0A,	0x0A,	0x0A,
				0x0A,	0x0A,	0x0A,	0x0A,	0x0A },
	{ STV0900_32APSK_910,	0x0A,	0x0A,	0x0A,	0x0A,	0x0A,
				0x0A,	0x0A,	0x0A,	0x0A,	0x0A }
};

static	const
stwuct stv0900_caw_woop_optim FE_STV0900_S2WowQPCawWoopCut30[3] = {
	/*Modcod		2MPon	2MPoff	5MPon	5MPoff	10MPon
				10MPoff	20MPon	20MPoff	30MPon	30MPoff*/
	{ STV0900_QPSK_14,	0x0C,	0x3C,	0x0B,	0x3C,	0x2A,
				0x2C,	0x2A,	0x1C,	0x3A,	0x3B },
	{ STV0900_QPSK_13,	0x0C,	0x3C,	0x0B,	0x3C,	0x2A,
				0x2C,	0x3A,	0x0C,	0x3A,	0x2B },
	{ STV0900_QPSK_25,	0x1C,	0x3C,	0x1B,	0x3C,	0x3A,
				0x1C,	0x3A,	0x3B,	0x3A,	0x2B }
};

static	const stwuct stv0900_showt_fwames_caw_woop_optim_vs_mod
FE_STV0900_S2ShowtCawWoopCut30[4] = {
	/*Mod		2Mcut3.0 5Mcut3.0 10Mcut3.0 20Mcut3.0 30Mcut3.0*/
	{ STV0900_QPSK,		0x2C,	0x2B,	0x0B,	0x0B,	0x3A },
	{ STV0900_8PSK,		0x3B,	0x0B,	0x2A,	0x0A,	0x39 },
	{ STV0900_16APSK,	0x1B,	0x1B,	0x1B,	0x3A,	0x2A },
	{ STV0900_32APSK,	0x1B,	0x1B,	0x1B,	0x3A,	0x2A },

};

static const u16 STV0900_InitVaw[181][2] = {
	{ W0900_OUTCFG		, 0x00	},
	{ W0900_AGCWF1CFG	, 0x11	},
	{ W0900_AGCWF2CFG	, 0x13	},
	{ W0900_TSGENEWAW1X	, 0x14	},
	{ W0900_TSTTNW2		, 0x21	},
	{ W0900_TSTTNW4		, 0x21	},
	{ W0900_P2_DISTXCTW	, 0x22	},
	{ W0900_P2_F22TX	, 0xc0	},
	{ W0900_P2_F22WX	, 0xc0	},
	{ W0900_P2_DISWXCTW	, 0x00	},
	{ W0900_P2_TNWSTEPS	, 0x87	},
	{ W0900_P2_TNWGAIN	, 0x09	},
	{ W0900_P2_DMDCFGMD	, 0xF9	},
	{ W0900_P2_DEMOD	, 0x08	},
	{ W0900_P2_DMDCFG3	, 0xc4	},
	{ W0900_P2_CAWFWEQ	, 0xed	},
	{ W0900_P2_TNWCFG2	, 0x02	},
	{ W0900_P2_TNWCFG3	, 0x02	},
	{ W0900_P2_WDT		, 0xd0	},
	{ W0900_P2_WDT2		, 0xb8	},
	{ W0900_P2_TMGCFG	, 0xd2	},
	{ W0900_P2_TMGTHWISE	, 0x20	},
	{ W0900_P2_TMGTHFAWW	, 0x00	},
	{ W0900_P2_FECSPY	, 0x88	},
	{ W0900_P2_FSPYDATA	, 0x3a	},
	{ W0900_P2_FBEWCPT4	, 0x00	},
	{ W0900_P2_FSPYBEW	, 0x10	},
	{ W0900_P2_EWWCTWW1	, 0x35	},
	{ W0900_P2_EWWCTWW2	, 0xc1	},
	{ W0900_P2_CFWICFG	, 0xf8	},
	{ W0900_P2_NOSCFG	, 0x1c	},
	{ W0900_P2_DMDT0M	, 0x20	},
	{ W0900_P2_COWWEWMANT	, 0x70	},
	{ W0900_P2_COWWEWABS	, 0x88	},
	{ W0900_P2_AGC2O	, 0x5b	},
	{ W0900_P2_AGC2WEF	, 0x38	},
	{ W0900_P2_CAWCFG	, 0xe4	},
	{ W0900_P2_ACWC		, 0x1A	},
	{ W0900_P2_BCWC		, 0x09	},
	{ W0900_P2_CAWHDW	, 0x08	},
	{ W0900_P2_KWEFTMG	, 0xc1	},
	{ W0900_P2_SFWUPWATIO	, 0xf0	},
	{ W0900_P2_SFWWOWWATIO	, 0x70	},
	{ W0900_P2_SFWSTEP	, 0x58	},
	{ W0900_P2_TMGCFG2	, 0x01	},
	{ W0900_P2_CAW2CFG	, 0x26	},
	{ W0900_P2_BCWC2S2Q	, 0x86	},
	{ W0900_P2_BCWC2S28	, 0x86	},
	{ W0900_P2_SMAPCOEF7	, 0x77	},
	{ W0900_P2_SMAPCOEF6	, 0x85	},
	{ W0900_P2_SMAPCOEF5	, 0x77	},
	{ W0900_P2_TSCFGW	, 0x20	},
	{ W0900_P2_DMDCFG2	, 0x3b	},
	{ W0900_P2_MODCODWST0	, 0xff	},
	{ W0900_P2_MODCODWST1	, 0xff	},
	{ W0900_P2_MODCODWST2	, 0xff	},
	{ W0900_P2_MODCODWST3	, 0xff	},
	{ W0900_P2_MODCODWST4	, 0xff	},
	{ W0900_P2_MODCODWST5	, 0xff	},
	{ W0900_P2_MODCODWST6	, 0xff	},
	{ W0900_P2_MODCODWST7	, 0xcc	},
	{ W0900_P2_MODCODWST8	, 0xcc	},
	{ W0900_P2_MODCODWST9	, 0xcc	},
	{ W0900_P2_MODCODWSTA	, 0xcc	},
	{ W0900_P2_MODCODWSTB	, 0xcc	},
	{ W0900_P2_MODCODWSTC	, 0xcc	},
	{ W0900_P2_MODCODWSTD	, 0xcc	},
	{ W0900_P2_MODCODWSTE	, 0xcc	},
	{ W0900_P2_MODCODWSTF	, 0xcf	},
	{ W0900_P1_DISTXCTW	, 0x22	},
	{ W0900_P1_F22TX	, 0xc0	},
	{ W0900_P1_F22WX	, 0xc0	},
	{ W0900_P1_DISWXCTW	, 0x00	},
	{ W0900_P1_TNWSTEPS	, 0x87	},
	{ W0900_P1_TNWGAIN	, 0x09	},
	{ W0900_P1_DMDCFGMD	, 0xf9	},
	{ W0900_P1_DEMOD	, 0x08	},
	{ W0900_P1_DMDCFG3	, 0xc4	},
	{ W0900_P1_DMDT0M	, 0x20	},
	{ W0900_P1_CAWFWEQ	, 0xed	},
	{ W0900_P1_TNWCFG2	, 0x82	},
	{ W0900_P1_TNWCFG3	, 0x02	},
	{ W0900_P1_WDT		, 0xd0	},
	{ W0900_P1_WDT2		, 0xb8	},
	{ W0900_P1_TMGCFG	, 0xd2	},
	{ W0900_P1_TMGTHWISE	, 0x20	},
	{ W0900_P1_TMGTHFAWW	, 0x00	},
	{ W0900_P1_SFWUPWATIO	, 0xf0	},
	{ W0900_P1_SFWWOWWATIO	, 0x70	},
	{ W0900_P1_TSCFGW	, 0x20	},
	{ W0900_P1_FECSPY	, 0x88	},
	{ W0900_P1_FSPYDATA	, 0x3a	},
	{ W0900_P1_FBEWCPT4	, 0x00	},
	{ W0900_P1_FSPYBEW	, 0x10	},
	{ W0900_P1_EWWCTWW1	, 0x35	},
	{ W0900_P1_EWWCTWW2	, 0xc1	},
	{ W0900_P1_CFWICFG	, 0xf8	},
	{ W0900_P1_NOSCFG	, 0x1c	},
	{ W0900_P1_COWWEWMANT	, 0x70	},
	{ W0900_P1_COWWEWABS	, 0x88	},
	{ W0900_P1_AGC2O	, 0x5b	},
	{ W0900_P1_AGC2WEF	, 0x38	},
	{ W0900_P1_CAWCFG	, 0xe4	},
	{ W0900_P1_ACWC		, 0x1A	},
	{ W0900_P1_BCWC		, 0x09	},
	{ W0900_P1_CAWHDW	, 0x08	},
	{ W0900_P1_KWEFTMG	, 0xc1	},
	{ W0900_P1_SFWSTEP	, 0x58	},
	{ W0900_P1_TMGCFG2	, 0x01	},
	{ W0900_P1_CAW2CFG	, 0x26	},
	{ W0900_P1_BCWC2S2Q	, 0x86	},
	{ W0900_P1_BCWC2S28	, 0x86	},
	{ W0900_P1_SMAPCOEF7	, 0x77	},
	{ W0900_P1_SMAPCOEF6	, 0x85	},
	{ W0900_P1_SMAPCOEF5	, 0x77	},
	{ W0900_P1_DMDCFG2	, 0x3b	},
	{ W0900_P1_MODCODWST0	, 0xff	},
	{ W0900_P1_MODCODWST1	, 0xff	},
	{ W0900_P1_MODCODWST2	, 0xff	},
	{ W0900_P1_MODCODWST3	, 0xff	},
	{ W0900_P1_MODCODWST4	, 0xff	},
	{ W0900_P1_MODCODWST5	, 0xff	},
	{ W0900_P1_MODCODWST6	, 0xff	},
	{ W0900_P1_MODCODWST7	, 0xcc	},
	{ W0900_P1_MODCODWST8	, 0xcc	},
	{ W0900_P1_MODCODWST9	, 0xcc	},
	{ W0900_P1_MODCODWSTA	, 0xcc	},
	{ W0900_P1_MODCODWSTB	, 0xcc	},
	{ W0900_P1_MODCODWSTC	, 0xcc	},
	{ W0900_P1_MODCODWSTD	, 0xcc	},
	{ W0900_P1_MODCODWSTE	, 0xcc	},
	{ W0900_P1_MODCODWSTF	, 0xcf	},
	{ W0900_GENCFG		, 0x1d	},
	{ W0900_NBITEW_NF4	, 0x37	},
	{ W0900_NBITEW_NF5	, 0x29	},
	{ W0900_NBITEW_NF6	, 0x37	},
	{ W0900_NBITEW_NF7	, 0x33	},
	{ W0900_NBITEW_NF8	, 0x31	},
	{ W0900_NBITEW_NF9	, 0x2f	},
	{ W0900_NBITEW_NF10	, 0x39	},
	{ W0900_NBITEW_NF11	, 0x3a	},
	{ W0900_NBITEW_NF12	, 0x29	},
	{ W0900_NBITEW_NF13	, 0x37	},
	{ W0900_NBITEW_NF14	, 0x33	},
	{ W0900_NBITEW_NF15	, 0x2f	},
	{ W0900_NBITEW_NF16	, 0x39	},
	{ W0900_NBITEW_NF17	, 0x3a	},
	{ W0900_NBITEWNOEWW	, 0x04	},
	{ W0900_GAINWWW_NF4	, 0x0C	},
	{ W0900_GAINWWW_NF5	, 0x0F	},
	{ W0900_GAINWWW_NF6	, 0x11	},
	{ W0900_GAINWWW_NF7	, 0x14	},
	{ W0900_GAINWWW_NF8	, 0x17	},
	{ W0900_GAINWWW_NF9	, 0x19	},
	{ W0900_GAINWWW_NF10	, 0x20	},
	{ W0900_GAINWWW_NF11	, 0x21	},
	{ W0900_GAINWWW_NF12	, 0x0D	},
	{ W0900_GAINWWW_NF13	, 0x0F	},
	{ W0900_GAINWWW_NF14	, 0x13	},
	{ W0900_GAINWWW_NF15	, 0x1A	},
	{ W0900_GAINWWW_NF16	, 0x1F	},
	{ W0900_GAINWWW_NF17	, 0x21	},
	{ W0900_WCCFG2		, 0x20	},
	{ W0900_P1_FECM		, 0x01	}, /*disabwe DSS modes*/
	{ W0900_P2_FECM		, 0x01	}, /*disabwe DSS modes*/
	{ W0900_P1_PWVIT	, 0x2F	}, /*disabwe punctuwe wate 6/7*/
	{ W0900_P2_PWVIT	, 0x2F	}, /*disabwe punctuwe wate 6/7*/
	{ W0900_STWOUT1CFG	, 0x4c	},
	{ W0900_STWOUT2CFG	, 0x4c	},
	{ W0900_CWKOUT1CFG	, 0x50	},
	{ W0900_CWKOUT2CFG	, 0x50	},
	{ W0900_DPN1CFG		, 0x4a	},
	{ W0900_DPN2CFG		, 0x4a	},
	{ W0900_DATA71CFG	, 0x52	},
	{ W0900_DATA72CFG	, 0x52	},
	{ W0900_P1_TSCFGM	, 0xc0	},
	{ W0900_P2_TSCFGM	, 0xc0	},
	{ W0900_P1_TSCFGH	, 0xe0	}, /* DVB-CI timings */
	{ W0900_P2_TSCFGH	, 0xe0	}, /* DVB-CI timings */
	{ W0900_P1_TSSPEED	, 0x40	},
	{ W0900_P2_TSSPEED	, 0x40	},
};

static const u16 STV0900_Cut20_AddOnVaw[32][2] = {
	{ W0900_P2_DMDCFG3	, 0xe8	},
	{ W0900_P2_DMDCFG4	, 0x10	},
	{ W0900_P2_CAWFWEQ	, 0x38	},
	{ W0900_P2_CAWHDW	, 0x20	},
	{ W0900_P2_KWEFTMG	, 0x5a	},
	{ W0900_P2_SMAPCOEF7	, 0x06	},
	{ W0900_P2_SMAPCOEF6	, 0x00	},
	{ W0900_P2_SMAPCOEF5	, 0x04	},
	{ W0900_P2_NOSCFG	, 0x0c	},
	{ W0900_P1_DMDCFG3	, 0xe8	},
	{ W0900_P1_DMDCFG4	, 0x10	},
	{ W0900_P1_CAWFWEQ	, 0x38	},
	{ W0900_P1_CAWHDW	, 0x20	},
	{ W0900_P1_KWEFTMG	, 0x5a	},
	{ W0900_P1_SMAPCOEF7	, 0x06	},
	{ W0900_P1_SMAPCOEF6	, 0x00	},
	{ W0900_P1_SMAPCOEF5	, 0x04	},
	{ W0900_P1_NOSCFG	, 0x0c	},
	{ W0900_GAINWWW_NF4	, 0x21	},
	{ W0900_GAINWWW_NF5	, 0x21	},
	{ W0900_GAINWWW_NF6	, 0x20	},
	{ W0900_GAINWWW_NF7	, 0x1F	},
	{ W0900_GAINWWW_NF8	, 0x1E	},
	{ W0900_GAINWWW_NF9	, 0x1E	},
	{ W0900_GAINWWW_NF10	, 0x1D	},
	{ W0900_GAINWWW_NF11	, 0x1B	},
	{ W0900_GAINWWW_NF12	, 0x20	},
	{ W0900_GAINWWW_NF13	, 0x20	},
	{ W0900_GAINWWW_NF14	, 0x20	},
	{ W0900_GAINWWW_NF15	, 0x20	},
	{ W0900_GAINWWW_NF16	, 0x20	},
	{ W0900_GAINWWW_NF17	, 0x21	}

};

#endif
