// Copyright 2023 jonylee@hfd (@jonylee1986)
// SPDX-License-Identifier: GPL-2.0-or-later
#pragma once

#define ENCODER_DEFAULT_POS 0x3

/* DIP switch */
#define DIP_SWITCH_PINS \
    { C11 }

/* I2C Config for LED Driver */
#define DRIVER_COUNT 2
#define DRIVER_ADDR_1 0b1110100
#define DRIVER_ADDR_2 0b1110111
#define I2C1_SDA_PIN B7
#define I2C1_SCL_PIN B6
#define I2C1_SCL_PAL_MODE 4
#define I2C1_OPMODE OPMODE_I2C
#define I2C1_CLOCK_SPEED 400000

#define RGB_MATRIX_LED_COUNT 92
#define RGB_DISABLE_WHEN_USB_SUSPENDED

/* SPI Config for spi flash*/
#define SPI_DRIVER SPIDQ
#define SPI_SCK_PIN B3
#define SPI_MOSI_PIN B5
#define SPI_MISO_PIN B4
#define SPI_MOSI_PAL_MODE 5

#define EXTERNAL_FLASH_SPI_SLAVE_SELECT_PIN C12
#define WEAR_LEVELING_BACKING_SIZE (4 * 1024)

#define RGB_MATRIX_FRAMEBUFFER_EFFECTS
#define RGB_MATRIX_KEYPRESSES
#define RGB_MATRIX_KEYRELEASES