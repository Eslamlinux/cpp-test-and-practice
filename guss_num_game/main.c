#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>
#include "raylib.h"

#define Board_Size 8
#define Tile_Size 42
#define Tile_Types 5

const char tile_chars[Tile_Types] = {'#','@','$','%','&'};

char board[Board_Size][Board_Size];

Vector2 grid_origin;

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
	const int screen_width = 800;
	const int screen_height = 450;

	InitWindow(screen_width, screen_height,"guss number game");
	SetTargetFPS(60);
	srand(time(NULL));

	init_board();


	while(!WindowShouldClose())
	{
		BeginDrawing();
		ClearBackground(BLUE);


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
				DrawTextEx(
				  GetFontDefault(),
				  TextFormat("%c", board[y][x]),
				  (Vector2) {
				  rect.x + 12, rect.y + 8
				}, 
				  20, 1, WHITE
				 );
			}
		}
		EndDrawing();
	}
	CloseWindow();

	return 0;


}

