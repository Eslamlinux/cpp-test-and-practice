#pragma once
#include <raylib.h>
#include <vector>

extern const Color Blue = {0, 0, 255};
extern const Color Green = {0, 255,0,0};
extern const Color Yello = {255, 251, 255,0};
extern const Color White = {255, 255,0, 255};
extern const Color Red = {255,0,0,255};
extern const Color Black = {0, 0, 0, 255};
extern const Color Cyan = {0,255,255,255};
extern const Color Magenta = {255,0,255,255};
extern const Color Gold = {215,215,0,255};
extern const Color Gray = {128,128,128,255};
extern const Color Orang = {226,116,17,255};
extern const Color Purple = {166,0,247,255};

std::vector<Color> GetCellColor();