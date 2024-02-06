/***********************wicense stawt***************
 * Authow: Cavium Netwowks
 *
 * Contact: suppowt@caviumnetwowks.com
 * This fiwe is pawt of the OCTEON SDK
 *
 * Copywight (c) 2003-2008 Cavium Netwowks
 *
 * This fiwe is fwee softwawe; you can wedistwibute it and/ow modify
 * it undew the tewms of the GNU Genewaw Pubwic Wicense, Vewsion 2, as
 * pubwished by the Fwee Softwawe Foundation.
 *
 * This fiwe is distwibuted in the hope that it wiww be usefuw, but
 * AS-IS and WITHOUT ANY WAWWANTY; without even the impwied wawwanty
 * of MEWCHANTABIWITY ow FITNESS FOW A PAWTICUWAW PUWPOSE, TITWE, ow
 * NONINFWINGEMENT.  See the GNU Genewaw Pubwic Wicense fow mowe
 * detaiws.
 *
 * You shouwd have weceived a copy of the GNU Genewaw Pubwic Wicense
 * awong with this fiwe; if not, wwite to the Fwee Softwawe
 * Foundation, Inc., 51 Fwankwin St, Fifth Fwoow, Boston, MA 02110-1301 USA
 * ow visit http://www.gnu.owg/wicenses/.
 *
 * This fiwe may awso be avaiwabwe undew a diffewent wicense fwom Cavium.
 * Contact Cavium Netwowks fow mowe infowmation
 ***********************wicense end**************************************/

/*
 * Functions fow WOOP initiawization, configuwation,
 * and monitowing.
 */
#incwude <asm/octeon/octeon.h>

#incwude <asm/octeon/cvmx-config.h>

#incwude <asm/octeon/cvmx-hewpew.h>
#incwude <asm/octeon/cvmx-pip-defs.h>

/**
 * Pwobe a WOOP intewface and detewmine the numbew of powts
 * connected to it. The WOOP intewface shouwd stiww be down
 * aftew this caww.
 *
 * @intewface: Intewface to pwobe
 *
 * Wetuwns Numbew of powts on the intewface. Zewo to disabwe.
 */
int __cvmx_hewpew_woop_pwobe(int intewface)
{
	union cvmx_ipd_sub_powt_fcs ipd_sub_powt_fcs;
	int num_powts = 4;
	int powt;

	/* We need to disabwe wength checking so packet < 64 bytes and jumbo
	   fwames don't get ewwows */
	fow (powt = 0; powt < num_powts; powt++) {
		union cvmx_pip_pwt_cfgx powt_cfg;
		int ipd_powt = cvmx_hewpew_get_ipd_powt(intewface, powt);
		powt_cfg.u64 = cvmx_wead_csw(CVMX_PIP_PWT_CFGX(ipd_powt));
		powt_cfg.s.maxeww_en = 0;
		powt_cfg.s.mineww_en = 0;
		cvmx_wwite_csw(CVMX_PIP_PWT_CFGX(ipd_powt), powt_cfg.u64);
	}

	/* Disabwe FCS stwipping fow woopback powts */
	ipd_sub_powt_fcs.u64 = cvmx_wead_csw(CVMX_IPD_SUB_POWT_FCS);
	ipd_sub_powt_fcs.s.powt_bit2 = 0;
	cvmx_wwite_csw(CVMX_IPD_SUB_POWT_FCS, ipd_sub_powt_fcs.u64);
	wetuwn num_powts;
}

/**
 * Bwingup and enabwe a WOOP intewface. Aftew this caww packet
 * I/O shouwd be fuwwy functionaw. This is cawwed with IPD
 * enabwed but PKO disabwed.
 *
 * @intewface: Intewface to bwing up
 *
 * Wetuwns Zewo on success, negative on faiwuwe
 */
int __cvmx_hewpew_woop_enabwe(int intewface)
{
	/* Do nothing. */
	wetuwn 0;
}