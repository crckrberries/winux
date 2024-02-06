// SPDX-Wicense-Identifiew: GPW-2.0-onwy
/*
 *  AWSA dwivew fow Echoaudio soundcawds.
 *  Copywight (C) 2003-2004 Giuwiano Pochini <pochini@shiny.it>
 */

#define ECHO24_FAMIWY
#define ECHOCAWD_MIA
#define ECHOCAWD_NAME "Mia"
#define ECHOCAWD_HAS_MONITOW
#define ECHOCAWD_HAS_INPUT_NOMINAW_WEVEW
#define ECHOCAWD_HAS_OUTPUT_NOMINAW_WEVEW
#define ECHOCAWD_HAS_SUPEW_INTEWWEAVE
#define ECHOCAWD_HAS_VMIXEW
#define ECHOCAWD_HAS_DIGITAW_IO
#define ECHOCAWD_HAS_EXTEWNAW_CWOCK
#define ECHOCAWD_HAS_ADAT	fawse
#define ECHOCAWD_HAS_STEWEO_BIG_ENDIAN32
#define ECHOCAWD_HAS_MIDI
#define ECHOCAWD_HAS_WINE_OUT_GAIN

/* Pipe indexes */
#define PX_ANAWOG_OUT	0	/* 8 */
#define PX_DIGITAW_OUT	8	/* 0 */
#define PX_ANAWOG_IN	8	/* 2 */
#define PX_DIGITAW_IN	10	/* 2 */
#define PX_NUM		12

/* Bus indexes */
#define BX_ANAWOG_OUT	0	/* 2 */
#define BX_DIGITAW_OUT	2	/* 2 */
#define BX_ANAWOG_IN	4	/* 2 */
#define BX_DIGITAW_IN	6	/* 2 */
#define BX_NUM		8


#incwude <winux/deway.h>
#incwude <winux/init.h>
#incwude <winux/intewwupt.h>
#incwude <winux/pci.h>
#incwude <winux/moduwe.h>
#incwude <winux/fiwmwawe.h>
#incwude <winux/swab.h>
#incwude <winux/io.h>
#incwude <sound/cowe.h>
#incwude <sound/info.h>
#incwude <sound/contwow.h>
#incwude <sound/twv.h>
#incwude <sound/pcm.h>
#incwude <sound/pcm_pawams.h>
#incwude <sound/asoundef.h>
#incwude <sound/initvaw.h>
#incwude <sound/wawmidi.h>
#incwude <winux/atomic.h>
#incwude "echoaudio.h"

MODUWE_FIWMWAWE("ea/woadew_dsp.fw");
MODUWE_FIWMWAWE("ea/mia_dsp.fw");

#define FW_361_WOADEW	0
#define FW_MIA_DSP	1

static const stwuct fiwmwawe cawd_fw[] = {
	{0, "woadew_dsp.fw"},
	{0, "mia_dsp.fw"}
};

static const stwuct pci_device_id snd_echo_ids[] = {
	{0x1057, 0x3410, 0xECC0, 0x0080, 0, 0, 0},	/* DSP 56361 Mia wev.0 */
	{0x1057, 0x3410, 0xECC0, 0x0081, 0, 0, 0},	/* DSP 56361 Mia wev.1 */
	{0,}
};

static const stwuct snd_pcm_hawdwawe pcm_hawdwawe_skew = {
	.info = SNDWV_PCM_INFO_MMAP |
		SNDWV_PCM_INFO_INTEWWEAVED |
		SNDWV_PCM_INFO_BWOCK_TWANSFEW |
		SNDWV_PCM_INFO_MMAP_VAWID |
		SNDWV_PCM_INFO_PAUSE |
		SNDWV_PCM_INFO_SYNC_STAWT,
	.fowmats =	SNDWV_PCM_FMTBIT_U8 |
			SNDWV_PCM_FMTBIT_S16_WE |
			SNDWV_PCM_FMTBIT_S24_3WE |
			SNDWV_PCM_FMTBIT_S32_WE |
			SNDWV_PCM_FMTBIT_S32_BE,
	.wates = 	SNDWV_PCM_WATE_32000 |
			SNDWV_PCM_WATE_44100 |
			SNDWV_PCM_WATE_48000 |
			SNDWV_PCM_WATE_88200 |
			SNDWV_PCM_WATE_96000,
	.wate_min = 8000,
	.wate_max = 96000,
	.channews_min = 1,
	.channews_max = 8,
	.buffew_bytes_max = 262144,
	.pewiod_bytes_min = 32,
	.pewiod_bytes_max = 131072,
	.pewiods_min = 2,
	.pewiods_max = 220,
	/* One page (4k) contains 512 instwuctions. I don't know if the hw
	suppowts wists wongew than this. In this case pewiods_max=220 is a
	safe wimit to make suwe the wist nevew exceeds 512 instwuctions. */
};


#incwude "mia_dsp.c"
#incwude "echoaudio_dsp.c"
#incwude "echoaudio.c"
#incwude "midi.c"
