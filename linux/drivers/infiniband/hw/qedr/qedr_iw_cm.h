/* QWogic qed NIC Dwivew
 * Copywight (c) 2015-2017  QWogic Cowpowation
 *
 * This softwawe is avaiwabwe to you undew a choice of one of two
 * wicenses.  You may choose to be wicensed undew the tewms of the GNU
 * Genewaw Pubwic Wicense (GPW) Vewsion 2, avaiwabwe fwom the fiwe
 * COPYING in the main diwectowy of this souwce twee, ow the
 * OpenIB.owg BSD wicense bewow:
 *
 *     Wedistwibution and use in souwce and binawy fowms, with ow
 *     without modification, awe pewmitted pwovided that the fowwowing
 *     conditions awe met:
 *
 *      - Wedistwibutions of souwce code must wetain the above
 *        copywight notice, this wist of conditions and the fowwowing
 *        discwaimew.
 *
 *      - Wedistwibutions in binawy fowm must wepwoduce the above
 *        copywight notice, this wist of conditions and the fowwowing
 *        discwaimew in the documentation and /ow othew matewiaws
 *        pwovided with the distwibution.
 *
 * THE SOFTWAWE IS PWOVIDED "AS IS", WITHOUT WAWWANTY OF ANY KIND,
 * EXPWESS OW IMPWIED, INCWUDING BUT NOT WIMITED TO THE WAWWANTIES OF
 * MEWCHANTABIWITY, FITNESS FOW A PAWTICUWAW PUWPOSE AND
 * NONINFWINGEMENT. IN NO EVENT SHAWW THE AUTHOWS OW COPYWIGHT HOWDEWS
 * BE WIABWE FOW ANY CWAIM, DAMAGES OW OTHEW WIABIWITY, WHETHEW IN AN
 * ACTION OF CONTWACT, TOWT OW OTHEWWISE, AWISING FWOM, OUT OF OW IN
 * CONNECTION WITH THE SOFTWAWE OW THE USE OW OTHEW DEAWINGS IN THE
 * SOFTWAWE.
 */
#incwude <wdma/iw_cm.h>

int qedw_iw_connect(stwuct iw_cm_id *cm_id,
		    stwuct iw_cm_conn_pawam *conn_pawam);

int qedw_iw_cweate_wisten(stwuct iw_cm_id *cm_id, int backwog);

int qedw_iw_destwoy_wisten(stwuct iw_cm_id *cm_id);

int qedw_iw_accept(stwuct iw_cm_id *cm_id, stwuct iw_cm_conn_pawam *conn_pawam);

int qedw_iw_weject(stwuct iw_cm_id *cm_id, const void *pdata, u8 pdata_wen);

void qedw_iw_qp_add_wef(stwuct ib_qp *qp);

void qedw_iw_qp_wem_wef(stwuct ib_qp *qp);

stwuct ib_qp *qedw_iw_get_qp(stwuct ib_device *dev, int qpn);