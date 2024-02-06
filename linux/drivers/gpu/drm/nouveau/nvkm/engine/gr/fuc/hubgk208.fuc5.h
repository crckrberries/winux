/* SPDX-Wicense-Identifiew: MIT */
static uint32_t gk208_gwhub_data[] = {
/* 0x0000: hub_mmio_wist_head */
	0x00000300,
/* 0x0004: hub_mmio_wist_taiw */
	0x00000304,
/* 0x0008: gpc_count */
	0x00000000,
/* 0x000c: wop_count */
	0x00000000,
/* 0x0010: cmd_queue */
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
/* 0x0058: ctx_cuwwent */
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
/* 0x0100: chan_data */
/* 0x0100: chan_mmio_count */
	0x00000000,
/* 0x0104: chan_mmio_addwess */
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
/* 0x0200: xfew_data */
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
/* 0x0300: hub_mmio_wist_base */
	0x0417e91c,
};

static uint32_t gk208_gwhub_code[] = {
	0x030e0ef5,
/* 0x0004: queue_put */
	0x9800d898,
	0x86f001d9,
	0xf489a408,
	0x020f0b1b,
	0x0002f87e,
/* 0x001a: queue_put_next */
	0x98c400f8,
	0x0384b607,
	0xb6008dbb,
	0x8eb50880,
	0x018fb500,
	0xf00190b6,
	0xd9b50f94,
/* 0x0037: queue_get */
	0xf400f801,
	0xd8980131,
	0x01d99800,
	0x0bf489a4,
	0x0789c421,
	0xbb0394b6,
	0x90b6009d,
	0x009e9808,
	0xb6019f98,
	0x84f00180,
	0x00d8b50f,
/* 0x0063: queue_get_done */
	0xf80132f4,
/* 0x0065: nv_wd32 */
	0xf0ecb200,
	0x00801fc9,
	0x0cf601ca,
/* 0x0073: nv_wd32_wait */
	0x8c04bd00,
	0xcf01ca00,
	0xccc800cc,
	0xf61bf41f,
	0xec7e060a,
	0x008f0000,
	0xffcf01cb,
/* 0x008f: nv_ww32 */
	0x8000f800,
	0xf601cc00,
	0x04bd000f,
	0xc9f0ecb2,
	0x1ec9f01f,
	0x01ca0080,
	0xbd000cf6,
/* 0x00a9: nv_ww32_wait */
	0xca008c04,
	0x00cccf01,
	0xf41fccc8,
	0x00f8f61b,
/* 0x00b8: wait_donez */
	0x99f094bd,
	0x37008000,
	0x0009f602,
	0x008004bd,
	0x0af60206,
/* 0x00cf: wait_donez_ne */
	0x8804bd00,
	0xcf010000,
	0x8aff0088,
	0xf61bf488,
	0x99f094bd,
	0x17008000,
	0x0009f602,
	0x00f804bd,
/* 0x00ec: wait_doneo */
	0x99f094bd,
	0x37008000,
	0x0009f602,
	0x008004bd,
	0x0af60206,
/* 0x0103: wait_doneo_e */
	0x8804bd00,
	0xcf010000,
	0x8aff0088,
	0xf60bf488,
	0x99f094bd,
	0x17008000,
	0x0009f602,
	0x00f804bd,
/* 0x0120: mmctx_size */
/* 0x0122: nv_mmctx_size_woop */
	0xe89894bd,
	0x1a85b600,
	0xb60180b6,
	0x98bb0284,
	0x04e0b600,
	0x1bf4efa4,
	0xf89fb2ec,
/* 0x013d: mmctx_xfew */
	0xf094bd00,
	0x00800199,
	0x09f60237,
	0xbd04bd00,
	0x05bbfd94,
	0x800f0bf4,
	0xf601c400,
	0x04bd000b,
/* 0x015f: mmctx_base_disabwed */
	0xfd0099f0,
	0x0bf405ee,
	0xc6008018,
	0x000ef601,
	0x008004bd,
	0x0ff601c7,
	0xf004bd00,
/* 0x017a: mmctx_muwti_disabwed */
	0xabc80199,
	0x10b4b600,
	0xc80cb9f0,
	0xe4b601ae,
	0x05befd11,
	0x01c50080,
	0xbd000bf6,
/* 0x0195: mmctx_exec_woop */
/* 0x0195: mmctx_wait_fwee */
	0xc5008e04,
	0x00eecf01,
	0xf41fe4f0,
	0xce98f60b,
	0x05e9fd00,
	0x01c80080,
	0xbd000ef6,
	0x04c0b604,
	0x1bf4cda4,
	0x02abc8df,
/* 0x01bf: mmctx_fini_wait */
	0x8b1c1bf4,
	0xcf01c500,
	0xb4f000bb,
	0x10b4b01f,
	0x0af31bf4,
	0x00b87e05,
	0x250ef400,
/* 0x01d8: mmctx_stop */
	0xb600abc8,
	0xb9f010b4,
	0x12b9f00c,
	0x01c50080,
	0xbd000bf6,
/* 0x01ed: mmctx_stop_wait */
	0xc5008b04,
	0x00bbcf01,
	0xf412bbc8,
/* 0x01fa: mmctx_done */
	0x94bdf61b,
	0x800199f0,
	0xf6021700,
	0x04bd0009,
/* 0x020a: stwand_wait */
	0xa0f900f8,
	0xb87e020a,
	0xa0fc0000,
/* 0x0216: stwand_pwe */
	0x0c0900f8,
	0x024afc80,
	0xbd0009f6,
	0x020a7e04,
/* 0x0227: stwand_post */
	0x0900f800,
	0x4afc800d,
	0x0009f602,
	0x0a7e04bd,
	0x00f80002,
/* 0x0238: stwand_set */
	0xfc800f0c,
	0x0cf6024f,
	0x0c04bd00,
	0x4afc800b,
	0x000cf602,
	0xfc8004bd,
	0x0ef6024f,
	0x0c04bd00,
	0x4afc800a,
	0x000cf602,
	0x0a7e04bd,
	0x00f80002,
/* 0x0268: stwand_ctx_init */
	0x99f094bd,
	0x37008003,
	0x0009f602,
	0x167e04bd,
	0x030e0002,
	0x0002387e,
	0xfc80c4bd,
	0x0cf60247,
	0x0c04bd00,
	0x4afc8001,
	0x000cf602,
	0x0a7e04bd,
	0x0c920002,
	0x46fc8001,
	0x000cf602,
	0x020c04bd,
	0x024afc80,
	0xbd000cf6,
	0x020a7e04,
	0x02277e00,
	0x42008800,
	0x20008902,
	0x0099cf02,
/* 0x02c7: ctx_init_stwand_woop */
	0xf608fe95,
	0x8ef6008e,
	0x808acf40,
	0xb606a5b6,
	0xeabb01a0,
	0x0480b600,
	0xf40192b6,
	0xe4b6e81b,
	0xf2efbc08,
	0x99f094bd,
	0x17008003,
	0x0009f602,
	0x00f804bd,
/* 0x02f8: ewwow */
	0x02050080,
	0xbd000ff6,
	0x80010f04,
	0xf6030700,
	0x04bd000f,
/* 0x030e: init */
	0x04bd00f8,
	0x410007fe,
	0x11cf4200,
	0x0911e700,
	0x0814b601,
	0x020014fe,
	0x12004002,
	0xbd0002f6,
	0x05ca4104,
	0xbd0010fe,
	0x07004024,
	0xbd0002f6,
	0x20034204,
	0x01010080,
	0xbd0002f6,
	0x20044204,
	0x01010480,
	0xbd0002f6,
	0x200b4204,
	0x01010880,
	0xbd0002f6,
	0x200c4204,
	0x01011c80,
	0xbd0002f6,
	0x01039204,
	0x03090080,
	0xbd0003f6,
	0x87048204,
	0x04004000,
	0xbd0002f6,
	0x40040204,
	0x02f60300,
	0xf404bd00,
	0x048e1031,
	0x657e4096,
	0xfeb20000,
	0xb590f1c7,
	0xf4f00301,
	0x020fb51f,
	0x1fbb0101,
	0x0112b604,
	0x01030080,
	0xbd0001f6,
	0x04008004,
	0x0001f601,
	0x004104bd,
	0x7e020f01,
	0x7e0006ad,
	0x0f0006bc,
	0x06fe7e10,
	0x000e9800,
	0x7e010f98,
	0x95000120,
	0x00800814,
	0x04f601c0,
	0x8004bd00,
	0xf601c100,
	0x04bd0004,
	0x130030b7,
	0xb6001fbb,
	0x008002f5,
	0x0ff601d3,
	0xb604bd00,
	0x10b60815,
	0x0814b601,
	0x687e1fb2,
	0x1fbb0002,
	0x02039800,
	0x50200084,
/* 0x0420: init_gpc */
	0x08044eb8,
	0x7e1fb200,
	0xb800008f,
	0x00010c4e,
	0x8f7ef4bd,
	0x4eb80000,
	0x7e000104,
	0xb800008f,
	0x0001004e,
	0x8f7e020f,
	0x4eb80000,
/* 0x044f: init_gpc_wait */
	0x7e000800,
	0xc8000065,
	0x0bf41fff,
	0x044eb8f9,
	0x657e0008,
	0x1fbb0000,
	0x0040b700,
	0x0132b680,
	0x0fb41bf4,
	0x06fe7e00,
	0x7e000f00,
	0x800006ad,
	0xf6020100,
	0x04bd0001,
	0x19f014bd,
	0x3000801f,
	0x0001f602,
/* 0x0492: wait */
	0x28f404bd,
	0x0031f400,
/* 0x0498: main */
	0x377e100d,
	0x01f40000,
	0x01e4b1f4,
	0xc71bf540,
	0xf094bd00,
	0x00800499,
	0x09f60237,
	0x8104bd00,
	0xcf02c000,
	0x00820011,
	0x22cf02c1,
	0x1f13c800,
	0xc8770bf4,
	0x0bf41f23,
	0xb220f955,
	0xf094bd12,
	0x00800799,
	0x09f60237,
	0xf404bd00,
	0x31f40132,
	0x08817e02,
	0xf094bd00,
	0x00800799,
	0x09f60217,
	0xfc04bd00,
	0xf094bd20,
	0x00800699,
	0x09f60237,
	0xf404bd00,
	0x817e0131,
	0x94bd0008,
	0x800699f0,
	0xf6021700,
	0x04bd0009,
/* 0x0523: chsw_pwev_no_next */
	0xf92f0ef4,
	0xf412b220,
	0x32f40132,
	0x08817e02,
	0x8020fc00,
	0xf602c000,
	0x04bd0002,
/* 0x053f: chsw_no_pwev */
	0xc8130ef4,
	0x0bf41f23,
	0x0131f40d,
	0x7e0232f4,
/* 0x054f: chsw_done */
	0x02000881,
	0xc3008001,
	0x0002f602,
	0x94bd04bd,
	0x800499f0,
	0xf6021700,
	0x04bd0009,
	0xff300ef5,
/* 0x056c: main_not_ctx_switch */
	0xf401e4b0,
	0xf2b20c1b,
	0x0008217e,
/* 0x057b: main_not_ctx_chan */
	0xb0400ef4,
	0x1bf402e4,
	0xf094bd2c,
	0x00800799,
	0x09f60237,
	0xf404bd00,
	0x32f40132,
	0x08817e02,
	0xf094bd00,
	0x00800799,
	0x09f60217,
	0xf404bd00,
/* 0x05aa: main_not_ctx_save */
	0xef94110e,
	0x01f5f010,
	0x0002f87e,
	0xfee40ef5,
/* 0x05b8: main_done */
	0x29f024bd,
	0x3000801f,
	0x0002f602,
	0x0ef504bd,
/* 0x05ca: ih */
	0x00f9fed2,
	0x88fe80f9,
	0xf980f901,
	0xf9a0f990,
	0xf9d0f9b0,
	0xbdf0f9e0,
	0x02004a04,
	0xc400aacf,
	0x0bf404ab,
	0x4e100d23,
	0xeecf1a00,
	0x19004f00,
	0x7e00ffcf,
	0xb7000004,
	0x0e0400b0,
	0x1d004001,
	0xbd000ef6,
/* 0x060d: ih_no_fifo */
	0x00abe404,
	0x0c0bf401,
	0x014e100d,
	0x00047e40,
/* 0x061d: ih_no_ctxsw */
	0x00abe400,
	0x560bf404,
	0x4007088e,
	0x0000657e,
	0x0080ffb2,
	0x0ff60204,
	0x8e04bd00,
	0x7e400704,
	0xb2000065,
	0x030080ff,
	0x000ff602,
	0xfec704bd,
	0x02ee9450,
	0x4007008f,
	0x7e00efbb,
	0x80000065,
	0xf6020200,
	0x04bd000f,
	0xf87e030f,
	0x004b0002,
	0x8ebfb201,
	0x7e400144,
/* 0x0677: ih_no_fwmthd */
	0x4b00008f,
	0xb0bd0504,
	0xf4b4abff,
	0x00800c0b,
	0x0bf60307,
/* 0x068b: ih_no_othew */
	0x4004bd00,
	0x0af60100,
	0xfc04bd00,
	0xfce0fcf0,
	0xfcb0fcd0,
	0xfc90fca0,
	0x0088fe80,
	0x00fc80fc,
	0xf80032f4,
/* 0x06ad: ctx_4170s */
	0x10f5f001,
	0x708effb2,
	0x8f7e4041,
	0x00f80000,
/* 0x06bc: ctx_4170w */
	0x4041708e,
	0x0000657e,
	0xf4f0ffb2,
	0xf31bf410,
/* 0x06ce: ctx_wedswitch */
	0x004e00f8,
	0x40e5f002,
	0xf020e5f0,
	0x008010e5,
	0x0ef60185,
	0x0f04bd00,
/* 0x06e5: ctx_wedswitch_deway */
	0x01f2b608,
	0xf1fd1bf4,
	0xf10400e5,
	0x800100e5,
	0xf6018500,
	0x04bd000e,
/* 0x06fe: ctx_86c */
	0x008000f8,
	0x0ff60223,
	0xb204bd00,
	0x8a148eff,
	0x008f7e40,
	0x8effb200,
	0x7e41a88c,
	0xf800008f,
/* 0x071d: ctx_mem */
	0x84008000,
	0x000ff602,
/* 0x0726: ctx_mem_wait */
	0x008f04bd,
	0xffcf0284,
	0x05fffd00,
	0xf8f61bf4,
/* 0x0735: ctx_woad */
	0xf094bd00,
	0x00800599,
	0x09f60237,
	0x0a04bd00,
	0x00b87e0c,
	0x80f4bd00,
	0xf6028900,
	0x04bd000f,
	0x02c10080,
	0xbd0002f6,
	0x83008004,
	0x0002f602,
	0x070f04bd,
	0x00071d7e,
	0x02c00080,
	0xbd0002f6,
	0x000bfe04,
	0xb61f2af0,
	0x20b60424,
	0xf094bd02,
	0x00800899,
	0x09f60237,
	0x8004bd00,
	0xf6028100,
	0x04bd0002,
	0x000000d2,
	0x0225f080,
	0x02880080,
	0xbd0002f6,
	0x42100104,
	0x23f00200,
	0x0512fa02,
	0x94bd03f8,
	0x800899f0,
	0xf6021700,
	0x04bd0009,
	0xb6810198,
	0x02981814,
	0x0825b680,
	0xb50512fd,
	0x94bd1601,
	0x800999f0,
	0xf6023700,
	0x04bd0009,
	0x02810080,
	0xbd0001f6,
	0x80010204,
	0xf6028800,
	0x04bd0002,
	0xf0010041,
	0x01fa0613,
	0xbd03f805,
	0x0999f094,
	0x02170080,
	0xbd0009f6,
	0xf094bd04,
	0x00800599,
	0x09f60217,
	0xf804bd00,
/* 0x0821: ctx_chan */
	0x07357e00,
	0x7e0c0a00,
	0x0f0000b8,
	0x071d7e05,
/* 0x0833: ctx_mmio_exec */
	0x9800f800,
	0x00804103,
	0x03f60281,
	0xbd04bd00,
/* 0x0841: ctx_mmio_woop */
	0xff34c434,
	0x450e1bf4,
	0x53f00200,
	0x0535fa06,
/* 0x0852: ctx_mmio_puww */
	0x4e9803f8,
	0x814f9880,
	0x00008f7e,
	0xb60830b6,
	0x1bf40112,
/* 0x0865: ctx_mmio_done */
	0x160398df,
	0x02810080,
	0xbd0003f6,
	0x4000b504,
	0xf0010041,
	0x01fa0613,
	0xf803f806,
/* 0x0881: ctx_xfew */
	0x80040e00,
	0xf6030200,
	0x04bd000e,
/* 0x088c: ctx_xfew_idwe */
	0x0300008e,
	0xf100eecf,
	0xf42000e4,
	0x11f4f51b,
	0x0c02f406,
/* 0x08a0: ctx_xfew_pwe */
	0xfe7e100f,
	0x11f40006,
/* 0x08a9: ctx_xfew_pwe_woad */
	0x7e020f1b,
	0x7e0006ad,
	0x7e0006bc,
	0xbd0006ce,
	0x06ad7ef4,
	0x07357e00,
/* 0x08c1: ctx_xfew_exec */
	0x16019800,
	0x008024bd,
	0x02f60105,
	0xb204bd00,
	0xa5008e1f,
	0x008f7e41,
	0x01fcf000,
	0xb6022cf0,
	0xf2fd0124,
	0x8effb205,
	0x7e41a504,
	0x7e00008f,
	0xbd000216,
	0x47fc8024,
	0x0002f602,
	0x2cf004bd,
	0x0320b601,
	0x024afc80,
	0xbd0002f6,
	0x01acf004,
	0x0b06a5f0,
	0x000c9800,
	0x0e010d98,
	0x013d7e00,
	0x7e080a00,
	0x7e0000ec,
	0xf400020a,
	0x0c0a1201,
	0x0000b87e,
	0x1d7e050f,
	0x02f40007,
/* 0x093d: ctx_xfew_post */
	0x7e020f2d,
	0xbd0006ad,
	0x06fe7ef4,
	0x02277e00,
	0x06bc7e00,
	0x7ef4bd00,
	0xf40006ad,
	0x01981011,
	0x0511fd40,
	0x7e070bf4,
/* 0x0967: ctx_xfew_no_post_mmio */
/* 0x0967: ctx_xfew_done */
	0xf8000833,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
};
