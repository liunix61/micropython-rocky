// args= ['boards/make-pins.py', '--board', 'boards/lpx54608/pins.csv', '--af', 'boards/lpc54608_af.csv', '--prefix', 'boards/lpc546xx_prefix.c', '--hdr', 'build-lpx54608/genhdr/pins.h', '--qstr', 'build-lpx54608/pins_qstr.h', '--af-const', 'build-lpx54608/genhdr/pins_af_const.h', '--af-py', 'build-lpx54608/pins_af.py']
// This file was automatically generated by make-pins.py
//
// --af boards/lpc54608_af.csv
// --board boards/lpx54608/pins.csv
// --prefix boards/lpc546xx_prefix.c

// <MCU>_prefix.c becomes the initial portion of the generated pins file.

#include <stdio.h>

#include "py/obj.h"
#include "py/mphal.h"
#include "pin.h"

#define AF(af_idx, af_fn, af_unit, af_type, af_ptr) \
{ \
    { &pin_af_type }, \
    .name = MP_QSTR_AF ## af_idx ## _ ## af_fn ## af_unit, \
    .idx = (af_idx), \
    .fn = AF_FN_ ## af_fn, \
    .unit = (af_unit), \
    .type = AF_PIN_TYPE_ ## af_fn ## _ ## af_type, \
    .reg = (af_ptr) \
}

#define PIN(p_port, p_pin, p_af, p_adc_num, p_adc_channel) \
{ \
    { &pin_type }, \
    .name = MP_QSTR_ ## p_port ## p_pin, \
    .port = PORT_ ## p_port, \
    .pin = (p_pin), \
    .num_af = (sizeof(p_af) / sizeof(pin_af_obj_t)), \
    .pin_mask = (1 << ((p_pin) & 0x0f)), \
    .gpio = GPIO, \
    .af = p_af, \
    .adc_num = p_adc_num, \
    .adc_channel = p_adc_channel, \
}

const pin_af_obj_t pin_016_af[] = {
  AF( 0, GPIO    ,  0, PIN16     , GPIO0   ), // GPIO0_PIN16
  AF( 1, FC      ,  4, TXD_SCL_MISO, FC4     ), // FC4_TXD_SCL_MISO
  //( 2, CLKOUT  ,  0,           , CLKOUT  ), // CLKOUT
  AF( 3, CT      ,  1, CAP0      , CT1     ), // CT1_CAP0
  //( 6, EMC     ,  0, CSN0      , EMC     ), // EMC_CSN0
  //( 7, ENET    ,  0, TXD0      , ENET    ), // ENET_TXD0
};

const pin_obj_t pin_016 = PIN(0, 16, pin_016_af, PIN_ADC1, 4);

const pin_af_obj_t pin_023_af[] = {
  AF( 0, GPIO    ,  0, PIN23     , GPIO0   ), // GPIO0_PIN23
  //( 1, MCLK    ,  0,           , MCLK    ), // MCLK
  AF( 2, CT      ,  1, MAT2      , CT1     ), // CT1_MAT2
  AF( 3, CT      ,  3, MAT3      , CT3     ), // CT3_MAT3
  //( 4, SCT     ,  0, OUT4      , SCT0    ), // SCT0_OUT4
  //( 6, SPIFI   ,  0, CSN       , SPIFI   ), // SPIFI_CSN
};

const pin_obj_t pin_023 = PIN(0, 23, pin_023_af, PIN_ADC1, 11);

const pin_af_obj_t pin_024_af[] = {
  AF( 0, GPIO    ,  0, PIN24     , GPIO0   ), // GPIO0_PIN24
  AF( 1, FC      ,  0, RXD_SDA_MOSI, FC0     ), // FC0_RXD_SDA_MOSI
  //( 2, SD      ,  0, D0        , SD      ), // SD_D0
  AF( 3, CT      ,  2, CAP0      , CT2     ), // CT2_CAP0
  //( 4, SCT     ,  0, GPI0      , SCT0    ), // SCT0_GPI0
  //( 6, SPIFI   ,  0, IO0       , SPIFI   ), // SPIFI_IO0
};

const pin_obj_t pin_024 = PIN(0, 24, pin_024_af, 0, 0);

const pin_af_obj_t pin_025_af[] = {
  AF( 0, GPIO    ,  0, PIN25     , GPIO0   ), // GPIO0_PIN25
  AF( 1, FC      ,  0, TXD_SCL_MISO, FC0     ), // FC0_TXD_SCL_MISO
  //( 2, SD      ,  0, D1        , SD      ), // SD_D1
  AF( 3, CT      ,  2, CAP1      , CT2     ), // CT2_CAP1
  //( 4, SCT     ,  0, GPI1      , SCT0    ), // SCT0_GPI1
  //( 6, SPIFI   ,  0, IO1       , SPIFI   ), // SPIFI_IO1
};

const pin_obj_t pin_025 = PIN(0, 25, pin_025_af, 0, 0);

const pin_af_obj_t pin_026_af[] = {
  AF( 0, GPIO    ,  0, PIN26     , GPIO0   ), // GPIO0_PIN26
  AF( 1, FC      ,  2, RXD_SDA_MOSI, FC2     ), // FC2_RXD_SDA_MOSI
  //( 2, CLKOUT  ,  0,           , CLKOUT  ), // CLKOUT
  AF( 3, CT      ,  3, CAP2      , CT3     ), // CT3_CAP2
  //( 4, SCT     ,  0, OUT5      , SCT0    ), // SCT0_OUT5
  //( 5, PDM     ,  0, CLK       , PDM0    ), // PDM0_CLK
  //( 6, SPIFI   ,  0, CLK       , SPIFI   ), // SPIFI_CLK
  //( 7, USB     ,  0, IDVALUE   , USB0    ), // USB0_IDVALUE
};

const pin_obj_t pin_026 = PIN(0, 26, pin_026_af, 0, 0);

const pin_af_obj_t pin_027_af[] = {
  AF( 0, GPIO    ,  0, PIN27     , GPIO0   ), // GPIO0_PIN27
  AF( 1, FC      ,  2, TXD_SCL_MISO, FC2     ), // FC2_TXD_SCL_MISO
  AF( 3, CT      ,  3, MAT2      , CT3     ), // CT3_MAT2
  //( 4, SCT     ,  0, OUT6      , SCT0    ), // SCT0_OUT6
  //( 5, PDM     ,  0, DATA      , PDM0    ), // PDM0_DATA
  //( 6, SPIFI   ,  0, IO3       , SPIFI   ), // SPIFI_IO3
};

const pin_obj_t pin_027 = PIN(0, 27, pin_027_af, 0, 0);

const pin_af_obj_t pin_028_af[] = {
  AF( 0, GPIO    ,  0, PIN28     , GPIO0   ), // GPIO0_PIN28
  AF( 3, CT      ,  2, CAP3      , CT2     ), // CT2_CAP3
  //( 4, SCT     ,  0, OUT7      , SCT0    ), // SCT0_OUT7
  //( 5, TRACEDATA,  3,           , TRACEDATA3), // TRACEDATA3
  //( 6, SPIFI   ,  0, IO2       , SPIFI   ), // SPIFI_IO2
  //( 7, USB     ,  0, OVERCURRENTN, USB0    ), // USB0_OVERCURRENTN
};

const pin_obj_t pin_028 = PIN(0, 28, pin_028_af, 0, 0);

const pin_af_obj_t pin_031_af[] = {
  AF( 0, GPIO    ,  0, PIN31     , GPIO0   ), // GPIO0_PIN31
  AF( 1, FC      ,  0, CTS_SDA_SSEL0, FC0     ), // FC0_CTS_SDA_SSEL0
  //( 2, SD      ,  0, D2        , SD      ), // SD_D2
  AF( 3, CT      ,  0, MAT1      , CT0     ), // CT0_MAT1
  //( 4, SCT     ,  0, OUT3      , SCT0    ), // SCT0_OUT3
  //( 5, TRACEDATA,  0,           , TRACEDATA0), // TRACEDATA0
};

const pin_obj_t pin_031 = PIN(0, 31, pin_031_af, PIN_ADC1, 5);

const pin_af_obj_t pin_04_af[] = {
  AF( 0, GPIO    ,  0, PIN4      , GPIO0   ), // GPIO0_PIN4
  //( 1, CAN     ,  0, RD        , CAN0    ), // CAN0_RD
  AF( 2, FC      ,  4, SCK       , FC4     ), // FC4_SCK
  AF( 3, CT      ,  3, CAP0      , CT3     ), // CT3_CAP0
  //( 4, SCT     ,  0, GPI4      , SCT0    ), // SCT0_GPI4
  //( 6, EMC     ,  0, D2        , EMC     ), // EMC_D2
  //( 7, ENET    ,  0, MDC       , ENET    ), // ENET_MDC
  //(12, ISP     ,  0,           , ISP0    ), // ISP0
};

const pin_obj_t pin_04 = PIN(0, 4, pin_04_af, 0, 0);

const pin_af_obj_t pin_05_af[] = {
  AF( 0, GPIO    ,  0, PIN5      , GPIO0   ), // GPIO0_PIN5
  //( 1, CAN     ,  0, TD        , CAN0    ), // CAN0_TD
  AF( 2, FC      ,  4, RXD_SDA_MOSI, FC4     ), // FC4_RXD_SDA_MOSI
  AF( 3, CT      ,  3, MAT0      , CT3     ), // CT3_MAT0
  //( 4, SCT     ,  0, GPI5      , SCT0    ), // SCT0_GPI5
  //( 6, EMC     ,  0, D3        , EMC     ), // EMC_D3
  //( 7, ENET    ,  0, MDIO      , ENET    ), // ENET_MDIO
  //(12, ISP     ,  1,           , ISP1    ), // ISP1
};

const pin_obj_t pin_05 = PIN(0, 5, pin_05_af, 0, 0);

const pin_af_obj_t pin_06_af[] = {
  AF( 0, GPIO    ,  0, PIN6      , GPIO0   ), // GPIO0_PIN6
  AF( 1, FC      ,  3, SCK       , FC3     ), // FC3_SCK
  AF( 2, CT      ,  3, CAP1      , CT3     ), // CT3_CAP1
  AF( 3, CT      ,  4, MAT0      , CT4     ), // CT4_MAT0
  //( 4, SCT     ,  0, GPI6      , SCT0    ), // SCT0_GPI6
  //( 6, EMC     ,  0, D4        , EMC     ), // EMC_D4
  //( 7, ENET    ,  0, RX_DV     , ENET    ), // ENET_RX_DV
  //(12, ISP     ,  2,           , ISP2    ), // ISP2
};

const pin_obj_t pin_06 = PIN(0, 6, pin_06_af, 0, 0);

const pin_af_obj_t pin_10_af[] = {
  AF( 0, GPIO    ,  1, PIN0      , GPIO1   ), // GPIO1_PIN0
  AF( 1, FC      ,  0, RTS_SCL_SSEL1, FC0     ), // FC0_RTS_SCL_SSEL1
  //( 2, SD      ,  0, D3        , SD      ), // SD_D3
  AF( 3, CT      ,  0, CAP2      , CT0     ), // CT0_CAP2
  //( 4, SCT     ,  0, GPI4      , SCT0    ), // SCT0_GPI4
  //( 5, TRACECLK,  0,           , TRACECLK), // TRACECLK
};

const pin_obj_t pin_10 = PIN(1, 0, pin_10_af, PIN_ADC1, 6);

const pin_af_obj_t pin_11_af[] = {
  AF( 0, GPIO    ,  1, PIN1      , GPIO1   ), // GPIO1_PIN1
  AF( 1, FC      ,  3, RXD_SDA_MOSI, FC3     ), // FC3_RXD_SDA_MOSI
  AF( 3, CT      ,  0, CAP3      , CT0     ), // CT0_CAP3
  //( 4, SCT     ,  0, GPI5      , SCT0    ), // SCT0_GPI5
  //( 7, USB     ,  1, OVERCURRENTN, USB1    ), // USB1_OVERCURRENTN
};

const pin_obj_t pin_11 = PIN(1, 1, pin_11_af, 0, 0);

const pin_af_obj_t pin_117_af[] = {
  AF( 0, GPIO    ,  1, PIN17     , GPIO1   ), // GPIO1_PIN17
  //( 1, ENET    ,  0, MDIO      , ENET    ), // ENET_MDIO
  AF( 2, FC      ,  8, RXD_SDA_MOSI, FC8     ), // FC8_RXD_SDA_MOSI
  //( 4, SCT     ,  0, OUT4      , SCT0    ), // SCT0_OUT4
  //( 5, CAN     ,  1, TD        , CAN1    ), // CAN1_TD
  //( 6, EMC     ,  0, BLSN0     , EMC     ), // EMC_BLSN0
};

const pin_obj_t pin_117 = PIN(1, 17, pin_117_af, 0, 0);

const pin_af_obj_t pin_118_af[] = {
  AF( 0, GPIO    ,  1, PIN18     , GPIO1   ), // GPIO1_PIN18
  AF( 2, FC      ,  8, TXD_SCL_MISO, FC8     ), // FC8_TXD_SCL_MISO
  //( 4, SCT     ,  0, OUT5      , SCT0    ), // SCT0_OUT5
  //( 5, CAN     ,  1, RD        , CAN1    ), // CAN1_RD
  //( 6, EMC     ,  0, BLSN1     , EMC     ), // EMC_BLSN1
};

const pin_obj_t pin_118 = PIN(1, 18, pin_118_af, 0, 0);

const pin_af_obj_t pin_122_af[] = {
  AF( 0, GPIO    ,  1, PIN22     , GPIO1   ), // GPIO1_PIN22
  AF( 1, FC      ,  8, RTS_SCL_SSEL1, FC8     ), // FC8_RTS_SCL_SSEL1
  //( 2, SD      ,  0, CMD       , SD      ), // SD_CMD
  AF( 3, CT      ,  2, MAT3      , CT2     ), // CT2_MAT3
  //( 4, SCT     ,  0, GPI5      , SCT0    ), // SCT0_GPI5
  AF( 5, FC      ,  4, SSEL3     , FC4     ), // FC4_SSEL3
  //( 6, EMC     ,  0, CKE1      , EMC     ), // EMC_CKE1
};

const pin_obj_t pin_122 = PIN(1, 22, pin_122_af, 0, 0);

const pin_af_obj_t pin_20_af[] = {
  AF( 0, GPIO    ,  2, PIN0      , GPIO2   ), // GPIO2_PIN0
  AF( 2, FC      ,  0, RXD_SDA_MOSI, FC0     ), // FC0_RXD_SDA_MOSI
  AF( 4, CT      ,  1, CAP0      , CT1     ), // CT1_CAP0
};

const pin_obj_t pin_20 = PIN(2, 0, pin_20_af, PIN_ADC1, 7);

const pin_af_obj_t pin_21_af[] = {
  AF( 0, GPIO    ,  2, PIN1      , GPIO2   ), // GPIO2_PIN1
  AF( 2, FC      ,  0, TXD_SCL_MISO, FC0     ), // FC0_TXD_SCL_MISO
  AF( 4, CT      ,  1, MAT0      , CT1     ), // CT1_MAT0
};

const pin_obj_t pin_21 = PIN(2, 1, pin_21_af, PIN_ADC1, 8);

const pin_af_obj_t pin_217_af[] = {
  AF( 0, GPIO    ,  2, PIN17     , GPIO2   ), // GPIO2_PIN17
  //( 1, LCD     ,  0, CLKIN     , LCD     ), // LCD_CLKIN
  //( 2, USB     ,  1, LEDN      , USB1    ), // USB1_LEDN
  //( 3, USB     ,  1, OVERCURRENTN, USB1    ), // USB1_OVERCURRENTN
  AF( 4, CT      ,  1, CAP1      , CT1     ), // CT1_CAP1
  AF( 5, FC      ,  8, RXD_SDA_MOSI, FC8     ), // FC8_RXD_SDA_MOSI
};

const pin_obj_t pin_217 = PIN(2, 17, pin_217_af, 0, 0);

const pin_af_obj_t pin_218_af[] = {
  AF( 0, GPIO    ,  2, PIN18     , GPIO2   ), // GPIO2_PIN18
  //( 1, LCD     ,  0, VD0       , LCD     ), // LCD_VD0
  AF( 2, FC      ,  3, RXD_SDA_MOSI, FC3     ), // FC3_RXD_SDA_MOSI
  AF( 3, FC      ,  7, SCK       , FC7     ), // FC7_SCK
  AF( 4, CT      ,  3, MAT0      , CT3     ), // CT3_MAT0
};

const pin_obj_t pin_218 = PIN(2, 18, pin_218_af, 0, 0);

const pin_af_obj_t pin_219_af[] = {
  AF( 0, GPIO    ,  2, PIN19     , GPIO2   ), // GPIO2_PIN19
  //( 1, LCD     ,  0, VD1       , LCD     ), // LCD_VD1
  AF( 2, FC      ,  3, TXD_SCL_MISO, FC3     ), // FC3_TXD_SCL_MISO
  AF( 3, FC      ,  7, RXD_SDA_MOSI_DATA, FC7     ), // FC7_RXD_SDA_MOSI_DATA
  AF( 4, CT      ,  3, MAT1      , CT3     ), // CT3_MAT1
};

const pin_obj_t pin_219 = PIN(2, 19, pin_219_af, 0, 0);

const pin_af_obj_t pin_22_af[] = {
  AF( 0, GPIO    ,  2, PIN2      , GPIO2   ), // GPIO2_PIN2
  //( 1, ENET    ,  0, CRS       , ENET    ), // ENET_CRS
  AF( 2, FC      ,  3, SSEL3     , FC3     ), // FC3_SSEL3
  //( 3, SCT     ,  0, OUT6      , SCT0    ), // SCT0_OUT6
  AF( 4, CT      ,  1, MAT1      , CT1     ), // CT1_MAT1
};

const pin_obj_t pin_22 = PIN(2, 2, pin_22_af, 0, 0);

const pin_af_obj_t pin_220_af[] = {
  AF( 0, GPIO    ,  2, PIN20     , GPIO2   ), // GPIO2_PIN20
  //( 1, LCD     ,  0, VD2       , LCD     ), // LCD_VD2
  AF( 2, FC      ,  3, RTS_SCL_SSEL1, FC3     ), // FC3_RTS_SCL_SSEL1
  AF( 3, FC      ,  7, TXD_SCL_MISO_WS, FC7     ), // FC7_TXD_SCL_MISO_WS
  AF( 4, CT      ,  3, MAT2      , CT3     ), // CT3_MAT2
  AF( 5, CT      ,  4, CAP0      , CT4     ), // CT4_CAP0
};

const pin_obj_t pin_220 = PIN(2, 20, pin_220_af, 0, 0);

const pin_af_obj_t pin_30_af[] = {
  AF( 0, GPIO    ,  3, PIN0      , GPIO3   ), // GPIO3_PIN0
  //( 1, LCD     ,  0, VD14      , LCD     ), // LCD_VD14
  //( 2, PDM     ,  0, CLK       , PDM0    ), // PDM0_CLK
  AF( 4, CT      ,  1, MAT0      , CT1     ), // CT1_MAT0
};

const pin_obj_t pin_30 = PIN(3, 0, pin_30_af, 0, 0);

const pin_af_obj_t pin_31_af[] = {
  AF( 0, GPIO    ,  3, PIN1      , GPIO3   ), // GPIO3_PIN1
  //( 1, LCD     ,  0, VD15      , LCD     ), // LCD_VD15
  //( 2, PDM     ,  0, DATA      , PDM0    ), // PDM0_DATA
  AF( 4, CT      ,  1, MAT1      , CT1     ), // CT1_MAT1
};

const pin_obj_t pin_31 = PIN(3, 1, pin_31_af, 0, 0);

const pin_af_obj_t pin_310_af[] = {
  AF( 0, GPIO    ,  3, PIN10     , GPIO3   ), // GPIO3_PIN10
  //( 1, SCT     ,  0, OUT3      , SCT0    ), // SCT0_OUT3
  AF( 3, CT      ,  3, MAT0      , CT3     ), // CT3_MAT0
  //( 6, EMC     ,  0, DYCSN1    , EMC     ), // EMC_DYCSN1
  //( 7, TRACEDATA,  0,           , TRACEDATA0), // TRACEDATA0
};

const pin_obj_t pin_310 = PIN(3, 10, pin_310_af, 0, 0);

const pin_af_obj_t pin_311_af[] = {
  AF( 0, GPIO    ,  3, PIN11     , GPIO3   ), // GPIO3_PIN11
  //( 1, MCLK    ,  0,           , MCLK    ), // MCLK
  AF( 2, FC      ,  0, SCK       , FC0     ), // FC0_SCK
  AF( 3, FC      ,  1, SCK       , FC1     ), // FC1_SCK
  //( 7, TRACEDATA,  3,           , TRACEDATA3), // TRACEDATA3
};

const pin_obj_t pin_311 = PIN(3, 11, pin_311_af, 0, 0);

const pin_af_obj_t pin_312_af[] = {
  AF( 0, GPIO    ,  3, PIN12     , GPIO3   ), // GPIO3_PIN12
  //( 1, SCT     ,  0, OUT8      , SCT0    ), // SCT0_OUT8
  AF( 3, CT      ,  3, CAP0      , CT3     ), // CT3_CAP0
  //( 5, CLKOUT  ,  0,           , CLKOUT  ), // CLKOUT
  //( 6, EMC     ,  0, CLK1      , EMC     ), // EMC_CLK1
  //( 7, TRACECLK,  0,           , TRACECLK), // TRACECLK
};

const pin_obj_t pin_312 = PIN(3, 12, pin_312_af, 0, 0);

const pin_af_obj_t pin_314_af[] = {
  AF( 0, GPIO    ,  3, PIN14     , GPIO3   ), // GPIO3_PIN14
  //( 1, SCT     ,  0, OUT4      , SCT0    ), // SCT0_OUT4
  AF( 2, FC      ,  9, RTS_SCL_SSEL1, FC9     ), // FC9_RTS_SCL_SSEL1
  AF( 3, CT      ,  3, MAT1      , CT3     ), // CT3_MAT1
  //( 7, TRACEDATA,  2,           , TRACEDATA2), // TRACEDATA2
};

const pin_obj_t pin_314 = PIN(3, 14, pin_314_af, 0, 0);

const pin_af_obj_t pin_316_af[] = {
  AF( 0, GPIO    ,  3, PIN16     , GPIO3   ), // GPIO3_PIN16
  AF( 1, FC      ,  8, RXD_SDA_MOSI, FC8     ), // FC8_RXD_SDA_MOSI
  //( 2, SD      ,  0, D4        , SD      ), // SD_D4
};

const pin_obj_t pin_316 = PIN(3, 16, pin_316_af, 0, 0);

const pin_af_obj_t pin_317_af[] = {
  AF( 0, GPIO    ,  3, PIN17     , GPIO3   ), // GPIO3_PIN17
  AF( 1, FC      ,  8, TXD_SCL_MISO, FC8     ), // FC8_TXD_SCL_MISO
  //( 2, SD      ,  0, D5        , SD      ), // SD_D5
};

const pin_obj_t pin_317 = PIN(3, 17, pin_317_af, 0, 0);

const pin_af_obj_t pin_318_af[] = {
  AF( 0, GPIO    ,  3, PIN18     , GPIO3   ), // GPIO3_PIN18
  AF( 1, FC      ,  8, CTS_SDA_SSEL0, FC8     ), // FC8_CTS_SDA_SSEL0
  //( 2, SD      ,  0, D6        , SD      ), // SD_D6
  AF( 3, CT      ,  4, MAT0      , CT4     ), // CT4_MAT0
  //( 4, CAN     ,  0, TD        , CAN0    ), // CAN0_TD
  //( 5, SCT     ,  0, OUT5      , SCT0    ), // SCT0_OUT5
};

const pin_obj_t pin_318 = PIN(3, 18, pin_318_af, 0, 0);

const pin_af_obj_t pin_319_af[] = {
  AF( 0, GPIO    ,  3, PIN19     , GPIO3   ), // GPIO3_PIN19
  AF( 1, FC      ,  8, RTS_SCL_SSEL1, FC8     ), // FC8_RTS_SCL_SSEL1
  //( 2, SD      ,  0, D7        , SD      ), // SD_D7
  AF( 3, CT      ,  4, MAT1      , CT4     ), // CT4_MAT1
  //( 4, CAN     ,  0, RD        , CAN0    ), // CAN0_RD
  //( 5, SCT     ,  0, OUT6      , SCT0    ), // SCT0_OUT6
};

const pin_obj_t pin_319 = PIN(3, 19, pin_319_af, 0, 0);

const pin_af_obj_t pin_32_af[] = {
  AF( 0, GPIO    ,  3, PIN2      , GPIO3   ), // GPIO3_PIN2
  //( 1, LCD     ,  0, VD16      , LCD     ), // LCD_VD16
  AF( 2, FC      ,  9, RXD_SDA_MOSI, FC9     ), // FC9_RXD_SDA_MOSI
  AF( 4, CT      ,  1, MAT2      , CT1     ), // CT1_MAT2
};

const pin_obj_t pin_32 = PIN(3, 2, pin_32_af, 0, 0);

const pin_af_obj_t pin_320_af[] = {
  AF( 0, GPIO    ,  3, PIN20     , GPIO3   ), // GPIO3_PIN20
  AF( 1, FC      ,  9, SCK       , FC9     ), // FC9_SCK
  //( 2, SD      ,  0, CARD_INT_N, SD      ), // SD_CARD_INT_N
  //( 3, CLKOUT  ,  0,           , CLKOUT  ), // CLKOUT
  //( 5, SCT     ,  0, OUT7      , SCT0    ), // SCT0_OUT7
};

const pin_obj_t pin_320 = PIN(3, 20, pin_320_af, 0, 0);

const pin_af_obj_t pin_321_af[] = {
  AF( 0, GPIO    ,  3, PIN21     , GPIO3   ), // GPIO3_PIN21
  AF( 1, FC      ,  9, RXD_SDA_MOSI, FC9     ), // FC9_RXD_SDA_MOSI
  //( 2, SD      ,  0, BACKEND_PWR, SD      ), // SD_BACKEND_PWR
  AF( 3, CT      ,  4, MAT3      , CT4     ), // CT4_MAT3
  //( 4, UTICK   ,  0, CAP2      , UTICK   ), // UTICK_CAP2
};

const pin_obj_t pin_321 = PIN(3, 21, pin_321_af, PIN_ADC1, 9);

const pin_af_obj_t pin_322_af[] = {
  AF( 0, GPIO    ,  3, PIN22     , GPIO3   ), // GPIO3_PIN22
  AF( 1, FC      ,  9, TXD_SCL_MISO, FC9     ), // FC9_TXD_SCL_MISO
};

const pin_obj_t pin_322 = PIN(3, 22, pin_322_af, PIN_ADC1, 10);

const pin_af_obj_t pin_323_af[] = {
  AF( 0, GPIO    ,  3, PIN23     , GPIO3   ), // GPIO3_PIN23
  AF( 1, FC      ,  2, CTS_SDA_SSEL0, FC2     ), // FC2_CTS_SDA_SSEL0
  //( 3, UTICK   ,  0, CAP3      , UTICK   ), // UTICK_CAP3
};

const pin_obj_t pin_323 = PIN(3, 23, pin_323_af, 0, 0);

const pin_af_obj_t pin_324_af[] = {
  AF( 0, GPIO    ,  3, PIN24     , GPIO3   ), // GPIO3_PIN24
  AF( 1, FC      ,  2, RTS_SCL_SSEL1, FC2     ), // FC2_RTS_SCL_SSEL1
  AF( 2, CT      ,  4, CAP0      , CT4     ), // CT4_CAP0
  //( 3, USB     ,  0, VBUS      , USB0    ), // USB0_VBUS
};

const pin_obj_t pin_324 = PIN(3, 24, pin_324_af, 0, 0);

const pin_af_obj_t pin_326_af[] = {
  AF( 0, GPIO    ,  3, PIN26     , GPIO3   ), // GPIO3_PIN26
  //( 2, SCT     ,  0, OUT0      , SCT0    ), // SCT0_OUT0
  AF( 3, FC      ,  4, RXD_SDA_MOSI, FC4     ), // FC4_RXD_SDA_MOSI
  //( 6, EMC     ,  0, A15       , EMC     ), // EMC_A15
};

const pin_obj_t pin_326 = PIN(3, 26, pin_326_af, 0, 0);

const pin_af_obj_t pin_327_af[] = {
  AF( 0, GPIO    ,  3, PIN27     , GPIO3   ), // GPIO3_PIN27
  //( 2, SCT     ,  0, OUT1      , SCT0    ), // SCT0_OUT1
  AF( 3, FC      ,  4, TXD_SCL_MISO, FC4     ), // FC4_TXD_SCL_MISO
  //( 6, EMC     ,  0, A16       , EMC     ), // EMC_A16
};

const pin_obj_t pin_327 = PIN(3, 27, pin_327_af, 0, 0);

const pin_af_obj_t pin_328_af[] = {
  AF( 0, GPIO    ,  3, PIN28     , GPIO3   ), // GPIO3_PIN28
  //( 2, SCT     ,  0, OUT2      , SCT0    ), // SCT0_OUT2
  AF( 3, FC      ,  4, CTS_SDA_SSEL0, FC4     ), // FC4_CTS_SDA_SSEL0
  //( 6, EMC     ,  0, A17       , EMC     ), // EMC_A17
};

const pin_obj_t pin_328 = PIN(3, 28, pin_328_af, 0, 0);

const pin_af_obj_t pin_329_af[] = {
  AF( 0, GPIO    ,  3, PIN29     , GPIO3   ), // GPIO3_PIN29
  //( 2, SCT     ,  0, OUT3      , SCT0    ), // SCT0_OUT3
  AF( 3, FC      ,  4, RTS_SCL_SSEL1, FC4     ), // FC4_RTS_SCL_SSEL1
  //( 6, EMC     ,  0, A18       , EMC     ), // EMC_A18
};

const pin_obj_t pin_329 = PIN(3, 29, pin_329_af, 0, 0);

const pin_af_obj_t pin_33_af[] = {
  AF( 0, GPIO    ,  3, PIN3      , GPIO3   ), // GPIO3_PIN3
  //( 1, LCD     ,  0, VD17      , LCD     ), // LCD_VD17
  AF( 2, FC      ,  9, TXD_SCL_MISO, FC9     ), // FC9_TXD_SCL_MISO
};

const pin_obj_t pin_33 = PIN(3, 3, pin_33_af, 0, 0);

const pin_af_obj_t pin_330_af[] = {
  AF( 0, GPIO    ,  3, PIN30     , GPIO3   ), // GPIO3_PIN30
  AF( 1, FC      ,  9, CTS_SDA_SSEL0, FC9     ), // FC9_CTS_SDA_SSEL0
  //( 2, SCT     ,  0, OUT4      , SCT0    ), // SCT0_OUT4
  AF( 3, FC      ,  4, SSEL2     , FC4     ), // FC4_SSEL2
  //( 6, EMC     ,  0, A19       , EMC     ), // EMC_A19
};

const pin_obj_t pin_330 = PIN(3, 30, pin_330_af, 0, 0);

const pin_af_obj_t pin_41_af[] = {
  AF( 0, GPIO    ,  4, PIN1      , GPIO4   ), // GPIO4_PIN1
  AF( 2, FC      ,  6, SCK       , FC6     ), // FC6_SCK
  //( 5, SCT     ,  0, GPI2      , SCT0    ), // SCT0_GPI2
  //( 6, EMC     ,  0, CSN2      , EMC     ), // EMC_CSN2
};

const pin_obj_t pin_41 = PIN(4, 1, pin_41_af, 0, 0);

const pin_af_obj_t pin_42_af[] = {
  AF( 0, GPIO    ,  4, PIN2      , GPIO4   ), // GPIO4_PIN2
  AF( 2, FC      ,  6, RXD_SDA_MOSI_DATA, FC6     ), // FC6_RXD_SDA_MOSI_DATA
  //( 5, SCT     ,  0, GPI3      , SCT0    ), // SCT0_GPI3
  //( 6, EMC     ,  0, CSN3      , EMC     ), // EMC_CSN3
};

const pin_obj_t pin_42 = PIN(4, 2, pin_42_af, 0, 0);

const pin_af_obj_t pin_43_af[] = {
  AF( 0, GPIO    ,  4, PIN3      , GPIO4   ), // GPIO4_PIN3
  AF( 2, FC      ,  6, TXD_SCL_MISO_WS, FC6     ), // FC6_TXD_SCL_MISO_WS
  AF( 3, CT      ,  0, CAP3      , CT0     ), // CT0_CAP3
  //( 5, SCT     ,  0, GPI4      , SCT0    ), // SCT0_GPI4
  //( 6, EMC     ,  0, DYCSN2    , EMC     ), // EMC_DYCSN2
};

const pin_obj_t pin_43 = PIN(4, 3, pin_43_af, 0, 0);

const pin_af_obj_t pin_44_af[] = {
  AF( 0, GPIO    ,  4, PIN4      , GPIO4   ), // GPIO4_PIN4
  AF( 2, FC      ,  4, SSEL3     , FC4     ), // FC4_SSEL3
  AF( 3, FC      ,  0, RTS_SCL_SSEL1, FC0     ), // FC0_RTS_SCL_SSEL1
  //( 5, SCT     ,  0, GPI5      , SCT0    ), // SCT0_GPI5
  //( 6, EMC     ,  0, DYCSN3    , EMC     ), // EMC_DYCSN3
};

const pin_obj_t pin_44 = PIN(4, 4, pin_44_af, 0, 0);

const pin_af_obj_t pin_45_af[] = {
  AF( 0, GPIO    ,  4, PIN5      , GPIO4   ), // GPIO4_PIN5
  AF( 2, FC      ,  9, CTS_SDA_SSEL0, FC9     ), // FC9_CTS_SDA_SSEL0
  AF( 3, FC      ,  0, CTS_SDA_SSEL0, FC0     ), // FC0_CTS_SDA_SSEL0
  AF( 4, CT      ,  4, MAT3      , CT4     ), // CT4_MAT3
  //( 5, SCT     ,  0, GPI6      , SCT0    ), // SCT0_GPI6
  //( 6, EMC     ,  0, CKE2      , EMC     ), // EMC_CKE2
};

const pin_obj_t pin_45 = PIN(4, 5, pin_45_af, 0, 0);

const pin_af_obj_t pin_46_af[] = {
  AF( 0, GPIO    ,  4, PIN6      , GPIO4   ), // GPIO4_PIN6
  AF( 2, FC      ,  9, RTS_SCL_SSEL1, FC9     ), // FC9_RTS_SCL_SSEL1
  //( 5, SCT     ,  0, GPI7      , SCT0    ), // SCT0_GPI7
  //( 6, EMC     ,  0, CKE3      , EMC     ), // EMC_CKE3
};

const pin_obj_t pin_46 = PIN(4, 6, pin_46_af, 0, 0);

const pin_af_obj_t pin_47_af[] = {
  AF( 0, GPIO    ,  4, PIN7      , GPIO4   ), // GPIO4_PIN7
  AF( 2, CT      ,  4, CAP3      , CT4     ), // CT4_CAP3
  //( 3, USB     ,  0, PORTPWRN  , USB0    ), // USB0_PORTPWRN
  //( 4, USB     ,  0, FRAME     , USB0    ), // USB0_FRAME
  //( 5, SCT     ,  0, GPI0      , SCT0    ), // SCT0_GPI0
};

const pin_obj_t pin_47 = PIN(4, 7, pin_47_af, 0, 0);

STATIC const mp_rom_map_elem_t pin_cpu_pins_locals_dict_table[] = {
  { MP_ROM_QSTR(MP_QSTR_016), MP_ROM_PTR(&pin_016) },
  { MP_ROM_QSTR(MP_QSTR_023), MP_ROM_PTR(&pin_023) },
  { MP_ROM_QSTR(MP_QSTR_024), MP_ROM_PTR(&pin_024) },
  { MP_ROM_QSTR(MP_QSTR_025), MP_ROM_PTR(&pin_025) },
  { MP_ROM_QSTR(MP_QSTR_026), MP_ROM_PTR(&pin_026) },
  { MP_ROM_QSTR(MP_QSTR_027), MP_ROM_PTR(&pin_027) },
  { MP_ROM_QSTR(MP_QSTR_028), MP_ROM_PTR(&pin_028) },
  { MP_ROM_QSTR(MP_QSTR_031), MP_ROM_PTR(&pin_031) },
  { MP_ROM_QSTR(MP_QSTR_04), MP_ROM_PTR(&pin_04) },
  { MP_ROM_QSTR(MP_QSTR_05), MP_ROM_PTR(&pin_05) },
  { MP_ROM_QSTR(MP_QSTR_06), MP_ROM_PTR(&pin_06) },
  { MP_ROM_QSTR(MP_QSTR_10), MP_ROM_PTR(&pin_10) },
  { MP_ROM_QSTR(MP_QSTR_11), MP_ROM_PTR(&pin_11) },
  { MP_ROM_QSTR(MP_QSTR_117), MP_ROM_PTR(&pin_117) },
  { MP_ROM_QSTR(MP_QSTR_118), MP_ROM_PTR(&pin_118) },
  { MP_ROM_QSTR(MP_QSTR_122), MP_ROM_PTR(&pin_122) },
  { MP_ROM_QSTR(MP_QSTR_20), MP_ROM_PTR(&pin_20) },
  { MP_ROM_QSTR(MP_QSTR_21), MP_ROM_PTR(&pin_21) },
  { MP_ROM_QSTR(MP_QSTR_217), MP_ROM_PTR(&pin_217) },
  { MP_ROM_QSTR(MP_QSTR_218), MP_ROM_PTR(&pin_218) },
  { MP_ROM_QSTR(MP_QSTR_219), MP_ROM_PTR(&pin_219) },
  { MP_ROM_QSTR(MP_QSTR_22), MP_ROM_PTR(&pin_22) },
  { MP_ROM_QSTR(MP_QSTR_220), MP_ROM_PTR(&pin_220) },
  { MP_ROM_QSTR(MP_QSTR_30), MP_ROM_PTR(&pin_30) },
  { MP_ROM_QSTR(MP_QSTR_31), MP_ROM_PTR(&pin_31) },
  { MP_ROM_QSTR(MP_QSTR_310), MP_ROM_PTR(&pin_310) },
  { MP_ROM_QSTR(MP_QSTR_311), MP_ROM_PTR(&pin_311) },
  { MP_ROM_QSTR(MP_QSTR_312), MP_ROM_PTR(&pin_312) },
  { MP_ROM_QSTR(MP_QSTR_314), MP_ROM_PTR(&pin_314) },
  { MP_ROM_QSTR(MP_QSTR_316), MP_ROM_PTR(&pin_316) },
  { MP_ROM_QSTR(MP_QSTR_317), MP_ROM_PTR(&pin_317) },
  { MP_ROM_QSTR(MP_QSTR_318), MP_ROM_PTR(&pin_318) },
  { MP_ROM_QSTR(MP_QSTR_319), MP_ROM_PTR(&pin_319) },
  { MP_ROM_QSTR(MP_QSTR_32), MP_ROM_PTR(&pin_32) },
  { MP_ROM_QSTR(MP_QSTR_320), MP_ROM_PTR(&pin_320) },
  { MP_ROM_QSTR(MP_QSTR_321), MP_ROM_PTR(&pin_321) },
  { MP_ROM_QSTR(MP_QSTR_322), MP_ROM_PTR(&pin_322) },
  { MP_ROM_QSTR(MP_QSTR_323), MP_ROM_PTR(&pin_323) },
  { MP_ROM_QSTR(MP_QSTR_324), MP_ROM_PTR(&pin_324) },
  { MP_ROM_QSTR(MP_QSTR_326), MP_ROM_PTR(&pin_326) },
  { MP_ROM_QSTR(MP_QSTR_327), MP_ROM_PTR(&pin_327) },
  { MP_ROM_QSTR(MP_QSTR_328), MP_ROM_PTR(&pin_328) },
  { MP_ROM_QSTR(MP_QSTR_329), MP_ROM_PTR(&pin_329) },
  { MP_ROM_QSTR(MP_QSTR_33), MP_ROM_PTR(&pin_33) },
  { MP_ROM_QSTR(MP_QSTR_330), MP_ROM_PTR(&pin_330) },
  { MP_ROM_QSTR(MP_QSTR_41), MP_ROM_PTR(&pin_41) },
  { MP_ROM_QSTR(MP_QSTR_42), MP_ROM_PTR(&pin_42) },
  { MP_ROM_QSTR(MP_QSTR_43), MP_ROM_PTR(&pin_43) },
  { MP_ROM_QSTR(MP_QSTR_44), MP_ROM_PTR(&pin_44) },
  { MP_ROM_QSTR(MP_QSTR_45), MP_ROM_PTR(&pin_45) },
  { MP_ROM_QSTR(MP_QSTR_46), MP_ROM_PTR(&pin_46) },
  { MP_ROM_QSTR(MP_QSTR_47), MP_ROM_PTR(&pin_47) },
};
MP_DEFINE_CONST_DICT(pin_cpu_pins_locals_dict, pin_cpu_pins_locals_dict_table);

STATIC const mp_rom_map_elem_t pin_board_pins_locals_dict_table[] = {
  { MP_ROM_QSTR(MP_QSTR_J12_2), MP_ROM_PTR(&pin_016) },
  { MP_ROM_QSTR(MP_QSTR_J13_8), MP_ROM_PTR(&pin_023) },
  { MP_ROM_QSTR(MP_QSTR_J13_6), MP_ROM_PTR(&pin_024) },
  { MP_ROM_QSTR(MP_QSTR_J13_4), MP_ROM_PTR(&pin_025) },
  { MP_ROM_QSTR(MP_QSTR_J13_2), MP_ROM_PTR(&pin_026) },
  { MP_ROM_QSTR(MP_QSTR_J13_12), MP_ROM_PTR(&pin_027) },
  { MP_ROM_QSTR(MP_QSTR_J13_10), MP_ROM_PTR(&pin_028) },
  { MP_ROM_QSTR(MP_QSTR_J12_4), MP_ROM_PTR(&pin_031) },
  { MP_ROM_QSTR(MP_QSTR_SW4), MP_ROM_PTR(&pin_04) },
  { MP_ROM_QSTR(MP_QSTR_SW3), MP_ROM_PTR(&pin_05) },
  { MP_ROM_QSTR(MP_QSTR_SW2), MP_ROM_PTR(&pin_06) },
  { MP_ROM_QSTR(MP_QSTR_J12_6), MP_ROM_PTR(&pin_10) },
  { MP_ROM_QSTR(MP_QSTR_J12_12), MP_ROM_PTR(&pin_11) },
  { MP_ROM_QSTR(MP_QSTR_J9_4), MP_ROM_PTR(&pin_117) },
  { MP_ROM_QSTR(MP_QSTR_J9_2), MP_ROM_PTR(&pin_118) },
  { MP_ROM_QSTR(MP_QSTR_J13_1), MP_ROM_PTR(&pin_122) },
  { MP_ROM_QSTR(MP_QSTR_J12_8), MP_ROM_PTR(&pin_20) },
  { MP_ROM_QSTR(MP_QSTR_J9_17), MP_ROM_PTR(&pin_21) },
  { MP_ROM_QSTR(MP_QSTR_J13_20), MP_ROM_PTR(&pin_217) },
  { MP_ROM_QSTR(MP_QSTR_J9_16), MP_ROM_PTR(&pin_218) },
  { MP_ROM_QSTR(MP_QSTR_J9_20), MP_ROM_PTR(&pin_219) },
  { MP_ROM_QSTR(MP_QSTR_LED2), MP_ROM_PTR(&pin_22) },
  { MP_ROM_QSTR(MP_QSTR_J9_18), MP_ROM_PTR(&pin_220) },
  { MP_ROM_QSTR(MP_QSTR_J13_17), MP_ROM_PTR(&pin_30) },
  { MP_ROM_QSTR(MP_QSTR_J13_3), MP_ROM_PTR(&pin_31) },
  { MP_ROM_QSTR(MP_QSTR_J13_7), MP_ROM_PTR(&pin_310) },
  { MP_ROM_QSTR(MP_QSTR_J12_7), MP_ROM_PTR(&pin_311) },
  { MP_ROM_QSTR(MP_QSTR_CLKOUT), MP_ROM_PTR(&pin_312) },
  { MP_ROM_QSTR(MP_QSTR_LED1), MP_ROM_PTR(&pin_314) },
  { MP_ROM_QSTR(MP_QSTR_J13_5), MP_ROM_PTR(&pin_314) },
  { MP_ROM_QSTR(MP_QSTR_J12_3), MP_ROM_PTR(&pin_316) },
  { MP_ROM_QSTR(MP_QSTR_J13_18), MP_ROM_PTR(&pin_317) },
  { MP_ROM_QSTR(MP_QSTR_J10_4), MP_ROM_PTR(&pin_318) },
  { MP_ROM_QSTR(MP_QSTR_J10_2), MP_ROM_PTR(&pin_319) },
  { MP_ROM_QSTR(MP_QSTR_J13_11), MP_ROM_PTR(&pin_32) },
  { MP_ROM_QSTR(MP_QSTR_J9_9), MP_ROM_PTR(&pin_320) },
  { MP_ROM_QSTR(MP_QSTR_J9_13), MP_ROM_PTR(&pin_321) },
  { MP_ROM_QSTR(MP_QSTR_J9_11), MP_ROM_PTR(&pin_322) },
  { MP_ROM_QSTR(MP_QSTR_J9_3), MP_ROM_PTR(&pin_323) },
  { MP_ROM_QSTR(MP_QSTR_J9_1), MP_ROM_PTR(&pin_324) },
  { MP_ROM_QSTR(MP_QSTR_J13_15), MP_ROM_PTR(&pin_326) },
  { MP_ROM_QSTR(MP_QSTR_J13_13), MP_ROM_PTR(&pin_327) },
  { MP_ROM_QSTR(MP_QSTR_J13_16), MP_ROM_PTR(&pin_328) },
  { MP_ROM_QSTR(MP_QSTR_J13_14), MP_ROM_PTR(&pin_329) },
  { MP_ROM_QSTR(MP_QSTR_LED3), MP_ROM_PTR(&pin_33) },
  { MP_ROM_QSTR(MP_QSTR_J9_8), MP_ROM_PTR(&pin_33) },
  { MP_ROM_QSTR(MP_QSTR_J9_15), MP_ROM_PTR(&pin_330) },
  { MP_ROM_QSTR(MP_QSTR_J9_14), MP_ROM_PTR(&pin_41) },
  { MP_ROM_QSTR(MP_QSTR_J9_10), MP_ROM_PTR(&pin_42) },
  { MP_ROM_QSTR(MP_QSTR_J9_12), MP_ROM_PTR(&pin_43) },
  { MP_ROM_QSTR(MP_QSTR_J13_19), MP_ROM_PTR(&pin_44) },
  { MP_ROM_QSTR(MP_QSTR_J13_9), MP_ROM_PTR(&pin_45) },
  { MP_ROM_QSTR(MP_QSTR_J12_1), MP_ROM_PTR(&pin_46) },
  { MP_ROM_QSTR(MP_QSTR_J9_19), MP_ROM_PTR(&pin_47) },
};
MP_DEFINE_CONST_DICT(pin_board_pins_locals_dict, pin_board_pins_locals_dict_table);

const pin_obj_t * const pin_adc0[] = {
  NULL,    // 0
  NULL,    // 1
  NULL,    // 2
  NULL,    // 3
  &pin_016, // 4
  &pin_031, // 5
  &pin_10, // 6
  &pin_20, // 7
  &pin_21, // 8
  &pin_321, // 9
  &pin_322, // 10
  &pin_023, // 11
  NULL,    // 12
  NULL,    // 13
  NULL,    // 14
  NULL,    // 15
  NULL,    // 16
};