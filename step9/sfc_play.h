﻿#pragma once
// License: MIT  http://opensource.org/licenses/MIT
// Author: dustpg   mailto:dustpg@gmail.com

#include <stdint.h>


/// <summary>
/// 
/// </summary>
struct sfc_square_channel_state_t {
    // 方波 频率 
    float       frequency;
    // 方波 音量
    uint16_t    volume;
    // 方波 占空比
    uint16_t    duty;
};

/// <summary>
/// 
/// </summary>
struct sfc_triangle_channel_state_t {
    // 三角波 频率 
    float       frequency;
};


/// <summary>
/// 
/// </summary>
struct sfc_noise_channel_state_t {
    // 噪音 音量
    uint16_t    volume;
    // 噪音 频率数据
    uint16_t    data;
};

/// <summary>
/// 
/// </summary>
typedef struct {
    // 方波#1
    struct sfc_square_channel_state_t   square1;
    // 方波#2
    struct sfc_square_channel_state_t   square2;
    // 三角波
    struct sfc_triangle_channel_state_t triangle;
    // 噪音
    struct sfc_noise_channel_state_t    noise;

} sfc_channel_state_t;


// typedef
struct sfc_famicom;
typedef struct sfc_famicom sfc_famicom_t;
extern void sfc_play_audio_easy(const sfc_famicom_t*, sfc_channel_state_t*state);