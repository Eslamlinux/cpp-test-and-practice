#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>
#include "raylib.h"
#define Score_Font_Size 32
#define Board_Size 8
#define Tile_Size 42
#define Tile_Types 5

#define screen_width 800
#define screen_height 650
const char tile_chars[Tile_Types] = {'#','@','$','%','&'};

char board[Board_Size][Board_Size];
bool matched[Board_Size][Board_Size] = {0};
float fall_offset[Board_Size][Board_Size] = {0};

int Score = 200;
float fall_speed = 8.0f;
bool find_matches()
{
    bool found =false;
    for(int y = 0; y < Board_Size; y++)
    {
        for(int x = 0; x < Board_Size; x++)
        {
            matched[y][x] = false;
        }

    }
    for(int y = 0; y < Board_Size; y++)
    {
        for(int x = 0; x < Board_Size-2; x++)
        {
            char t = board[y][x];
            if(t == board[y][x+1] &&
               t == board[y][x+2]){
                matched[y][x] = matched[y][x+1] = matched[y][x+2] = true;
                Score += 10;
                found = true;
            } 
        }
    }
     for(int x = 0; x < Board_Size; x++)
     {
         for(int y = 0; y < Board_Size-2; y++)
         {
             char t = board[y][x];
             if(t == board[y+1][x] &&
                t == board[y+2][x]){
                matched[y][x] = matched[y+1][x] = matched[y+2][x] = true;
                Score +=10;
                found = true;
             }
         }
     }

     return found;
 }

void resolve_matches()
{
    for(int x =0;x < Board_Size ; x++)
    {
        int write_y = Board_Size - 1;
        for(int y =0;y < Board_Size -1 ; y--)
        {
            if(!matched[y][x]){
                board[write_y][x] = board[y][x];
                fall_offset[write_y][x] = (write_y - y) * Tile_Size;
                board[y][x] = ' ';
            }
                write_y--;
        }

        while(write_y >= 0){
            board[write_y][x] = random_time();
                fall_offset[write_y][x] = (write_y + 1) * Tile_Size;
            write_y--;
        }
    }
}

Vector2 grid_origin;

Texture2D background;

Font Score_Font;

Vector2 selected_tile = {-1,-1};
char random_tile()
{
	return tile_chars[rand() % Tile_Types];
}

void init_board()
{
	for(int y =0; y < Board_Size; y++)
	{
		for(int x =0; x < Board_Size; x++)
		{
			board[y][x] = random_tile();
		}
	}
	int grid_width = Board_Size * Tile_Size;
	int grid_height = Board_Size * Tile_Size;
	grid_origin = (Vector2)
	{
		(GetScreenWidth() - grid_width) /2 ,
		(GetScreenHeight() - grid_height) /2 ,
	};
}

int main(void)
{

	InitWindow(screen_width, screen_height,"guss number game");
	SetTargetFPS(60);
	srand(time(NULL));
    
    background = LoadTexture("assets/bg.png");
Score_Font = LoadFontEx("assets/BoldPixelsFont.ttf",Score_Font_Size, NULL,0);

    init_board();
    Vector2 mouse = {0,0};

	while(!WindowShouldClose())
	{
        mouse = GetMousePosition();

        if(IsMouseButtonPressed(MOUSE_LEFT_BUTTON))
        {
            int x = (mouse.x - grid_origin.x) / Tile_Size;
            int y = (mouse.y - grid_origin.y) / Tile_Size;
            if(x >= 0 && x < Board_Size && y >= 0 && y < Board_Size)
            {
                selected_tile = (Vector2){x,y};
            }
        }
        if(find_matches())
        {
            resolve_matches();
        }

        for(int y = 0; y < Board_Size; y++)
        {
             for(int x = 0; x < Board_Size; x++)
             {
                 if(fall_offset[y][x] >0){
                     fall_offset[y][x] -= fall_speed;
                     if(fall_offset[y][x]< 0){
                         fall_offset[y][x] = 0;
                     }
                 }
             }
        }
		BeginDrawing();
		ClearBackground(BLUE);
        
        DrawTexturePro(background,
                (Rectangle){
                0, 0, background.width, background.height
                },
                (Rectangle){
                0, 0, GetScreenWidth(),GetScreenHeight()
                },
                (Vector2) {0, 0},
                0.0f,
                WHITE
                );

		for(int y =0; y < Board_Size; y++)
		{
			for(int x =0; x < Board_Size; x++)
			{
				Rectangle rect = {
					grid_origin.x + (x * Tile_Size),
					grid_origin.y + (y * Tile_Size),
					Tile_Size,
					Tile_Size
				};
				DrawRectangleLinesEx(rect, 1,DARKGRAY);
                if(board[y][x] != ' '){
				DrawTextEx(
				  GetFontDefault(),
				  TextFormat("%c", board[y][x]),
				  (Vector2) {
				  rect.x + 12, rect.y + 8 - fall_offset[y][x]
			    	}, 
				  20, 1,
                 matched[y][x]?GREEN : WHITE
				 );
                }
			}
		}

        if(selected_tile.x >= 0){
            DrawRectangleLinesEx((Rectangle){
                    grid_origin.x + (selected_tile.x *Tile_Size),
                    grid_origin.y + (selected_tile.y *Tile_Size),
                    Tile_Size, Tile_Size
                    },2,YELLOW);
        }

        DrawTextEx(
                Score_Font,
                TextFormat("SCORE: %d",Score),
                (Vector2) {40,20},
               Score_Font_Size,1.0f ,RED
               );
		EndDrawing();
	}
    UnloadTexture(background);
	CloseWindow();
    UnloadFont(Score_Font);
	return 0;


}

