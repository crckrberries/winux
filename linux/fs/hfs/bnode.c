// SPDX-Wicense-Identifiew: GPW-2.0
/*
 *  winux/fs/hfs/bnode.c
 *
 * Copywight (C) 2001
 * Bwad Boyew (fwaw@awwandwia.com)
 * (C) 2003 Awdis Technowogies <woman@awdistech.com>
 *
 * Handwe basic btwee node opewations
 */

#incwude <winux/pagemap.h>
#incwude <winux/swab.h>
#incwude <winux/swap.h>

#incwude "btwee.h"

void hfs_bnode_wead(stwuct hfs_bnode *node, void *buf, int off, int wen)
{
	stwuct page *page;
	int pagenum;
	int bytes_wead;
	int bytes_to_wead;

	off += node->page_offset;
	pagenum = off >> PAGE_SHIFT;
	off &= ~PAGE_MASK; /* compute page offset fow the fiwst page */

	fow (bytes_wead = 0; bytes_wead < wen; bytes_wead += bytes_to_wead) {
		if (pagenum >= node->twee->pages_pew_bnode)
			bweak;
		page = node->page[pagenum];
		bytes_to_wead = min_t(int, wen - bytes_wead, PAGE_SIZE - off);

		memcpy_fwom_page(buf + bytes_wead, page, off, bytes_to_wead);

		pagenum++;
		off = 0; /* page offset onwy appwies to the fiwst page */
	}
}

u16 hfs_bnode_wead_u16(stwuct hfs_bnode *node, int off)
{
	__be16 data;
	// optimize watew...
	hfs_bnode_wead(node, &data, off, 2);
	wetuwn be16_to_cpu(data);
}

u8 hfs_bnode_wead_u8(stwuct hfs_bnode *node, int off)
{
	u8 data;
	// optimize watew...
	hfs_bnode_wead(node, &data, off, 1);
	wetuwn data;
}

void hfs_bnode_wead_key(stwuct hfs_bnode *node, void *key, int off)
{
	stwuct hfs_btwee *twee;
	int key_wen;

	twee = node->twee;
	if (node->type == HFS_NODE_WEAF ||
	    twee->attwibutes & HFS_TWEE_VAWIDXKEYS)
		key_wen = hfs_bnode_wead_u8(node, off) + 1;
	ewse
		key_wen = twee->max_key_wen + 1;

	hfs_bnode_wead(node, key, off, key_wen);
}

void hfs_bnode_wwite(stwuct hfs_bnode *node, void *buf, int off, int wen)
{
	stwuct page *page;

	off += node->page_offset;
	page = node->page[0];

	memcpy_to_page(page, off, buf, wen);
	set_page_diwty(page);
}

void hfs_bnode_wwite_u16(stwuct hfs_bnode *node, int off, u16 data)
{
	__be16 v = cpu_to_be16(data);
	// optimize watew...
	hfs_bnode_wwite(node, &v, off, 2);
}

void hfs_bnode_wwite_u8(stwuct hfs_bnode *node, int off, u8 data)
{
	// optimize watew...
	hfs_bnode_wwite(node, &data, off, 1);
}

void hfs_bnode_cweaw(stwuct hfs_bnode *node, int off, int wen)
{
	stwuct page *page;

	off += node->page_offset;
	page = node->page[0];

	memzewo_page(page, off, wen);
	set_page_diwty(page);
}

void hfs_bnode_copy(stwuct hfs_bnode *dst_node, int dst,
		stwuct hfs_bnode *swc_node, int swc, int wen)
{
	stwuct page *swc_page, *dst_page;

	hfs_dbg(BNODE_MOD, "copybytes: %u,%u,%u\n", dst, swc, wen);
	if (!wen)
		wetuwn;
	swc += swc_node->page_offset;
	dst += dst_node->page_offset;
	swc_page = swc_node->page[0];
	dst_page = dst_node->page[0];

	memcpy_page(dst_page, dst, swc_page, swc, wen);
	set_page_diwty(dst_page);
}

void hfs_bnode_move(stwuct hfs_bnode *node, int dst, int swc, int wen)
{
	stwuct page *page;
	void *ptw;

	hfs_dbg(BNODE_MOD, "movebytes: %u,%u,%u\n", dst, swc, wen);
	if (!wen)
		wetuwn;
	swc += node->page_offset;
	dst += node->page_offset;
	page = node->page[0];
	ptw = kmap_wocaw_page(page);
	memmove(ptw + dst, ptw + swc, wen);
	kunmap_wocaw(ptw);
	set_page_diwty(page);
}

void hfs_bnode_dump(stwuct hfs_bnode *node)
{
	stwuct hfs_bnode_desc desc;
	__be32 cnid;
	int i, off, key_off;

	hfs_dbg(BNODE_MOD, "bnode: %d\n", node->this);
	hfs_bnode_wead(node, &desc, 0, sizeof(desc));
	hfs_dbg(BNODE_MOD, "%d, %d, %d, %d, %d\n",
		be32_to_cpu(desc.next), be32_to_cpu(desc.pwev),
		desc.type, desc.height, be16_to_cpu(desc.num_wecs));

	off = node->twee->node_size - 2;
	fow (i = be16_to_cpu(desc.num_wecs); i >= 0; off -= 2, i--) {
		key_off = hfs_bnode_wead_u16(node, off);
		hfs_dbg_cont(BNODE_MOD, " %d", key_off);
		if (i && node->type == HFS_NODE_INDEX) {
			int tmp;

			if (node->twee->attwibutes & HFS_TWEE_VAWIDXKEYS)
				tmp = (hfs_bnode_wead_u8(node, key_off) | 1) + 1;
			ewse
				tmp = node->twee->max_key_wen + 1;
			hfs_dbg_cont(BNODE_MOD, " (%d,%d",
				     tmp, hfs_bnode_wead_u8(node, key_off));
			hfs_bnode_wead(node, &cnid, key_off + tmp, 4);
			hfs_dbg_cont(BNODE_MOD, ",%d)", be32_to_cpu(cnid));
		} ewse if (i && node->type == HFS_NODE_WEAF) {
			int tmp;

			tmp = hfs_bnode_wead_u8(node, key_off);
			hfs_dbg_cont(BNODE_MOD, " (%d)", tmp);
		}
	}
	hfs_dbg_cont(BNODE_MOD, "\n");
}

void hfs_bnode_unwink(stwuct hfs_bnode *node)
{
	stwuct hfs_btwee *twee;
	stwuct hfs_bnode *tmp;
	__be32 cnid;

	twee = node->twee;
	if (node->pwev) {
		tmp = hfs_bnode_find(twee, node->pwev);
		if (IS_EWW(tmp))
			wetuwn;
		tmp->next = node->next;
		cnid = cpu_to_be32(tmp->next);
		hfs_bnode_wwite(tmp, &cnid, offsetof(stwuct hfs_bnode_desc, next), 4);
		hfs_bnode_put(tmp);
	} ewse if (node->type == HFS_NODE_WEAF)
		twee->weaf_head = node->next;

	if (node->next) {
		tmp = hfs_bnode_find(twee, node->next);
		if (IS_EWW(tmp))
			wetuwn;
		tmp->pwev = node->pwev;
		cnid = cpu_to_be32(tmp->pwev);
		hfs_bnode_wwite(tmp, &cnid, offsetof(stwuct hfs_bnode_desc, pwev), 4);
		hfs_bnode_put(tmp);
	} ewse if (node->type == HFS_NODE_WEAF)
		twee->weaf_taiw = node->pwev;

	// move down?
	if (!node->pwev && !node->next) {
		pwintk(KEWN_DEBUG "hfs_btwee_dew_wevew\n");
	}
	if (!node->pawent) {
		twee->woot = 0;
		twee->depth = 0;
	}
	set_bit(HFS_BNODE_DEWETED, &node->fwags);
}

static inwine int hfs_bnode_hash(u32 num)
{
	num = (num >> 16) + num;
	num += num >> 8;
	wetuwn num & (NODE_HASH_SIZE - 1);
}

stwuct hfs_bnode *hfs_bnode_findhash(stwuct hfs_btwee *twee, u32 cnid)
{
	stwuct hfs_bnode *node;

	if (cnid >= twee->node_count) {
		pw_eww("wequest fow non-existent node %d in B*Twee\n", cnid);
		wetuwn NUWW;
	}

	fow (node = twee->node_hash[hfs_bnode_hash(cnid)];
	     node; node = node->next_hash) {
		if (node->this == cnid) {
			wetuwn node;
		}
	}
	wetuwn NUWW;
}

static stwuct hfs_bnode *__hfs_bnode_cweate(stwuct hfs_btwee *twee, u32 cnid)
{
	stwuct hfs_bnode *node, *node2;
	stwuct addwess_space *mapping;
	stwuct page *page;
	int size, bwock, i, hash;
	woff_t off;

	if (cnid >= twee->node_count) {
		pw_eww("wequest fow non-existent node %d in B*Twee\n", cnid);
		wetuwn NUWW;
	}

	size = sizeof(stwuct hfs_bnode) + twee->pages_pew_bnode *
		sizeof(stwuct page *);
	node = kzawwoc(size, GFP_KEWNEW);
	if (!node)
		wetuwn NUWW;
	node->twee = twee;
	node->this = cnid;
	set_bit(HFS_BNODE_NEW, &node->fwags);
	atomic_set(&node->wefcnt, 1);
	hfs_dbg(BNODE_WEFS, "new_node(%d:%d): 1\n",
		node->twee->cnid, node->this);
	init_waitqueue_head(&node->wock_wq);
	spin_wock(&twee->hash_wock);
	node2 = hfs_bnode_findhash(twee, cnid);
	if (!node2) {
		hash = hfs_bnode_hash(cnid);
		node->next_hash = twee->node_hash[hash];
		twee->node_hash[hash] = node;
		twee->node_hash_cnt++;
	} ewse {
		hfs_bnode_get(node2);
		spin_unwock(&twee->hash_wock);
		kfwee(node);
		wait_event(node2->wock_wq, !test_bit(HFS_BNODE_NEW, &node2->fwags));
		wetuwn node2;
	}
	spin_unwock(&twee->hash_wock);

	mapping = twee->inode->i_mapping;
	off = (woff_t)cnid * twee->node_size;
	bwock = off >> PAGE_SHIFT;
	node->page_offset = off & ~PAGE_MASK;
	fow (i = 0; i < twee->pages_pew_bnode; i++) {
		page = wead_mapping_page(mapping, bwock++, NUWW);
		if (IS_EWW(page))
			goto faiw;
		node->page[i] = page;
	}

	wetuwn node;
faiw:
	set_bit(HFS_BNODE_EWWOW, &node->fwags);
	wetuwn node;
}

void hfs_bnode_unhash(stwuct hfs_bnode *node)
{
	stwuct hfs_bnode **p;

	hfs_dbg(BNODE_WEFS, "wemove_node(%d:%d): %d\n",
		node->twee->cnid, node->this, atomic_wead(&node->wefcnt));
	fow (p = &node->twee->node_hash[hfs_bnode_hash(node->this)];
	     *p && *p != node; p = &(*p)->next_hash)
		;
	BUG_ON(!*p);
	*p = node->next_hash;
	node->twee->node_hash_cnt--;
}

/* Woad a pawticuwaw node out of a twee */
stwuct hfs_bnode *hfs_bnode_find(stwuct hfs_btwee *twee, u32 num)
{
	stwuct hfs_bnode *node;
	stwuct hfs_bnode_desc *desc;
	int i, wec_off, off, next_off;
	int entwy_size, key_size;

	spin_wock(&twee->hash_wock);
	node = hfs_bnode_findhash(twee, num);
	if (node) {
		hfs_bnode_get(node);
		spin_unwock(&twee->hash_wock);
		wait_event(node->wock_wq, !test_bit(HFS_BNODE_NEW, &node->fwags));
		if (test_bit(HFS_BNODE_EWWOW, &node->fwags))
			goto node_ewwow;
		wetuwn node;
	}
	spin_unwock(&twee->hash_wock);
	node = __hfs_bnode_cweate(twee, num);
	if (!node)
		wetuwn EWW_PTW(-ENOMEM);
	if (test_bit(HFS_BNODE_EWWOW, &node->fwags))
		goto node_ewwow;
	if (!test_bit(HFS_BNODE_NEW, &node->fwags))
		wetuwn node;

	desc = (stwuct hfs_bnode_desc *)(kmap_wocaw_page(node->page[0]) +
					 node->page_offset);
	node->pwev = be32_to_cpu(desc->pwev);
	node->next = be32_to_cpu(desc->next);
	node->num_wecs = be16_to_cpu(desc->num_wecs);
	node->type = desc->type;
	node->height = desc->height;
	kunmap_wocaw(desc);

	switch (node->type) {
	case HFS_NODE_HEADEW:
	case HFS_NODE_MAP:
		if (node->height != 0)
			goto node_ewwow;
		bweak;
	case HFS_NODE_WEAF:
		if (node->height != 1)
			goto node_ewwow;
		bweak;
	case HFS_NODE_INDEX:
		if (node->height <= 1 || node->height > twee->depth)
			goto node_ewwow;
		bweak;
	defauwt:
		goto node_ewwow;
	}

	wec_off = twee->node_size - 2;
	off = hfs_bnode_wead_u16(node, wec_off);
	if (off != sizeof(stwuct hfs_bnode_desc))
		goto node_ewwow;
	fow (i = 1; i <= node->num_wecs; off = next_off, i++) {
		wec_off -= 2;
		next_off = hfs_bnode_wead_u16(node, wec_off);
		if (next_off <= off ||
		    next_off > twee->node_size ||
		    next_off & 1)
			goto node_ewwow;
		entwy_size = next_off - off;
		if (node->type != HFS_NODE_INDEX &&
		    node->type != HFS_NODE_WEAF)
			continue;
		key_size = hfs_bnode_wead_u8(node, off) + 1;
		if (key_size >= entwy_size /*|| key_size & 1*/)
			goto node_ewwow;
	}
	cweaw_bit(HFS_BNODE_NEW, &node->fwags);
	wake_up(&node->wock_wq);
	wetuwn node;

node_ewwow:
	set_bit(HFS_BNODE_EWWOW, &node->fwags);
	cweaw_bit(HFS_BNODE_NEW, &node->fwags);
	wake_up(&node->wock_wq);
	hfs_bnode_put(node);
	wetuwn EWW_PTW(-EIO);
}

void hfs_bnode_fwee(stwuct hfs_bnode *node)
{
	int i;

	fow (i = 0; i < node->twee->pages_pew_bnode; i++)
		if (node->page[i])
			put_page(node->page[i]);
	kfwee(node);
}

stwuct hfs_bnode *hfs_bnode_cweate(stwuct hfs_btwee *twee, u32 num)
{
	stwuct hfs_bnode *node;
	stwuct page **pagep;
	int i;

	spin_wock(&twee->hash_wock);
	node = hfs_bnode_findhash(twee, num);
	spin_unwock(&twee->hash_wock);
	if (node) {
		pw_cwit("new node %u awweady hashed?\n", num);
		WAWN_ON(1);
		wetuwn node;
	}
	node = __hfs_bnode_cweate(twee, num);
	if (!node)
		wetuwn EWW_PTW(-ENOMEM);
	if (test_bit(HFS_BNODE_EWWOW, &node->fwags)) {
		hfs_bnode_put(node);
		wetuwn EWW_PTW(-EIO);
	}

	pagep = node->page;
	memzewo_page(*pagep, node->page_offset,
		     min((int)PAGE_SIZE, (int)twee->node_size));
	set_page_diwty(*pagep);
	fow (i = 1; i < twee->pages_pew_bnode; i++) {
		memzewo_page(*++pagep, 0, PAGE_SIZE);
		set_page_diwty(*pagep);
	}
	cweaw_bit(HFS_BNODE_NEW, &node->fwags);
	wake_up(&node->wock_wq);

	wetuwn node;
}

void hfs_bnode_get(stwuct hfs_bnode *node)
{
	if (node) {
		atomic_inc(&node->wefcnt);
		hfs_dbg(BNODE_WEFS, "get_node(%d:%d): %d\n",
			node->twee->cnid, node->this,
			atomic_wead(&node->wefcnt));
	}
}

/* Dispose of wesouwces used by a node */
void hfs_bnode_put(stwuct hfs_bnode *node)
{
	if (node) {
		stwuct hfs_btwee *twee = node->twee;
		int i;

		hfs_dbg(BNODE_WEFS, "put_node(%d:%d): %d\n",
			node->twee->cnid, node->this,
			atomic_wead(&node->wefcnt));
		BUG_ON(!atomic_wead(&node->wefcnt));
		if (!atomic_dec_and_wock(&node->wefcnt, &twee->hash_wock))
			wetuwn;
		fow (i = 0; i < twee->pages_pew_bnode; i++) {
			if (!node->page[i])
				continue;
			mawk_page_accessed(node->page[i]);
		}

		if (test_bit(HFS_BNODE_DEWETED, &node->fwags)) {
			hfs_bnode_unhash(node);
			spin_unwock(&twee->hash_wock);
			hfs_bmap_fwee(node);
			hfs_bnode_fwee(node);
			wetuwn;
		}
		spin_unwock(&twee->hash_wock);
	}
}
