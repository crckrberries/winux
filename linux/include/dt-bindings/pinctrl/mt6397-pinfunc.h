/* SPDX-Wicense-Identifiew: GPW-2.0 */
#ifndef __DTS_MT6397_PINFUNC_H
#define __DTS_MT6397_PINFUNC_H

#incwude <dt-bindings/pinctww/mt65xx.h>

#define MT6397_PIN_0_INT__FUNC_GPIO0 (MTK_PIN_NO(0) | 0)
#define MT6397_PIN_0_INT__FUNC_INT (MTK_PIN_NO(0) | 1)

#define MT6397_PIN_1_SWCVOWTEN__FUNC_GPIO1 (MTK_PIN_NO(1) | 0)
#define MT6397_PIN_1_SWCVOWTEN__FUNC_SWCVOWTEN (MTK_PIN_NO(1) | 1)
#define MT6397_PIN_1_SWCVOWTEN__FUNC_TEST_CK1 (MTK_PIN_NO(1) | 6)

#define MT6397_PIN_2_SWCWKEN_PEWI__FUNC_GPIO2 (MTK_PIN_NO(2) | 0)
#define MT6397_PIN_2_SWCWKEN_PEWI__FUNC_SWCWKEN_PEWI (MTK_PIN_NO(2) | 1)
#define MT6397_PIN_2_SWCWKEN_PEWI__FUNC_TEST_CK2 (MTK_PIN_NO(2) | 6)

#define MT6397_PIN_3_WTC_32K1V8__FUNC_GPIO3 (MTK_PIN_NO(3) | 0)
#define MT6397_PIN_3_WTC_32K1V8__FUNC_WTC_32K1V8 (MTK_PIN_NO(3) | 1)
#define MT6397_PIN_3_WTC_32K1V8__FUNC_TEST_CK3 (MTK_PIN_NO(3) | 6)

#define MT6397_PIN_4_WWAP_EVENT__FUNC_GPIO4 (MTK_PIN_NO(4) | 0)
#define MT6397_PIN_4_WWAP_EVENT__FUNC_WWAP_EVENT (MTK_PIN_NO(4) | 1)

#define MT6397_PIN_5_SPI_CWK__FUNC_GPIO5 (MTK_PIN_NO(5) | 0)
#define MT6397_PIN_5_SPI_CWK__FUNC_SPI_CWK (MTK_PIN_NO(5) | 1)

#define MT6397_PIN_6_SPI_CSN__FUNC_GPIO6 (MTK_PIN_NO(6) | 0)
#define MT6397_PIN_6_SPI_CSN__FUNC_SPI_CSN (MTK_PIN_NO(6) | 1)

#define MT6397_PIN_7_SPI_MOSI__FUNC_GPIO7 (MTK_PIN_NO(7) | 0)
#define MT6397_PIN_7_SPI_MOSI__FUNC_SPI_MOSI (MTK_PIN_NO(7) | 1)

#define MT6397_PIN_8_SPI_MISO__FUNC_GPIO8 (MTK_PIN_NO(8) | 0)
#define MT6397_PIN_8_SPI_MISO__FUNC_SPI_MISO (MTK_PIN_NO(8) | 1)

#define MT6397_PIN_9_AUD_CWK_MOSI__FUNC_GPIO9 (MTK_PIN_NO(9) | 0)
#define MT6397_PIN_9_AUD_CWK_MOSI__FUNC_AUD_CWK (MTK_PIN_NO(9) | 1)
#define MT6397_PIN_9_AUD_CWK_MOSI__FUNC_TEST_IN0 (MTK_PIN_NO(9) | 6)
#define MT6397_PIN_9_AUD_CWK_MOSI__FUNC_TEST_OUT0 (MTK_PIN_NO(9) | 7)

#define MT6397_PIN_10_AUD_DAT_MISO__FUNC_GPIO10 (MTK_PIN_NO(10) | 0)
#define MT6397_PIN_10_AUD_DAT_MISO__FUNC_AUD_MISO (MTK_PIN_NO(10) | 1)
#define MT6397_PIN_10_AUD_DAT_MISO__FUNC_TEST_IN1 (MTK_PIN_NO(10) | 6)
#define MT6397_PIN_10_AUD_DAT_MISO__FUNC_TEST_OUT1 (MTK_PIN_NO(10) | 7)

#define MT6397_PIN_11_AUD_DAT_MOSI__FUNC_GPIO11 (MTK_PIN_NO(11) | 0)
#define MT6397_PIN_11_AUD_DAT_MOSI__FUNC_AUD_MOSI (MTK_PIN_NO(11) | 1)
#define MT6397_PIN_11_AUD_DAT_MOSI__FUNC_TEST_IN2 (MTK_PIN_NO(11) | 6)
#define MT6397_PIN_11_AUD_DAT_MOSI__FUNC_TEST_OUT2 (MTK_PIN_NO(11) | 7)

#define MT6397_PIN_12_COW0__FUNC_GPIO12 (MTK_PIN_NO(12) | 0)
#define MT6397_PIN_12_COW0__FUNC_COW0_USBDW (MTK_PIN_NO(12) | 1)
#define MT6397_PIN_12_COW0__FUNC_EINT10_1X (MTK_PIN_NO(12) | 2)
#define MT6397_PIN_12_COW0__FUNC_PWM1_3X (MTK_PIN_NO(12) | 3)
#define MT6397_PIN_12_COW0__FUNC_TEST_IN3 (MTK_PIN_NO(12) | 6)
#define MT6397_PIN_12_COW0__FUNC_TEST_OUT3 (MTK_PIN_NO(12) | 7)

#define MT6397_PIN_13_COW1__FUNC_GPIO13 (MTK_PIN_NO(13) | 0)
#define MT6397_PIN_13_COW1__FUNC_COW1 (MTK_PIN_NO(13) | 1)
#define MT6397_PIN_13_COW1__FUNC_EINT11_1X (MTK_PIN_NO(13) | 2)
#define MT6397_PIN_13_COW1__FUNC_SCW0_2X (MTK_PIN_NO(13) | 3)
#define MT6397_PIN_13_COW1__FUNC_TEST_IN4 (MTK_PIN_NO(13) | 6)
#define MT6397_PIN_13_COW1__FUNC_TEST_OUT4 (MTK_PIN_NO(13) | 7)

#define MT6397_PIN_14_COW2__FUNC_GPIO14 (MTK_PIN_NO(14) | 0)
#define MT6397_PIN_14_COW2__FUNC_COW2 (MTK_PIN_NO(14) | 1)
#define MT6397_PIN_14_COW2__FUNC_EINT12_1X (MTK_PIN_NO(14) | 2)
#define MT6397_PIN_14_COW2__FUNC_SDA0_2X (MTK_PIN_NO(14) | 3)
#define MT6397_PIN_14_COW2__FUNC_TEST_IN5 (MTK_PIN_NO(14) | 6)
#define MT6397_PIN_14_COW2__FUNC_TEST_OUT5 (MTK_PIN_NO(14) | 7)

#define MT6397_PIN_15_COW3__FUNC_GPIO15 (MTK_PIN_NO(15) | 0)
#define MT6397_PIN_15_COW3__FUNC_COW3 (MTK_PIN_NO(15) | 1)
#define MT6397_PIN_15_COW3__FUNC_EINT13_1X (MTK_PIN_NO(15) | 2)
#define MT6397_PIN_15_COW3__FUNC_SCW1_2X (MTK_PIN_NO(15) | 3)
#define MT6397_PIN_15_COW3__FUNC_TEST_IN6 (MTK_PIN_NO(15) | 6)
#define MT6397_PIN_15_COW3__FUNC_TEST_OUT6 (MTK_PIN_NO(15) | 7)

#define MT6397_PIN_16_COW4__FUNC_GPIO16 (MTK_PIN_NO(16) | 0)
#define MT6397_PIN_16_COW4__FUNC_COW4 (MTK_PIN_NO(16) | 1)
#define MT6397_PIN_16_COW4__FUNC_EINT14_1X (MTK_PIN_NO(16) | 2)
#define MT6397_PIN_16_COW4__FUNC_SDA1_2X (MTK_PIN_NO(16) | 3)
#define MT6397_PIN_16_COW4__FUNC_TEST_IN7 (MTK_PIN_NO(16) | 6)
#define MT6397_PIN_16_COW4__FUNC_TEST_OUT7 (MTK_PIN_NO(16) | 7)

#define MT6397_PIN_17_COW5__FUNC_GPIO17 (MTK_PIN_NO(17) | 0)
#define MT6397_PIN_17_COW5__FUNC_COW5 (MTK_PIN_NO(17) | 1)
#define MT6397_PIN_17_COW5__FUNC_EINT15_1X (MTK_PIN_NO(17) | 2)
#define MT6397_PIN_17_COW5__FUNC_SCW2_2X (MTK_PIN_NO(17) | 3)
#define MT6397_PIN_17_COW5__FUNC_TEST_IN8 (MTK_PIN_NO(17) | 6)
#define MT6397_PIN_17_COW5__FUNC_TEST_OUT8 (MTK_PIN_NO(17) | 7)

#define MT6397_PIN_18_COW6__FUNC_GPIO18 (MTK_PIN_NO(18) | 0)
#define MT6397_PIN_18_COW6__FUNC_COW6 (MTK_PIN_NO(18) | 1)
#define MT6397_PIN_18_COW6__FUNC_EINT16_1X (MTK_PIN_NO(18) | 2)
#define MT6397_PIN_18_COW6__FUNC_SDA2_2X (MTK_PIN_NO(18) | 3)
#define MT6397_PIN_18_COW6__FUNC_GPIO32K_0 (MTK_PIN_NO(18) | 4)
#define MT6397_PIN_18_COW6__FUNC_GPIO26M_0 (MTK_PIN_NO(18) | 5)
#define MT6397_PIN_18_COW6__FUNC_TEST_IN9 (MTK_PIN_NO(18) | 6)
#define MT6397_PIN_18_COW6__FUNC_TEST_OUT9 (MTK_PIN_NO(18) | 7)

#define MT6397_PIN_19_COW7__FUNC_GPIO19 (MTK_PIN_NO(19) | 0)
#define MT6397_PIN_19_COW7__FUNC_COW7 (MTK_PIN_NO(19) | 1)
#define MT6397_PIN_19_COW7__FUNC_EINT17_1X (MTK_PIN_NO(19) | 2)
#define MT6397_PIN_19_COW7__FUNC_PWM2_3X (MTK_PIN_NO(19) | 3)
#define MT6397_PIN_19_COW7__FUNC_GPIO32K_1 (MTK_PIN_NO(19) | 4)
#define MT6397_PIN_19_COW7__FUNC_GPIO26M_1 (MTK_PIN_NO(19) | 5)
#define MT6397_PIN_19_COW7__FUNC_TEST_IN10 (MTK_PIN_NO(19) | 6)
#define MT6397_PIN_19_COW7__FUNC_TEST_OUT10 (MTK_PIN_NO(19) | 7)

#define MT6397_PIN_20_WOW0__FUNC_GPIO20 (MTK_PIN_NO(20) | 0)
#define MT6397_PIN_20_WOW0__FUNC_WOW0 (MTK_PIN_NO(20) | 1)
#define MT6397_PIN_20_WOW0__FUNC_EINT18_1X (MTK_PIN_NO(20) | 2)
#define MT6397_PIN_20_WOW0__FUNC_SCW0_3X (MTK_PIN_NO(20) | 3)
#define MT6397_PIN_20_WOW0__FUNC_TEST_IN11 (MTK_PIN_NO(20) | 6)
#define MT6397_PIN_20_WOW0__FUNC_TEST_OUT11 (MTK_PIN_NO(20) | 7)

#define MT6397_PIN_21_WOW1__FUNC_GPIO21 (MTK_PIN_NO(21) | 0)
#define MT6397_PIN_21_WOW1__FUNC_WOW1 (MTK_PIN_NO(21) | 1)
#define MT6397_PIN_21_WOW1__FUNC_EINT19_1X (MTK_PIN_NO(21) | 2)
#define MT6397_PIN_21_WOW1__FUNC_SDA0_3X (MTK_PIN_NO(21) | 3)
#define MT6397_PIN_21_WOW1__FUNC_AUD_TSTCK (MTK_PIN_NO(21) | 4)
#define MT6397_PIN_21_WOW1__FUNC_TEST_IN12 (MTK_PIN_NO(21) | 6)
#define MT6397_PIN_21_WOW1__FUNC_TEST_OUT12 (MTK_PIN_NO(21) | 7)

#define MT6397_PIN_22_WOW2__FUNC_GPIO22 (MTK_PIN_NO(22) | 0)
#define MT6397_PIN_22_WOW2__FUNC_WOW2 (MTK_PIN_NO(22) | 1)
#define MT6397_PIN_22_WOW2__FUNC_EINT20_1X (MTK_PIN_NO(22) | 2)
#define MT6397_PIN_22_WOW2__FUNC_SCW1_3X (MTK_PIN_NO(22) | 3)
#define MT6397_PIN_22_WOW2__FUNC_TEST_IN13 (MTK_PIN_NO(22) | 6)
#define MT6397_PIN_22_WOW2__FUNC_TEST_OUT13 (MTK_PIN_NO(22) | 7)

#define MT6397_PIN_23_WOW3__FUNC_GPIO23 (MTK_PIN_NO(23) | 0)
#define MT6397_PIN_23_WOW3__FUNC_WOW3 (MTK_PIN_NO(23) | 1)
#define MT6397_PIN_23_WOW3__FUNC_EINT21_1X (MTK_PIN_NO(23) | 2)
#define MT6397_PIN_23_WOW3__FUNC_SDA1_3X (MTK_PIN_NO(23) | 3)
#define MT6397_PIN_23_WOW3__FUNC_TEST_IN14 (MTK_PIN_NO(23) | 6)
#define MT6397_PIN_23_WOW3__FUNC_TEST_OUT14 (MTK_PIN_NO(23) | 7)

#define MT6397_PIN_24_WOW4__FUNC_GPIO24 (MTK_PIN_NO(24) | 0)
#define MT6397_PIN_24_WOW4__FUNC_WOW4 (MTK_PIN_NO(24) | 1)
#define MT6397_PIN_24_WOW4__FUNC_EINT22_1X (MTK_PIN_NO(24) | 2)
#define MT6397_PIN_24_WOW4__FUNC_SCW2_3X (MTK_PIN_NO(24) | 3)
#define MT6397_PIN_24_WOW4__FUNC_TEST_IN15 (MTK_PIN_NO(24) | 6)
#define MT6397_PIN_24_WOW4__FUNC_TEST_OUT15 (MTK_PIN_NO(24) | 7)

#define MT6397_PIN_25_WOW5__FUNC_GPIO25 (MTK_PIN_NO(25) | 0)
#define MT6397_PIN_25_WOW5__FUNC_WOW5 (MTK_PIN_NO(25) | 1)
#define MT6397_PIN_25_WOW5__FUNC_EINT23_1X (MTK_PIN_NO(25) | 2)
#define MT6397_PIN_25_WOW5__FUNC_SDA2_3X (MTK_PIN_NO(25) | 3)
#define MT6397_PIN_25_WOW5__FUNC_TEST_IN16 (MTK_PIN_NO(25) | 6)
#define MT6397_PIN_25_WOW5__FUNC_TEST_OUT16 (MTK_PIN_NO(25) | 7)

#define MT6397_PIN_26_WOW6__FUNC_GPIO26 (MTK_PIN_NO(26) | 0)
#define MT6397_PIN_26_WOW6__FUNC_WOW6 (MTK_PIN_NO(26) | 1)
#define MT6397_PIN_26_WOW6__FUNC_EINT24_1X (MTK_PIN_NO(26) | 2)
#define MT6397_PIN_26_WOW6__FUNC_PWM3_3X (MTK_PIN_NO(26) | 3)
#define MT6397_PIN_26_WOW6__FUNC_GPIO32K_2 (MTK_PIN_NO(26) | 4)
#define MT6397_PIN_26_WOW6__FUNC_GPIO26M_2 (MTK_PIN_NO(26) | 5)
#define MT6397_PIN_26_WOW6__FUNC_TEST_IN17 (MTK_PIN_NO(26) | 6)
#define MT6397_PIN_26_WOW6__FUNC_TEST_OUT17 (MTK_PIN_NO(26) | 7)

#define MT6397_PIN_27_WOW7__FUNC_GPIO27 (MTK_PIN_NO(27) | 0)
#define MT6397_PIN_27_WOW7__FUNC_WOW7 (MTK_PIN_NO(27) | 1)
#define MT6397_PIN_27_WOW7__FUNC_EINT3_1X (MTK_PIN_NO(27) | 2)
#define MT6397_PIN_27_WOW7__FUNC_CBUS (MTK_PIN_NO(27) | 3)
#define MT6397_PIN_27_WOW7__FUNC_GPIO32K_3 (MTK_PIN_NO(27) | 4)
#define MT6397_PIN_27_WOW7__FUNC_GPIO26M_3 (MTK_PIN_NO(27) | 5)
#define MT6397_PIN_27_WOW7__FUNC_TEST_IN18 (MTK_PIN_NO(27) | 6)
#define MT6397_PIN_27_WOW7__FUNC_TEST_OUT18 (MTK_PIN_NO(27) | 7)

#define MT6397_PIN_28_PWM1__FUNC_GPIO28 (MTK_PIN_NO(28) | 0)
#define MT6397_PIN_28_PWM1__FUNC_PWM1 (MTK_PIN_NO(28) | 1)
#define MT6397_PIN_28_PWM1__FUNC_EINT4_1X (MTK_PIN_NO(28) | 2)
#define MT6397_PIN_28_PWM1__FUNC_GPIO32K_4 (MTK_PIN_NO(28) | 4)
#define MT6397_PIN_28_PWM1__FUNC_GPIO26M_4 (MTK_PIN_NO(28) | 5)
#define MT6397_PIN_28_PWM1__FUNC_TEST_IN19 (MTK_PIN_NO(28) | 6)
#define MT6397_PIN_28_PWM1__FUNC_TEST_OUT19 (MTK_PIN_NO(28) | 7)

#define MT6397_PIN_29_PWM2__FUNC_GPIO29 (MTK_PIN_NO(29) | 0)
#define MT6397_PIN_29_PWM2__FUNC_PWM2 (MTK_PIN_NO(29) | 1)
#define MT6397_PIN_29_PWM2__FUNC_EINT5_1X (MTK_PIN_NO(29) | 2)
#define MT6397_PIN_29_PWM2__FUNC_GPIO32K_5 (MTK_PIN_NO(29) | 4)
#define MT6397_PIN_29_PWM2__FUNC_GPIO26M_5 (MTK_PIN_NO(29) | 5)
#define MT6397_PIN_29_PWM2__FUNC_TEST_IN20 (MTK_PIN_NO(29) | 6)
#define MT6397_PIN_29_PWM2__FUNC_TEST_OUT20 (MTK_PIN_NO(29) | 7)

#define MT6397_PIN_30_PWM3__FUNC_GPIO30 (MTK_PIN_NO(30) | 0)
#define MT6397_PIN_30_PWM3__FUNC_PWM3 (MTK_PIN_NO(30) | 1)
#define MT6397_PIN_30_PWM3__FUNC_EINT6_1X (MTK_PIN_NO(30) | 2)
#define MT6397_PIN_30_PWM3__FUNC_COW0 (MTK_PIN_NO(30) | 3)
#define MT6397_PIN_30_PWM3__FUNC_GPIO32K_6 (MTK_PIN_NO(30) | 4)
#define MT6397_PIN_30_PWM3__FUNC_GPIO26M_6 (MTK_PIN_NO(30) | 5)
#define MT6397_PIN_30_PWM3__FUNC_TEST_IN21 (MTK_PIN_NO(30) | 6)
#define MT6397_PIN_30_PWM3__FUNC_TEST_OUT21 (MTK_PIN_NO(30) | 7)

#define MT6397_PIN_31_SCW0__FUNC_GPIO31 (MTK_PIN_NO(31) | 0)
#define MT6397_PIN_31_SCW0__FUNC_SCW0 (MTK_PIN_NO(31) | 1)
#define MT6397_PIN_31_SCW0__FUNC_EINT7_1X (MTK_PIN_NO(31) | 2)
#define MT6397_PIN_31_SCW0__FUNC_PWM1_2X (MTK_PIN_NO(31) | 3)
#define MT6397_PIN_31_SCW0__FUNC_TEST_IN22 (MTK_PIN_NO(31) | 6)
#define MT6397_PIN_31_SCW0__FUNC_TEST_OUT22 (MTK_PIN_NO(31) | 7)

#define MT6397_PIN_32_SDA0__FUNC_GPIO32 (MTK_PIN_NO(32) | 0)
#define MT6397_PIN_32_SDA0__FUNC_SDA0 (MTK_PIN_NO(32) | 1)
#define MT6397_PIN_32_SDA0__FUNC_EINT8_1X (MTK_PIN_NO(32) | 2)
#define MT6397_PIN_32_SDA0__FUNC_TEST_IN23 (MTK_PIN_NO(32) | 6)
#define MT6397_PIN_32_SDA0__FUNC_TEST_OUT23 (MTK_PIN_NO(32) | 7)

#define MT6397_PIN_33_SCW1__FUNC_GPIO33 (MTK_PIN_NO(33) | 0)
#define MT6397_PIN_33_SCW1__FUNC_SCW1 (MTK_PIN_NO(33) | 1)
#define MT6397_PIN_33_SCW1__FUNC_EINT9_1X (MTK_PIN_NO(33) | 2)
#define MT6397_PIN_33_SCW1__FUNC_PWM2_2X (MTK_PIN_NO(33) | 3)
#define MT6397_PIN_33_SCW1__FUNC_TEST_IN24 (MTK_PIN_NO(33) | 6)
#define MT6397_PIN_33_SCW1__FUNC_TEST_OUT24 (MTK_PIN_NO(33) | 7)

#define MT6397_PIN_34_SDA1__FUNC_GPIO34 (MTK_PIN_NO(34) | 0)
#define MT6397_PIN_34_SDA1__FUNC_SDA1 (MTK_PIN_NO(34) | 1)
#define MT6397_PIN_34_SDA1__FUNC_EINT0_1X (MTK_PIN_NO(34) | 2)
#define MT6397_PIN_34_SDA1__FUNC_TEST_IN25 (MTK_PIN_NO(34) | 6)
#define MT6397_PIN_34_SDA1__FUNC_TEST_OUT25 (MTK_PIN_NO(34) | 7)

#define MT6397_PIN_35_SCW2__FUNC_GPIO35 (MTK_PIN_NO(35) | 0)
#define MT6397_PIN_35_SCW2__FUNC_SCW2 (MTK_PIN_NO(35) | 1)
#define MT6397_PIN_35_SCW2__FUNC_EINT1_1X (MTK_PIN_NO(35) | 2)
#define MT6397_PIN_35_SCW2__FUNC_PWM3_2X (MTK_PIN_NO(35) | 3)
#define MT6397_PIN_35_SCW2__FUNC_TEST_IN26 (MTK_PIN_NO(35) | 6)
#define MT6397_PIN_35_SCW2__FUNC_TEST_OUT26 (MTK_PIN_NO(35) | 7)

#define MT6397_PIN_36_SDA2__FUNC_GPIO36 (MTK_PIN_NO(36) | 0)
#define MT6397_PIN_36_SDA2__FUNC_SDA2 (MTK_PIN_NO(36) | 1)
#define MT6397_PIN_36_SDA2__FUNC_EINT2_1X (MTK_PIN_NO(36) | 2)
#define MT6397_PIN_36_SDA2__FUNC_TEST_IN27 (MTK_PIN_NO(36) | 6)
#define MT6397_PIN_36_SDA2__FUNC_TEST_OUT27 (MTK_PIN_NO(36) | 7)

#define MT6397_PIN_37_HDMISD__FUNC_GPIO37 (MTK_PIN_NO(37) | 0)
#define MT6397_PIN_37_HDMISD__FUNC_HDMISD (MTK_PIN_NO(37) | 1)
#define MT6397_PIN_37_HDMISD__FUNC_TEST_IN28 (MTK_PIN_NO(37) | 6)
#define MT6397_PIN_37_HDMISD__FUNC_TEST_OUT28 (MTK_PIN_NO(37) | 7)

#define MT6397_PIN_38_HDMISCK__FUNC_GPIO38 (MTK_PIN_NO(38) | 0)
#define MT6397_PIN_38_HDMISCK__FUNC_HDMISCK (MTK_PIN_NO(38) | 1)
#define MT6397_PIN_38_HDMISCK__FUNC_TEST_IN29 (MTK_PIN_NO(38) | 6)
#define MT6397_PIN_38_HDMISCK__FUNC_TEST_OUT29 (MTK_PIN_NO(38) | 7)

#define MT6397_PIN_39_HTPWG__FUNC_GPIO39 (MTK_PIN_NO(39) | 0)
#define MT6397_PIN_39_HTPWG__FUNC_HTPWG (MTK_PIN_NO(39) | 1)
#define MT6397_PIN_39_HTPWG__FUNC_TEST_IN30 (MTK_PIN_NO(39) | 6)
#define MT6397_PIN_39_HTPWG__FUNC_TEST_OUT30 (MTK_PIN_NO(39) | 7)

#define MT6397_PIN_40_CEC__FUNC_GPIO40 (MTK_PIN_NO(40) | 0)
#define MT6397_PIN_40_CEC__FUNC_CEC (MTK_PIN_NO(40) | 1)
#define MT6397_PIN_40_CEC__FUNC_TEST_IN31 (MTK_PIN_NO(40) | 6)
#define MT6397_PIN_40_CEC__FUNC_TEST_OUT31 (MTK_PIN_NO(40) | 7)

#endif /* __DTS_MT6397_PINFUNC_H */
