#include <raylib.h>
#include "grid.h"
#include "block.h"
#include "blocks.cpp"

#define G_Hight_Y 600
#define G_Width_X 300
#define Main_Title "test game"

int main()
{
    InitWindow(G_Width_X,G_Hight_Y,Main_Title); // النافذذة الرئسية
    Color background = {5, 240, 0, 44}; // {255,0,0,255} يمكن استخدام اسم اللون او الار جي بي الخاص باللون  
    SetTargetFPS(60); // سرعة اللعبة
Grid grid;


grid.print();

TBlock block = TBlock();
while(!WindowShouldClose())
    {
        BeginDrawing(); //لبداية رسم النافذة
        ClearBackground(background); // لتنظيف واضافة خلفية جديدة
        grid.Draw();
        block.Draw();
        EndDrawing(); // لانهاء الرسم وتدمير مكونات الرسم


    }

    CloseWindow(); //لاغلاق وتدمير النافذة
    return 0;
}