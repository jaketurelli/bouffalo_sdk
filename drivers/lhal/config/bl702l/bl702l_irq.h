#ifndef __BL702L_IRQ_H
#define __BL702L_IRQ_H

/****************************************************************************
 * Included Files
 ****************************************************************************/

/****************************************************************************
 * Pre-processor Definitions
 ****************************************************************************/

#define BL702L_IRQ_NUM_BASE 16

#define BL702L_IRQ_MSOFT          3
#define BL702L_IRQ_MTIME          7
#define BL702L_IRQ_MEXT           11
#define BL702L_IRQ_CLIC_SOFT_PEND 12

#define BL702L_IRQ_BMX_MCU_BUS_ERR  (BL702L_IRQ_NUM_BASE + 0)
#define BL702L_IRQ_BMX_MCU_TO       (BL702L_IRQ_NUM_BASE + 1)
#define BL702L_IRQ_L1C_BMX_ERR      (BL702L_IRQ_NUM_BASE + 2)
#define BL702L_IRQ_L1C_BMX_TO       (BL702L_IRQ_NUM_BASE + 3)
#define BL702L_IRQ_SEC_BMX_ERR      (BL702L_IRQ_NUM_BASE + 4)
#define BL702L_IRQ_RF_TOP_INT0      (BL702L_IRQ_NUM_BASE + 5)
#define BL702L_IRQ_RF_TOP_INT1      (BL702L_IRQ_NUM_BASE + 6)
#define BL702L_IRQ_RESERVED0        (BL702L_IRQ_NUM_BASE + 7)
#define BL702L_IRQ_DMA_BMX_ERR      (BL702L_IRQ_NUM_BASE + 8)
#define BL702L_IRQ_SEC_GMAC         (BL702L_IRQ_NUM_BASE + 9)
#define BL702L_IRQ_SEC_CDET         (BL702L_IRQ_NUM_BASE + 10)
#define BL702L_IRQ_SEC_PKA          (BL702L_IRQ_NUM_BASE + 11)
#define BL702L_IRQ_SEC_TRNG         (BL702L_IRQ_NUM_BASE + 12)
#define BL702L_IRQ_SEC_AES          (BL702L_IRQ_NUM_BASE + 13)
#define BL702L_IRQ_SEC_SHA          (BL702L_IRQ_NUM_BASE + 14)
#define BL702L_IRQ_DMA0_ALL         (BL702L_IRQ_NUM_BASE + 15)
#define BL702L_IRQ_RESERVED1        (BL702L_IRQ_NUM_BASE + 16)
#define BL702L_IRQ_AUADC            (BL702L_IRQ_NUM_BASE + 17)
#define BL702L_IRQ_RESERVED2        (BL702L_IRQ_NUM_BASE + 18)
#define BL702L_IRQ_IRTX             (BL702L_IRQ_NUM_BASE + 19)
#define BL702L_IRQ_RESERVED3        (BL702L_IRQ_NUM_BASE + 20)
#define BL702L_IRQ_RESERVED4        (BL702L_IRQ_NUM_BASE + 21)
#define BL702L_IRQ_RESERVED5        (BL702L_IRQ_NUM_BASE + 22)
#define BL702L_IRQ_SF_CTRL          (BL702L_IRQ_NUM_BASE + 23)
#define BL702L_IRQ_RESERVED6        (BL702L_IRQ_NUM_BASE + 24)
#define BL702L_IRQ_GPADC_DMA        (BL702L_IRQ_NUM_BASE + 25)
#define BL702L_IRQ_EFUSE            (BL702L_IRQ_NUM_BASE + 26)
#define BL702L_IRQ_SPI0             (BL702L_IRQ_NUM_BASE + 27)
#define BL702L_IRQ_RESERVED7        (BL702L_IRQ_NUM_BASE + 28)
#define BL702L_IRQ_UART0            (BL702L_IRQ_NUM_BASE + 29)
#define BL702L_IRQ_RESERVED8        (BL702L_IRQ_NUM_BASE + 30)
#define BL702L_IRQ_RESERVED9        (BL702L_IRQ_NUM_BASE + 31)
#define BL702L_IRQ_I2C0             (BL702L_IRQ_NUM_BASE + 32)
#define BL702L_IRQ_RESERVED10       (BL702L_IRQ_NUM_BASE + 33)
#define BL702L_IRQ_PWM              (BL702L_IRQ_NUM_BASE + 34)
#define BL702L_IRQ_RESERVED11       (BL702L_IRQ_NUM_BASE + 35)
#define BL702L_IRQ_TIMER0           (BL702L_IRQ_NUM_BASE + 36)
#define BL702L_IRQ_TIMER1           (BL702L_IRQ_NUM_BASE + 37)
#define BL702L_IRQ_WDT              (BL702L_IRQ_NUM_BASE + 38)
#define BL702L_IRQ_KYS              (BL702L_IRQ_NUM_BASE + 39)
#define BL702L_IRQ_RESERVED12       (BL702L_IRQ_NUM_BASE + 40)
#define BL702L_IRQ_RESERVED13       (BL702L_IRQ_NUM_BASE + 41)
#define BL702L_IRQ_RESERVED14       (BL702L_IRQ_NUM_BASE + 42)
#define BL702L_IRQ_RESERVED15       (BL702L_IRQ_NUM_BASE + 43)
#define BL702L_IRQ_GPIO_INT0        (BL702L_IRQ_NUM_BASE + 44)
#define BL702L_IRQ_RESERVED16       (BL702L_IRQ_NUM_BASE + 45)
#define BL702L_IRQ_RESERVED17       (BL702L_IRQ_NUM_BASE + 46)
#define BL702L_IRQ_M154_REQ_ENH_ACK (BL702L_IRQ_NUM_BASE + 47)
#define BL702L_IRQ_M154             (BL702L_IRQ_NUM_BASE + 48)
#define BL702L_IRQ_M154_AES         (BL702L_IRQ_NUM_BASE + 49)
#define BL702L_IRQ_PDS_WAKEUP       (BL702L_IRQ_NUM_BASE + 50)
#define BL702L_IRQ_HBN_OUT0         (BL702L_IRQ_NUM_BASE + 51)
#define BL702L_IRQ_HBN_OUT1         (BL702L_IRQ_NUM_BASE + 52)
#define BL702L_IRQ_BOR              (BL702L_IRQ_NUM_BASE + 53)
#define BL702L_IRQ_WIFI             (BL702L_IRQ_NUM_BASE + 54)
#define BL616_IRQ_BZ_PHY_INT        (BL702L_IRQ_NUM_BASE + 55)
#define BL702L_IRQ_BLE              (BL702L_IRQ_NUM_BASE + 56)
#define BL702L_IRQ_RESERVED19       (BL702L_IRQ_NUM_BASE + 57)
#define BL702L_IRQ_RESERVED20       (BL702L_IRQ_NUM_BASE + 58)
#define BL702L_IRQ_RESERVED21       (BL702L_IRQ_NUM_BASE + 59)
#define BL702L_IRQ_RESERVED22       (BL702L_IRQ_NUM_BASE + 60)
#define BL702L_IRQ_RESERVED23       (BL702L_IRQ_NUM_BASE + 61)
#define BL702L_IRQ_24               (BL702L_IRQ_NUM_BASE + 62)
#define BL702L_IRQ_RESERVED25       (BL702L_IRQ_NUM_BASE + 63)

#endif
