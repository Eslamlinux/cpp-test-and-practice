#include <iostream>
#include "grid.h"

    Grid::Grid()
    {
        num_rows = 10;
        num_cols = 20;
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
        for(int row = 0 ; row < num_rows;row++)
        {
            for(int colum = 0 ; colum < num_cols;colum++)
            {
                std::cout << grid[row][colum] << " ";
            }
            std::cout << std::endl;
        }
    }

    Grid::~Grid(){}