/*
 * Atheros AR933x SOC registers definitions
 *
 * Copyright (C) 2014 Piotr Dymacz <piotr@dymacz.pl>
 * Copyright (C) 2008-2010 Atheros Communications Inc.
 *
 * SPDX-License-Identifier:GPL-2.0
 */

#ifndef _AR933X_H_
#define _AR933X_H_

/*
 * Helper macros
 */
#define _BIT(_x)				(1 << (_x))
#define _BITS(_start, _bits)	(((1UL << (_bits)) - 1) << _start)

/*
 * Address map
 */
#define DDR_BASE_REG		0x00000000
#define APB_BASE_REG		0x18000000
#define ETH0_AHB_BASE_REG	0x19000000
#define ETH1_AHB_BASE_REG	0x1A000000
#define USB_AHB_BASE_REG	0x1B000000
#define FLASH_BASE_REG		0x1F000000

/*
 * APB block
 */
#define DDR_CTRL_BASE_REG	APB_BASE_REG + 0x00000000
#define UART_BASE_REG		APB_BASE_REG + 0x00020000
#define USB_CONFIG_BASE_REG	APB_BASE_REG + 0x00030000
#define GPIO_BASE_REG		APB_BASE_REG + 0x00040000
#define PLL_BASE_REG		APB_BASE_REG + 0x00050000
#define RESET_BASE_REG		APB_BASE_REG + 0x00060000
#define GMAC_BASE_REG		APB_BASE_REG + 0x00070000
#define SLIC_BASE_REG		APB_BASE_REG + 0x00090000
#define RTC_BASE_REG		APB_BASE_REG + 0x00107000

/*
 * DDR registers
 */
#define DDR_CONFIG_REG				DDR_CTRL_BASE_REG + 0x00
#define DDR_CONFIG2_REG				DDR_CTRL_BASE_REG + 0x04
#define DDR_MODE_REG				DDR_CTRL_BASE_REG + 0x08
#define DDR_EXTENDED_MODE_REG		DDR_CTRL_BASE_REG + 0x0C
#define DDR_CONTROL_REG				DDR_CTRL_BASE_REG + 0x10
#define DDR_REFRESH_REG				DDR_CTRL_BASE_REG + 0x14
#define DDR_RD_DATA_THIS_CYCLE_REG	DDR_CTRL_BASE_REG + 0x18
#define DDR_TAP_CONTROL_0_REG		DDR_CTRL_BASE_REG + 0x1C
#define DDR_TAP_CONTROL_1_REG		DDR_CTRL_BASE_REG + 0x20
#define DDR_WB_FLUSH_GE0_REG		DDR_CTRL_BASE_REG + 0x7C
#define DDR_WB_FLUSH_GE1_REG		DDR_CTRL_BASE_REG + 0x80
#define DDR_WB_FLUSH_USB_REG		DDR_CTRL_BASE_REG + 0x84
#define DDR_DDR2_CONFIG_REG			DDR_CTRL_BASE_REG + 0x8C
#define DDR_EMR2_REG				DDR_CTRL_BASE_REG + 0x90
#define DDR_EMR3_REG				DDR_CTRL_BASE_REG + 0x94
#define DDR_BURST_REG				DDR_CTRL_BASE_REG + 0x98

/*
 * AHB
 */
#define AHB_MASTER_TOUT_MAX_REG			APB_BASE_REG + 0x9C
#define AHB_MASTER_TOUT_CURRENT_REG		APB_BASE_REG + 0xA0
#define AHB_MASTER_TOUT_SLV_ADDR_REG	APB_BASE_REG + 0xA4

/*
 * UART registers
 */
#define UART_DATA_REG	UART_BASE_REG + 0x00
#define UART_CS_REG		UART_BASE_REG + 0x04
#define UART_CLOCK_REG	UART_BASE_REG + 0x08
#define UART_INT_REG	UART_BASE_REG + 0x0C
#define UART_INT_EN_REG	UART_BASE_REG + 0x10

/*
 * UART registers _BIT fields
 */
#define UART_CS_PAR_MODE_SHIFT			0
#define UART_CS_PAR_MODE_MASK			_BITS(UART_CS_PAR_MODE_SHIFT, 2)
#define UART_CS_PAR_MODE_NO_VAL			0x0
#define UART_CS_PAR_MODE_ODD_VAL		0x2
#define UART_CS_PAR_MODE_OVEN_VAL		0x3

#define UART_CS_IFACE_MODE_SHIFT		2
#define UART_CS_IFACE_MODE_MASK			_BITS(UART_CS_IFACE_MODE_SHIFT, 2)
#define UART_CS_IFACE_MODE_DISABLE_VAL	0x0
#define UART_CS_IFACE_MODE_DTE_VAL		0x1
#define UART_CS_IFACE_MODE_DCE_VAL		0x2

#define UART_CS_FLOW_MODE_SHIFT			4
#define UART_CS_FLOW_MODE_MASK			_BITS(UART_CS_FLOW_MODE_SHIFT, 2)
#define UART_CS_FLOW_MODE_NO_VAL		0x0
#define UART_CS_FLOW_MODE_HW_VAL		0x2
#define UART_CS_FLOW_MODE_INV_VAL		0x3

#define UART_CS_DMA_EN_SHIFT			6
#define UART_CS_DMA_EN_MASK				(1 << UART_CS_DMA_EN_SHIFT)
#define UART_CS_RX_READY_ORIDE_SHIFT	7
#define UART_CS_RX_READY_ORIDE_MASK		(1 << UART_CS_RX_READY_ORIDE_SHIFT)
#define UART_CS_TX_READY_ORIDE_SHIFT	8
#define UART_CS_TX_READY_ORIDE_MASK		(1 << UART_CS_TX_READY_ORIDE_SHIFT)
#define UART_CS_TX_READY_SHIFT			9
#define UART_CS_TX_READY_MASK			(1 << UART_CS_TX_READY_SHIFT)
#define UART_CS_RX_BREAK_SHIFT			10
#define UART_CS_RX_BREAK_MASK			(1 << UART_CS_RX_BREAK_SHIFT)
#define UART_CS_TX_BREAK_SHIFT			11
#define UART_CS_TX_BREAK_MASK			(1 << UART_CS_TX_BREAK_SHIFT)
#define UART_CS_HOST_INT_SHIFT			12
#define UART_CS_HOST_INT_MASK			(1 << UART_CS_HOST_INT_SHIFT)
#define UART_CS_HOST_INT_EN_SHIFT		13
#define UART_CS_HOST_INT_EN_MASK		(1 << UART_CS_HOST_INT_EN_SHIFT)
#define UART_CS_TX_BUSY_SHIFT			14
#define UART_CS_TX_BUSY_MASK			(1 << UART_CS_TX_BUSY_SHIFT)
#define UART_CS_RX_BUSY_SHIFT			15
#define UART_CS_RX_BUSY_MASK			(1 << UART_CS_RX_BUSY_SHIFT)

#define UART_RX_CSR_SHIFT			8
#define UART_RX_CSR_MASK			(1 << UART_RX_CSR_SHIFT)
#define UART_TX_CSR_SHIFT			9
#define UART_TX_CSR_MASK			(1 << UART_TX_CSR_SHIFT)
#define UART_TX_RX_DATA_SHIFT		0
#define UART_TX_RX_DATA_MASK		_BITS(UART_TX_RX_DATA_SHIFT, 8)
#define UART_CLOCK_SCALE_SHIFT		16
#define UART_CLOCK_SCALE_MASK		_BITS(UART_CLOCK_SCALE_SHIFT, 8)
#define UART_CLOCK_STEP_SHIFT		0
#define UART_CLOCK_STEP_MASK		_BITS(UART_CLOCK_STEP_SHIFT, 16)

#define UART_CLOCK_SCALE_MAX_VAL	0xFF
#define UART_CLOCK_STEP_MAX_VAL		0xFFFF

/*
 * GPIO registers
 */
#define GPIO_COUNT					30
#define GPIO_OE_REG					GPIO_BASE_REG + 0x00
#define GPIO_IN_REG					GPIO_BASE_REG + 0x04
#define GPIO_OUT_REG				GPIO_BASE_REG + 0x08
#define GPIO_SET_REG				GPIO_BASE_REG + 0x0C
#define GPIO_CLEAR_REG				GPIO_BASE_REG + 0x10
#define GPIO_INT_ENABLE_REG			GPIO_BASE_REG + 0x14
#define GPIO_INT_TYPE_REG			GPIO_BASE_REG + 0x18
#define GPIO_INT_POLARITY_REG		GPIO_BASE_REG + 0x1C
#define GPIO_INT_PENDING_REG		GPIO_BASE_REG + 0x20
#define GPIO_INT_MASK_REG			GPIO_BASE_REG + 0x24
#define GPIO_FUNCTION_1_REG			GPIO_BASE_REG + 0x28
#define GPIO_IN_ETH_SWITCH_LED_REG	GPIO_BASE_REG + 0x2C
#define GPIO_FUNCTION_2_REG			GPIO_BASE_REG + 0x30

/*
 * GPIO registers _BIT fields
 */
#define _GPIO_X_MASK(_gpio)	(1 << _gpio)
#define GPIO0				_GPIO_X_MASK(0)
#define GPIO1				_GPIO_X_MASK(1)
#define GPIO2				_GPIO_X_MASK(2)
#define GPIO3				_GPIO_X_MASK(3)
#define GPIO4				_GPIO_X_MASK(4)
#define GPIO5				_GPIO_X_MASK(5)
#define GPIO6				_GPIO_X_MASK(6)
#define GPIO7				_GPIO_X_MASK(7)
#define GPIO8				_GPIO_X_MASK(8)
#define GPIO9				_GPIO_X_MASK(9)
#define GPIO10				_GPIO_X_MASK(10)
#define GPIO11				_GPIO_X_MASK(11)
#define GPIO12				_GPIO_X_MASK(12)
#define GPIO13				_GPIO_X_MASK(13)
#define GPIO14				_GPIO_X_MASK(14)
#define GPIO15				_GPIO_X_MASK(15)
#define GPIO16				_GPIO_X_MASK(16)
#define GPIO17				_GPIO_X_MASK(17)
#define GPIO18				_GPIO_X_MASK(18)
#define GPIO19				_GPIO_X_MASK(19)
#define GPIO20				_GPIO_X_MASK(20)
#define GPIO21				_GPIO_X_MASK(21)
#define GPIO22				_GPIO_X_MASK(22)
#define GPIO23				_GPIO_X_MASK(23)
#define GPIO24				_GPIO_X_MASK(24)
#define GPIO25				_GPIO_X_MASK(25)
#define GPIO26				_GPIO_X_MASK(26)
#define GPIO27				_GPIO_X_MASK(27)
#define GPIO28				_GPIO_X_MASK(28)
#define GPIO29				_GPIO_X_MASK(29)

#define GPIO_FUNCTION_1_EJTAG_DIS_SHIFT			0
#define GPIO_FUNCTION_1_EJTAG_DIS_MASK			(1 << GPIO_FUNCTION_1_EJTAG_DIS_SHIFT)
#define GPIO_FUNCTION_1_UART_EN_SHIFT			1
#define GPIO_FUNCTION_1_UART_EN_MASK			(1 << GPIO_FUNCTION_1_UART_EN_SHIFT)
#define GPIO_FUNCTION_1_UART_RTS_CTS_EN_SHIFT	2
#define GPIO_FUNCTION_1_UART_RTS_CTS_EN_MASK	(1 << GPIO_FUNCTION_1_UART_RTS_CTS_EN_SHIFT)

/*
 * PLL control registers
 */
#define CPU_PLL_CONFIG_REG			PLL_BASE_REG + 0x00
#define CPU_PLL_CONFIG2_REG			PLL_BASE_REG + 0x04
#define CPU_CLOCK_CONTROL_REG		PLL_BASE_REG + 0x08
#define CPU_PLL_DITHER_FRAC_REG		PLL_BASE_REG + 0x10
#define CPU_PLL_DITHER_REG			PLL_BASE_REG + 0x14
#define ETHSW_CLOCK_CONTROL_REG		PLL_BASE_REG + 0x24
#define ETH_XMII_CONTROL_REG		PLL_BASE_REG + 0x2C
#define USB_SUSPEND_REG				PLL_BASE_REG + 0x40
#define WLAN_CLOCK_CONTROL_REG		PLL_BASE_REG + 0x44
#define CPU_PLL_CONTROL_2_REG		RTC_BASE_REG + 0x3C

/*
 * CPU PLL configuration (CPU_PLL_CONFIG) register _BIT fields
 */
#define CPU_PLL_CONFIG_DIV_INT_SHIFT	10
#define CPU_PLL_CONFIG_DIV_INT_MASK		_BITS(CPU_PLL_CONFIG_DIV_INT_SHIFT, 6)
#define CPU_PLL_CONFIG_REFDIV_SHIFT		16
#define CPU_PLL_CONFIG_REFDIV_MASK		_BITS(CPU_PLL_CONFIG_REFDIV_SHIFT, 5)
#define CPU_PLL_CONFIG_RANGE_SHIFT		21
#define CPU_PLL_CONFIG_RANGE_MASK		(1 << CPU_PLL_CONFIG_RANGE_SHIFT)
#define CPU_PLL_CONFIG_OUTDIV_SHIFT		23
#define CPU_PLL_CONFIG_OUTDIV_MASK		_BITS(CPU_PLL_CONFIG_OUTDIV_SHIFT, 3)
#define CPU_PLL_CONFIG_CPU_PLLPWD_SHIFT	30
#define CPU_PLL_CONFIG_CPU_PLLPWD_MASK	(1 << CPU_PLL_CONFIG_CPU_PLLPWD_SHIFT)
#define CPU_PLL_CONFIG_UPDATING_SHIFT	31
#define CPU_PLL_CONFIG_UPDATING_MASK	(1 << CPU_PLL_CONFIG_UPDATING_SHIFT)

/*
 * Clock configuration (CPU_CLOCK_CONTROL) register _BIT fields
 */
#define CPU_CLOCK_CONTROL_BYPASS_SHIFT			2
#define CPU_CLOCK_CONTROL_BYPASS_MASK			(1 << CPU_CLOCK_CONTROL_BYPASS_SHIFT)
#define CPU_CLOCK_CONTROL_CPU_POST_DIV_SHIFT	5
#define CPU_CLOCK_CONTROL_CPU_POST_DIV_MASK		_BITS(CPU_CLOCK_CONTROL_CPU_POST_DIV_SHIFT, 2)
#define CPU_CLOCK_CONTROL_DDR_POST_DIV_SHIFT	10
#define CPU_CLOCK_CONTROL_DDR_POST_DIV_MASK		_BITS(CPU_CLOCK_CONTROL_DDR_POST_DIV_SHIFT, 2)
#define CPU_CLOCK_CONTROL_AHB_POST_DIV_SHIFT	15
#define CPU_CLOCK_CONTROL_AHB_POST_DIV_MASK		_BITS(CPU_CLOCK_CONTROL_AHB_POST_DIV_SHIFT, 2)

/*
 * Helper macros for PLL and clock configuration
 */
/*
 * TODO: remove them from board config file
#define CPU_PLL_CONFIG_VAL(divint, refdiv, range, outdiv, pllpwd)	\
	( ((0x3F & divint) << 10)	|				\
	  ((0x1F & refdiv) << 16)	|				\
	  ((0x1  & range)  << 21)	|				\
	  ((0x7  & outdiv) << 23)	|				\
	  ((0x1  & pllpwd) << 30) )

#define CPU_CLOCK_CONTROL_VAL(bypass, cpudiv, ddrdiv, ahbdiv)	\
	( ((0x1 & bypass) << 2)		|			\
	  ((0x3 & (cpudiv - 1)) << 5)	|			\
	  ((0x3 & (ddrdiv - 1)) << 10)	|			\
	  ((0x3 & (ahbdiv - 1)) << 15) )
*/

/*
 * Reset control registers
 */
#define RESET_REG					RESET_BASE_REG + 0x1C
#define BOOTSTRAP_STATUS_REG		RESET_BASE_REG + 0xAC
#define USB_PHY_RESET_CONTROL_REG	RESET_BASE_REG + 0xB0

/*
 * Bootstrap (BOOT_STRAP) register _BIT fields
 */
#define BOOTSTRAP_SEL_25_40M_SHIFT		0
#define BOOTSTRAP_SEL_25_40M_MASK		(1 << BOOTSTRAP_SEL_25_40M_SHIFT)
#define BOOTSTRAP_BOOT_FROM_SPI_SHIFT	1
#define BOOTSTRAP_BOOT_FROM_SPI_MASK	(1 << BOOTSTRAP_BOOT_FROM_SPI_SHIFT)
#define BOOTSTRAP_EEPBUSY_SHIFT			4
#define BOOTSTRAP_EEPBUSY_MASK			(1 << BOOTSTRAP_EEPBUSY_SHIFT)
#define BOOTSTRAP_MEM_TYPE_SHIFT		12
#define BOOTSTRAP_MEM_TYPE_MASK			_BITS(BOOTSTRAP_MEM_TYPE_SHIFT, 2)

/*
 * Memory type
 */
#define BOOTSTRAP_MEM_TYPE_SDRAM_VAL	0x0
#define BOOTSTRAP_MEM_TYPE_DDR1_VAL		0x1
#define BOOTSTRAP_MEM_TYPE_DDR2_VAL		0x2

/*
 * Reset (RST_RESET) register _BIT fields
 */
#define RESET_I2S_RESET_SHIFT				0
#define RESET_I2S_RESET_MASK				(1 << RESET_I2S_RESET_SHIFT)
#define RESET_MBOX_RESET_SHIFT				1
#define RESET_MBOX_RESET_MASK				(1 << RESET_MBOX_RESET_SHIFT)
#define RESET_USB_SUSPEND_OVERRIDE_SHIFT	3
#define RESET_USB_SUSPEND_OVERRIDE_MASK		(1 << RESET_USB_SUSPEND_OVERRIDE_SHIFT)
#define RESET_USB_PHY_RESET_SHIFT			4
#define RESET_USB_PHY_RESET_MASK			(1 << RESET_USB_PHY_RESET_SHIFT)
#define RESET_USB_HOST_RESET_SHIFT			5
#define RESET_USB_HOST_RESET_MASK			(1 << RESET_USB_HOST_RESET_SHIFT)
#define RESET_ETH_SWITCH_RESET_SHIFT		8
#define RESET_ETH_SWITCH_RESET_MASK			(1 << RESET_ETH_SWITCH_RESET_SHIFT)
#define RESET_GE0_MAC_RESET_SHIFT			9
#define RESET_GE0_MAC_RESET_MASK			(1 << RESET_GE0_MAC_RESET_SHIFT)
#define RESET_WLAN_RESET_SHIFT				11
#define RESET_WLAN_RESET_MASK				(1 << RESET_WLAN_RESET_SHIFT)
#define RESET_GE1_MAC_RESET_SHIFT			13
#define RESET_GE1_MAC_RESET_MASK			(1 << RESET_GE1_MAC_RESET_SHIFT)
#define RESET_SWITCH_ANALOG_RESET_SHIFT		14
#define RESET_SWITCH_ANALOG_RESET_MASK		(1 << RESET_SWITCH_ANALOG_RESET_SHIFT)
#define RESET_DDR_RESET_SHIFT				16
#define RESET_DDR_RESET_MASK				(1 << RESET_DDR_RESET_SHIFT)
#define RESET_CPU_COLD_RESET_SHIFT			20
#define RESET_CPU_COLD_RESET_MASK			(1 << RESET_CPU_COLD_RESET_SHIFT)
#define RESET_CPU_NMI_SHIFT					21
#define RESET_CPU_NMI_MASK					(1 << RESET_CPU_NMI_SHIFT)
#define RESET_GE0_MDIO_RESET_SHIFT			22
#define RESET_GE0_MDIO_RESET_MASK			(1 << RESET_GE0_MDIO_RESET_SHIFT)
#define RESET_GE1_MDIO_RESET_SHIFT			23
#define RESET_GE1_MDIO_RESET_MASK			(1 << RESET_GE1_MDIO_RESET_SHIFT)
#define RESET_FULL_CHIP_RESET_SHIFT			24
#define RESET_FULL_CHIP_RESET_MASK			(1 << RESET_FULL_CHIP_RESET_SHIFT)
#define RESET_EXTERNAL_RESET_SHIFT			28
#define RESET_EXTERNAL_RESET_MASK			(1 << RESET_EXTERNAL_RESET_SHIFT)

/*
 * RTC interface registers
 */
#define RTC_RESET_REG				RTC_BASE_REG + 0x40
#define RTC_STATUS_REG				RTC_BASE_REG + 0x44
#define RTC_FORCE_DERIVED_REG		RTC_BASE_REG + 0x48
#define RTC_FORCE_WAKE_REG			RTC_BASE_REG + 0x4C
#define RTC_INT_CAUSE_REG			RTC_BASE_REG + 0x50
#define RTC_INT_CAUSE_CLEAR_REG		RTC_BASE_REG + 0x50
#define RTC_INT_ENABLE_REG			RTC_BASE_REG + 0x54
#define RTC_INT_MASK_REG			RTC_BASE_REG + 0x58

/*
 * RTC sleep status (RTC_STATUS) register _BIT fields
 */
#define RTC_STATUS_SHUDOWN_SHIFT		0
#define RTC_STATUS_SHUDOWN_MASK			(1 << RTC_STATUS_SHUDOWN_SHIFT)
#define RTC_STATUS_ON_SHIFT				1
#define RTC_STATUS_ON_MASK				(1 << RTC_STATUS_ON_SHIFT)
#define RTC_STATUS_SLEEP_SHIFT			2
#define RTC_STATUS_SLEEP_MASK			(1 << RTC_STATUS_SLEEP_SHIFT)
#define RTC_STATUS_WAKEUP_SHIFT			3
#define RTC_STATUS_WAKEUP_MASK			(1 << RTC_STATUS_WAKEUP_SHIFT)
#define RTC_STATUS_COLD_RESET_SHIFT		4
#define RTC_STATUS_COLD_RESET_MASK		(1 << RTC_STATUS_COLD_RESET_SHIFT)
#define RTC_STATUS_PLL_CHANGING_SHIFT	5
#define RTC_STATUS_PLL_CHANGING_MASK	(1 << RTC_STATUS_PLL_CHANGING_SHIFT)

/*
 * SPI serial flash registers
 */
#define SPI_FUNCTION_SELECT_REG	FLASH_BASE_REG + 0x0
#define SPI_CONTROL_REG			FLASH_BASE_REG + 0x4
#define SPI_IO_CONTROL_REG		FLASH_BASE_REG + 0x8
#define SPI_READ_DATA_REG		FLASH_BASE_REG + 0xC

#ifndef __ASSEMBLY__
struct ar933x_spi_flash_regs {
	u32 function_select;
	u32 control;
	u32 io_control;
	u32 read_data;
};

struct ar933x_reset1_regs {
	u32 general_timer0;
	u32 general_timer0_reload;
	u32 watchdog_timer_control;
	u32 watchdog_timer;
	u32 misc_interrupt_mask;
	u32 global_interrupt_mask;
	u32 reset;
};

struct ar933x_reset2_regs {
	u32 revision_id;
	u32 general_timer1;
	u32 general_timer1_reload;
	u32 general_timer2;
	u32 general_timer2_reload;
	u32 general_timer3;
	u32 general_timer3_reload;
	u32 boot_strap;
	u32 usb_phy_reset_control;
};

extern const struct ar933x_spi_flash_regs *ar933x_spi_flash;
extern const struct ar933x_reset1_regs *ar933x_reset1;
extern const struct ar933x_reset2_regs *ar933x_reset2;

extern int ar933x_40MHz_xtal(void);
#endif /* !__ASSEMBLY__ */

/*
 * Read, write, set and clear macros
 */
#define ar933x_reg_read(_addr)			*(volatile unsigned int *)(KSEG1ADDR(_addr))
#define ar933x_reg_write(_addr, _val)	((*(volatile unsigned int *)KSEG1ADDR(_addr)) = (_val))

#define ar933x_reg_read_set(_addr, _mask)	\
		ar933x_reg_write((_addr), (ar933x_reg_read((_addr)) | (_mask)))

#define ar933x_reg_read_clear(_addr, _mask)	\
		ar933x_reg_write((_addr), (ar933x_reg_read((_addr)) & ~(_mask)))

#endif /* _AR933X_H_ */
