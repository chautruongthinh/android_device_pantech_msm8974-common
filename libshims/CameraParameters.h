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

namespace android {

class CameraParameters
{
public:
    static const char BURST_SHOT_OFF[];
    static const char BURST_SHOT_ON[];
    static const char FOCUS_MODE_MANUAL_POSITION[];
    static const char KEY_BURST_SHOT[];
    static const char KEY_FOCUS_MODE_OBJECT_TRACKING[];
    static const char WHITE_BALANCE_MANUAL_CCT[];
    static const char KEY_SKY_COLOREXT_COORDINATES_B[];
    static const char KEY_SKY_COLOREXT_COORDINATES_G[];
    static const char KEY_SKY_COLOREXT_COORDINATES_R[];
    static const char KEY_SKY_COLOREXT_COORDINATES[];
    static const char KEY_SKY_COLOREXT_RGB_B[];
    static const char KEY_SKY_COLOREXT_RGB_G[];
    static const char KEY_SKY_COLOREXT_RGB_R[];
    static const char SKY_COLOREXT_YELLOW[];
    static const char SKY_COLOREXT_BLUE[];
    static const char SKY_COLOREXT_GREEN[];
    static const char SKY_COLOREXT_RED[];
    static const char SKY_COLOREXT_TOUCH[];
    static const char SKY_COLOREXT_OFF[];
    static const char KEY_SKY_COLOREXTRACTION[];
    static const char SKY_IPL_COLOR_DOT_WHITE[];
    static const char SKY_IPL_COLOR_DOT_BLACK[];
    static const char SKY_IPL_MONO_DOT[];
    static const char SKY_IPL_FIXED_DOT[];
    static const char SKY_IPL_MINIATURE[];
    static const char SKY_IPL_TEXT_BB_B[];
    static const char SKY_IPL_TEXT_WB_B[];
    static const char SKY_IPL_TEXT_WB_C[];
    static const char SKY_IPL_EFFECT_EXT_4[];
    static const char SKY_IPL_EFFECT_EXT_3[];
    static const char SKY_IPL_EFFECT_EXT_2[];
    static const char SKY_IPL_EFFECT_EXT_1[];
    static const char SKY_IPL_SKIN_DETECTOR[];
    static const char SKY_IPL_DITHER_BW_M[];
    static const char SKY_IPL_DITHER_BW_C[];
    static const char SKY_IPL_COLOR_CHANGE_3[];
    static const char SKY_IPL_COLOR_CHANGE_2[];
    static const char SKY_IPL_COLOR_CHANGE_1[];
    static const char SKY_IPL_COLOR_CHANGE_0[];
    static const char SKY_IPL_NEON[];
    static const char SKY_IPL_EMBOSS[];
    static const char SKY_IPL_SOLARIZE[];
    static const char SKY_IPL_SKETCH_M[];
    static const char SKY_IPL_SKETCH_C[];
    static const char SKY_IPL_CARTOON_M[];
    static const char SKY_IPL_CARTOON_C[];
    static const char SKY_IPL_POSTER_CARTOON_M[];
    static const char SKY_IPL_POSTER_CARTOON_C[];
    static const char SKY_IPL_BEAUTY[];
    static const char SKY_IPL_OFF[];
    static const char LLS_ON[];
    static const char LLS_OFF[];
    static const char KEY_LLS_MODE[];
    static const char KEY_LLS[];
    static const char HDR_ON[];
    static const char HDR_OFF[];
    static const char FLASH_ON[];
    static const char FLASH_OFF[];
    static const char KEY_FLASH[];
    static const char VTS_ON[];
    static const char VTS_OFF[];
    static const char KEY_VTS[];
    static const char FLASH_MODE_TORCH_FLASH[];

    void setColorExtractionCoordinates(int x, int y);
    void setColorExtractionRGB_B(int x, int y);
    void setColorExtractionRGB_G(int x, int y);
    void setColorExtractionRGB_R(int x, int y);
    void getColorExtractionCoordinates(int *x, int *y) const;
    void getColorExtractionRGB_B(int *x, int *y) const;
    void getColorExtractionRGB_G(int *x, int *y) const;
    void getColorExtractionRGB_R(int *x, int *y) const;

};

}; // namespace android
