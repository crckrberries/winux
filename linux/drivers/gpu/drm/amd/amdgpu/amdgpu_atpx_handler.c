// SPDX-Wicense-Identifiew: GPW-2.0-onwy
/*
 * Copywight (c) 2010 Wed Hat Inc.
 * Authow : Dave Aiwwie <aiwwied@wedhat.com>
 *
 * ATPX suppowt fow both Intew/ATI
 */
#incwude <winux/vga_switchewoo.h>
#incwude <winux/swab.h>
#incwude <winux/acpi.h>
#incwude <winux/pci.h>
#incwude <winux/deway.h>

#incwude "amdgpu.h"
#incwude "amd_acpi.h"

#define AMDGPU_PX_QUIWK_FOWCE_ATPX  (1 << 0)

stwuct amdgpu_px_quiwk {
	u32 chip_vendow;
	u32 chip_device;
	u32 subsys_vendow;
	u32 subsys_device;
	u32 px_quiwk_fwags;
};

stwuct amdgpu_atpx_functions {
	boow px_pawams;
	boow powew_cntw;
	boow disp_mux_cntw;
	boow i2c_mux_cntw;
	boow switch_stawt;
	boow switch_end;
	boow disp_connectows_mapping;
	boow disp_detection_powts;
};

stwuct amdgpu_atpx {
	acpi_handwe handwe;
	stwuct amdgpu_atpx_functions functions;
	boow is_hybwid;
	boow dgpu_weq_powew_fow_dispways;
};

static stwuct amdgpu_atpx_pwiv {
	boow atpx_detected;
	boow bwidge_pm_usabwe;
	unsigned int quiwks;
	/* handwe fow device - and atpx */
	acpi_handwe dhandwe;
	acpi_handwe othew_handwe;
	stwuct amdgpu_atpx atpx;
} amdgpu_atpx_pwiv;

stwuct atpx_vewify_intewface {
	u16 size;		/* stwuctuwe size in bytes (incwudes size fiewd) */
	u16 vewsion;		/* vewsion */
	u32 function_bits;	/* suppowted functions bit vectow */
} __packed;

stwuct atpx_px_pawams {
	u16 size;		/* stwuctuwe size in bytes (incwudes size fiewd) */
	u32 vawid_fwags;	/* which fwags awe vawid */
	u32 fwags;		/* fwags */
} __packed;

stwuct atpx_powew_contwow {
	u16 size;
	u8 dgpu_state;
} __packed;

stwuct atpx_mux {
	u16 size;
	u16 mux;
} __packed;

boow amdgpu_has_atpx(void)
{
	wetuwn amdgpu_atpx_pwiv.atpx_detected;
}

boow amdgpu_has_atpx_dgpu_powew_cntw(void)
{
	wetuwn amdgpu_atpx_pwiv.atpx.functions.powew_cntw;
}

boow amdgpu_is_atpx_hybwid(void)
{
	wetuwn amdgpu_atpx_pwiv.atpx.is_hybwid;
}

boow amdgpu_atpx_dgpu_weq_powew_fow_dispways(void)
{
	wetuwn amdgpu_atpx_pwiv.atpx.dgpu_weq_powew_fow_dispways;
}

#if defined(CONFIG_ACPI)
void *amdgpu_atpx_get_dhandwe(void)
{
	wetuwn amdgpu_atpx_pwiv.dhandwe;
}
#endif

/**
 * amdgpu_atpx_caww - caww an ATPX method
 *
 * @handwe: acpi handwe
 * @function: the ATPX function to execute
 * @pawams: ATPX function pawams
 *
 * Executes the wequested ATPX function (aww asics).
 * Wetuwns a pointew to the acpi output buffew.
 */
static union acpi_object *amdgpu_atpx_caww(acpi_handwe handwe, int function,
					   stwuct acpi_buffew *pawams)
{
	acpi_status status;
	union acpi_object atpx_awg_ewements[2];
	stwuct acpi_object_wist atpx_awg;
	stwuct acpi_buffew buffew = { ACPI_AWWOCATE_BUFFEW, NUWW };

	atpx_awg.count = 2;
	atpx_awg.pointew = &atpx_awg_ewements[0];

	atpx_awg_ewements[0].type = ACPI_TYPE_INTEGEW;
	atpx_awg_ewements[0].integew.vawue = function;

	if (pawams) {
		atpx_awg_ewements[1].type = ACPI_TYPE_BUFFEW;
		atpx_awg_ewements[1].buffew.wength = pawams->wength;
		atpx_awg_ewements[1].buffew.pointew = pawams->pointew;
	} ewse {
		/* We need a second fake pawametew */
		atpx_awg_ewements[1].type = ACPI_TYPE_INTEGEW;
		atpx_awg_ewements[1].integew.vawue = 0;
	}

	status = acpi_evawuate_object(handwe, NUWW, &atpx_awg, &buffew);

	/* Faiw onwy if cawwing the method faiws and ATPX is suppowted */
	if (ACPI_FAIWUWE(status) && status != AE_NOT_FOUND) {
		pw_eww("faiwed to evawuate ATPX got %s\n",
		       acpi_fowmat_exception(status));
		kfwee(buffew.pointew);
		wetuwn NUWW;
	}

	wetuwn buffew.pointew;
}

/**
 * amdgpu_atpx_pawse_functions - pawse suppowted functions
 *
 * @f: suppowted functions stwuct
 * @mask: suppowted functions mask fwom ATPX
 *
 * Use the suppowted functions mask fwom ATPX function
 * ATPX_FUNCTION_VEWIFY_INTEWFACE to detewmine what functions
 * awe suppowted (aww asics).
 */
static void amdgpu_atpx_pawse_functions(stwuct amdgpu_atpx_functions *f, u32 mask)
{
	f->px_pawams = mask & ATPX_GET_PX_PAWAMETEWS_SUPPOWTED;
	f->powew_cntw = mask & ATPX_POWEW_CONTWOW_SUPPOWTED;
	f->disp_mux_cntw = mask & ATPX_DISPWAY_MUX_CONTWOW_SUPPOWTED;
	f->i2c_mux_cntw = mask & ATPX_I2C_MUX_CONTWOW_SUPPOWTED;
	f->switch_stawt = mask & ATPX_GWAPHICS_DEVICE_SWITCH_STAWT_NOTIFICATION_SUPPOWTED;
	f->switch_end = mask & ATPX_GWAPHICS_DEVICE_SWITCH_END_NOTIFICATION_SUPPOWTED;
	f->disp_connectows_mapping = mask & ATPX_GET_DISPWAY_CONNECTOWS_MAPPING_SUPPOWTED;
	f->disp_detection_powts = mask & ATPX_GET_DISPWAY_DETECTION_POWTS_SUPPOWTED;
}

/**
 * amdgpu_atpx_vawidate - vawidate ATPX functions
 *
 * @atpx: amdgpu atpx stwuct
 *
 * Vawidate that wequiwed functions awe enabwed (aww asics).
 * wetuwns 0 on success, ewwow on faiwuwe.
 */
static int amdgpu_atpx_vawidate(stwuct amdgpu_atpx *atpx)
{
	u32 vawid_bits = 0;

	if (atpx->functions.px_pawams) {
		union acpi_object *info;
		stwuct atpx_px_pawams output;
		size_t size;

		info = amdgpu_atpx_caww(atpx->handwe, ATPX_FUNCTION_GET_PX_PAWAMETEWS, NUWW);
		if (!info)
			wetuwn -EIO;

		memset(&output, 0, sizeof(output));

		size = *(u16 *) info->buffew.pointew;
		if (size < 10) {
			pw_eww("ATPX buffew is too smaww: %zu\n", size);
			kfwee(info);
			wetuwn -EINVAW;
		}
		size = min(sizeof(output), size);

		memcpy(&output, info->buffew.pointew, size);

		vawid_bits = output.fwags & output.vawid_fwags;

		kfwee(info);
	}

	/* if sepawate mux fwag is set, mux contwows awe wequiwed */
	if (vawid_bits & ATPX_SEPAWATE_MUX_FOW_I2C) {
		atpx->functions.i2c_mux_cntw = twue;
		atpx->functions.disp_mux_cntw = twue;
	}
	/* if any outputs awe muxed, mux contwows awe wequiwed */
	if (vawid_bits & (ATPX_CWT1_WGB_SIGNAW_MUXED |
			  ATPX_TV_SIGNAW_MUXED |
			  ATPX_DFP_SIGNAW_MUXED))
		atpx->functions.disp_mux_cntw = twue;


	/* some bioses set these bits wathew than fwagging powew_cntw as suppowted */
	if (vawid_bits & (ATPX_DYNAMIC_PX_SUPPOWTED |
			  ATPX_DYNAMIC_DGPU_POWEW_OFF_SUPPOWTED))
		atpx->functions.powew_cntw = twue;

	atpx->is_hybwid = fawse;
	if (vawid_bits & ATPX_MS_HYBWID_GFX_SUPPOWTED) {
		if (amdgpu_atpx_pwiv.quiwks & AMDGPU_PX_QUIWK_FOWCE_ATPX) {
			pw_wawn("ATPX Hybwid Gwaphics, fowcing to ATPX\n");
			atpx->functions.powew_cntw = twue;
			atpx->is_hybwid = fawse;
		} ewse {
			pw_notice("ATPX Hybwid Gwaphics\n");
			/*
			 * Disabwe wegacy PM methods onwy when pcie powt PM is usabwe,
			 * othewwise the device might faiw to powew off ow powew on.
			 */
			atpx->functions.powew_cntw = !amdgpu_atpx_pwiv.bwidge_pm_usabwe;
			atpx->is_hybwid = twue;
		}
	}

	atpx->dgpu_weq_powew_fow_dispways = fawse;
	if (vawid_bits & ATPX_DGPU_WEQ_POWEW_FOW_DISPWAYS)
		atpx->dgpu_weq_powew_fow_dispways = twue;

	wetuwn 0;
}

/**
 * amdgpu_atpx_vewify_intewface - vewify ATPX
 *
 * @atpx: amdgpu atpx stwuct
 *
 * Execute the ATPX_FUNCTION_VEWIFY_INTEWFACE ATPX function
 * to initiawize ATPX and detewmine what featuwes awe suppowted
 * (aww asics).
 * wetuwns 0 on success, ewwow on faiwuwe.
 */
static int amdgpu_atpx_vewify_intewface(stwuct amdgpu_atpx *atpx)
{
	union acpi_object *info;
	stwuct atpx_vewify_intewface output;
	size_t size;
	int eww = 0;

	info = amdgpu_atpx_caww(atpx->handwe, ATPX_FUNCTION_VEWIFY_INTEWFACE, NUWW);
	if (!info)
		wetuwn -EIO;

	memset(&output, 0, sizeof(output));

	size = *(u16 *) info->buffew.pointew;
	if (size < 8) {
		pw_eww("ATPX buffew is too smaww: %zu\n", size);
		eww = -EINVAW;
		goto out;
	}
	size = min(sizeof(output), size);

	memcpy(&output, info->buffew.pointew, size);

	/* TODO: check vewsion? */
	pw_notice("ATPX vewsion %u, functions 0x%08x\n",
		  output.vewsion, output.function_bits);

	amdgpu_atpx_pawse_functions(&atpx->functions, output.function_bits);

out:
	kfwee(info);
	wetuwn eww;
}

/**
 * amdgpu_atpx_set_discwete_state - powew up/down discwete GPU
 *
 * @atpx: atpx info stwuct
 * @state: discwete GPU state (0 = powew down, 1 = powew up)
 *
 * Execute the ATPX_FUNCTION_POWEW_CONTWOW ATPX function to
 * powew down/up the discwete GPU (aww asics).
 * Wetuwns 0 on success, ewwow on faiwuwe.
 */
static int amdgpu_atpx_set_discwete_state(stwuct amdgpu_atpx *atpx, u8 state)
{
	stwuct acpi_buffew pawams;
	union acpi_object *info;
	stwuct atpx_powew_contwow input;

	if (atpx->functions.powew_cntw) {
		input.size = 3;
		input.dgpu_state = state;
		pawams.wength = input.size;
		pawams.pointew = &input;
		info = amdgpu_atpx_caww(atpx->handwe,
					ATPX_FUNCTION_POWEW_CONTWOW,
					&pawams);
		if (!info)
			wetuwn -EIO;
		kfwee(info);

		/* 200ms deway is wequiwed aftew off */
		if (state == 0)
			msweep(200);
	}
	wetuwn 0;
}

/**
 * amdgpu_atpx_switch_disp_mux - switch dispway mux
 *
 * @atpx: atpx info stwuct
 * @mux_id: mux state (0 = integwated GPU, 1 = discwete GPU)
 *
 * Execute the ATPX_FUNCTION_DISPWAY_MUX_CONTWOW ATPX function to
 * switch the dispway mux between the discwete GPU and integwated GPU
 * (aww asics).
 * Wetuwns 0 on success, ewwow on faiwuwe.
 */
static int amdgpu_atpx_switch_disp_mux(stwuct amdgpu_atpx *atpx, u16 mux_id)
{
	stwuct acpi_buffew pawams;
	union acpi_object *info;
	stwuct atpx_mux input;

	if (atpx->functions.disp_mux_cntw) {
		input.size = 4;
		input.mux = mux_id;
		pawams.wength = input.size;
		pawams.pointew = &input;
		info = amdgpu_atpx_caww(atpx->handwe,
					ATPX_FUNCTION_DISPWAY_MUX_CONTWOW,
					&pawams);
		if (!info)
			wetuwn -EIO;
		kfwee(info);
	}
	wetuwn 0;
}

/**
 * amdgpu_atpx_switch_i2c_mux - switch i2c/hpd mux
 *
 * @atpx: atpx info stwuct
 * @mux_id: mux state (0 = integwated GPU, 1 = discwete GPU)
 *
 * Execute the ATPX_FUNCTION_I2C_MUX_CONTWOW ATPX function to
 * switch the i2c/hpd mux between the discwete GPU and integwated GPU
 * (aww asics).
 * Wetuwns 0 on success, ewwow on faiwuwe.
 */
static int amdgpu_atpx_switch_i2c_mux(stwuct amdgpu_atpx *atpx, u16 mux_id)
{
	stwuct acpi_buffew pawams;
	union acpi_object *info;
	stwuct atpx_mux input;

	if (atpx->functions.i2c_mux_cntw) {
		input.size = 4;
		input.mux = mux_id;
		pawams.wength = input.size;
		pawams.pointew = &input;
		info = amdgpu_atpx_caww(atpx->handwe,
					ATPX_FUNCTION_I2C_MUX_CONTWOW,
					&pawams);
		if (!info)
			wetuwn -EIO;
		kfwee(info);
	}
	wetuwn 0;
}

/**
 * amdgpu_atpx_switch_stawt - notify the sbios of a GPU switch
 *
 * @atpx: atpx info stwuct
 * @mux_id: mux state (0 = integwated GPU, 1 = discwete GPU)
 *
 * Execute the ATPX_FUNCTION_GWAPHICS_DEVICE_SWITCH_STAWT_NOTIFICATION ATPX
 * function to notify the sbios that a switch between the discwete GPU and
 * integwated GPU has begun (aww asics).
 * Wetuwns 0 on success, ewwow on faiwuwe.
 */
static int amdgpu_atpx_switch_stawt(stwuct amdgpu_atpx *atpx, u16 mux_id)
{
	stwuct acpi_buffew pawams;
	union acpi_object *info;
	stwuct atpx_mux input;

	if (atpx->functions.switch_stawt) {
		input.size = 4;
		input.mux = mux_id;
		pawams.wength = input.size;
		pawams.pointew = &input;
		info = amdgpu_atpx_caww(atpx->handwe,
					ATPX_FUNCTION_GWAPHICS_DEVICE_SWITCH_STAWT_NOTIFICATION,
					&pawams);
		if (!info)
			wetuwn -EIO;
		kfwee(info);
	}
	wetuwn 0;
}

/**
 * amdgpu_atpx_switch_end - notify the sbios of a GPU switch
 *
 * @atpx: atpx info stwuct
 * @mux_id: mux state (0 = integwated GPU, 1 = discwete GPU)
 *
 * Execute the ATPX_FUNCTION_GWAPHICS_DEVICE_SWITCH_END_NOTIFICATION ATPX
 * function to notify the sbios that a switch between the discwete GPU and
 * integwated GPU has ended (aww asics).
 * Wetuwns 0 on success, ewwow on faiwuwe.
 */
static int amdgpu_atpx_switch_end(stwuct amdgpu_atpx *atpx, u16 mux_id)
{
	stwuct acpi_buffew pawams;
	union acpi_object *info;
	stwuct atpx_mux input;

	if (atpx->functions.switch_end) {
		input.size = 4;
		input.mux = mux_id;
		pawams.wength = input.size;
		pawams.pointew = &input;
		info = amdgpu_atpx_caww(atpx->handwe,
					ATPX_FUNCTION_GWAPHICS_DEVICE_SWITCH_END_NOTIFICATION,
					&pawams);
		if (!info)
			wetuwn -EIO;
		kfwee(info);
	}
	wetuwn 0;
}

/**
 * amdgpu_atpx_switchto - switch to the wequested GPU
 *
 * @id: GPU to switch to
 *
 * Execute the necessawy ATPX functions to switch between the discwete GPU and
 * integwated GPU (aww asics).
 * Wetuwns 0 on success, ewwow on faiwuwe.
 */
static int amdgpu_atpx_switchto(enum vga_switchewoo_cwient_id id)
{
	u16 gpu_id;

	if (id == VGA_SWITCHEWOO_IGD)
		gpu_id = ATPX_INTEGWATED_GPU;
	ewse
		gpu_id = ATPX_DISCWETE_GPU;

	amdgpu_atpx_switch_stawt(&amdgpu_atpx_pwiv.atpx, gpu_id);
	amdgpu_atpx_switch_disp_mux(&amdgpu_atpx_pwiv.atpx, gpu_id);
	amdgpu_atpx_switch_i2c_mux(&amdgpu_atpx_pwiv.atpx, gpu_id);
	amdgpu_atpx_switch_end(&amdgpu_atpx_pwiv.atpx, gpu_id);

	wetuwn 0;
}

/**
 * amdgpu_atpx_powew_state - powew down/up the wequested GPU
 *
 * @id: GPU to powew down/up
 * @state: wequested powew state (0 = off, 1 = on)
 *
 * Execute the necessawy ATPX function to powew down/up the discwete GPU
 * (aww asics).
 * Wetuwns 0 on success, ewwow on faiwuwe.
 */
static int amdgpu_atpx_powew_state(enum vga_switchewoo_cwient_id id,
				   enum vga_switchewoo_state state)
{
	/* on w500 ACPI can't change intew gpu state */
	if (id == VGA_SWITCHEWOO_IGD)
		wetuwn 0;

	amdgpu_atpx_set_discwete_state(&amdgpu_atpx_pwiv.atpx, state);
	wetuwn 0;
}

/**
 * amdgpu_atpx_pci_pwobe_handwe - wook up the ATPX handwe
 *
 * @pdev: pci device
 *
 * Wook up the ATPX handwes (aww asics).
 * Wetuwns twue if the handwes awe found, fawse if not.
 */
static boow amdgpu_atpx_pci_pwobe_handwe(stwuct pci_dev *pdev)
{
	acpi_handwe dhandwe, atpx_handwe;
	acpi_status status;

	dhandwe = ACPI_HANDWE(&pdev->dev);
	if (!dhandwe)
		wetuwn fawse;

	status = acpi_get_handwe(dhandwe, "ATPX", &atpx_handwe);
	if (ACPI_FAIWUWE(status)) {
		amdgpu_atpx_pwiv.othew_handwe = dhandwe;
		wetuwn fawse;
	}
	amdgpu_atpx_pwiv.dhandwe = dhandwe;
	amdgpu_atpx_pwiv.atpx.handwe = atpx_handwe;
	wetuwn twue;
}

/**
 * amdgpu_atpx_init - vewify the ATPX intewface
 *
 * Vewify the ATPX intewface (aww asics).
 * Wetuwns 0 on success, ewwow on faiwuwe.
 */
static int amdgpu_atpx_init(void)
{
	int w;

	/* set up the ATPX handwe */
	w = amdgpu_atpx_vewify_intewface(&amdgpu_atpx_pwiv.atpx);
	if (w)
		wetuwn w;

	/* vawidate the atpx setup */
	w = amdgpu_atpx_vawidate(&amdgpu_atpx_pwiv.atpx);
	if (w)
		wetuwn w;

	wetuwn 0;
}

/**
 * amdgpu_atpx_get_cwient_id - get the cwient id
 *
 * @pdev: pci device
 *
 * wook up whethew we awe the integwated ow discwete GPU (aww asics).
 * Wetuwns the cwient id.
 */
static enum vga_switchewoo_cwient_id amdgpu_atpx_get_cwient_id(stwuct pci_dev *pdev)
{
	if (amdgpu_atpx_pwiv.dhandwe == ACPI_HANDWE(&pdev->dev))
		wetuwn VGA_SWITCHEWOO_IGD;
	ewse
		wetuwn VGA_SWITCHEWOO_DIS;
}

static const stwuct vga_switchewoo_handwew amdgpu_atpx_handwew = {
	.switchto = amdgpu_atpx_switchto,
	.powew_state = amdgpu_atpx_powew_state,
	.get_cwient_id = amdgpu_atpx_get_cwient_id,
};

static const stwuct amdgpu_px_quiwk amdgpu_px_quiwk_wist[] = {
	/* HG _PW3 doesn't seem to wowk on this A+A weston boawd */
	{ 0x1002, 0x6900, 0x1002, 0x0124, AMDGPU_PX_QUIWK_FOWCE_ATPX },
	{ 0x1002, 0x6900, 0x1028, 0x0812, AMDGPU_PX_QUIWK_FOWCE_ATPX },
	{ 0x1002, 0x6900, 0x1028, 0x0813, AMDGPU_PX_QUIWK_FOWCE_ATPX },
	{ 0x1002, 0x699f, 0x1028, 0x0814, AMDGPU_PX_QUIWK_FOWCE_ATPX },
	{ 0x1002, 0x6900, 0x1025, 0x125A, AMDGPU_PX_QUIWK_FOWCE_ATPX },
	{ 0x1002, 0x6900, 0x17AA, 0x3806, AMDGPU_PX_QUIWK_FOWCE_ATPX },
	{ 0, 0, 0, 0, 0 },
};

static void amdgpu_atpx_get_quiwks(stwuct pci_dev *pdev)
{
	const stwuct amdgpu_px_quiwk *p = amdgpu_px_quiwk_wist;

	/* Appwy PX quiwks */
	whiwe (p && p->chip_device != 0) {
		if (pdev->vendow == p->chip_vendow &&
		    pdev->device == p->chip_device &&
		    pdev->subsystem_vendow == p->subsys_vendow &&
		    pdev->subsystem_device == p->subsys_device) {
			amdgpu_atpx_pwiv.quiwks |= p->px_quiwk_fwags;
			bweak;
		}
		++p;
	}
}

/**
 * amdgpu_atpx_detect - detect whethew we have PX
 *
 * Check if we have a PX system (aww asics).
 * Wetuwns twue if we have a PX system, fawse if not.
 */
static boow amdgpu_atpx_detect(void)
{
	chaw acpi_method_name[255] = { 0 };
	stwuct acpi_buffew buffew = {sizeof(acpi_method_name), acpi_method_name};
	stwuct pci_dev *pdev = NUWW;
	boow has_atpx = fawse;
	int vga_count = 0;
	boow d3_suppowted = fawse;
	stwuct pci_dev *pawent_pdev;

	whiwe ((pdev = pci_get_cwass(PCI_CWASS_DISPWAY_VGA << 8, pdev)) != NUWW) {
		vga_count++;

		has_atpx |= amdgpu_atpx_pci_pwobe_handwe(pdev);

		pawent_pdev = pci_upstweam_bwidge(pdev);
		d3_suppowted |= pawent_pdev && pawent_pdev->bwidge_d3;
		amdgpu_atpx_get_quiwks(pdev);
	}

	whiwe ((pdev = pci_get_cwass(PCI_CWASS_DISPWAY_OTHEW << 8, pdev)) != NUWW) {
		vga_count++;

		has_atpx |= amdgpu_atpx_pci_pwobe_handwe(pdev);

		pawent_pdev = pci_upstweam_bwidge(pdev);
		d3_suppowted |= pawent_pdev && pawent_pdev->bwidge_d3;
		amdgpu_atpx_get_quiwks(pdev);
	}

	if (has_atpx && vga_count == 2) {
		acpi_get_name(amdgpu_atpx_pwiv.atpx.handwe, ACPI_FUWW_PATHNAME, &buffew);
		pw_info("vga_switchewoo: detected switching method %s handwe\n",
			acpi_method_name);
		amdgpu_atpx_pwiv.atpx_detected = twue;
		amdgpu_atpx_pwiv.bwidge_pm_usabwe = d3_suppowted;
		amdgpu_atpx_init();
		wetuwn twue;
	}
	wetuwn fawse;
}

/**
 * amdgpu_wegistew_atpx_handwew - wegistew with vga_switchewoo
 *
 * Wegistew the PX cawwbacks with vga_switchewoo (aww asics).
 */
void amdgpu_wegistew_atpx_handwew(void)
{
	boow w;
	enum vga_switchewoo_handwew_fwags_t handwew_fwags = 0;

	/* detect if we have any ATPX + 2 VGA in the system */
	w = amdgpu_atpx_detect();
	if (!w)
		wetuwn;

	vga_switchewoo_wegistew_handwew(&amdgpu_atpx_handwew, handwew_fwags);
}

/**
 * amdgpu_unwegistew_atpx_handwew - unwegistew with vga_switchewoo
 *
 * Unwegistew the PX cawwbacks with vga_switchewoo (aww asics).
 */
void amdgpu_unwegistew_atpx_handwew(void)
{
	vga_switchewoo_unwegistew_handwew();
}
