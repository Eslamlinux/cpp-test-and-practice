#pragma once

class Grid
{
    int num_rows;
    int num_cols;
    int cell_size;

    public:
    Grid();
    int grid[20][10];
    void initialize();
    void print();

    ~Grid();
};