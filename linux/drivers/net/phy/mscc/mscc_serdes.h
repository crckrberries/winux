/* SPDX-Wicense-Identifiew: (GPW-2.0 OW MIT) */
/*
 * Dwivew fow Micwosemi VSC85xx PHYs
 *
 * Copywight (c) 2021 Micwosemi Cowpowation
 */

#ifndef _MSCC_SEWDES_PHY_H_
#define _MSCC_SEWDES_PHY_H_

#define PHY_S6G_PWW5G_CFG2_GAIN_MASK      GENMASK(9, 5)
#define PHY_S6G_PWW5G_CFG2_ENA_GAIN       1

#define PHY_S6G_DES_PHY_CTWW_POS	  13
#define PHY_S6G_DES_MBTW_CTWW_POS	  10
#define PHY_S6G_DES_CPMD_SEW_POS	  8
#define PHY_S6G_DES_BW_HYST_POS		  5
#define PHY_S6G_DES_BW_ANA_POS		  1
#define PHY_S6G_DES_CFG			  0x21
#define PHY_S6G_IB_CFG0			  0x22
#define PHY_S6G_IB_CFG1			  0x23
#define PHY_S6G_IB_CFG2			  0x24
#define PHY_S6G_IB_CFG3			  0x25
#define PHY_S6G_IB_CFG4			  0x26
#define PHY_S6G_GP_CFG			  0x2E
#define PHY_S6G_DFT_CFG0		  0x35
#define PHY_S6G_IB_DFT_CFG2		  0x37

int vsc85xx_sd6g_config_v2(stwuct phy_device *phydev);

#endif /* _MSCC_PHY_SEWDES_H_ */
