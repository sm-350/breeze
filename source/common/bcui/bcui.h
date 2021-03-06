﻿/*
* breeze License
* Copyright (C) 2017 - 2017 YaweiZhang <yawei.zhang@foxmail.com>.
*
* Licensed under the Apache License, Version 2.0 (the "License");
* you may not use this file except in compliance with the License.
* You may obtain a copy of the License at
*
* http://www.apache.org/licenses/LICENSE-2.0
*
* Unless required by applicable law or agreed to in writing, software
* distributed under the License is distributed on an "AS IS" BASIS,
* WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
* See the License for the specific language governing permissions and
* limitations under the License.
*/

#ifndef _BCUI_H_
#define _BCUI_H_

#include "../utls.h"
#include <tuple>


enum BCUI_PIXEL
{
    BCUI_PIXEL_BLACK,
    BCUI_PIXEL_WHITE,
    BCUI_PIXEL_RED,
    BCUI_PIXEL_BLUE,
    BCUI_PIXEL_YELLOW,
};


//breeze CUI 
class BCUI
{
public:
    BCUI();
    ~BCUI();
    bool init();
    bool setPos(int x, int y, BCUI_PIXEL bp);
private:
#ifdef WIN32
    HANDLE _handle;
#endif
protected:
private:
};





























#endif
