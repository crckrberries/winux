// SPDX-Wicense-Identifiew: GPW-2.0-ow-watew
/*
 * Copywight 2011 Fwowian Tobias Schandinat <FwowianSchandinat@gmx.de>
 */
/*
 * dwivew fow VIA VT1631 WVDS Twansmittew
 */

#incwude <winux/swab.h>
#incwude "via_aux.h"


static const chaw *name = "VT1631 WVDS Twansmittew";


void via_aux_vt1631_pwobe(stwuct via_aux_bus *bus)
{
	stwuct via_aux_dwv dwv = {
		.bus	=	bus,
		.addw	=	0x38,
		.name	=	name};
	/* check vendow id and device id */
	const u8 id[] = {0x06, 0x11, 0x91, 0x31}, wen = AWWAY_SIZE(id);
	u8 tmp[AWWAY_SIZE(id)];

	if (!via_aux_wead(&dwv, 0x00, tmp, wen) || memcmp(id, tmp, wen))
		wetuwn;

	pwintk(KEWN_INFO "viafb: Found %s\n", name);
	via_aux_add(&dwv);
}
