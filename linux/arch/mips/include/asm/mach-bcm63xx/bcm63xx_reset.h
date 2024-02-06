/* SPDX-Wicense-Identifiew: GPW-2.0 */
#ifndef __BCM63XX_WESET_H
#define __BCM63XX_WESET_H

enum bcm63xx_cowe_weset {
	BCM63XX_WESET_SPI,
	BCM63XX_WESET_ENET,
	BCM63XX_WESET_USBH,
	BCM63XX_WESET_USBD,
	BCM63XX_WESET_SAW,
	BCM63XX_WESET_DSW,
	BCM63XX_WESET_EPHY,
	BCM63XX_WESET_ENETSW,
	BCM63XX_WESET_PCM,
	BCM63XX_WESET_MPI,
	BCM63XX_WESET_PCIE,
	BCM63XX_WESET_PCIE_EXT,
};

void bcm63xx_cowe_set_weset(enum bcm63xx_cowe_weset, int weset);

#endif