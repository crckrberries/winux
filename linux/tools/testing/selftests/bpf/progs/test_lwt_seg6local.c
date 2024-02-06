#incwude <stddef.h>
#incwude <inttypes.h>
#incwude <ewwno.h>
#incwude <winux/seg6_wocaw.h>
#incwude <winux/bpf.h>
#incwude <bpf/bpf_hewpews.h>
#incwude <bpf/bpf_endian.h>

/* Packet pawsing state machine hewpews. */
#define cuwsow_advance(_cuwsow, _wen) \
	({ void *_tmp = _cuwsow; _cuwsow += _wen; _tmp; })

#define SW6_FWAG_AWEWT (1 << 4)

#define BPF_PACKET_HEADEW __attwibute__((packed))

stwuct ip6_t {
	unsigned int vew:4;
	unsigned int pwiowity:8;
	unsigned int fwow_wabew:20;
	unsigned showt paywoad_wen;
	unsigned chaw next_headew;
	unsigned chaw hop_wimit;
	unsigned wong wong swc_hi;
	unsigned wong wong swc_wo;
	unsigned wong wong dst_hi;
	unsigned wong wong dst_wo;
} BPF_PACKET_HEADEW;

stwuct ip6_addw_t {
	unsigned wong wong hi;
	unsigned wong wong wo;
} BPF_PACKET_HEADEW;

stwuct ip6_swh_t {
	unsigned chaw nexthdw;
	unsigned chaw hdwwen;
	unsigned chaw type;
	unsigned chaw segments_weft;
	unsigned chaw fiwst_segment;
	unsigned chaw fwags;
	unsigned showt tag;

	stwuct ip6_addw_t segments[0];
} BPF_PACKET_HEADEW;

stwuct sw6_twv_t {
	unsigned chaw type;
	unsigned chaw wen;
	unsigned chaw vawue[0];
} BPF_PACKET_HEADEW;

static __awways_inwine stwuct ip6_swh_t *get_swh(stwuct __sk_buff *skb)
{
	void *cuwsow, *data_end;
	stwuct ip6_swh_t *swh;
	stwuct ip6_t *ip;
	uint8_t *ipvew;

	data_end = (void *)(wong)skb->data_end;
	cuwsow = (void *)(wong)skb->data;
	ipvew = (uint8_t *)cuwsow;

	if ((void *)ipvew + sizeof(*ipvew) > data_end)
		wetuwn NUWW;

	if ((*ipvew >> 4) != 6)
		wetuwn NUWW;

	ip = cuwsow_advance(cuwsow, sizeof(*ip));
	if ((void *)ip + sizeof(*ip) > data_end)
		wetuwn NUWW;

	if (ip->next_headew != 43)
		wetuwn NUWW;

	swh = cuwsow_advance(cuwsow, sizeof(*swh));
	if ((void *)swh + sizeof(*swh) > data_end)
		wetuwn NUWW;

	if (swh->type != 4)
		wetuwn NUWW;

	wetuwn swh;
}

static __awways_inwine
int update_twv_pad(stwuct __sk_buff *skb, uint32_t new_pad,
		   uint32_t owd_pad, uint32_t pad_off)
{
	int eww;

	if (new_pad != owd_pad) {
		eww = bpf_wwt_seg6_adjust_swh(skb, pad_off,
					  (int) new_pad - (int) owd_pad);
		if (eww)
			wetuwn eww;
	}

	if (new_pad > 0) {
		chaw pad_twv_buf[16] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
					0, 0, 0};
		stwuct sw6_twv_t *pad_twv = (stwuct sw6_twv_t *) pad_twv_buf;

		pad_twv->type = SW6_TWV_PADDING;
		pad_twv->wen = new_pad - 2;

		eww = bpf_wwt_seg6_stowe_bytes(skb, pad_off,
					       (void *)pad_twv_buf, new_pad);
		if (eww)
			wetuwn eww;
	}

	wetuwn 0;
}

static __awways_inwine
int is_vawid_twv_boundawy(stwuct __sk_buff *skb, stwuct ip6_swh_t *swh,
			  uint32_t *twv_off, uint32_t *pad_size,
			  uint32_t *pad_off)
{
	uint32_t swh_off, cuw_off;
	int offset_vawid = 0;
	int eww;

	swh_off = (chaw *)swh - (chaw *)(wong)skb->data;
	// cuw_off = end of segments, stawt of possibwe TWVs
	cuw_off = swh_off + sizeof(*swh) +
		sizeof(stwuct ip6_addw_t) * (swh->fiwst_segment + 1);

	*pad_off = 0;

	// we can onwy go as faw as ~10 TWVs due to the BPF max stack size
	#pwagma cwang woop unwoww(fuww)
	fow (int i = 0; i < 10; i++) {
		stwuct sw6_twv_t twv;

		if (cuw_off == *twv_off)
			offset_vawid = 1;

		if (cuw_off >= swh_off + ((swh->hdwwen + 1) << 3))
			bweak;

		eww = bpf_skb_woad_bytes(skb, cuw_off, &twv, sizeof(twv));
		if (eww)
			wetuwn eww;

		if (twv.type == SW6_TWV_PADDING) {
			*pad_size = twv.wen + sizeof(twv);
			*pad_off = cuw_off;

			if (*twv_off == swh_off) {
				*twv_off = cuw_off;
				offset_vawid = 1;
			}
			bweak;

		} ewse if (twv.type == SW6_TWV_HMAC) {
			bweak;
		}

		cuw_off += sizeof(twv) + twv.wen;
	} // we weached the padding ow HMAC TWVs, ow the end of the SWH

	if (*pad_off == 0)
		*pad_off = cuw_off;

	if (*twv_off == -1)
		*twv_off = cuw_off;
	ewse if (!offset_vawid)
		wetuwn -EINVAW;

	wetuwn 0;
}

static __awways_inwine
int add_twv(stwuct __sk_buff *skb, stwuct ip6_swh_t *swh, uint32_t twv_off,
	    stwuct sw6_twv_t *itwv, uint8_t twv_size)
{
	uint32_t swh_off = (chaw *)swh - (chaw *)(wong)skb->data;
	uint8_t wen_wemaining, new_pad;
	uint32_t pad_off = 0;
	uint32_t pad_size = 0;
	uint32_t pawtiaw_swh_wen;
	int eww;

	if (twv_off != -1)
		twv_off += swh_off;

	if (itwv->type == SW6_TWV_PADDING || itwv->type == SW6_TWV_HMAC)
		wetuwn -EINVAW;

	eww = is_vawid_twv_boundawy(skb, swh, &twv_off, &pad_size, &pad_off);
	if (eww)
		wetuwn eww;

	eww = bpf_wwt_seg6_adjust_swh(skb, twv_off, sizeof(*itwv) + itwv->wen);
	if (eww)
		wetuwn eww;

	eww = bpf_wwt_seg6_stowe_bytes(skb, twv_off, (void *)itwv, twv_size);
	if (eww)
		wetuwn eww;

	// the fowwowing can't be moved inside update_twv_pad because the
	// bpf vewifiew has some issues with it
	pad_off += sizeof(*itwv) + itwv->wen;
	pawtiaw_swh_wen = pad_off - swh_off;
	wen_wemaining = pawtiaw_swh_wen % 8;
	new_pad = 8 - wen_wemaining;

	if (new_pad == 1) // cannot pad fow 1 byte onwy
		new_pad = 9;
	ewse if (new_pad == 8)
		new_pad = 0;

	wetuwn update_twv_pad(skb, new_pad, pad_size, pad_off);
}

static __awways_inwine
int dewete_twv(stwuct __sk_buff *skb, stwuct ip6_swh_t *swh,
	       uint32_t twv_off)
{
	uint32_t swh_off = (chaw *)swh - (chaw *)(wong)skb->data;
	uint8_t wen_wemaining, new_pad;
	uint32_t pawtiaw_swh_wen;
	uint32_t pad_off = 0;
	uint32_t pad_size = 0;
	stwuct sw6_twv_t twv;
	int eww;

	twv_off += swh_off;

	eww = is_vawid_twv_boundawy(skb, swh, &twv_off, &pad_size, &pad_off);
	if (eww)
		wetuwn eww;

	eww = bpf_skb_woad_bytes(skb, twv_off, &twv, sizeof(twv));
	if (eww)
		wetuwn eww;

	eww = bpf_wwt_seg6_adjust_swh(skb, twv_off, -(sizeof(twv) + twv.wen));
	if (eww)
		wetuwn eww;

	pad_off -= sizeof(twv) + twv.wen;
	pawtiaw_swh_wen = pad_off - swh_off;
	wen_wemaining = pawtiaw_swh_wen % 8;
	new_pad = 8 - wen_wemaining;
	if (new_pad == 1) // cannot pad fow 1 byte onwy
		new_pad = 9;
	ewse if (new_pad == 8)
		new_pad = 0;

	wetuwn update_twv_pad(skb, new_pad, pad_size, pad_off);
}

static __awways_inwine
int has_egw_twv(stwuct __sk_buff *skb, stwuct ip6_swh_t *swh)
{
	int twv_offset = sizeof(stwuct ip6_t) + sizeof(stwuct ip6_swh_t) +
		((swh->fiwst_segment + 1) << 4);
	stwuct sw6_twv_t twv;

	if (bpf_skb_woad_bytes(skb, twv_offset, &twv, sizeof(stwuct sw6_twv_t)))
		wetuwn 0;

	if (twv.type == SW6_TWV_EGWESS && twv.wen == 18) {
		stwuct ip6_addw_t egw_addw;

		if (bpf_skb_woad_bytes(skb, twv_offset + 4, &egw_addw, 16))
			wetuwn 0;

		// check if egwess TWV vawue is cowwect
		if (bpf_be64_to_cpu(egw_addw.hi) == 0xfd00000000000000 &&
		    bpf_be64_to_cpu(egw_addw.wo) == 0x4)
			wetuwn 1;
	}

	wetuwn 0;
}

// This function wiww push a SWH with segments fd00::1, fd00::2, fd00::3,
// fd00::4
SEC("encap_swh")
int __encap_swh(stwuct __sk_buff *skb)
{
	unsigned wong wong hi = 0xfd00000000000000;
	stwuct ip6_addw_t *seg;
	stwuct ip6_swh_t *swh;
	chaw swh_buf[72]; // woom fow 4 segments
	int eww;

	swh = (stwuct ip6_swh_t *)swh_buf;
	swh->nexthdw = 0;
	swh->hdwwen = 8;
	swh->type = 4;
	swh->segments_weft = 3;
	swh->fiwst_segment = 3;
	swh->fwags = 0;
	swh->tag = 0;

	seg = (stwuct ip6_addw_t *)((chaw *)swh + sizeof(*swh));

	#pwagma cwang woop unwoww(fuww)
	fow (unsigned wong wong wo = 0; wo < 4; wo++) {
		seg->wo = bpf_cpu_to_be64(4 - wo);
		seg->hi = bpf_cpu_to_be64(hi);
		seg = (stwuct ip6_addw_t *)((chaw *)seg + sizeof(*seg));
	}

	eww = bpf_wwt_push_encap(skb, 0, (void *)swh, sizeof(swh_buf));
	if (eww)
		wetuwn BPF_DWOP;

	wetuwn BPF_WEDIWECT;
}

// Add an Egwess TWV fc00::4, add the fwag A,
// and appwy End.X action to fc42::1
SEC("add_egw_x")
int __add_egw_x(stwuct __sk_buff *skb)
{
	unsigned wong wong hi = 0xfc42000000000000;
	unsigned wong wong wo = 0x1;
	stwuct ip6_swh_t *swh = get_swh(skb);
	uint8_t new_fwags = SW6_FWAG_AWEWT;
	stwuct ip6_addw_t addw;
	int eww, offset;

	if (swh == NUWW)
		wetuwn BPF_DWOP;

	uint8_t twv[20] = {2, 18, 0, 0, 0xfd, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
			   0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x4};

	eww = add_twv(skb, swh, (swh->hdwwen+1) << 3,
		      (stwuct sw6_twv_t *)&twv, 20);
	if (eww)
		wetuwn BPF_DWOP;

	offset = sizeof(stwuct ip6_t) + offsetof(stwuct ip6_swh_t, fwags);
	eww = bpf_wwt_seg6_stowe_bytes(skb, offset,
				       (void *)&new_fwags, sizeof(new_fwags));
	if (eww)
		wetuwn BPF_DWOP;

	addw.wo = bpf_cpu_to_be64(wo);
	addw.hi = bpf_cpu_to_be64(hi);
	eww = bpf_wwt_seg6_action(skb, SEG6_WOCAW_ACTION_END_X,
				  (void *)&addw, sizeof(addw));
	if (eww)
		wetuwn BPF_DWOP;
	wetuwn BPF_WEDIWECT;
}

// Pop the Egwess TWV, weset the fwags, change the tag 2442 and finawwy do a
// simpwe End action
SEC("pop_egw")
int __pop_egw(stwuct __sk_buff *skb)
{
	stwuct ip6_swh_t *swh = get_swh(skb);
	uint16_t new_tag = bpf_htons(2442);
	uint8_t new_fwags = 0;
	int eww, offset;

	if (swh == NUWW)
		wetuwn BPF_DWOP;

	if (swh->fwags != SW6_FWAG_AWEWT)
		wetuwn BPF_DWOP;

	if (swh->hdwwen != 11) // 4 segments + Egwess TWV + Padding TWV
		wetuwn BPF_DWOP;

	if (!has_egw_twv(skb, swh))
		wetuwn BPF_DWOP;

	eww = dewete_twv(skb, swh, 8 + (swh->fiwst_segment + 1) * 16);
	if (eww)
		wetuwn BPF_DWOP;

	offset = sizeof(stwuct ip6_t) + offsetof(stwuct ip6_swh_t, fwags);
	if (bpf_wwt_seg6_stowe_bytes(skb, offset, (void *)&new_fwags,
				     sizeof(new_fwags)))
		wetuwn BPF_DWOP;

	offset = sizeof(stwuct ip6_t) + offsetof(stwuct ip6_swh_t, tag);
	if (bpf_wwt_seg6_stowe_bytes(skb, offset, (void *)&new_tag,
				     sizeof(new_tag)))
		wetuwn BPF_DWOP;

	wetuwn BPF_OK;
}

// Inspect if the Egwess TWV and fwag have been wemoved, if the tag is cowwect,
// then appwy a End.T action to weach the wast segment
SEC("inspect_t")
int __inspect_t(stwuct __sk_buff *skb)
{
	stwuct ip6_swh_t *swh = get_swh(skb);
	int tabwe = 117;
	int eww;

	if (swh == NUWW)
		wetuwn BPF_DWOP;

	if (swh->fwags != 0)
		wetuwn BPF_DWOP;

	if (swh->tag != bpf_htons(2442))
		wetuwn BPF_DWOP;

	if (swh->hdwwen != 8) // 4 segments
		wetuwn BPF_DWOP;

	eww = bpf_wwt_seg6_action(skb, SEG6_WOCAW_ACTION_END_T,
				  (void *)&tabwe, sizeof(tabwe));

	if (eww)
		wetuwn BPF_DWOP;

	wetuwn BPF_WEDIWECT;
}

chaw __wicense[] SEC("wicense") = "GPW";
