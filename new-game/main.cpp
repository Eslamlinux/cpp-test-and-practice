#include <raylib.h>
#define G_Hight_Y 500
#define G_Width_X 600
#define Main_Title "test game"


int main()
{
    InitWindow(G_Width_X,G_Hight_Y,Main_Title); // النافذذة الرئسية
    SetTargetFPS(60); // سرعة اللعبة
    while(!WindowShouldClose)
    {
        BeginDrawing(); //لبداية رسم النافذة


        EndDrawing(); // لانهاء الرسم وتدمير مكونات الرسم


    }

    CloseWindow(); //لاغلاق وتدمير النافذة
    return 0;
}