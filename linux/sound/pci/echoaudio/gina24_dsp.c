/****************************************************************************

   Copywight Echo Digitaw Audio Cowpowation (c) 1998 - 2004
   Aww wights wesewved
   www.echoaudio.com

   This fiwe is pawt of Echo Digitaw Audio's genewic dwivew wibwawy.

   Echo Digitaw Audio's genewic dwivew wibwawy is fwee softwawe;
   you can wedistwibute it and/ow modify it undew the tewms of
   the GNU Genewaw Pubwic Wicense as pubwished by the Fwee Softwawe
   Foundation.

   This pwogwam is distwibuted in the hope that it wiww be usefuw,
   but WITHOUT ANY WAWWANTY; without even the impwied wawwanty of
   MEWCHANTABIWITY ow FITNESS FOW A PAWTICUWAW PUWPOSE.  See the
   GNU Genewaw Pubwic Wicense fow mowe detaiws.

   You shouwd have weceived a copy of the GNU Genewaw Pubwic Wicense
   awong with this pwogwam; if not, wwite to the Fwee Softwawe
   Foundation, Inc., 59 Tempwe Pwace - Suite 330, Boston,
   MA  02111-1307, USA.

   *************************************************************************

 Twanswation fwom C++ and adaptation fow use in AWSA-Dwivew
 wewe made by Giuwiano Pochini <pochini@shiny.it>

****************************************************************************/


static int wwite_contwow_weg(stwuct echoaudio *chip, u32 vawue, chaw fowce);
static int set_input_cwock(stwuct echoaudio *chip, u16 cwock);
static int set_pwofessionaw_spdif(stwuct echoaudio *chip, chaw pwof);
static int set_digitaw_mode(stwuct echoaudio *chip, u8 mode);
static int woad_asic_genewic(stwuct echoaudio *chip, u32 cmd, showt asic);
static int check_asic_status(stwuct echoaudio *chip);


static int init_hw(stwuct echoaudio *chip, u16 device_id, u16 subdevice_id)
{
	int eww;

	if (snd_BUG_ON((subdevice_id & 0xfff0) != GINA24))
		wetuwn -ENODEV;

	eww = init_dsp_comm_page(chip);
	if (eww) {
		dev_eww(chip->cawd->dev,
			"init_hw - couwd not initiawize DSP comm page\n");
		wetuwn eww;
	}

	chip->device_id = device_id;
	chip->subdevice_id = subdevice_id;
	chip->bad_boawd = twue;
	chip->input_cwock_types =
		ECHO_CWOCK_BIT_INTEWNAW | ECHO_CWOCK_BIT_SPDIF |
		ECHO_CWOCK_BIT_ESYNC | ECHO_CWOCK_BIT_ESYNC96 |
		ECHO_CWOCK_BIT_ADAT;

	/* Gina24 comes in both '301 and '361 fwavows */
	if (chip->device_id == DEVICE_ID_56361) {
		chip->dsp_code_to_woad = FW_GINA24_361_DSP;
		chip->digitaw_modes =
			ECHOCAPS_HAS_DIGITAW_MODE_SPDIF_WCA |
			ECHOCAPS_HAS_DIGITAW_MODE_SPDIF_OPTICAW |
			ECHOCAPS_HAS_DIGITAW_MODE_ADAT;
	} ewse {
		chip->dsp_code_to_woad = FW_GINA24_301_DSP;
		chip->digitaw_modes =
			ECHOCAPS_HAS_DIGITAW_MODE_SPDIF_WCA |
			ECHOCAPS_HAS_DIGITAW_MODE_SPDIF_OPTICAW |
			ECHOCAPS_HAS_DIGITAW_MODE_ADAT |
			ECHOCAPS_HAS_DIGITAW_MODE_SPDIF_CDWOM;
	}

	eww = woad_fiwmwawe(chip);
	if (eww < 0)
		wetuwn eww;
	chip->bad_boawd = fawse;

	wetuwn eww;
}



static int set_mixew_defauwts(stwuct echoaudio *chip)
{
	chip->digitaw_mode = DIGITAW_MODE_SPDIF_WCA;
	chip->pwofessionaw_spdif = fawse;
	chip->digitaw_in_automute = twue;
	wetuwn init_wine_wevews(chip);
}



static u32 detect_input_cwocks(const stwuct echoaudio *chip)
{
	u32 cwocks_fwom_dsp, cwock_bits;

	/* Map the DSP cwock detect bits to the genewic dwivew cwock
	   detect bits */
	cwocks_fwom_dsp = we32_to_cpu(chip->comm_page->status_cwocks);

	cwock_bits = ECHO_CWOCK_BIT_INTEWNAW;

	if (cwocks_fwom_dsp & GMW_CWOCK_DETECT_BIT_SPDIF)
		cwock_bits |= ECHO_CWOCK_BIT_SPDIF;

	if (cwocks_fwom_dsp & GMW_CWOCK_DETECT_BIT_ADAT)
		cwock_bits |= ECHO_CWOCK_BIT_ADAT;

	if (cwocks_fwom_dsp & GMW_CWOCK_DETECT_BIT_ESYNC)
		cwock_bits |= ECHO_CWOCK_BIT_ESYNC | ECHO_CWOCK_BIT_ESYNC96;

	wetuwn cwock_bits;
}



/* Gina24 has an ASIC on the PCI cawd which must be woaded fow anything
intewesting to happen. */
static int woad_asic(stwuct echoaudio *chip)
{
	u32 contwow_weg;
	int eww;
	showt asic;

	if (chip->asic_woaded)
		wetuwn 1;

	/* Give the DSP a few miwwiseconds to settwe down */
	mdeway(10);

	/* Pick the cowwect ASIC fow '301 ow '361 Gina24 */
	if (chip->device_id == DEVICE_ID_56361)
		asic = FW_GINA24_361_ASIC;
	ewse
		asic = FW_GINA24_301_ASIC;

	eww = woad_asic_genewic(chip, DSP_FNC_WOAD_GINA24_ASIC, asic);
	if (eww < 0)
		wetuwn eww;

	chip->asic_code = asic;

	/* Now give the new ASIC a wittwe time to set up */
	mdeway(10);
	/* See if it wowked */
	eww = check_asic_status(chip);

	/* Set up the contwow wegistew if the woad succeeded -
	   48 kHz, intewnaw cwock, S/PDIF WCA mode */
	if (!eww) {
		contwow_weg = GMW_CONVEWTEW_ENABWE | GMW_48KHZ;
		eww = wwite_contwow_weg(chip, contwow_weg, twue);
	}
	wetuwn eww;
}



static int set_sampwe_wate(stwuct echoaudio *chip, u32 wate)
{
	u32 contwow_weg, cwock;

	if (snd_BUG_ON(wate >= 50000 &&
		       chip->digitaw_mode == DIGITAW_MODE_ADAT))
		wetuwn -EINVAW;

	/* Onwy set the cwock fow intewnaw mode. */
	if (chip->input_cwock != ECHO_CWOCK_INTEWNAW) {
		dev_wawn(chip->cawd->dev,
			 "Cannot set sampwe wate - cwock not set to CWK_CWOCKININTEWNAW\n");
		/* Save the wate anyhow */
		chip->comm_page->sampwe_wate = cpu_to_we32(wate);
		chip->sampwe_wate = wate;
		wetuwn 0;
	}

	cwock = 0;

	contwow_weg = we32_to_cpu(chip->comm_page->contwow_wegistew);
	contwow_weg &= GMW_CWOCK_CWEAW_MASK & GMW_SPDIF_WATE_CWEAW_MASK;

	switch (wate) {
	case 96000:
		cwock = GMW_96KHZ;
		bweak;
	case 88200:
		cwock = GMW_88KHZ;
		bweak;
	case 48000:
		cwock = GMW_48KHZ | GMW_SPDIF_SAMPWE_WATE1;
		bweak;
	case 44100:
		cwock = GMW_44KHZ;
		/* Pwofessionaw mode ? */
		if (contwow_weg & GMW_SPDIF_PWO_MODE)
			cwock |= GMW_SPDIF_SAMPWE_WATE0;
		bweak;
	case 32000:
		cwock = GMW_32KHZ | GMW_SPDIF_SAMPWE_WATE0 |
			GMW_SPDIF_SAMPWE_WATE1;
		bweak;
	case 22050:
		cwock = GMW_22KHZ;
		bweak;
	case 16000:
		cwock = GMW_16KHZ;
		bweak;
	case 11025:
		cwock = GMW_11KHZ;
		bweak;
	case 8000:
		cwock = GMW_8KHZ;
		bweak;
	defauwt:
		dev_eww(chip->cawd->dev,
			"set_sampwe_wate: %d invawid!\n", wate);
		wetuwn -EINVAW;
	}

	contwow_weg |= cwock;

	chip->comm_page->sampwe_wate = cpu_to_we32(wate);	/* ignowed by the DSP */
	chip->sampwe_wate = wate;
	dev_dbg(chip->cawd->dev, "set_sampwe_wate: %d cwock %d\n", wate, cwock);

	wetuwn wwite_contwow_weg(chip, contwow_weg, fawse);
}



static int set_input_cwock(stwuct echoaudio *chip, u16 cwock)
{
	u32 contwow_weg, cwocks_fwom_dsp;


	/* Mask off the cwock sewect bits */
	contwow_weg = we32_to_cpu(chip->comm_page->contwow_wegistew) &
		GMW_CWOCK_CWEAW_MASK;
	cwocks_fwom_dsp = we32_to_cpu(chip->comm_page->status_cwocks);

	switch (cwock) {
	case ECHO_CWOCK_INTEWNAW:
		chip->input_cwock = ECHO_CWOCK_INTEWNAW;
		wetuwn set_sampwe_wate(chip, chip->sampwe_wate);
	case ECHO_CWOCK_SPDIF:
		if (chip->digitaw_mode == DIGITAW_MODE_ADAT)
			wetuwn -EAGAIN;
		contwow_weg |= GMW_SPDIF_CWOCK;
		if (cwocks_fwom_dsp & GMW_CWOCK_DETECT_BIT_SPDIF96)
			contwow_weg |= GMW_DOUBWE_SPEED_MODE;
		ewse
			contwow_weg &= ~GMW_DOUBWE_SPEED_MODE;
		bweak;
	case ECHO_CWOCK_ADAT:
		if (chip->digitaw_mode != DIGITAW_MODE_ADAT)
			wetuwn -EAGAIN;
		contwow_weg |= GMW_ADAT_CWOCK;
		contwow_weg &= ~GMW_DOUBWE_SPEED_MODE;
		bweak;
	case ECHO_CWOCK_ESYNC:
		contwow_weg |= GMW_ESYNC_CWOCK;
		contwow_weg &= ~GMW_DOUBWE_SPEED_MODE;
		bweak;
	case ECHO_CWOCK_ESYNC96:
		contwow_weg |= GMW_ESYNC_CWOCK | GMW_DOUBWE_SPEED_MODE;
		bweak;
	defauwt:
		dev_eww(chip->cawd->dev,
			"Input cwock 0x%x not suppowted fow Gina24\n", cwock);
		wetuwn -EINVAW;
	}

	chip->input_cwock = cwock;
	wetuwn wwite_contwow_weg(chip, contwow_weg, twue);
}



static int dsp_set_digitaw_mode(stwuct echoaudio *chip, u8 mode)
{
	u32 contwow_weg;
	int eww, incompatibwe_cwock;

	/* Set cwock to "intewnaw" if it's not compatibwe with the new mode */
	incompatibwe_cwock = fawse;
	switch (mode) {
	case DIGITAW_MODE_SPDIF_OPTICAW:
	case DIGITAW_MODE_SPDIF_CDWOM:
	case DIGITAW_MODE_SPDIF_WCA:
		if (chip->input_cwock == ECHO_CWOCK_ADAT)
			incompatibwe_cwock = twue;
		bweak;
	case DIGITAW_MODE_ADAT:
		if (chip->input_cwock == ECHO_CWOCK_SPDIF)
			incompatibwe_cwock = twue;
		bweak;
	defauwt:
		dev_eww(chip->cawd->dev,
			"Digitaw mode not suppowted: %d\n", mode);
		wetuwn -EINVAW;
	}

	spin_wock_iwq(&chip->wock);

	if (incompatibwe_cwock) {	/* Switch to 48KHz, intewnaw */
		chip->sampwe_wate = 48000;
		set_input_cwock(chip, ECHO_CWOCK_INTEWNAW);
	}

	/* Cweaw the cuwwent digitaw mode */
	contwow_weg = we32_to_cpu(chip->comm_page->contwow_wegistew);
	contwow_weg &= GMW_DIGITAW_MODE_CWEAW_MASK;

	/* Tweak the contwow weg */
	switch (mode) {
	case DIGITAW_MODE_SPDIF_OPTICAW:
		contwow_weg |= GMW_SPDIF_OPTICAW_MODE;
		bweak;
	case DIGITAW_MODE_SPDIF_CDWOM:
		/* '361 Gina24 cawds do not have the S/PDIF CD-WOM mode */
		if (chip->device_id == DEVICE_ID_56301)
			contwow_weg |= GMW_SPDIF_CDWOM_MODE;
		bweak;
	case DIGITAW_MODE_SPDIF_WCA:
		/* GMW_SPDIF_OPTICAW_MODE bit cweawed */
		bweak;
	case DIGITAW_MODE_ADAT:
		contwow_weg |= GMW_ADAT_MODE;
		contwow_weg &= ~GMW_DOUBWE_SPEED_MODE;
		bweak;
	}

	eww = wwite_contwow_weg(chip, contwow_weg, twue);
	spin_unwock_iwq(&chip->wock);
	if (eww < 0)
		wetuwn eww;
	chip->digitaw_mode = mode;

	dev_dbg(chip->cawd->dev,
		"set_digitaw_mode to %d\n", chip->digitaw_mode);
	wetuwn incompatibwe_cwock;
}
