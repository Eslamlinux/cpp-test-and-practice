#include <iostream>
#include "grid.h"

    Grid::Grid()
    {
        num_rows = 10;
        num_cols = 20;
        cell_size = 30;
        initialize();
        colors = GetCellColor();
    }

    void Grid::initialize()
    {
        for(int row = 0 ; row < num_rows;row++)
        {
            for(int colum = 0 ; colum < num_cols;colum++)
            {
                grid[row][colum] = 0;
            }
        }
    }

    void Grid::print()
    {
        for(int colum = 0 ; colum < num_cols; colum++)
        {
            for(int row = 0 ; row < num_rows;row++)
            {
                std::cout << grid[row][colum] << " ";
            }
            std::cout << std::endl;
        }
    }

    std::vector<Color>Grid::GetCellColor()
    {
        /*{ يتكون من 4 خانات كل خانة احمر اخضر ازرق والاخيرة التركيز لكل لون , كالاتي
        اللون
        تدرج اللون
        تدرج الون
        التركيز}
        */
       Color Blue = {0, 0, 255};
       Color Green = {0, 255,0,0};
       Color Yello = {255, 251, 255,0};
       Color White = {255, 255,0, 255};
       Color Red = {255,0,0,255};
        Color Black = {0, 0, 0, 255};
        Color Cyan = {0,255,255,255};
        Color Magenta = {255,0,255,255};
        Color Gold = {215,215,0,255};
        Color Gray = {128,128,128,255};
        Color Orang = {226,116,17,255};
        Color Purple = {166,0,247,255};
        return {Red,Green,Yello,White,Black,Blue,Cyan,Magenta,Gold,Gray,Orang,Purple};
    }

    void Grid::Draw()
    {
        for(int colum = 0;colum < num_cols; colum++)
        {
            for(int row = 0 ; row < num_rows; row++)
            {
                int cellValue = grid[row][colum];
                DrawRectangle(row * cell_size +1 ,colum * cell_size+1, cell_size -1 ,cell_size -1 , colors[cellValue]);
            }
        }

    }

    Grid::~Grid(){}

