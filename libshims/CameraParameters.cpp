/*
 * Copyright (C) 2017 The LineageOS Project
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include "CameraParameters.h"

namespace android {
const char CameraParameters::BURST_SHOT_OFF[] = "burst-shot";
const char CameraParameters::BURST_SHOT_ON[] = "burst-shot";
const char CameraParameters::FOCUS_MODE_MANUAL_POSITION[] = "manual-position";
const char CameraParameters::KEY_BURST_SHOT[] = "burst-shot";
const char CameraParameters::KEY_FOCUS_MODE_OBJECT_TRACKING[] = "object-tracking";
const char CameraParameters::WHITE_BALANCE_MANUAL_CCT[] = "white-balance-manual";
const char CameraParameters::KEY_SKY_COLOREXT_COORDINATES_B[] ="pantech-color-extraction-coordinates-b";
const char CameraParameters::KEY_SKY_COLOREXT_COORDINATES_G[] ="pantech-color-extraction-coordinates-g";
const char CameraParameters::KEY_SKY_COLOREXT_COORDINATES_R[] ="pantech-color-extraction-coordinates-r";
const char CameraParameters::KEY_SKY_COLOREXT_COORDINATES[] ="pantech-color-extraction-coordinates";
const char CameraParameters::KEY_SKY_COLOREXT_RGB_B[] ="pantech-colorextraction-rgb-b";
const char CameraParameters::KEY_SKY_COLOREXT_RGB_G[] ="pantech-colorextraction-rgb-g";
const char CameraParameters::KEY_SKY_COLOREXT_RGB_R[] ="pantech-colorextraction-rgb-r";
const char CameraParameters::SKY_COLOREXT_YELLOW[] ="color_yellow";
const char CameraParameters::SKY_COLOREXT_BLUE[] ="color_blue";
const char CameraParameters::SKY_COLOREXT_GREEN[] ="color_green";
const char CameraParameters::SKY_COLOREXT_RED[] ="color_red";
const char CameraParameters::SKY_COLOREXT_TOUCH[] ="color_touch";
const char CameraParameters::SKY_COLOREXT_OFF[] ="off";
const char CameraParameters::KEY_SKY_COLOREXTRACTION[] ="pantech-colorextraction";
const char CameraParameters::SKY_IPL_COLOR_DOT_WHITE[] ="pantech-ipl-color-dot-wht";
const char CameraParameters::SKY_IPL_COLOR_DOT_BLACK[] ="pantech-ipl-color-dot-blk";
const char CameraParameters::SKY_IPL_MONO_DOT[] ="pantech-ipl-mono-dot";
const char CameraParameters::SKY_IPL_FIXED_DOT[] ="pantech-ipl-fixed-dot";
const char CameraParameters::SKY_IPL_MINIATURE[] ="pantech-ipl-miniature";
const char CameraParameters::SKY_IPL_TEXT_BB_B[] ="pantech-ipl-blackboard-b";
const char CameraParameters::SKY_IPL_TEXT_WB_B[] ="pantech-ipl-whiteboard-b";
const char CameraParameters::SKY_IPL_TEXT_WB_C[] ="pantech-ipl-whiteboard-c";
const char CameraParameters::SKY_IPL_EFFECT_EXT_4[] ="pantech-ipl-effect-ext-4";
const char CameraParameters::SKY_IPL_EFFECT_EXT_3[] ="pantech-ipl-effect-ext-3";
const char CameraParameters::SKY_IPL_EFFECT_EXT_2[] ="pantech-ipl-effect-ext-2";
const char CameraParameters::SKY_IPL_EFFECT_EXT_1[] ="pantech-ipl-effect-ext-1";
const char CameraParameters::SKY_IPL_SKIN_DETECTOR[] ="pantech-ipl-skincolorextract";
const char CameraParameters::SKY_IPL_DITHER_BW_M[] ="pantech-ipl-ditherbw-m";
const char CameraParameters::SKY_IPL_DITHER_BW_C[] ="pantech-ipl-ditherbw-c";
const char CameraParameters::SKY_IPL_COLOR_CHANGE_3[] ="pantech-ipl-colorchange-4";
const char CameraParameters::SKY_IPL_COLOR_CHANGE_2[] ="pantech-ipl-colorchange-3";
const char CameraParameters::SKY_IPL_COLOR_CHANGE_1[] ="pantech-ipl-colorchange-2";
const char CameraParameters::SKY_IPL_COLOR_CHANGE_0[] ="pantech-ipl-colorchange-1";
const char CameraParameters::SKY_IPL_NEON[] ="pantech-ipl-neon";
const char CameraParameters::SKY_IPL_EMBOSS[] ="pantech-ipl-emboss";
const char CameraParameters::SKY_IPL_SOLARIZE[] ="pantech-ipl-solarize";
const char CameraParameters::SKY_IPL_SKETCH_M[] ="pantech-ipl-sketch-m";
const char CameraParameters::SKY_IPL_SKETCH_C[] ="pantech-ipl-sketch-c";
const char CameraParameters::SKY_IPL_CARTOON_M[] ="pantech-ipl-cartoon-m";
const char CameraParameters::SKY_IPL_CARTOON_C[] ="pantech-ipl-cartoon-c";
const char CameraParameters::SKY_IPL_POSTER_CARTOON_M[] ="pantech-ipl-poster-cartoon-m";
const char CameraParameters::SKY_IPL_POSTER_CARTOON_C[] ="pantech-ipl-poster-cartoon-c";
const char CameraParameters::SKY_IPL_BEAUTY[] ="pantech-ipl-beauty";
const char CameraParameters::SKY_IPL_OFF[] ="pantech-ipl-off";
const char CameraParameters::LLS_ON[] ="on";
const char CameraParameters::LLS_OFF[] ="off";
const char CameraParameters::KEY_LLS_MODE[] ="pantech-lls-mode";
const char CameraParameters::KEY_LLS[] ="pantech-lls";
const char CameraParameters::HDR_ON[] ="on";
const char CameraParameters::HDR_OFF[] ="off";
const char CameraParameters::FLASH_ON[] ="on";
const char CameraParameters::FLASH_OFF[] ="off";
const char CameraParameters::KEY_FLASH[] ="pantech-flash";
const char CameraParameters::VTS_ON[] ="on";
const char CameraParameters::VTS_OFF[] ="off";
const char CameraParameters::KEY_VTS[] ="pantech-vts";
const char CameraParameters::FLASH_MODE_TORCH_FLASH[] ="torch_flash";

void CameraParameters::setColorExtractionCoordinates(int x, int y) {}
void CameraParameters::setColorExtractionRGB_B(int x, int y) {}
void CameraParameters::setColorExtractionRGB_G(int x, int y) {}
void CameraParameters::setColorExtractionRGB_R(int x, int y) {}
void CameraParameters::getColorExtractionCoordinates(int *x, int *y) const{}
void CameraParameters::getColorExtractionRGB_B(int *x, int *y) const{}
void CameraParameters::getColorExtractionRGB_G(int *x, int *y) const{}
void CameraParameters::getColorExtractionRGB_R(int *x, int *y) const{}

}; // namespace android


