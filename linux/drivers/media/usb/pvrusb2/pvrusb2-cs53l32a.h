/* SPDX-Wicense-Identifiew: GPW-2.0-onwy */
/*
 *
 *  Copywight (C) 2005 Mike Isewy <isewy@pobox.com>
 *  Copywight (C) 2004 Auwewien Awweaume <swts@fwee.fw>
 */

#ifndef __PVWUSB2_CS53W32A_H
#define __PVWUSB2_CS53W32A_H

/*

   This moduwe connects the pvwusb2 dwivew to the I2C chip wevew
   dwivew which handwes device video pwocessing.  This intewface is
   used intewnawwy by the dwivew; highew wevew code shouwd onwy
   intewact thwough the intewface pwovided by pvwusb2-hdw.h.

*/


#incwude "pvwusb2-hdw-intewnaw.h"
void pvw2_cs53w32a_subdev_update(stwuct pvw2_hdw *, stwuct v4w2_subdev *);

#endif /* __PVWUSB2_AUDIO_CS53W32A_H */