/* mbed Microcontroller Library
 * Copyright (c) 2006-2013 ARM Limited
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
#ifndef MBED_PERIPHERALNAMES_H
#define MBED_PERIPHERALNAMES_H

#include "cmsis.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef enum {
#if defined(CONFIG_MATTER) && CONFIG_MATTER
	UART_0 = (int)UART0_REG_BASE,
	UART_1 = (int)UART1_REG_BASE,
	UART_2 = (int)UART2_REG_BASE,
	UART_3 = (int)UART3_REG_BASE,
#else
	UART_0 = (int)UART0_DEV,
	UART_1 = (int)UART1_DEV,
	UART_2 = (int)UART2_DEV,
	UART_3 = (int)UART3_DEV,
#endif
} UARTName;

typedef enum {
	ADC0_0 = 0,
	ADC0_1,
	ADC0_2,
	ADC0_3
} ADCName;

typedef enum {
	#if defined(CONFIG_MATTER) && CONFIG_MATTER
	SPI_0 = (int)SPI0_REG_BASE,
	SPI_1 = (int)SPI1_REG_BASE,
#else
	SPI_0 = (int)SPI0_DEV,
	SPI_1 = (int)SPI1_DEV,
#endif
} SPIName;

typedef enum {
#if defined(CONFIG_MATTER) && CONFIG_MATTER
	I2C_0 = (int)I2C0_REG_BASE,
#else
	I2C_0 = (int)I2C0_DEV,
#endif
} I2CName;

typedef enum {
	PWM_0 = 1,
	PWM_1,
	PWM_2,
	PWM_3,
	PWM_4,
	PWM_5
} PWMName;

#ifdef __cplusplus
}
#endif

#endif
