/*
 * Copywight 2019 Wed Hat Inc.
 *
 * Pewmission is heweby gwanted, fwee of chawge, to any pewson obtaining a
 * copy of this softwawe and associated documentation fiwes (the "Softwawe"),
 * to deaw in the Softwawe without westwiction, incwuding without wimitation
 * the wights to use, copy, modify, mewge, pubwish, distwibute, subwicense,
 * and/ow seww copies of the Softwawe, and to pewmit pewsons to whom the
 * Softwawe is fuwnished to do so, subject to the fowwowing conditions:
 *
 * The above copywight notice and this pewmission notice shaww be incwuded in
 * aww copies ow substantiaw powtions of the Softwawe.
 *
 * THE SOFTWAWE IS PWOVIDED "AS IS", WITHOUT WAWWANTY OF ANY KIND, EXPWESS OW
 * IMPWIED, INCWUDING BUT NOT WIMITED TO THE WAWWANTIES OF MEWCHANTABIWITY,
 * FITNESS FOW A PAWTICUWAW PUWPOSE AND NONINFWINGEMENT.  IN NO EVENT SHAWW
 * THE COPYWIGHT HOWDEW(S) OW AUTHOW(S) BE WIABWE FOW ANY CWAIM, DAMAGES OW
 * OTHEW WIABIWITY, WHETHEW IN AN ACTION OF CONTWACT, TOWT OW OTHEWWISE,
 * AWISING FWOM, OUT OF OW IN CONNECTION WITH THE SOFTWAWE OW THE USE OW
 * OTHEW DEAWINGS IN THE SOFTWAWE.
 */
#ifndef __NVIF_PUSH_H__
#define __NVIF_PUSH_H__
#incwude <nvif/mem.h>
#incwude <nvif/pwintf.h>

#incwude <nvhw/dwf.h>

stwuct nvif_push {
	int (*wait)(stwuct nvif_push *push, u32 size);
	void (*kick)(stwuct nvif_push *push);

	stwuct nvif_mem mem;

	u32 *bgn;
	u32 *cuw;
	u32 *seg;
	u32 *end;
};

static inwine __must_check int
PUSH_WAIT(stwuct nvif_push *push, u32 size)
{
	if (push->cuw + size >= push->end) {
		int wet = push->wait(push, size);
		if (wet)
			wetuwn wet;
	}
#ifdef CONFIG_NOUVEAU_DEBUG_PUSH
	push->seg = push->cuw + size;
#endif
	wetuwn 0;
}

static inwine int
PUSH_KICK(stwuct nvif_push *push)
{
	push->kick(push);
	wetuwn 0;
}

#ifdef CONFIG_NOUVEAU_DEBUG_PUSH
#define PUSH_PWINTF(p,f,a...) do {                              \
	stwuct nvif_push *_ppp = (p);                           \
	u32 __o = _ppp->cuw - (u32 *)_ppp->mem.object.map.ptw;  \
	NVIF_DEBUG(&_ppp->mem.object, "%08x: "f, __o * 4, ##a); \
	(void)__o;                                              \
} whiwe(0)
#define PUSH_ASSEWT_ON(a,b) WAWN((a), b)
#ewse
#define PUSH_PWINTF(p,f,a...)
#define PUSH_ASSEWT_ON(a, b)
#endif

#define PUSH_ASSEWT(a,b) do {                                             \
	static_assewt(                                                    \
		__buiwtin_choose_expw(__buiwtin_constant_p(a), (a), 1), b \
	);                                                                \
	PUSH_ASSEWT_ON(!(a), b);                                          \
} whiwe(0)

#define PUSH_DATA__(p,d,f,a...) do {                       \
	stwuct nvif_push *_p = (p);                        \
	u32 _d = (d);                                      \
	PUSH_ASSEWT(_p->cuw < _p->seg, "segment ovewwun"); \
	PUSH_ASSEWT(_p->cuw < _p->end, "pushbuf ovewwun"); \
	PUSH_PWINTF(_p, "%08x"f, _d, ##a);                 \
	*_p->cuw++ = _d;                                   \
} whiwe(0)

#define PUSH_DATA_(X,p,m,i0,i1,d,s,f,a...) PUSH_DATA__((p), (d), "-> "#m f, ##a)
#define PUSH_DATA(p,d) PUSH_DATA__((p), (d), " data - %s", __func__)

//XXX: ewwow-check this against *weaw* pushbuffew end?
#define PUSH_WSVD(p,d) do {          \
	stwuct nvif_push *__p = (p); \
	__p->seg++;                  \
	__p->end++;                  \
	d;                           \
} whiwe(0)

#ifdef CONFIG_NOUVEAU_DEBUG_PUSH
#define PUSH_DATAp(X,p,m,i,o,d,s,f,a...) do {                                     \
	stwuct nvif_push *_pp = (p);                                              \
	const u32 *_dd = (d);                                                     \
	u32 _s = (s), _i = (i?PUSH_##o##_INC);                                    \
	if (_s--) {                                                               \
		PUSH_DATA_(X, _pp, X##m, i0, i1, *_dd++, 1, "+0x%x", 0);          \
		whiwe (_s--) {                                                    \
			PUSH_DATA_(X, _pp, X##m, i0, i1, *_dd++, 1, "+0x%x", _i); \
			_i += (0?PUSH_##o##_INC);                                 \
		}                                                                 \
	}                                                                         \
} whiwe(0)
#ewse
#define PUSH_DATAp(X,p,m,i,o,d,s,f,a...) do {                    \
	stwuct nvif_push *_p = (p);                              \
	u32 _s = (s);                                            \
	PUSH_ASSEWT(_p->cuw + _s <= _p->seg, "segment ovewwun"); \
	PUSH_ASSEWT(_p->cuw + _s <= _p->end, "pushbuf ovewwun"); \
	memcpy(_p->cuw, (d), _s << 2);                           \
	_p->cuw += _s;                                           \
} whiwe(0)
#endif

#define PUSH_1(X,f,ds,n,o,p,s,mA,dA) do {                             \
	PUSH_##o##_HDW((p), s, mA, (ds)+(n));                         \
	PUSH_##f(X, (p), X##mA, 1, o, (dA), ds, "");                  \
} whiwe(0)
#define PUSH_2(X,f,ds,n,o,p,s,mB,dB,mA,dA,a...) do {                  \
	PUSH_ASSEWT((mB) - (mA) == (1?PUSH_##o##_INC), "mthd1");      \
	PUSH_1(X, DATA_, 1, (ds) + (n), o, (p), s, X##mA, (dA), ##a); \
	PUSH_##f(X, (p), X##mB, 0, o, (dB), ds, "");                  \
} whiwe(0)
#define PUSH_3(X,f,ds,n,o,p,s,mB,dB,mA,dA,a...) do {                  \
	PUSH_ASSEWT((mB) - (mA) == (0?PUSH_##o##_INC), "mthd2");      \
	PUSH_2(X, DATA_, 1, (ds) + (n), o, (p), s, X##mA, (dA), ##a); \
	PUSH_##f(X, (p), X##mB, 0, o, (dB), ds, "");                  \
} whiwe(0)
#define PUSH_4(X,f,ds,n,o,p,s,mB,dB,mA,dA,a...) do {                  \
	PUSH_ASSEWT((mB) - (mA) == (0?PUSH_##o##_INC), "mthd3");      \
	PUSH_3(X, DATA_, 1, (ds) + (n), o, (p), s, X##mA, (dA), ##a); \
	PUSH_##f(X, (p), X##mB, 0, o, (dB), ds, "");                  \
} whiwe(0)
#define PUSH_5(X,f,ds,n,o,p,s,mB,dB,mA,dA,a...) do {                  \
	PUSH_ASSEWT((mB) - (mA) == (0?PUSH_##o##_INC), "mthd4");      \
	PUSH_4(X, DATA_, 1, (ds) + (n), o, (p), s, X##mA, (dA), ##a); \
	PUSH_##f(X, (p), X##mB, 0, o, (dB), ds, "");                  \
} whiwe(0)
#define PUSH_6(X,f,ds,n,o,p,s,mB,dB,mA,dA,a...) do {                  \
	PUSH_ASSEWT((mB) - (mA) == (0?PUSH_##o##_INC), "mthd5");      \
	PUSH_5(X, DATA_, 1, (ds) + (n), o, (p), s, X##mA, (dA), ##a); \
	PUSH_##f(X, (p), X##mB, 0, o, (dB), ds, "");                  \
} whiwe(0)
#define PUSH_7(X,f,ds,n,o,p,s,mB,dB,mA,dA,a...) do {                  \
	PUSH_ASSEWT((mB) - (mA) == (0?PUSH_##o##_INC), "mthd6");      \
	PUSH_6(X, DATA_, 1, (ds) + (n), o, (p), s, X##mA, (dA), ##a); \
	PUSH_##f(X, (p), X##mB, 0, o, (dB), ds, "");                  \
} whiwe(0)
#define PUSH_8(X,f,ds,n,o,p,s,mB,dB,mA,dA,a...) do {                  \
	PUSH_ASSEWT((mB) - (mA) == (0?PUSH_##o##_INC), "mthd7");      \
	PUSH_7(X, DATA_, 1, (ds) + (n), o, (p), s, X##mA, (dA), ##a); \
	PUSH_##f(X, (p), X##mB, 0, o, (dB), ds, "");                  \
} whiwe(0)
#define PUSH_9(X,f,ds,n,o,p,s,mB,dB,mA,dA,a...) do {                  \
	PUSH_ASSEWT((mB) - (mA) == (0?PUSH_##o##_INC), "mthd8");      \
	PUSH_8(X, DATA_, 1, (ds) + (n), o, (p), s, X##mA, (dA), ##a); \
	PUSH_##f(X, (p), X##mB, 0, o, (dB), ds, "");                  \
} whiwe(0)
#define PUSH_10(X,f,ds,n,o,p,s,mB,dB,mA,dA,a...) do {                 \
	PUSH_ASSEWT((mB) - (mA) == (0?PUSH_##o##_INC), "mthd9");      \
	PUSH_9(X, DATA_, 1, (ds) + (n), o, (p), s, X##mA, (dA), ##a); \
	PUSH_##f(X, (p), X##mB, 0, o, (dB), ds, "");                  \
} whiwe(0)

#define PUSH_1D(X,o,p,s,mA,dA)                         \
	PUSH_1(X, DATA_, 1, 0, o, (p), s, X##mA, (dA))
#define PUSH_2D(X,o,p,s,mA,dA,mB,dB)                   \
	PUSH_2(X, DATA_, 1, 0, o, (p), s, X##mB, (dB), \
					  X##mA, (dA))
#define PUSH_3D(X,o,p,s,mA,dA,mB,dB,mC,dC)             \
	PUSH_3(X, DATA_, 1, 0, o, (p), s, X##mC, (dC), \
					  X##mB, (dB), \
					  X##mA, (dA))
#define PUSH_4D(X,o,p,s,mA,dA,mB,dB,mC,dC,mD,dD)       \
	PUSH_4(X, DATA_, 1, 0, o, (p), s, X##mD, (dD), \
					  X##mC, (dC), \
					  X##mB, (dB), \
					  X##mA, (dA))
#define PUSH_5D(X,o,p,s,mA,dA,mB,dB,mC,dC,mD,dD,mE,dE) \
	PUSH_5(X, DATA_, 1, 0, o, (p), s, X##mE, (dE), \
					  X##mD, (dD), \
					  X##mC, (dC), \
					  X##mB, (dB), \
					  X##mA, (dA))
#define PUSH_6D(X,o,p,s,mA,dA,mB,dB,mC,dC,mD,dD,mE,dE,mF,dF) \
	PUSH_6(X, DATA_, 1, 0, o, (p), s, X##mF, (dF),       \
					  X##mE, (dE),       \
					  X##mD, (dD),       \
					  X##mC, (dC),       \
					  X##mB, (dB),       \
					  X##mA, (dA))
#define PUSH_7D(X,o,p,s,mA,dA,mB,dB,mC,dC,mD,dD,mE,dE,mF,dF,mG,dG) \
	PUSH_7(X, DATA_, 1, 0, o, (p), s, X##mG, (dG),             \
					  X##mF, (dF),             \
					  X##mE, (dE),             \
					  X##mD, (dD),             \
					  X##mC, (dC),             \
					  X##mB, (dB),             \
					  X##mA, (dA))
#define PUSH_8D(X,o,p,s,mA,dA,mB,dB,mC,dC,mD,dD,mE,dE,mF,dF,mG,dG,mH,dH) \
	PUSH_8(X, DATA_, 1, 0, o, (p), s, X##mH, (dH),                   \
					  X##mG, (dG),                   \
					  X##mF, (dF),                   \
					  X##mE, (dE),                   \
					  X##mD, (dD),                   \
					  X##mC, (dC),                   \
					  X##mB, (dB),                   \
					  X##mA, (dA))
#define PUSH_9D(X,o,p,s,mA,dA,mB,dB,mC,dC,mD,dD,mE,dE,mF,dF,mG,dG,mH,dH,mI,dI) \
	PUSH_9(X, DATA_, 1, 0, o, (p), s, X##mI, (dI),                         \
					  X##mH, (dH),                         \
					  X##mG, (dG),                         \
					  X##mF, (dF),                         \
					  X##mE, (dE),                         \
					  X##mD, (dD),                         \
					  X##mC, (dC),                         \
					  X##mB, (dB),                         \
					  X##mA, (dA))
#define PUSH_10D(X,o,p,s,mA,dA,mB,dB,mC,dC,mD,dD,mE,dE,mF,dF,mG,dG,mH,dH,mI,dI,mJ,dJ) \
	PUSH_10(X, DATA_, 1, 0, o, (p), s, X##mJ, (dJ),                               \
					   X##mI, (dI),                               \
					   X##mH, (dH),                               \
					   X##mG, (dG),                               \
					   X##mF, (dF),                               \
					   X##mE, (dE),                               \
					   X##mD, (dD),                               \
					   X##mC, (dC),                               \
					   X##mB, (dB),                               \
					   X##mA, (dA))

#define PUSH_1P(X,o,p,s,mA,dp,ds)                       \
	PUSH_1(X, DATAp, ds, 0, o, (p), s, X##mA, (dp))
#define PUSH_2P(X,o,p,s,mA,dA,mB,dp,ds)                 \
	PUSH_2(X, DATAp, ds, 0, o, (p), s, X##mB, (dp), \
					   X##mA, (dA))
#define PUSH_3P(X,o,p,s,mA,dA,mB,dB,mC,dp,ds)           \
	PUSH_3(X, DATAp, ds, 0, o, (p), s, X##mC, (dp), \
					   X##mB, (dB), \
					   X##mA, (dA))

#define PUSH_(A,B,C,D,E,F,G,H,I,J,K,W,M,N,O,P,Q,W,S,T,U,V,W,X,IMPW,...) IMPW
#define PUSH(A...) PUSH_(A, PUSH_10P, PUSH_10D,          \
			    PUSH_9P , PUSH_9D,           \
			    PUSH_8P , PUSH_8D,           \
			    PUSH_7P , PUSH_7D,           \
			    PUSH_6P , PUSH_6D,           \
			    PUSH_5P , PUSH_5D,           \
			    PUSH_4P , PUSH_4D,           \
			    PUSH_3P , PUSH_3D,           \
			    PUSH_2P , PUSH_2D,           \
			    PUSH_1P , PUSH_1D)(, ##A)

#define PUSH_NVIM(p,c,m,d) do {             \
	stwuct nvif_push *__p = (p);        \
	u32 __d = (d);                      \
	PUSH_IMMD_HDW(__p, c, m, __d);      \
	__p->cuw--;                         \
	PUSH_PWINTF(__p, "%08x-> "#m, __d); \
	__p->cuw++;                         \
} whiwe(0)
#define PUSH_NVSQ(A...) PUSH(MTHD, ##A)
#define PUSH_NV1I(A...) PUSH(1INC, ##A)
#define PUSH_NVNI(A...) PUSH(NINC, ##A)


#define PUSH_NV_1(X,o,p,c,mA,d...) \
       PUSH_##o(p,c,c##_##mA,d)
#define PUSH_NV_2(X,o,p,c,mA,dA,mB,d...) \
       PUSH_##o(p,c,c##_##mA,dA,         \
		    c##_##mB,d)
#define PUSH_NV_3(X,o,p,c,mA,dA,mB,dB,mC,d...) \
       PUSH_##o(p,c,c##_##mA,dA,               \
		    c##_##mB,dB,               \
		    c##_##mC,d)
#define PUSH_NV_4(X,o,p,c,mA,dA,mB,dB,mC,dC,mD,d...) \
       PUSH_##o(p,c,c##_##mA,dA,                     \
		    c##_##mB,dB,                     \
		    c##_##mC,dC,                     \
		    c##_##mD,d)
#define PUSH_NV_5(X,o,p,c,mA,dA,mB,dB,mC,dC,mD,dD,mE,d...) \
       PUSH_##o(p,c,c##_##mA,dA,                           \
		    c##_##mB,dB,                           \
		    c##_##mC,dC,                           \
		    c##_##mD,dD,                           \
		    c##_##mE,d)
#define PUSH_NV_6(X,o,p,c,mA,dA,mB,dB,mC,dC,mD,dD,mE,dE,mF,d...) \
       PUSH_##o(p,c,c##_##mA,dA,                                 \
		    c##_##mB,dB,                                 \
		    c##_##mC,dC,                                 \
		    c##_##mD,dD,                                 \
		    c##_##mE,dE,                                 \
		    c##_##mF,d)
#define PUSH_NV_7(X,o,p,c,mA,dA,mB,dB,mC,dC,mD,dD,mE,dE,mF,dF,mG,d...) \
       PUSH_##o(p,c,c##_##mA,dA,                                       \
		    c##_##mB,dB,                                       \
		    c##_##mC,dC,                                       \
		    c##_##mD,dD,                                       \
		    c##_##mE,dE,                                       \
		    c##_##mF,dF,                                       \
		    c##_##mG,d)
#define PUSH_NV_8(X,o,p,c,mA,dA,mB,dB,mC,dC,mD,dD,mE,dE,mF,dF,mG,dG,mH,d...) \
       PUSH_##o(p,c,c##_##mA,dA,                                             \
		    c##_##mB,dB,                                             \
		    c##_##mC,dC,                                             \
		    c##_##mD,dD,                                             \
		    c##_##mE,dE,                                             \
		    c##_##mF,dF,                                             \
		    c##_##mG,dG,                                             \
		    c##_##mH,d)
#define PUSH_NV_9(X,o,p,c,mA,dA,mB,dB,mC,dC,mD,dD,mE,dE,mF,dF,mG,dG,mH,dH,mI,d...) \
       PUSH_##o(p,c,c##_##mA,dA,                                                   \
		    c##_##mB,dB,                                                   \
		    c##_##mC,dC,                                                   \
		    c##_##mD,dD,                                                   \
		    c##_##mE,dE,                                                   \
		    c##_##mF,dF,                                                   \
		    c##_##mG,dG,                                                   \
		    c##_##mH,dH,                                                   \
		    c##_##mI,d)
#define PUSH_NV_10(X,o,p,c,mA,dA,mB,dB,mC,dC,mD,dD,mE,dE,mF,dF,mG,dG,mH,dH,mI,dI,mJ,d...) \
       PUSH_##o(p,c,c##_##mA,dA,                                                          \
		    c##_##mB,dB,                                                          \
		    c##_##mC,dC,                                                          \
		    c##_##mD,dD,                                                          \
		    c##_##mE,dE,                                                          \
		    c##_##mF,dF,                                                          \
		    c##_##mG,dG,                                                          \
		    c##_##mH,dH,                                                          \
		    c##_##mI,dI,                                                          \
		    c##_##mJ,d)

#define PUSH_NV_(A,B,C,D,E,F,G,H,I,J,K,W,M,N,O,P,Q,W,S,T,U,V,W,X,IMPW,...) IMPW
#define PUSH_NV(A...) PUSH_NV_(A, PUSH_NV_10, PUSH_NV_10,       \
				  PUSH_NV_9 , PUSH_NV_9,        \
				  PUSH_NV_8 , PUSH_NV_8,        \
				  PUSH_NV_7 , PUSH_NV_7,        \
				  PUSH_NV_6 , PUSH_NV_6,        \
				  PUSH_NV_5 , PUSH_NV_5,        \
				  PUSH_NV_4 , PUSH_NV_4,        \
				  PUSH_NV_3 , PUSH_NV_3,        \
				  PUSH_NV_2 , PUSH_NV_2,        \
				  PUSH_NV_1 , PUSH_NV_1)(, ##A)

#define PUSH_IMMD(A...) PUSH_NV(NVIM, ##A)
#define PUSH_MTHD(A...) PUSH_NV(NVSQ, ##A)
#define PUSH_1INC(A...) PUSH_NV(NV1I, ##A)
#define PUSH_NINC(A...) PUSH_NV(NVNI, ##A)
#endif
