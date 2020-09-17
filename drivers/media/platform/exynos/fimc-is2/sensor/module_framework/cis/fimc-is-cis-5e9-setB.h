/*
 * Samsung Exynos5 SoC series Sensor driver
 *
 *
 * Copyright (c) 2018 Samsung Electronics Co., Ltd
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 */

#ifndef FIMC_IS_CIS_5E9_SET_B_H
#define FIMC_IS_CIS_5E9_SET_B_H

#include "fimc-is-cis.h"
#include "fimc-is-cis-5e9.h"

/* 5E9_EVT00_Setfile_무선사_REV21.xlsx */
const u32 sensor_5e9_setfile_B_Global[] = {
	/* Analog Global Setting */
	0x0100, 0x00, 0x1, 
	0x0A02, 0x3F, 0x1, 
	0x3B45, 0x01, 0x1, 
	0x3290, 0x10, 0x1, 
	0x0B05, 0x01, 0x1, 
	0x3069, 0x87, 0x1, 
	0x3074, 0x06, 0x1, 
	0x3075, 0x2F, 0x1, 
	0x301F, 0x20, 0x1, 
	0x306B, 0x9A, 0x1, 
	0x3091, 0x16, 0x1, 
	0x306E, 0x71, 0x1, 
	0x306F, 0x28, 0x1, 
	0x306D, 0x08, 0x1, 
	0x3084, 0x16, 0x1, 
	0x3070, 0x0F, 0x1, 
	0x306A, 0x79, 0x1, 
	0x30B0, 0xFF, 0x1, 
	0x30C2, 0x05, 0x1, 
	0x30C4, 0x06, 0x1, 
	0x3012, 0x4E, 0x1, 
	0x3080, 0x08, 0x1, 
	0x3083, 0x14, 0x1, 
	0x3200, 0x01, 0x1, 
	0x3081, 0x07, 0x1, 
	0x307B, 0x85, 0x1, 
	0x307A, 0x0A, 0x1, 
	0x3079, 0x0A, 0x1, 
	0x308A, 0x20, 0x1, 
	0x308B, 0x08, 0x1, 
	0x308C, 0x0B, 0x1, 
	0x392F, 0x01, 0x1, 
	0x3930, 0x00, 0x1, 
	0x3924, 0x7F, 0x1, 
	0x3925, 0xFD, 0x1, 
	0x3C08, 0xFF, 0x1, 
	0x3C09, 0xFF, 0x1, 
	0x3C31, 0xFF, 0x1, 
	0x3C32, 0xFF, 0x1, 
};

const u32 sensor_5e9_setfile_B_2592x1944_30fps[] = {
	0x0136, 0x1A, 0x1,
	0x0137, 0x00, 0x1,
	0x0301, 0x06, 0x1,
	0x0305, 0x05, 0x1,
	0x0306, 0x00, 0x1,
	0x0307, 0x6D, 0x1,
	0x3C1F, 0x00, 0x1,
	0x030D, 0x05, 0x1,
	0x030E, 0x00, 0x1,
	0x030F, 0xA8, 0x1,
	0x3C17, 0x00, 0x1,
	0x0340, 0x07, 0x1,
	0x0341, 0xEE, 0x1,
	0x0342, 0x0C, 0x1,
	0x0343, 0x28, 0x1,
	0x0344, 0x00, 0x1,
	0x0345, 0x08, 0x1,
	0x0346, 0x00, 0x1,
	0x0347, 0x08, 0x1,
	0x0348, 0x0A, 0x1,
	0x0349, 0x27, 0x1,
	0x034A, 0x07, 0x1,
	0x034B, 0x9F, 0x1,
	0x034C, 0x0A, 0x1,
	0x034D, 0x20, 0x1,
	0x034E, 0x07, 0x1,
	0x034F, 0x98, 0x1,
	0x0381, 0x01, 0x1,
	0x0383, 0x01, 0x1,
	0x0385, 0x01, 0x1,
	0x0387, 0x01, 0x1,
	0x0900, 0x00, 0x1,
	0x0901, 0x00, 0x1,
	0x0204, 0x00, 0x1,
	0x0205, 0x20, 0x1,
	0x0200, 0x0B, 0x1,
	0x0201, 0x9C, 0x1,
	0x0202, 0x00, 0x1,
	0x0203, 0x02, 0x1,
	0x0820, 0x03, 0x1,
	0x0821, 0x6A, 0x1,
	0x0822, 0x00, 0x1,
	0x0823, 0x00, 0x1,
	0x0112, 0x0A, 0x1,
	0x0113, 0x0A, 0x1,
	0x0114, 0x01, 0x1,
	0x3929, 0x0F, 0x1,
	0x0101, 0x00, 0x1,
	0x30B8, 0x2A, 0x1,
	0x30BA, 0x2E, 0x1,
};

const u32 sensor_5e9_setfile_B_2592x1460_30fps[] = {
	0x0136, 0x1A, 0x1,
	0x0137, 0x00, 0x1,
	0x0301, 0x06, 0x1,
	0x0305, 0x05, 0x1,
	0x0306, 0x00, 0x1,
	0x0307, 0x6D, 0x1,
	0x3C1F, 0x00, 0x1,
	0x030D, 0x05, 0x1,
	0x030E, 0x00, 0x1,
	0x030F, 0xA8, 0x1,
	0x3C17, 0x00, 0x1,
	0x0340, 0x07, 0x1,
	0x0341, 0xEE, 0x1,
	0x0342, 0x0C, 0x1,
	0x0343, 0x28, 0x1,
	0x0344, 0x00, 0x1,
	0x0345, 0x08, 0x1,
	0x0346, 0x00, 0x1,
	0x0347, 0xF8, 0x1,
	0x0348, 0x0A, 0x1,
	0x0349, 0x27, 0x1,
	0x034A, 0x06, 0x1,
	0x034B, 0xAB, 0x1,
	0x034C, 0x0A, 0x1,
	0x034D, 0x20, 0x1,
	0x034E, 0x05, 0x1,
	0x034F, 0xB4, 0x1,
	0x0381, 0x01, 0x1,
	0x0383, 0x01, 0x1,
	0x0385, 0x01, 0x1,
	0x0387, 0x01, 0x1,
	0x0900, 0x00, 0x1,
	0x0901, 0x00, 0x1,
	0x0204, 0x00, 0x1,
	0x0205, 0x20, 0x1,
	0x0200, 0x0B, 0x1,
	0x0201, 0x9C, 0x1,
	0x0202, 0x00, 0x1,
	0x0203, 0x02, 0x1,
	0x0820, 0x03, 0x1,
	0x0821, 0x6A, 0x1,
	0x0822, 0x00, 0x1,
	0x0823, 0x00, 0x1,
	0x0112, 0x0A, 0x1,
	0x0113, 0x0A, 0x1,
	0x0114, 0x01, 0x1,
	0x3929, 0x0F, 0x1,
	0x0101, 0x00, 0x1,
	0x30B8, 0x2A, 0x1,
	0x30BA, 0x2E, 0x1,
};

const u32 sensor_5e9_setfile_B_2592x1458_30fps[] = {
	0x0136, 0x1A, 0x1,
	0x0137, 0x00, 0x1,
	0x0301, 0x06, 0x1,
	0x0305, 0x05, 0x1,
	0x0306, 0x00, 0x1,
	0x0307, 0x6D, 0x1,
	0x3C1F, 0x00, 0x1,
	0x030D, 0x05, 0x1,
	0x030E, 0x00, 0x1,
	0x030F, 0xA8, 0x1,
	0x3C17, 0x00, 0x1,
	0x0340, 0x07, 0x1,
	0x0341, 0xEE, 0x1,
	0x0342, 0x0C, 0x1,
	0x0343, 0x28, 0x1,
	0x0344, 0x00, 0x1,
	0x0345, 0x08, 0x1,
	0x0346, 0x00, 0x1,
	0x0347, 0xFA, 0x1,
	0x0348, 0x0A, 0x1,
	0x0349, 0x27, 0x1,
	0x034A, 0x06, 0x1,
	0x034B, 0xAB, 0x1,
	0x034C, 0x0A, 0x1,
	0x034D, 0x20, 0x1,
	0x034E, 0x05, 0x1,
	0x034F, 0xB2, 0x1,
	0x0381, 0x01, 0x1,
	0x0383, 0x01, 0x1,
	0x0385, 0x01, 0x1,
	0x0387, 0x01, 0x1,
	0x0900, 0x00, 0x1,
	0x0901, 0x00, 0x1,
	0x0204, 0x00, 0x1,
	0x0205, 0x20, 0x1,
	0x0200, 0x0B, 0x1,
	0x0201, 0x9C, 0x1,
	0x0202, 0x00, 0x1,
	0x0203, 0x02, 0x1,
	0x0820, 0x03, 0x1,
	0x0821, 0x6A, 0x1,
	0x0822, 0x00, 0x1,
	0x0823, 0x00, 0x1,
	0x0112, 0x0A, 0x1,
	0x0113, 0x0A, 0x1,
	0x0114, 0x01, 0x1,
	0x3929, 0x0F, 0x1,
	0x0101, 0x00, 0x1,
	0x30B8, 0x2A, 0x1,
	0x30BA, 0x2E, 0x1,
};

const u32 sensor_5e9_setfile_B_2592x1260_30fps[] = {
	0x0136, 0x1A, 0x1,
	0x0137, 0x00, 0x1,
	0x0301, 0x06, 0x1,
	0x0305, 0x05, 0x1,
	0x0306, 0x00, 0x1,
	0x0307, 0x6D, 0x1,
	0x3C1F, 0x00, 0x1,
	0x030D, 0x05, 0x1,
	0x030E, 0x00, 0x1,
	0x030F, 0xA8, 0x1,
	0x3C17, 0x00, 0x1,
	0x0340, 0x07, 0x1,
	0x0341, 0xEE, 0x1,
	0x0342, 0x0C, 0x1,
	0x0343, 0x28, 0x1,
	0x0344, 0x00, 0x1,
	0x0345, 0x08, 0x1,
	0x0346, 0x01, 0x1,
	0x0347, 0x5E, 0x1,
	0x0348, 0x0A, 0x1,
	0x0349, 0x27, 0x1,
	0x034A, 0x06, 0x1,
	0x034B, 0x49, 0x1,
	0x034C, 0x0A, 0x1,
	0x034D, 0x20, 0x1,
	0x034E, 0x04, 0x1,
	0x034F, 0xEC, 0x1,
	0x0381, 0x01, 0x1,
	0x0383, 0x01, 0x1,
	0x0385, 0x01, 0x1,
	0x0387, 0x01, 0x1,
	0x0900, 0x00, 0x1,
	0x0901, 0x00, 0x1,
	0x0204, 0x00, 0x1,
	0x0205, 0x20, 0x1,
	0x0200, 0x0B, 0x1,
	0x0201, 0x9C, 0x1,
	0x0202, 0x00, 0x1,
	0x0203, 0x02, 0x1,
	0x0820, 0x03, 0x1,
	0x0821, 0x6A, 0x1,
	0x0822, 0x00, 0x1,
	0x0823, 0x00, 0x1,
	0x0112, 0x0A, 0x1,
	0x0113, 0x0A, 0x1,
	0x0114, 0x01, 0x1,
	0x3929, 0x0F, 0x1,
	0x0101, 0x00, 0x1,
	0x30B8, 0x2A, 0x1,
	0x30BA, 0x2E, 0x1,
};

const u32 sensor_5e9_setfile_B_1936x1936_30fps[] = {
	0x0136, 0x1A, 0x1,
	0x0137, 0x00, 0x1,
	0x0301, 0x06, 0x1,
	0x0305, 0x05, 0x1,
	0x0306, 0x00, 0x1,
	0x0307, 0x6D, 0x1,
	0x3C1F, 0x00, 0x1,
	0x030D, 0x05, 0x1,
	0x030E, 0x00, 0x1,
	0x030F, 0xA8, 0x1,
	0x3C17, 0x00, 0x1,
	0x0340, 0x07, 0x1,
	0x0341, 0xEE, 0x1,
	0x0342, 0x0C, 0x1,
	0x0343, 0x28, 0x1,
	0x0344, 0x01, 0x1,
	0x0345, 0x50, 0x1,
	0x0346, 0x00, 0x1,
	0x0347, 0x0C, 0x1,
	0x0348, 0x08, 0x1,
	0x0349, 0xDF, 0x1,
	0x034A, 0x07, 0x1,
	0x034B, 0x9B, 0x1,
	0x034C, 0x07, 0x1,
	0x034D, 0x90, 0x1,
	0x034E, 0x07, 0x1,
	0x034F, 0x90, 0x1,
	0x0381, 0x01, 0x1,
	0x0383, 0x01, 0x1,
	0x0385, 0x01, 0x1,
	0x0387, 0x01, 0x1,
	0x0900, 0x00, 0x1,
	0x0901, 0x00, 0x1,
	0x0204, 0x00, 0x1,
	0x0205, 0x20, 0x1,
	0x0200, 0x0B, 0x1,
	0x0201, 0x9C, 0x1,
	0x0202, 0x00, 0x1,
	0x0203, 0x02, 0x1,
	0x0820, 0x03, 0x1,
	0x0821, 0x6A, 0x1,
	0x0822, 0x00, 0x1,
	0x0823, 0x00, 0x1,
	0x0112, 0x0A, 0x1,
	0x0113, 0x0A, 0x1,
	0x0114, 0x01, 0x1,
	0x3929, 0x0F, 0x1,
	0x0101, 0x00, 0x1,
	0x30B8, 0x2A, 0x1,
	0x30BA, 0x2E, 0x1,
};

const u32 sensor_5e9_setfile_B_2592x1460_24fps[] = {
	0x0136, 0x1A, 0x1,
	0x0137, 0x00, 0x1,
	0x0301, 0x06, 0x1,
	0x0305, 0x05, 0x1,
	0x0306, 0x00, 0x1,
	0x0307, 0x6D, 0x1,
	0x3C1F, 0x00, 0x1,
	0x030D, 0x05, 0x1,
	0x030E, 0x00, 0x1,
	0x030F, 0xA8, 0x1,
	0x3C17, 0x00, 0x1,
	0x0340, 0x09, 0x1,
	0x0341, 0xE1, 0x1,
	0x0342, 0x0C, 0x1,
	0x0343, 0x28, 0x1,
	0x0344, 0x00, 0x1,
	0x0345, 0x08, 0x1,
	0x0346, 0x00, 0x1,
	0x0347, 0xF8, 0x1,
	0x0348, 0x0A, 0x1,
	0x0349, 0x27, 0x1,
	0x034A, 0x06, 0x1,
	0x034B, 0xAB, 0x1,
	0x034C, 0x0A, 0x1,
	0x034D, 0x20, 0x1,
	0x034E, 0x05, 0x1,
	0x034F, 0xB4, 0x1,
	0x0381, 0x01, 0x1,
	0x0383, 0x01, 0x1,
	0x0385, 0x01, 0x1,
	0x0387, 0x01, 0x1,
	0x0900, 0x00, 0x1,
	0x0901, 0x00, 0x1,
	0x0204, 0x00, 0x1,
	0x0205, 0x20, 0x1,
	0x0200, 0x0B, 0x1,
	0x0201, 0x9C, 0x1,
	0x0202, 0x00, 0x1,
	0x0203, 0x02, 0x1,
	0x0820, 0x03, 0x1,
	0x0821, 0x6A, 0x1,
	0x0822, 0x00, 0x1,
	0x0823, 0x00, 0x1,
	0x0112, 0x0A, 0x1,
	0x0113, 0x0A, 0x1,
	0x0114, 0x01, 0x1,
	0x3929, 0x0F, 0x1,
	0x0101, 0x00, 0x1,
	0x30B8, 0x2A, 0x1,
	0x30BA, 0x2E, 0x1,
};

const u32 sensor_5e9_setfile_B_2592x1458_24fps[] = {
	0x0136, 0x1A, 0x1,
	0x0137, 0x00, 0x1,
	0x0301, 0x06, 0x1,
	0x0305, 0x05, 0x1,
	0x0306, 0x00, 0x1,
	0x0307, 0x6D, 0x1,
	0x3C1F, 0x00, 0x1,
	0x030D, 0x05, 0x1,
	0x030E, 0x00, 0x1,
	0x030F, 0xA8, 0x1,
	0x3C17, 0x00, 0x1,
	0x0340, 0x09, 0x1,
	0x0341, 0xE1, 0x1,
	0x0342, 0x0C, 0x1,
	0x0343, 0x28, 0x1,
	0x0344, 0x00, 0x1,
	0x0345, 0x08, 0x1,
	0x0346, 0x00, 0x1,
	0x0347, 0xFA, 0x1,
	0x0348, 0x0A, 0x1,
	0x0349, 0x27, 0x1,
	0x034A, 0x06, 0x1,
	0x034B, 0xAB, 0x1,
	0x034C, 0x0A, 0x1,
	0x034D, 0x20, 0x1,
	0x034E, 0x05, 0x1,
	0x034F, 0xB2, 0x1,
	0x0381, 0x01, 0x1,
	0x0383, 0x01, 0x1,
	0x0385, 0x01, 0x1,
	0x0387, 0x01, 0x1,
	0x0900, 0x00, 0x1,
	0x0901, 0x00, 0x1,
	0x0204, 0x00, 0x1,
	0x0205, 0x20, 0x1,
	0x0200, 0x0B, 0x1,
	0x0201, 0x9C, 0x1,
	0x0202, 0x00, 0x1,
	0x0203, 0x02, 0x1,
	0x0820, 0x03, 0x1,
	0x0821, 0x6A, 0x1,
	0x0822, 0x00, 0x1,
	0x0823, 0x00, 0x1,
	0x0112, 0x0A, 0x1,
	0x0113, 0x0A, 0x1,
	0x0114, 0x01, 0x1,
	0x3929, 0x0F, 0x1,
	0x0101, 0x00, 0x1,
	0x30B8, 0x2A, 0x1,
	0x30BA, 0x2E, 0x1,
};

const u32 sensor_5e9_setfile_B_2592x1260_24fps[] = {
	0x0136, 0x1A, 0x1,
	0x0137, 0x00, 0x1,
	0x0301, 0x06, 0x1,
	0x0305, 0x05, 0x1,
	0x0306, 0x00, 0x1,
	0x0307, 0x6D, 0x1,
	0x3C1F, 0x00, 0x1,
	0x030D, 0x05, 0x1,
	0x030E, 0x00, 0x1,
	0x030F, 0xA8, 0x1,
	0x3C17, 0x00, 0x1,
	0x0340, 0x09, 0x1,
	0x0341, 0xE1, 0x1,
	0x0342, 0x0C, 0x1,
	0x0343, 0x28, 0x1,
	0x0344, 0x00, 0x1,
	0x0345, 0x08, 0x1,
	0x0346, 0x01, 0x1,
	0x0347, 0x5E, 0x1,
	0x0348, 0x0A, 0x1,
	0x0349, 0x27, 0x1,
	0x034A, 0x06, 0x1,
	0x034B, 0x49, 0x1,
	0x034C, 0x0A, 0x1,
	0x034D, 0x20, 0x1,
	0x034E, 0x04, 0x1,
	0x034F, 0xEC, 0x1,
	0x0381, 0x01, 0x1,
	0x0383, 0x01, 0x1,
	0x0385, 0x01, 0x1,
	0x0387, 0x01, 0x1,
	0x0900, 0x00, 0x1,
	0x0901, 0x00, 0x1,
	0x0204, 0x00, 0x1,
	0x0205, 0x20, 0x1,
	0x0200, 0x0B, 0x1,
	0x0201, 0x9C, 0x1,
	0x0202, 0x00, 0x1,
	0x0203, 0x02, 0x1,
	0x0820, 0x03, 0x1,
	0x0821, 0x6A, 0x1,
	0x0822, 0x00, 0x1,
	0x0823, 0x00, 0x1,
	0x0112, 0x0A, 0x1,
	0x0113, 0x0A, 0x1,
	0x0114, 0x01, 0x1,
	0x3929, 0x0F, 0x1,
	0x0101, 0x00, 0x1,
	0x30B8, 0x2A, 0x1,
	0x30BA, 0x2E, 0x1,
};

const u32 sensor_5e9_setfile_B_1936x1936_24fps[] = {
	0x0136, 0x1A, 0x1,
	0x0137, 0x00, 0x1,
	0x0301, 0x06, 0x1,
	0x0305, 0x05, 0x1,
	0x0306, 0x00, 0x1,
	0x0307, 0x6D, 0x1,
	0x3C1F, 0x00, 0x1,
	0x030D, 0x05, 0x1,
	0x030E, 0x00, 0x1,
	0x030F, 0xA8, 0x1,
	0x3C17, 0x00, 0x1,
	0x0340, 0x09, 0x1,
	0x0341, 0xE1, 0x1,
	0x0342, 0x0C, 0x1,
	0x0343, 0x28, 0x1,
	0x0344, 0x01, 0x1,
	0x0345, 0x50, 0x1,
	0x0346, 0x00, 0x1,
	0x0347, 0x0C, 0x1,
	0x0348, 0x08, 0x1,
	0x0349, 0xDF, 0x1,
	0x034A, 0x07, 0x1,
	0x034B, 0x9B, 0x1,
	0x034C, 0x07, 0x1,
	0x034D, 0x90, 0x1,
	0x034E, 0x07, 0x1,
	0x034F, 0x90, 0x1,
	0x0381, 0x01, 0x1,
	0x0383, 0x01, 0x1,
	0x0385, 0x01, 0x1,
	0x0387, 0x01, 0x1,
	0x0900, 0x00, 0x1,
	0x0901, 0x00, 0x1,
	0x0204, 0x00, 0x1,
	0x0205, 0x20, 0x1,
	0x0200, 0x0B, 0x1,
	0x0201, 0x9C, 0x1,
	0x0202, 0x00, 0x1,
	0x0203, 0x02, 0x1,
	0x0820, 0x03, 0x1,
	0x0821, 0x6A, 0x1,
	0x0822, 0x00, 0x1,
	0x0823, 0x00, 0x1,
	0x0112, 0x0A, 0x1,
	0x0113, 0x0A, 0x1,
	0x0114, 0x01, 0x1,
	0x3929, 0x0F, 0x1,
	0x0101, 0x00, 0x1,
	0x30B8, 0x2A, 0x1,
	0x30BA, 0x2E, 0x1,
};

/* 2x2 Binning */
const u32 sensor_5e9_setfile_B_1296x972_58fps[] = {
	0x0136, 0x1A, 0x1,
	0x0137, 0x00, 0x1,
	0x0301, 0x06, 0x1,
	0x0305, 0x05, 0x1,
	0x0306, 0x00, 0x1,
	0x0307, 0x6D, 0x1,
	0x3C1F, 0x00, 0x1,
	0x030D, 0x05, 0x1,
	0x030E, 0x00, 0x1,
	0x030F, 0xA8, 0x1,
	0x3C17, 0x00, 0x1,
	0x0340, 0x04, 0x1,
	0x0341, 0x0E, 0x1,
	0x0342, 0x0C, 0x1,
	0x0343, 0x28, 0x1,
	0x0344, 0x00, 0x1,
	0x0345, 0x08, 0x1,
	0x0346, 0x00, 0x1,
	0x0347, 0x08, 0x1,
	0x0348, 0x0A, 0x1,
	0x0349, 0x27, 0x1,
	0x034A, 0x07, 0x1,
	0x034B, 0x9F, 0x1,
	0x034C, 0x05, 0x1,
	0x034D, 0x10, 0x1,
	0x034E, 0x03, 0x1,
	0x034F, 0xCC, 0x1,
	0x0381, 0x01, 0x1,
	0x0383, 0x01, 0x1,
	0x0385, 0x01, 0x1,
	0x0387, 0x03, 0x1,
	0x0900, 0x01, 0x1,
	0x0901, 0x22, 0x1,
	0x0204, 0x00, 0x1,
	0x0205, 0x20, 0x1,
	0x0200, 0x0B, 0x1,
	0x0201, 0x9C, 0x1,
	0x0202, 0x00, 0x1,
	0x0203, 0x02, 0x1,
	0x0820, 0x03, 0x1,
	0x0821, 0x6A, 0x1,
	0x0822, 0x00, 0x1,
	0x0823, 0x00, 0x1,
	0x0112, 0x0A, 0x1,
	0x0113, 0x0A, 0x1,
	0x0114, 0x01, 0x1,
	0x3929, 0x0F, 0x1,
	0x0101, 0x00, 0x1,
	0x30B8, 0x2A, 0x1,
	0x30BA, 0x2E, 0x1,
};

/* 2x2 Binning */
const u32 sensor_5e9_setfile_B_640x480_120fps[] = {
	0x0136, 0x1A, 0x1,
	0x0137, 0x00, 0x1,
	0x0301, 0x06, 0x1,
	0x0305, 0x05, 0x1,
	0x0306, 0x00, 0x1,
	0x0307, 0x6D, 0x1,
	0x3C1F, 0x00, 0x1,
	0x030D, 0x05, 0x1,
	0x030E, 0x00, 0x1,
	0x030F, 0xA8, 0x1,
	0x3C17, 0x00, 0x1,
	0x0340, 0x02, 0x1,
	0x0341, 0x34, 0x1,
	0x0342, 0x0A, 0x1,
	0x0343, 0xF0, 0x1,
	0x0344, 0x00, 0x1,
	0x0345, 0x18, 0x1,
	0x0346, 0x00, 0x1,
	0x0347, 0x14, 0x1,
	0x0348, 0x0A, 0x1,
	0x0349, 0x17, 0x1,
	0x034A, 0x07, 0x1,
	0x034B, 0x93, 0x1,
	0x034C, 0x02, 0x1,
	0x034D, 0x80, 0x1,
	0x034E, 0x01, 0x1,
	0x034F, 0xE0, 0x1,
	0x0381, 0x01, 0x1,
	0x0383, 0x01, 0x1,
	0x0385, 0x01, 0x1,
	0x0387, 0x07, 0x1,
	0x0900, 0x01, 0x1,
	0x0901, 0x44, 0x1,
	0x0204, 0x00, 0x1,
	0x0205, 0x20, 0x1,
	0x0200, 0x0A, 0x1,
	0x0201, 0x64, 0x1,
	0x0202, 0x00, 0x1,
	0x0203, 0x02, 0x1,
	0x0820, 0x03, 0x1,
	0x0821, 0x6A, 0x1,
	0x0822, 0x00, 0x1,
	0x0823, 0x00, 0x1,
	0x0112, 0x0A, 0x1,
	0x0113, 0x0A, 0x1,
	0x0114, 0x01, 0x1,
	0x3929, 0x0F, 0x1,
	0x0101, 0x00, 0x1,
	0x30B8, 0x2E, 0x1,
	0x30BA, 0x36, 0x1,
};

const u32 sensor_5e9_setfile_B_2576x1932_30fps[] = {
	0x0136,	0x1A, 0x1,
	0x0137,	0x00, 0x1,
	0x0301,	0x06, 0x1,
	0x0305,	0x05, 0x1,
	0x0306,	0x00, 0x1,
	0x0307,	0x6D, 0x1,
	0x3C1F,	0x00, 0x1,
	0x030D,	0x05, 0x1,
	0x030E,	0x00, 0x1,
	0x030F,	0xB4, 0x1,
	0x3C17,	0x00, 0x1,
	0x0340,	0x07, 0x1,
	0x0341,	0xEE, 0x1,
	0x0342,	0x0C, 0x1,
	0x0343,	0x28, 0x1,
	0x0344,	0x00, 0x1,
	0x0345,	0x10, 0x1,
	0x0346,	0x00, 0x1,
	0x0347,	0x0E, 0x1,
	0x0348,	0x0A, 0x1,
	0x0349,	0x1F, 0x1,
	0x034A,	0x07, 0x1,
	0x034B,	0x99, 0x1,
	0x034C,	0x0A, 0x1,
	0x034D,	0x10, 0x1,
	0x034E,	0x07, 0x1,
	0x034F,	0x8C, 0x1,
	0x0381,	0x01, 0x1,
	0x0383,	0x01, 0x1,
	0x0385,	0x01, 0x1,
	0x0387,	0x01, 0x1,
	0x0900,	0x00, 0x1,
	0x0901,	0x00, 0x1,
	0x0204,	0x00, 0x1,
	0x0205,	0x20, 0x1,
	0x0200,	0x0B, 0x1,
	0x0201,	0x9C, 0x1,
	0x0202,	0x00, 0x1,
	0x0203,	0x02, 0x1,
	0x0820,	0x03, 0x1,
	0x0821,	0xA8, 0x1,
	0x0822,	0x00, 0x1,
	0x0823,	0x00, 0x1,
	0x0112,	0x0A, 0x1,
	0x0113,	0x0A, 0x1,
	0x0114,	0x01, 0x1,
	0x3929,	0x0F, 0x1,
	0x0101,	0x00, 0x1,
	0x30B8,	0x2A, 0x1,
	0x30BA,	0x2E, 0x1,
	0x3941,	0x0F, 0x1,
	0x3942,	0x3D, 0x1,
	0x3400,	0x01, 0x1,
	0x3C0F,	0x01, 0x1,
};

const u32 sensor_5e9_setfile_B_2560x1440_30fps[] = {
	0x0136,	0x1A, 0x1,
	0x0137,	0x00, 0x1,
	0x0301,	0x06, 0x1,
	0x0305,	0x05, 0x1,
	0x0306,	0x00, 0x1,
	0x0307,	0x6D, 0x1,
	0x3C1F,	0x00, 0x1,
	0x030D,	0x05, 0x1,
	0x030E,	0x00, 0x1,
	0x030F,	0xB4, 0x1,
	0x3C17,	0x00, 0x1,
	0x0340,	0x07, 0x1,
	0x0341,	0xEE, 0x1,
	0x0342,	0x0C, 0x1,
	0x0343,	0x28, 0x1,
	0x0344,	0x00, 0x1,
	0x0345,	0x18, 0x1,
	0x0346,	0x01, 0x1,
	0x0347,	0x04, 0x1,
	0x0348,	0x0A, 0x1,
	0x0349,	0x17, 0x1,
	0x034A,	0x06, 0x1,
	0x034B,	0xA3, 0x1,
	0x034C,	0x0A, 0x1,
	0x034D,	0x00, 0x1,
	0x034E,	0x05, 0x1,
	0x034F,	0xA0, 0x1,
	0x0381,	0x01, 0x1,
	0x0383,	0x01, 0x1,
	0x0385,	0x01, 0x1,
	0x0387,	0x01, 0x1,
	0x0900,	0x00, 0x1,
	0x0901,	0x00, 0x1,
	0x0204,	0x00, 0x1,
	0x0205,	0x20, 0x1,
	0x0200,	0x0B, 0x1,
	0x0201,	0x9C, 0x1,
	0x0202,	0x00, 0x1,
	0x0203,	0x02, 0x1,
	0x0820,	0x03, 0x1,
	0x0821,	0xA8, 0x1,
	0x0822,	0x00, 0x1,
	0x0823,	0x00, 0x1,
	0x0112,	0x0A, 0x1,
	0x0113,	0x0A, 0x1,
	0x0114,	0x01, 0x1,
	0x3929,	0x0F, 0x1,
	0x0101,	0x00, 0x1,
	0x30B8,	0x2A, 0x1,
	0x30BA,	0x2E, 0x1,
	0x3941,	0x0F, 0x1,
	0x3942,	0x3D, 0x1,
	0x3400,	0x01, 0x1,
	0x3C0F,	0x01, 0x1,
};

const u32 sensor_5e9_setfile_B_2224x1080_30fps[] = {
	0x0136,	0x1A, 0x1,
	0x0137,	0x00, 0x1,
	0x0301,	0x06, 0x1,
	0x0305,	0x05, 0x1,
	0x0306,	0x00, 0x1,
	0x0307,	0x6D, 0x1,
	0x3C1F,	0x00, 0x1,
	0x030D,	0x05, 0x1,
	0x030E,	0x00, 0x1,
	0x030F,	0xB4, 0x1,
	0x3C17,	0x00, 0x1,
	0x0340,	0x07, 0x1,
	0x0341,	0xEE, 0x1,
	0x0342,	0x0C, 0x1,
	0x0343,	0x28, 0x1,
	0x0344,	0x00, 0x1,
	0x0345,	0xC0, 0x1,
	0x0346,	0x01, 0x1,
	0x0347,	0xB8, 0x1,
	0x0348,	0x09, 0x1,
	0x0349,	0x6F, 0x1,
	0x034A,	0x05, 0x1,
	0x034B,	0xEF, 0x1,
	0x034C,	0x08, 0x1,
	0x034D,	0xB0, 0x1,
	0x034E,	0x04, 0x1,
	0x034F,	0x38, 0x1,
	0x0381,	0x01, 0x1,
	0x0383,	0x01, 0x1,
	0x0385,	0x01, 0x1,
	0x0387,	0x01, 0x1,
	0x0900,	0x00, 0x1,
	0x0901,	0x00, 0x1,
	0x0204,	0x00, 0x1,
	0x0205,	0x20, 0x1,
	0x0200,	0x0B, 0x1,
	0x0201,	0x9C, 0x1,
	0x0202,	0x00, 0x1,
	0x0203,	0x02, 0x1,
	0x0820,	0x03, 0x1,
	0x0821,	0xA8, 0x1,
	0x0822,	0x00, 0x1,
	0x0823,	0x00, 0x1,
	0x0112,	0x0A, 0x1,
	0x0113,	0x0A, 0x1,
	0x0114,	0x01, 0x1,
	0x3929,	0x0F, 0x1,
	0x0101,	0x00, 0x1,
	0x30B8,	0x2A, 0x1,
	0x30BA,	0x2E, 0x1,
	0x3941,	0x0F, 0x1,
	0x3942,	0x3D, 0x1,
	0x3400,	0x01, 0x1,
	0x3C0F,	0x01, 0x1,
};

const u32 sensor_5e9_setfile_B_1920x1920_30fps[] = {
	0x0136,	0x1A, 0x1,
	0x0137,	0x00, 0x1,
	0x0301,	0x06, 0x1,
	0x0305,	0x05, 0x1,
	0x0306,	0x00, 0x1,
	0x0307,	0x6D, 0x1,
	0x3C1F,	0x00, 0x1,
	0x030D,	0x05, 0x1,
	0x030E,	0x00, 0x1,
	0x030F,	0xB4, 0x1,
	0x3C17,	0x00, 0x1,
	0x0340,	0x07, 0x1,
	0x0341,	0xEE, 0x1,
	0x0342,	0x0C, 0x1,
	0x0343,	0x28, 0x1,
	0x0344,	0x01, 0x1,
	0x0345,	0x58, 0x1,
	0x0346,	0x00, 0x1,
	0x0347,	0x14, 0x1,
	0x0348,	0x08, 0x1,
	0x0349,	0xD7, 0x1,
	0x034A,	0x07, 0x1,
	0x034B,	0x93, 0x1,
	0x034C,	0x07, 0x1,
	0x034D,	0x80, 0x1,
	0x034E,	0x07, 0x1,
	0x034F,	0x80, 0x1,
	0x0381,	0x01, 0x1,
	0x0383,	0x01, 0x1,
	0x0385,	0x01, 0x1,
	0x0387,	0x01, 0x1,
	0x0900,	0x00, 0x1,
	0x0901,	0x00, 0x1,
	0x0204,	0x00, 0x1,
	0x0205,	0x20, 0x1,
	0x0200,	0x0B, 0x1,
	0x0201,	0x9C, 0x1,
	0x0202,	0x00, 0x1,
	0x0203,	0x02, 0x1,
	0x0820,	0x03, 0x1,
	0x0821,	0xA8, 0x1,
	0x0822,	0x00, 0x1,
	0x0823,	0x00, 0x1,
	0x0112,	0x0A, 0x1,
	0x0113,	0x0A, 0x1,
	0x0114,	0x01, 0x1,
	0x3929,	0x0F, 0x1,
	0x0101,	0x00, 0x1,
	0x30B8,	0x2A, 0x1,
	0x30BA,	0x2E, 0x1,
	0x3941,	0x0F, 0x1,
	0x3942,	0x3D, 0x1,
	0x3400,	0x01, 0x1,
	0x3C0F,	0x01, 0x1,
};

const u32 sensor_5e9_setfile_B_1280x960_30fps[] = {
	0x0136,	0x1A, 0x1,
	0x0137,	0x00, 0x1,
	0x0301,	0x06, 0x1,
	0x0305,	0x05, 0x1,
	0x0306,	0x00, 0x1,
	0x0307,	0x6D, 0x1,
	0x3C1F,	0x00, 0x1,
	0x030D,	0x05, 0x1,
	0x030E,	0x00, 0x1,
	0x030F,	0xB4, 0x1,
	0x3C17,	0x00, 0x1,
	0x0340,	0x07, 0x1,
	0x0341,	0xEE, 0x1,
	0x0342,	0x0C, 0x1,
	0x0343,	0x28, 0x1,
	0x0344,	0x00, 0x1,
	0x0345,	0x18, 0x1,
	0x0346,	0x00, 0x1,
	0x0347,	0x14, 0x1,
	0x0348,	0x0A, 0x1,
	0x0349,	0x17, 0x1,
	0x034A,	0x07, 0x1,
	0x034B,	0x93, 0x1,
	0x034C,	0x05, 0x1,
	0x034D,	0x00, 0x1,
	0x034E,	0x03, 0x1,
	0x034F,	0xC0, 0x1,
	0x0381,	0x01, 0x1,
	0x0383,	0x01, 0x1,
	0x0385,	0x01, 0x1,
	0x0387,	0x03, 0x1,
	0x0900,	0x01, 0x1,
	0x0901,	0x22, 0x1,
	0x0204,	0x00, 0x1,
	0x0205,	0x20, 0x1,
	0x0200,	0x0B, 0x1,
	0x0201,	0x9C, 0x1,
	0x0202,	0x00, 0x1,
	0x0203,	0x02, 0x1,
	0x0820,	0x03, 0x1,
	0x0821,	0xA8, 0x1,
	0x0822,	0x00, 0x1,
	0x0823,	0x00, 0x1,
	0x0112,	0x0A, 0x1,
	0x0113,	0x0A, 0x1,
	0x0114,	0x01, 0x1,
	0x3929,	0x0F, 0x1,
	0x0101,	0x00, 0x1,
	0x30B8,	0x2A, 0x1,
	0x30BA,	0x2E, 0x1,
	0x3941,	0x0F, 0x1,
	0x3942,	0x3D, 0x1,
	0x3400,	0x01, 0x1,
	0x3C0F,	0x01, 0x1,
};

const u32 sensor_5e9_setfile_B_1280x720_30fps[] = {
	0x0136,	0x1A, 0x1,
	0x0137,	0x00, 0x1,
	0x0301,	0x06, 0x1,
	0x0305,	0x05, 0x1,
	0x0306,	0x00, 0x1,
	0x0307,	0x6D, 0x1,
	0x3C1F,	0x00, 0x1,
	0x030D,	0x05, 0x1,
	0x030E,	0x00, 0x1,
	0x030F,	0xB4, 0x1,
	0x3C17,	0x00, 0x1,
	0x0340,	0x07, 0x1,
	0x0341,	0xEE, 0x1,
	0x0342,	0x0C, 0x1,
	0x0343,	0x28, 0x1,
	0x0344,	0x02, 0x1,
	0x0345,	0x98, 0x1,
	0x0346,	0x02, 0x1,
	0x0347,	0x6C, 0x1,
	0x0348,	0x07, 0x1,
	0x0349,	0x97, 0x1,
	0x034A,	0x05, 0x1,
	0x034B,	0x3B, 0x1,
	0x034C,	0x05, 0x1,
	0x034D,	0x00, 0x1,
	0x034E,	0x02, 0x1,
	0x034F,	0xD0, 0x1,
	0x0381,	0x01, 0x1,
	0x0383,	0x01, 0x1,
	0x0385,	0x01, 0x1,
	0x0387,	0x01, 0x1,
	0x0900,	0x00, 0x1,
	0x0901,	0x00, 0x1,
	0x0204,	0x00, 0x1,
	0x0205,	0x20, 0x1,
	0x0200,	0x0B, 0x1,
	0x0201,	0x9C, 0x1,
	0x0202,	0x00, 0x1,
	0x0203,	0x02, 0x1,
	0x0820,	0x03, 0x1,
	0x0821,	0xA8, 0x1,
	0x0822,	0x00, 0x1,
	0x0823,	0x00, 0x1,
	0x0112,	0x0A, 0x1,
	0x0113,	0x0A, 0x1,
	0x0114,	0x01, 0x1,
	0x3929,	0x0F, 0x1,
	0x0101,	0x00, 0x1,
	0x30B8,	0x2A, 0x1,
	0x30BA,	0x2E, 0x1,
	0x3941,	0x0F, 0x1,
	0x3942,	0x3D, 0x1,
	0x3400,	0x01, 0x1,
	0x3C0F,	0x01, 0x1,
};
const u32 sensor_5e9_setfile_B_960x960_30fps[] = {
	0x0136,	0x1A, 0x1,
	0x0137,	0x00, 0x1,
	0x0301,	0x06, 0x1,
	0x0305,	0x05, 0x1,
	0x0306,	0x00, 0x1,
	0x0307,	0x6D, 0x1,
	0x3C1F,	0x00, 0x1,
	0x030D,	0x05, 0x1,
	0x030E,	0x00, 0x1,
	0x030F,	0xB4, 0x1,
	0x3C17,	0x00, 0x1,
	0x0340,	0x07, 0x1,
	0x0341,	0xEE, 0x1,
	0x0342,	0x0C, 0x1,
	0x0343,	0x28, 0x1,
	0x0344,	0x01, 0x1,
	0x0345,	0x58, 0x1,
	0x0346,	0x00, 0x1,
	0x0347,	0x14, 0x1,
	0x0348,	0x08, 0x1,
	0x0349,	0xD7, 0x1,
	0x034A,	0x07, 0x1,
	0x034B,	0x93, 0x1,
	0x034C,	0x03, 0x1,
	0x034D,	0xC0, 0x1,
	0x034E,	0x03, 0x1,
	0x034F,	0xC0, 0x1,
	0x0381,	0x01, 0x1,
	0x0383,	0x01, 0x1,
	0x0385,	0x01, 0x1,
	0x0387,	0x03, 0x1,
	0x0900,	0x01, 0x1,
	0x0901,	0x22, 0x1,
	0x0204,	0x00, 0x1,
	0x0205,	0x20, 0x1,
	0x0200,	0x0B, 0x1,
	0x0201,	0x9C, 0x1,
	0x0202,	0x00, 0x1,
	0x0203,	0x02, 0x1,
	0x0820,	0x03, 0x1,
	0x0821,	0xA8, 0x1,
	0x0822,	0x00, 0x1,
	0x0823,	0x00, 0x1,
	0x0112,	0x0A, 0x1,
	0x0113,	0x0A, 0x1,
	0x0114,	0x01, 0x1,
	0x3929,	0x0F, 0x1,
	0x0101,	0x00, 0x1,
	0x30B8,	0x2A, 0x1,
	0x30BA,	0x2E, 0x1,
	0x3941,	0x0F, 0x1,
	0x3942,	0x3D, 0x1,
	0x3400,	0x01, 0x1,
	0x3C0F,	0x01, 0x1,
};
const u32 sensor_5e9_setfile_B_Fsync_Slave[] = {
	0x0100, 0x00, 0x01,
	I2C_MODE_DELAY, 50000, 0x00, /* Delay change to 50000us */
	0x3C02, 0x01, 0x01,
	0x3C05, 0x1D, 0x01,
	0x3500, 0x03, 0x01,
};

const u32 sensor_5e9_setfile_B_Fsync_Master[] = {
	0x0100, 0x00, 0x01,
	I2C_MODE_DELAY, 50000, 0x00, /* Delay change to 50000us */
	0x3C03, 0x1D, 0x01,
	0x3C05, 0x1F, 0x01,
	0x3C02, 0x10, 0x01,
};

const struct sensor_pll_info sensor_5e9_pllinfo_B_2592x1944_30fps = {
	EXT_CLK_Mhz * 1000 * 1000, /* ext_clk */
	0x06, /* vt_pix_clk_div 	(0x0301) */
	0x01, /* vt_sys_clk_div 	(0x3C1C[7:4]) */
	0x05, /* pre_pll_clk_div	(0x0305) */
	0x6D, /* pll_multiplier		(0x0306, 0x0307) */
	0x00, /* op_pix_clk_div */
	0x00, /* op_sys_clk_div */

	0x00, /* secnd_pre_pll_clk_div */
	0x00, /* secnd_pll_multiplier */
	0x07EE, /* frame_length_lines	(0x0340, 0x0341) */
	0x0C28, /* line_length_pck		(0x0342, 0x0343) */
};

const struct sensor_pll_info sensor_5e9_pllinfo_B_2592x1460_30fps = {
	EXT_CLK_Mhz * 1000 * 1000, /* ext_clk */
	0x06, /* vt_pix_clk_div 	(0x0301) */
	0x01, /* vt_sys_clk_div 	(0x3C1C[7:4]) */
	0x05, /* pre_pll_clk_div	(0x0305) */
	0x6D, /* pll_multiplier		(0x0306, 0x0307) */
	0x00, /* op_pix_clk_div */
	0x00, /* op_sys_clk_div */

	0x00, /* secnd_pre_pll_clk_div */
	0x00, /* secnd_pll_multiplier */
	0x07EE, /* frame_length_lines	(0x0340, 0x0341) */
	0x0C28, /* line_length_pck		(0x0342, 0x0343) */
};

const struct sensor_pll_info sensor_5e9_pllinfo_B_2592x1458_30fps = {
	EXT_CLK_Mhz * 1000 * 1000, /* ext_clk */
	0x06, /* vt_pix_clk_div 	(0x0301) */
	0x01, /* vt_sys_clk_div 	(0x3C1C[7:4]) */
	0x05, /* pre_pll_clk_div	(0x0305) */
	0x6D, /* pll_multiplier		(0x0306, 0x0307) */
	0x00, /* op_pix_clk_div */
	0x00, /* op_sys_clk_div */

	0x00, /* secnd_pre_pll_clk_div */
	0x00, /* secnd_pll_multiplier */
	0x07EE, /* frame_length_lines	(0x0340, 0x0341) */
	0x0C28, /* line_length_pck		(0x0342, 0x0343) */
};

const struct sensor_pll_info sensor_5e9_pllinfo_B_2592x1260_30fps = {
	EXT_CLK_Mhz * 1000 * 1000, /* ext_clk */
	0x06, /* vt_pix_clk_div 	(0x0301) */
	0x01, /* vt_sys_clk_div 	(0x3C1C[7:4]) */
	0x05, /* pre_pll_clk_div	(0x0305) */
	0x6D, /* pll_multiplier		(0x0306, 0x0307) */
	0x00, /* op_pix_clk_div */
	0x00, /* op_sys_clk_div */

	0x00, /* secnd_pre_pll_clk_div */
	0x00, /* secnd_pll_multiplier */
	0x07EE, /* frame_length_lines	(0x0340, 0x0341) */
	0x0C28, /* line_length_pck		(0x0342, 0x0343) */
};

const struct sensor_pll_info sensor_5e9_pllinfo_B_1936x1936_30fps = {
	EXT_CLK_Mhz * 1000 * 1000, /* ext_clk */
	0x06, /* vt_pix_clk_div 	(0x0301) */
	0x01, /* vt_sys_clk_div 	(0x3C1C[7:4]) */
	0x05, /* pre_pll_clk_div	(0x0305) */
	0x6D, /* pll_multiplier		(0x0306, 0x0307) */
	0x00, /* op_pix_clk_div */
	0x00, /* op_sys_clk_div */

	0x00, /* secnd_pre_pll_clk_div */
	0x00, /* secnd_pll_multiplier */
	0x07EE, /* frame_length_lines	(0x0340, 0x0341) */
	0x0C28, /* line_length_pck		(0x0342, 0x0343) */
};

const struct sensor_pll_info sensor_5e9_pllinfo_B_2592x1460_24fps = {
	EXT_CLK_Mhz * 1000 * 1000, /* ext_clk */
	0x06, /* vt_pix_clk_div 	(0x0301) */
	0x01, /* vt_sys_clk_div 	(0x3C1C[7:4]) */
	0x05, /* pre_pll_clk_div	(0x0305) */
	0x6D, /* pll_multiplier		(0x0306, 0x0307) */
	0x00, /* op_pix_clk_div */
	0x00, /* op_sys_clk_div */

	0x00, /* secnd_pre_pll_clk_div */
	0x00, /* secnd_pll_multiplier */
	0x09E1, /* frame_length_lines	(0x0340, 0x0341) */
	0x0C28, /* line_length_pck		(0x0342, 0x0343) */
};

const struct sensor_pll_info sensor_5e9_pllinfo_B_2592x1458_24fps = {
	EXT_CLK_Mhz * 1000 * 1000, /* ext_clk */
	0x06, /* vt_pix_clk_div 	(0x0301) */
	0x01, /* vt_sys_clk_div 	(0x3C1C[7:4]) */
	0x05, /* pre_pll_clk_div	(0x0305) */
	0x6D, /* pll_multiplier		(0x0306, 0x0307) */
	0x00, /* op_pix_clk_div */
	0x00, /* op_sys_clk_div */

	0x00, /* secnd_pre_pll_clk_div */
	0x00, /* secnd_pll_multiplier */
	0x09E1, /* frame_length_lines	(0x0340, 0x0341) */
	0x0C28, /* line_length_pck		(0x0342, 0x0343) */
};

const struct sensor_pll_info sensor_5e9_pllinfo_B_2592x1260_24fps = {
	EXT_CLK_Mhz * 1000 * 1000, /* ext_clk */
	0x06, /* vt_pix_clk_div 	(0x0301) */
	0x01, /* vt_sys_clk_div 	(0x3C1C[7:4]) */
	0x05, /* pre_pll_clk_div	(0x0305) */
	0x6D, /* pll_multiplier		(0x0306, 0x0307) */
	0x00, /* op_pix_clk_div */
	0x00, /* op_sys_clk_div */

	0x00, /* secnd_pre_pll_clk_div */
	0x00, /* secnd_pll_multiplier */
	0x09E1, /* frame_length_lines	(0x0340, 0x0341) */
	0x0C28, /* line_length_pck		(0x0342, 0x0343) */
};

const struct sensor_pll_info sensor_5e9_pllinfo_B_1936x1936_24fps = {
	EXT_CLK_Mhz * 1000 * 1000, /* ext_clk */
	0x06, /* vt_pix_clk_div 	(0x0301) */
	0x01, /* vt_sys_clk_div 	(0x3C1C[7:4]) */
	0x05, /* pre_pll_clk_div	(0x0305) */
	0x6D, /* pll_multiplier		(0x0306, 0x0307) */
	0x00, /* op_pix_clk_div */
	0x00, /* op_sys_clk_div */

	0x00, /* secnd_pre_pll_clk_div */
	0x00, /* secnd_pll_multiplier */
	0x09E1, /* frame_length_lines	(0x0340, 0x0341) */
	0x0C28, /* line_length_pck		(0x0342, 0x0343) */
};

const struct sensor_pll_info sensor_5e9_pllinfo_B_1296x972_58fps = {
	EXT_CLK_Mhz * 1000 * 1000, /* ext_clk */
	0x06, /* vt_pix_clk_div 	(0x0301) */
	0x01, /* vt_sys_clk_div 	(0x3C1C[7:4]) */
	0x05, /* pre_pll_clk_div	(0x0305) */
	0x6D, /* pll_multiplier		(0x0306, 0x0307) */
	0x00, /* op_pix_clk_div */
	0x00, /* op_sys_clk_div */

	0x00, /* secnd_pre_pll_clk_div */
	0x00, /* secnd_pll_multiplier */
	0x040E, /* frame_length_lines	(0x0340, 0x0341) */
	0x0C28, /* line_length_pck		(0x0342, 0x0343) */
};

const struct sensor_pll_info sensor_5e9_pllinfo_B_2576x1932_30fps = {
	EXT_CLK_Mhz * 1000 * 1000, /* ext_clk */
	0x06, /* vt_pix_clk_div 	(0x0301) */
	0x01, /* vt_sys_clk_div 	(0x3C1C[7:4]) */
	0x05, /* pre_pll_clk_div	(0x0305) */
	0x6D, /* pll_multiplier		(0x0306, 0x0307) */
	0x00, /* op_pix_clk_div */
	0x00, /* op_sys_clk_div */

	0x00, /* secnd_pre_pll_clk_div */
	0x00, /* secnd_pll_multiplier */
	0x07EE, /* frame_length_lines	(0x0340, 0x0341) */
	0x0C28, /* line_length_pck		(0x0342, 0x0343) */
};

const struct sensor_pll_info sensor_5e9_pllinfo_B_2560x1440_30fps = {
	EXT_CLK_Mhz * 1000 * 1000, /* ext_clk */
	0x06, /* vt_pix_clk_div 	(0x0301) */
	0x01, /* vt_sys_clk_div 	(0x3C1C[7:4]) */
	0x05, /* pre_pll_clk_div	(0x0305) */
	0x6D, /* pll_multiplier		(0x0306, 0x0307) */
	0x00, /* op_pix_clk_div */
	0x00, /* op_sys_clk_div */

	0x00, /* secnd_pre_pll_clk_div */
	0x00, /* secnd_pll_multiplier */
	0x07EE, /* frame_length_lines	(0x0340, 0x0341) */
	0x0C28, /* line_length_pck		(0x0342, 0x0343) */
};

const struct sensor_pll_info sensor_5e9_pllinfo_B_2224x1080_30fps = {
	EXT_CLK_Mhz * 1000 * 1000, /* ext_clk */
	0x06, /* vt_pix_clk_div 	(0x0301) */
	0x01, /* vt_sys_clk_div 	(0x3C1C[7:4]) */
	0x05, /* pre_pll_clk_div	(0x0305) */
	0x6D, /* pll_multiplier		(0x0306, 0x0307) */
	0x00, /* op_pix_clk_div */
	0x00, /* op_sys_clk_div */

	0x00, /* secnd_pre_pll_clk_div */
	0x00, /* secnd_pll_multiplier */
	0x07EE, /* frame_length_lines	(0x0340, 0x0341) */
	0x0C28, /* line_length_pck		(0x0342, 0x0343) */
};

const struct sensor_pll_info sensor_5e9_pllinfo_B_1920x1920_30fps = {
	EXT_CLK_Mhz * 1000 * 1000, /* ext_clk */
	0x06, /* vt_pix_clk_div 	(0x0301) */
	0x01, /* vt_sys_clk_div 	(0x3C1C[7:4]) */
	0x05, /* pre_pll_clk_div	(0x0305) */
	0x6D, /* pll_multiplier		(0x0306, 0x0307) */
	0x00, /* op_pix_clk_div */
	0x00, /* op_sys_clk_div */

	0x00, /* secnd_pre_pll_clk_div */
	0x00, /* secnd_pll_multiplier */
	0x07EE, /* frame_length_lines	(0x0340, 0x0341) */
	0x0C28, /* line_length_pck		(0x0342, 0x0343) */
};

const struct sensor_pll_info sensor_5e9_pllinfo_B_1280x960_30fps = {
	EXT_CLK_Mhz * 1000 * 1000, /* ext_clk */
	0x06, /* vt_pix_clk_div 	(0x0301) */
	0x01, /* vt_sys_clk_div 	(0x3C1C[7:4]) */
	0x05, /* pre_pll_clk_div	(0x0305) */
	0x6D, /* pll_multiplier		(0x0306, 0x0307) */
	0x00, /* op_pix_clk_div */
	0x00, /* op_sys_clk_div */

	0x00, /* secnd_pre_pll_clk_div */
	0x00, /* secnd_pll_multiplier */
	0x07EE, /* frame_length_lines	(0x0340, 0x0341) */
	0x0C28, /* line_length_pck		(0x0342, 0x0343) */
};

const struct sensor_pll_info sensor_5e9_pllinfo_B_1280x720_30fps = {
	EXT_CLK_Mhz * 1000 * 1000, /* ext_clk */
	0x06, /* vt_pix_clk_div 	(0x0301) */
	0x01, /* vt_sys_clk_div 	(0x3C1C[7:4]) */
	0x05, /* pre_pll_clk_div	(0x0305) */
	0x6D, /* pll_multiplier		(0x0306, 0x0307) */
	0x00, /* op_pix_clk_div */
	0x00, /* op_sys_clk_div */

	0x00, /* secnd_pre_pll_clk_div */
	0x00, /* secnd_pll_multiplier */
	0x07EE, /* frame_length_lines	(0x0340, 0x0341) */
	0x0C28, /* line_length_pck		(0x0342, 0x0343) */
};
const struct sensor_pll_info sensor_5e9_pllinfo_B_960x960_30fps = {
	EXT_CLK_Mhz * 1000 * 1000, /* ext_clk */
	0x06, /* vt_pix_clk_div 	(0x0301) */
	0x01, /* vt_sys_clk_div 	(0x3C1C[7:4]) */
	0x05, /* pre_pll_clk_div	(0x0305) */
	0x6D, /* pll_multiplier		(0x0306, 0x0307) */
	0x00, /* op_pix_clk_div */
	0x00, /* op_sys_clk_div */

	0x00, /* secnd_pre_pll_clk_div */
	0x00, /* secnd_pll_multiplier */
	0x07EE, /* frame_length_lines	(0x0340, 0x0341) */
	0x0C28, /* line_length_pck		(0x0342, 0x0343) */
};
const struct sensor_pll_info sensor_5e9_pllinfo_B_640x480_120fps = {
	EXT_CLK_Mhz * 1000 * 1000, /* ext_clk */
	0x06, /* vt_pix_clk_div 	(0x0301) */
	0x01, /* vt_sys_clk_div 	(0x3C1C[7:4]) */
	0x05, /* pre_pll_clk_div	(0x0305) */
	0x6D, /* pll_multiplier		(0x0306, 0x0307) */
	0x00, /* op_pix_clk_div */
	0x00, /* op_sys_clk_div */

	0x00, /* secnd_pre_pll_clk_div */
	0x00, /* secnd_pll_multiplier */
	0x0234, /* frame_length_lines	(0x0340, 0x0341) */
	0x0AF0, /* line_length_pck		(0x0342, 0x0343) */
};

static const u32 *sensor_5e9_setfiles_B[] = {
	sensor_5e9_setfile_B_2592x1944_30fps,
	sensor_5e9_setfile_B_2592x1460_30fps,
	sensor_5e9_setfile_B_2592x1458_30fps,
	sensor_5e9_setfile_B_2592x1260_30fps,
	sensor_5e9_setfile_B_1936x1936_30fps,
	sensor_5e9_setfile_B_2592x1460_24fps,
	sensor_5e9_setfile_B_2592x1458_24fps,
	sensor_5e9_setfile_B_2592x1260_24fps,
	sensor_5e9_setfile_B_1936x1936_24fps,
	sensor_5e9_setfile_B_1296x972_58fps,
	sensor_5e9_setfile_B_2576x1932_30fps,
	sensor_5e9_setfile_B_2560x1440_30fps,
	sensor_5e9_setfile_B_2224x1080_30fps,
	sensor_5e9_setfile_B_1920x1920_30fps,
	sensor_5e9_setfile_B_1280x960_30fps,
	sensor_5e9_setfile_B_1280x720_30fps,
	sensor_5e9_setfile_B_960x960_30fps,
	sensor_5e9_setfile_B_640x480_120fps,
};

static const u32 sensor_5e9_setfile_B_sizes[] = {
	sizeof(sensor_5e9_setfile_B_2592x1944_30fps) / sizeof(sensor_5e9_setfile_B_2592x1944_30fps[0]),
	sizeof(sensor_5e9_setfile_B_2592x1460_30fps) / sizeof(sensor_5e9_setfile_B_2592x1460_30fps[0]),
	sizeof(sensor_5e9_setfile_B_2592x1458_30fps) / sizeof(sensor_5e9_setfile_B_2592x1458_30fps[0]),
	sizeof(sensor_5e9_setfile_B_2592x1260_30fps) / sizeof(sensor_5e9_setfile_B_2592x1260_30fps[0]),
	sizeof(sensor_5e9_setfile_B_1936x1936_30fps) / sizeof(sensor_5e9_setfile_B_1936x1936_30fps[0]),
	sizeof(sensor_5e9_setfile_B_2592x1460_24fps) / sizeof(sensor_5e9_setfile_B_2592x1460_24fps[0]),
	sizeof(sensor_5e9_setfile_B_2592x1458_24fps) / sizeof(sensor_5e9_setfile_B_2592x1458_24fps[0]),
	sizeof(sensor_5e9_setfile_B_2592x1260_24fps) / sizeof(sensor_5e9_setfile_B_2592x1260_24fps[0]),
	sizeof(sensor_5e9_setfile_B_1936x1936_24fps) / sizeof(sensor_5e9_setfile_B_1936x1936_24fps[0]),
	sizeof(sensor_5e9_setfile_B_1296x972_58fps) / sizeof(sensor_5e9_setfile_B_1296x972_58fps[0]),
	sizeof(sensor_5e9_setfile_B_2576x1932_30fps) / sizeof(sensor_5e9_setfile_B_2576x1932_30fps[0]),
	sizeof(sensor_5e9_setfile_B_2560x1440_30fps) / sizeof(sensor_5e9_setfile_B_2560x1440_30fps[0]),
	sizeof(sensor_5e9_setfile_B_2224x1080_30fps) / sizeof(sensor_5e9_setfile_B_2224x1080_30fps[0]),
	sizeof(sensor_5e9_setfile_B_1920x1920_30fps) / sizeof(sensor_5e9_setfile_B_1920x1920_30fps[0]),
	sizeof(sensor_5e9_setfile_B_1280x960_30fps) / sizeof(sensor_5e9_setfile_B_1280x960_30fps[0]),
	sizeof(sensor_5e9_setfile_B_1280x720_30fps) / sizeof(sensor_5e9_setfile_B_1280x720_30fps[0]),
	sizeof(sensor_5e9_setfile_B_960x960_30fps) / sizeof(sensor_5e9_setfile_B_960x960_30fps[0]),
	sizeof(sensor_5e9_setfile_B_640x480_120fps) / sizeof(sensor_5e9_setfile_B_640x480_120fps[0]),
};

static const struct sensor_pll_info *sensor_5e9_pllinfos_B[] = {
	&sensor_5e9_pllinfo_B_2592x1944_30fps,
	&sensor_5e9_pllinfo_B_2592x1460_30fps,
	&sensor_5e9_pllinfo_B_2592x1458_30fps,
	&sensor_5e9_pllinfo_B_2592x1260_30fps,
	&sensor_5e9_pllinfo_B_1936x1936_30fps,
	&sensor_5e9_pllinfo_B_2592x1460_24fps,
	&sensor_5e9_pllinfo_B_2592x1458_24fps,
	&sensor_5e9_pllinfo_B_2592x1260_24fps,
	&sensor_5e9_pllinfo_B_1936x1936_24fps,
	&sensor_5e9_pllinfo_B_1296x972_58fps,
	&sensor_5e9_pllinfo_B_2576x1932_30fps,
	&sensor_5e9_pllinfo_B_2560x1440_30fps,
	&sensor_5e9_pllinfo_B_2224x1080_30fps,
	&sensor_5e9_pllinfo_B_1920x1920_30fps,
	&sensor_5e9_pllinfo_B_1280x960_30fps,
	&sensor_5e9_pllinfo_B_1280x720_30fps,
	&sensor_5e9_pllinfo_B_960x960_30fps,
	&sensor_5e9_pllinfo_B_640x480_120fps,
};

#endif

