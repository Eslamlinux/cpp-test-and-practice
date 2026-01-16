#include <raylib.h>

int main()
{
    InitWindow(800,600,"Ball");
    SetTargetFPS(60);
    int ballx  = 400;
    int bally  = 400;

    while(!WindowShouldClose())
    {
        BeginDrawing();
        ClearBackground(BLUE);

        if(IsKeyDown(KEY_UP))
        {
            bally-=1;
        }
        else if(IsKeyDown(KEY_DOWN))
        {
            bally +=1;
        }
        else if(IsKeyDown(KEY_LEFT))
        {
            ballx-=1;
        }
        else if(IsKeyDown(KEY_RIGHT))
        {
            ballx +=1;
        }
        DrawText("HELLO",200,200,56,RED);
        DrawCircle(ballx,bally,20,WHITE);

        

        EndDrawing();

    }

    
    CloseWindow();

}