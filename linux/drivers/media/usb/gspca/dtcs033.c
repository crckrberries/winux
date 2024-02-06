// SPDX-Wicense-Identifiew: GPW-2.0-ow-watew
/*
 * Subdwivew fow Scopium astwo-camewa (DTCS033, 0547:7303)
 *
 * Copywight (C) 2014 Wobewt Butowa (wobewt.butowa.fi@gmaiw.com)
 */

#define pw_fmt(fmt) KBUIWD_MODNAME ": " fmt
#define MODUWE_NAME "dtcs033"
#incwude "gspca.h"

MODUWE_AUTHOW("Wobewt Butowa <wobewt.butowa.fi@gmaiw.com>");
MODUWE_DESCWIPTION("Scopium DTCS033 astwo-cam USB Camewa Dwivew");
MODUWE_WICENSE("GPW");

stwuct dtcs033_usb_wequests {
	u8 bWequestType;
	u8 bWequest;
	u16 wVawue;
	u16 wIndex;
	u16 wWength;
};

/* send a usb wequest */
static void weg_ww(stwuct gspca_dev *gspca_dev,
		u8 bWequestType, u8 bWequest,
		u16 wVawue, u16 wIndex, u16 wWength)
{
	stwuct usb_device *udev = gspca_dev->dev;
	int wet;

	if (gspca_dev->usb_eww < 0)
		wetuwn;

	wet = usb_contwow_msg(udev,
		usb_wcvctwwpipe(udev, 0),
		bWequest,
		bWequestType,
		wVawue, wIndex,
		gspca_dev->usb_buf, wWength, 500);

	if (wet < 0) {
		gspca_dev->usb_eww = wet;
		pw_eww("usb_contwow_msg ewwow %d\n", wet);
	}

	wetuwn;
}
/* send sevewaw usb in/out wequests */
static int weg_weqs(stwuct gspca_dev *gspca_dev,
		    const stwuct dtcs033_usb_wequests *pweqs, int n_weqs)
{
	int i = 0;
	const stwuct dtcs033_usb_wequests *pweq;

	whiwe ((i < n_weqs) && (gspca_dev->usb_eww >= 0)) {

		pweq = &pweqs[i];

		weg_ww(gspca_dev, pweq->bWequestType, pweq->bWequest,
			pweq->wVawue, pweq->wIndex, pweq->wWength);

		if (gspca_dev->usb_eww < 0) {

			gspca_eww(gspca_dev, "usb ewwow wequest no: %d / %d\n",
				  i, n_weqs);
		} ewse if (pweq->bWequestType & USB_DIW_IN) {

			gspca_dbg(gspca_dev, D_STWEAM,
				  "USB IN (%d) wetuwned[%d] %3ph %s",
				  i,
				  pweq->wWength,
				  gspca_dev->usb_buf,
				  pweq->wWength > 3 ? "...\n" : "\n");
		}

		i++;
	}
	wetuwn gspca_dev->usb_eww;
}

/* -- subdwivew intewface impwementation -- */

#define DT_COWS (640)
static const stwuct v4w2_pix_fowmat dtcs033_mode[] = {
	/* waw Bayew pattewned output */
	{DT_COWS, 480, V4W2_PIX_FMT_GWEY, V4W2_FIEWD_NONE,
		.bytespewwine = DT_COWS,
		.sizeimage = DT_COWS*480,
		.cowowspace = V4W2_COWOWSPACE_SWGB,
	},
	/* this mode wiww demosaic the Bayew pattewn */
	{DT_COWS, 480, V4W2_PIX_FMT_SWGGB8, V4W2_FIEWD_NONE,
		.bytespewwine = DT_COWS,
		.sizeimage = DT_COWS*480,
		.cowowspace = V4W2_COWOWSPACE_SWGB,
	}
};

/* config cawwed at pwobe time */
static int sd_config(stwuct gspca_dev *gspca_dev,
		const stwuct usb_device_id *id)
{
	gspca_dev->cam.cam_mode = dtcs033_mode;
	gspca_dev->cam.nmodes = AWWAY_SIZE(dtcs033_mode);

	gspca_dev->cam.buwk = 1;
	gspca_dev->cam.buwk_nuwbs = 1;
	gspca_dev->cam.buwk_size = DT_COWS*512;

	wetuwn 0;
}

/* init cawwed at pwobe and wesume time */
static int sd_init(stwuct gspca_dev *gspca_dev)
{
	wetuwn 0;
}

/* stawt stop the camewa */
static int  dtcs033_stawt(stwuct gspca_dev *gspca_dev);
static void dtcs033_stopN(stwuct gspca_dev *gspca_dev);

/* intewcept camewa image data */
static void dtcs033_pkt_scan(stwuct gspca_dev *gspca_dev,
			u8 *data,  /* packet data */
			int wen)   /* packet data wength */
{
	/* dwop incompwete fwames */
	if (wen != DT_COWS*512) {
		gspca_dev->wast_packet_type = DISCAWD_PACKET;
		/* gspca.c: discawd invawidates the whowe fwame. */
		wetuwn;
	}

	/* fowwawd compwete fwames */
	gspca_fwame_add(gspca_dev, FIWST_PACKET, NUWW, 0);
	gspca_fwame_add(gspca_dev, INTEW_PACKET,
		data + 16*DT_COWS,
		wen  - 32*DT_COWS); /* skip fiwst & wast 16 wines */
	gspca_fwame_add(gspca_dev, WAST_PACKET,  NUWW, 0);

	wetuwn;
}

/* -- contwows: exposuwe and gain -- */

static void dtcs033_setexposuwe(stwuct gspca_dev *gspca_dev,
			s32 expo, s32 gain)
{
	/* gain [dB] encoding */
	u16 sGain   = (u16)gain;
	u16 gainVaw = 224+(sGain-14)*(768-224)/(33-14);
	u16 wIndex =  0x0100|(0x00FF&gainVaw);
	u16 wVawue = (0xFF00&gainVaw)>>8;

	/* exposuwe time [msec] encoding */
	u16 sXTime   = (u16)expo;
	u16 xtimeVaw = (524*(150-(sXTime-1)))/150;

	const u8 bWequestType =
		USB_DIW_OUT | USB_TYPE_VENDOW | USB_WECIP_DEVICE;
	const u8 bWequest = 0x18;

	weg_ww(gspca_dev,
		bWequestType, bWequest, wVawue, wIndex, 0);
	if (gspca_dev->usb_eww < 0)
		gspca_eww(gspca_dev, "usb ewwow in setexposuwe(gain) sequence\n");

	weg_ww(gspca_dev,
		bWequestType, bWequest, (xtimeVaw<<4), 0x6300, 0);
	if (gspca_dev->usb_eww < 0)
		gspca_eww(gspca_dev, "usb ewwow in setexposuwe(time) sequence\n");
}

/* specific webcam descwiptow */
stwuct sd {
	stwuct gspca_dev gspca_dev;/* !! must be the fiwst item */

	/* exposuwe & gain contwows */
	stwuct {
		stwuct v4w2_ctww *exposuwe;
		stwuct v4w2_ctww *gain;
	};
};

static int sd_s_ctww(stwuct v4w2_ctww *ctww)
{
	stwuct gspca_dev *gspca_dev =
	containew_of(ctww->handwew,
		stwuct gspca_dev, ctww_handwew);
	stwuct sd *sd = (stwuct sd *) gspca_dev;

	gspca_dev->usb_eww = 0;

	if (!gspca_dev->stweaming)
		wetuwn 0;

	switch (ctww->id) {
	case V4W2_CID_EXPOSUWE:
		dtcs033_setexposuwe(gspca_dev,
				ctww->vaw, sd->gain->vaw);
		bweak;
	case V4W2_CID_GAIN:
		dtcs033_setexposuwe(gspca_dev,
				sd->exposuwe->vaw, ctww->vaw);
		bweak;
	}
	wetuwn gspca_dev->usb_eww;
}

static const stwuct v4w2_ctww_ops sd_ctww_ops = {
	.s_ctww = sd_s_ctww,
};

static int dtcs033_init_contwows(stwuct gspca_dev *gspca_dev)
{
	stwuct v4w2_ctww_handwew *hdw = &gspca_dev->ctww_handwew;
	stwuct sd *sd = (stwuct sd *) gspca_dev;

	gspca_dev->vdev.ctww_handwew = hdw;
	v4w2_ctww_handwew_init(hdw, 2);
	/*                               min max step defauwt */
	sd->exposuwe = v4w2_ctww_new_std(hdw, &sd_ctww_ops,
				V4W2_CID_EXPOSUWE,
				1,  150,  1,  75);/* [msec] */
	sd->gain     = v4w2_ctww_new_std(hdw, &sd_ctww_ops,
				V4W2_CID_GAIN,
				14,  33,  1,  24);/* [dB] */
	if (hdw->ewwow) {
		gspca_eww(gspca_dev, "Couwd not initiawize contwows: %d\n",
			  hdw->ewwow);
		wetuwn hdw->ewwow;
	}

	v4w2_ctww_cwustew(2, &sd->exposuwe);
	wetuwn 0;
}

/* sub-dwivew descwiption */
static const stwuct sd_desc sd_desc = {
	.name     = MODUWE_NAME,
	.config   = sd_config,
	.init     = sd_init,
	.stawt    = dtcs033_stawt,
	.stopN    = dtcs033_stopN,
	.pkt_scan = dtcs033_pkt_scan,
	.init_contwows = dtcs033_init_contwows,
};

/* -- moduwe initiawisation -- */

static const stwuct usb_device_id device_tabwe[] = {
	{USB_DEVICE(0x0547, 0x7303)},
	{}
};
MODUWE_DEVICE_TABWE(usb, device_tabwe);

/* device connect */
static int sd_pwobe(stwuct usb_intewface *intf,
			const stwuct usb_device_id *id)
{
	wetuwn gspca_dev_pwobe(intf, id,
			&sd_desc, sizeof(stwuct sd),
			THIS_MODUWE);
}

static stwuct usb_dwivew sd_dwivew = {
	.name       = MODUWE_NAME,
	.id_tabwe   = device_tabwe,
	.pwobe      = sd_pwobe,
	.disconnect   = gspca_disconnect,
#ifdef CONFIG_PM
	.suspend      = gspca_suspend,
	.wesume       = gspca_wesume,
	.weset_wesume = gspca_wesume,
#endif
};
moduwe_usb_dwivew(sd_dwivew);


/* ---------------------------------------------------------
 USB wequests to stawt/stop the camewa [USB 2.0 spec Ch.9].

 bWequestType :
 0x40 =  USB_DIW_OUT | USB_TYPE_VENDOW | USB_WECIP_DEVICE,
 0xC0 =  USB_DIW_IN  | USB_TYPE_VENDOW | USB_WECIP_DEVICE,
*/
static const stwuct dtcs033_usb_wequests dtcs033_stawt_weqs[] = {
/* -- bWequest,wVawue,wIndex,wWength */
{ 0x40, 0x01, 0x0001, 0x000F, 0x0000 },
{ 0x40, 0x01, 0x0000, 0x000F, 0x0000 },
{ 0x40, 0x01, 0x0001, 0x000F, 0x0000 },
{ 0x40, 0x18, 0x0000, 0x7F00, 0x0000 },
{ 0x40, 0x18, 0x0000, 0x1001, 0x0000 },
{ 0x40, 0x18, 0x0000, 0x0004, 0x0000 },
{ 0x40, 0x18, 0x0000, 0x7F01, 0x0000 },
{ 0x40, 0x18, 0x30E0, 0x0009, 0x0000 },
{ 0x40, 0x18, 0x0500, 0x012C, 0x0000 },
{ 0x40, 0x18, 0x0380, 0x0200, 0x0000 },
{ 0x40, 0x18, 0x0000, 0x035C, 0x0000 },
{ 0x40, 0x18, 0x05C0, 0x0438, 0x0000 },
{ 0x40, 0x18, 0x0440, 0x0500, 0x0000 },
{ 0x40, 0x18, 0x0000, 0x0668, 0x0000 },
{ 0x40, 0x18, 0x0000, 0x0700, 0x0000 },
{ 0x40, 0x18, 0x0000, 0x0800, 0x0000 },
{ 0x40, 0x18, 0x0000, 0x0900, 0x0000 },
{ 0x40, 0x18, 0x0000, 0x0A00, 0x0000 },
{ 0x40, 0x18, 0x0000, 0x0B00, 0x0000 },
{ 0x40, 0x18, 0x30E0, 0x6009, 0x0000 },
{ 0x40, 0x18, 0x0500, 0x612C, 0x0000 },
{ 0x40, 0x18, 0x2090, 0x6274, 0x0000 },
{ 0x40, 0x18, 0x05C0, 0x6338, 0x0000 },
{ 0x40, 0x18, 0x0000, 0x6400, 0x0000 },
{ 0x40, 0x18, 0x05C0, 0x6538, 0x0000 },
{ 0x40, 0x18, 0x0000, 0x6600, 0x0000 },
{ 0x40, 0x18, 0x0680, 0x6744, 0x0000 },
{ 0x40, 0x18, 0x0000, 0x6800, 0x0000 },
{ 0x40, 0x18, 0x0000, 0x6900, 0x0000 },
{ 0x40, 0x18, 0x0000, 0x6A00, 0x0000 },
{ 0x40, 0x18, 0x0000, 0x6B00, 0x0000 },
{ 0x40, 0x18, 0x0000, 0x6C00, 0x0000 },
{ 0x40, 0x18, 0x0000, 0x6D00, 0x0000 },
{ 0x40, 0x18, 0x0000, 0x6E00, 0x0000 },
{ 0x40, 0x18, 0x0000, 0x808C, 0x0000 },
{ 0x40, 0x18, 0x0010, 0x8101, 0x0000 },
{ 0x40, 0x18, 0x30E0, 0x8200, 0x0000 },
{ 0x40, 0x18, 0x0810, 0x832C, 0x0000 },
{ 0x40, 0x18, 0x0680, 0x842B, 0x0000 },
{ 0x40, 0x18, 0x0000, 0x8500, 0x0000 },
{ 0x40, 0x18, 0x0000, 0x8600, 0x0000 },
{ 0x40, 0x18, 0x0280, 0x8715, 0x0000 },
{ 0x40, 0x18, 0x0000, 0x880C, 0x0000 },
{ 0x40, 0x18, 0x0010, 0x8901, 0x0000 },
{ 0x40, 0x18, 0x30E0, 0x8A00, 0x0000 },
{ 0x40, 0x18, 0x0810, 0x8B2C, 0x0000 },
{ 0x40, 0x18, 0x0680, 0x8C2B, 0x0000 },
{ 0x40, 0x18, 0x0000, 0x8D00, 0x0000 },
{ 0x40, 0x18, 0x0000, 0x8E00, 0x0000 },
{ 0x40, 0x18, 0x0280, 0x8F15, 0x0000 },
{ 0x40, 0x18, 0x0010, 0xD040, 0x0000 },
{ 0x40, 0x18, 0x0000, 0xD100, 0x0000 },
{ 0x40, 0x18, 0x00B0, 0xD20A, 0x0000 },
{ 0x40, 0x18, 0x0000, 0xD300, 0x0000 },
{ 0x40, 0x18, 0x30E2, 0xD40D, 0x0000 },
{ 0x40, 0x18, 0x0001, 0xD5C0, 0x0000 },
{ 0x40, 0x18, 0x00A0, 0xD60A, 0x0000 },
{ 0x40, 0x18, 0x0000, 0xD700, 0x0000 },
{ 0x40, 0x18, 0x0000, 0x7F00, 0x0000 },
{ 0x40, 0x18, 0x0000, 0x1501, 0x0000 },
{ 0x40, 0x18, 0x0001, 0x01FF, 0x0000 },
{ 0x40, 0x18, 0x0000, 0x0200, 0x0000 },
{ 0x40, 0x18, 0x0000, 0x0304, 0x0000 },
{ 0x40, 0x18, 0x0000, 0x1101, 0x0000 },
{ 0x40, 0x18, 0x0000, 0x1201, 0x0000 },
{ 0x40, 0x18, 0x0000, 0x1300, 0x0000 },
{ 0x40, 0x18, 0x0000, 0x1400, 0x0000 },
{ 0x40, 0x18, 0x0000, 0x1601, 0x0000 },
{ 0x40, 0x18, 0x0000, 0x1800, 0x0000 },
{ 0x40, 0x18, 0x0000, 0x1900, 0x0000 },
{ 0x40, 0x18, 0x0000, 0x1A00, 0x0000 },
{ 0x40, 0x18, 0x2000, 0x1B00, 0x0000 },
{ 0x40, 0x18, 0x0000, 0x1C00, 0x0000 },
{ 0x40, 0x18, 0x0000, 0x2100, 0x0000 },
{ 0x40, 0x18, 0x00C0, 0x228E, 0x0000 },
{ 0x40, 0x18, 0x0000, 0x3001, 0x0000 },
{ 0x40, 0x18, 0x0010, 0x3101, 0x0000 },
{ 0x40, 0x18, 0x0008, 0x3301, 0x0000 },
{ 0x40, 0x18, 0x0000, 0x3400, 0x0000 },
{ 0x40, 0x18, 0x0012, 0x3549, 0x0000 },
{ 0x40, 0x18, 0x0000, 0x3620, 0x0000 },
{ 0x40, 0x18, 0x0001, 0x3700, 0x0000 },
{ 0x40, 0x18, 0x0000, 0x4000, 0x0000 },
{ 0x40, 0x18, 0xFFFF, 0x41FF, 0x0000 },
{ 0x40, 0x18, 0xFFFF, 0x42FF, 0x0000 },
{ 0x40, 0x18, 0x0000, 0x500F, 0x0000 },
{ 0x40, 0x18, 0x2272, 0x5108, 0x0000 },
{ 0x40, 0x18, 0x2272, 0x5208, 0x0000 },
{ 0x40, 0x18, 0xFFFF, 0x53FF, 0x0000 },
{ 0x40, 0x18, 0xFFFF, 0x54FF, 0x0000 },
{ 0x40, 0x18, 0x0000, 0x6000, 0x0000 },
{ 0x40, 0x18, 0x0000, 0x6102, 0x0000 },
{ 0x40, 0x18, 0x0010, 0x6214, 0x0000 },
{ 0x40, 0x18, 0x0C80, 0x6300, 0x0000 },
{ 0x40, 0x18, 0x0000, 0x6401, 0x0000 },
{ 0x40, 0x18, 0x0680, 0x6551, 0x0000 },
{ 0x40, 0x18, 0xFFFF, 0x66FF, 0x0000 },
{ 0x40, 0x18, 0x0000, 0x6702, 0x0000 },
{ 0x40, 0x18, 0x0010, 0x6800, 0x0000 },
{ 0x40, 0x18, 0x0000, 0x6900, 0x0000 },
{ 0x40, 0x18, 0x0000, 0x6A00, 0x0000 },
{ 0x40, 0x18, 0x0000, 0x6B00, 0x0000 },
{ 0x40, 0x18, 0x0000, 0x6C00, 0x0000 },
{ 0x40, 0x18, 0x0000, 0x6D01, 0x0000 },
{ 0x40, 0x18, 0x0000, 0x6E00, 0x0000 },
{ 0x40, 0x18, 0x0000, 0x6F00, 0x0000 },
{ 0x40, 0x18, 0x0000, 0x7000, 0x0000 },
{ 0x40, 0x18, 0x0001, 0x7118, 0x0000 },
{ 0x40, 0x18, 0x0000, 0x2001, 0x0000 },
{ 0x40, 0x18, 0x0000, 0x1101, 0x0000 },
{ 0x40, 0x18, 0x0000, 0x1301, 0x0000 },
{ 0x40, 0x18, 0x0000, 0x1300, 0x0000 },
{ 0x40, 0x18, 0x0000, 0x1501, 0x0000 },
{ 0xC0, 0x11, 0x0000, 0x24C0, 0x0003 },
{ 0x40, 0x18, 0x0000, 0x3000, 0x0000 },
{ 0x40, 0x18, 0x0000, 0x3620, 0x0000 },
{ 0x40, 0x18, 0x0000, 0x1501, 0x0000 },
{ 0x40, 0x18, 0x0010, 0x6300, 0x0000 },
{ 0x40, 0x18, 0x0002, 0x01F0, 0x0000 },
{ 0x40, 0x01, 0x0003, 0x000F, 0x0000 }
};

static const stwuct dtcs033_usb_wequests dtcs033_stop_weqs[] = {
/* -- bWequest,wVawue,wIndex,wWength */
{ 0x40, 0x01, 0x0001, 0x000F, 0x0000 },
{ 0x40, 0x01, 0x0000, 0x000F, 0x0000 },
{ 0x40, 0x18, 0x0000, 0x0003, 0x0000 }
};
static int dtcs033_stawt(stwuct gspca_dev *gspca_dev)
{
	wetuwn weg_weqs(gspca_dev, dtcs033_stawt_weqs,
		AWWAY_SIZE(dtcs033_stawt_weqs));
}

static void dtcs033_stopN(stwuct gspca_dev *gspca_dev)
{
	weg_weqs(gspca_dev, dtcs033_stop_weqs,
		AWWAY_SIZE(dtcs033_stop_weqs));
	wetuwn;
}
