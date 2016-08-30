/*
 * This file is part of the OpenMV project.
 * Copyright (c) 2013/2014 Ibrahim Abdelkader <i.abdalkader@gmail.com>
 * This work is licensed under the MIT license, see the file LICENSE for details.
 *
 * Board configuration and pin definitions.
 *
 */
#ifndef __OMV_BOARDCONFIG_H__
#define __OMV_BOARDCONFIG_H__

// Architecture info
#define OMV_ARCH_STR            "OMV7 F7 512 JPEG"

#define OMV_XCLK_MCO            (0U)
#define OMV_XCLK_TIM            (1U)

// Sensor external clock source.
#define OMV_XCLK_SOURCE         (OMV_XCLK_TIM)

// Sensor external clock timer frequency.
#define OMV_XCLK_FREQUENCY      (12000000)

// Have built-in RGB->LAB table.
#define OMV_HAVE_LAB_TABLE

// Max integral image.
#define OMV_MAX_INT_FRAME       FRAMESIZE_VGA
#define OMV_MAX_INT_FRAME_STR   "VGA"

// Max GS/RGB565/YUV422/Binary image.
#define OMV_MAX_RAW_FRAME       FRAMESIZE_VGA
#define OMV_MAX_RAW_FRAME_STR   "VGA"

// Max raw (RGB565/YUV422) image for blob detection.
#define OMV_MAX_BLOB_FRAME      FRAMESIZE_VGA
#define OMV_MAX_BLOB_FRAME_STR  "VGA"

// Bootloader LED GPIO port/pin
#define OMV_BOOTLDR_LED_PIN     (GPIO_PIN_5)
#define OMV_BOOTLDR_LED_PORT    (GPIOK)

// JPEG buffer size
#define OMV_JPEG_BUF_SIZE       (64*1024)

/* SCCB/I2C */
#define SCCB_I2C                (I2C1)
#define SCCB_AF                 (GPIO_AF4_I2C1)
#define SCCB_CLK_ENABLE()       __I2C1_CLK_ENABLE()
#define SCCB_CLK_DISABLE()      __I2C1_CLK_DISABLE()
#define SCCB_PORT               (GPIOB)
#define SCCB_SCL_PIN            (GPIO_PIN_6)
#define SCCB_SDA_PIN            (GPIO_PIN_7)

/* DCMI */
#define DCMI_TIM                (TIM3)
#define DCMI_TIM_PIN            (GPIO_PIN_4)
#define DCMI_TIM_PORT           (GPIOB)
#define DCMI_TIM_AF             (GPIO_AF2_TIM3)
#define DCMI_TIM_CHANNEL        (TIM_CHANNEL_1)
#define DCMI_TIM_CLK_ENABLE()   __TIM3_CLK_ENABLE()
#define DCMI_TIM_CLK_DISABLE()  __TIM3_CLK_DISABLE()
#define DCMI_TIM_PCLK_FREQ()    HAL_RCC_GetPCLK1Freq()

#define DCMI_RESET_PIN          (GPIO_PIN_3)
#define DCMI_RESET_PORT         (GPIOB)

#define DCMI_PWDN_PIN           (GPIO_PIN_1)
#define DCMI_PWDN_PORT          (GPIOE)

#define DCMI_FSIN_PIN           (GPIO_PIN_5)
#define DCMI_FSIN_PORT          (GPIOB)

#define DCMI_D0_PIN             (GPIO_PIN_6)
#define DCMI_D1_PIN             (GPIO_PIN_7)
#define DCMI_D2_PIN             (GPIO_PIN_10)
#define DCMI_D3_PIN             (GPIO_PIN_11)
#define DCMI_D4_PIN             (GPIO_PIN_4)
#define DCMI_D5_PIN             (GPIO_PIN_3)
#define DCMI_D6_PIN             (GPIO_PIN_5)
#define DCMI_D7_PIN             (GPIO_PIN_9)

#define DCMI_D0_PORT            (GPIOC)
#define DCMI_D1_PORT            (GPIOC)
#define DCMI_D2_PORT            (GPIOG)
#define DCMI_D3_PORT            (GPIOG)
#define DCMI_D4_PORT            (GPIOE)
#define DCMI_D5_PORT            (GPIOD)
#define DCMI_D6_PORT            (GPIOE)
#define DCMI_D7_PORT            (GPIOB)

#define DCMI_HSYNC_PIN          (GPIO_PIN_4)
#define DCMI_VSYNC_PIN          (GPIO_PIN_5)
#define DCMI_PXCLK_PIN          (GPIO_PIN_6)

#define DCMI_HSYNC_PORT         (GPIOA)
#define DCMI_VSYNC_PORT         (GPIOI)
#define DCMI_PXCLK_PORT         (GPIOA)

#define DCMI_RESET_LOW()        HAL_GPIO_WritePin(DCMI_RESET_PORT, DCMI_RESET_PIN, GPIO_PIN_RESET)
#define DCMI_RESET_HIGH()       HAL_GPIO_WritePin(DCMI_RESET_PORT, DCMI_RESET_PIN, GPIO_PIN_SET)

#define DCMI_PWDN_LOW()         HAL_GPIO_WritePin(DCMI_PWDN_PORT, DCMI_PWDN_PIN, GPIO_PIN_RESET)
#define DCMI_PWDN_HIGH()        HAL_GPIO_WritePin(DCMI_PWDN_PORT, DCMI_PWDN_PIN, GPIO_PIN_SET)

#define DCMI_FSIN_LOW()         HAL_GPIO_WritePin(DCMI_FSIN_PORT, DCMI_FSIN_PIN, GPIO_PIN_RESET)
#define DCMI_FSIN_HIGH()        HAL_GPIO_WritePin(DCMI_FSIN_PORT, DCMI_FSIN_PIN, GPIO_PIN_SET)
#endif //__OMV_BOARDCONFIG_H__