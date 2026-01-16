#pragma once
#include "grid.h"
#include "blocks.cpp"

class Game
{
    std::vector<Block>blocks;

    public:
    Game();
    Block GetRandBlock();
    std::vector<Block> GetAllBlocks();
    Grid grid;
};