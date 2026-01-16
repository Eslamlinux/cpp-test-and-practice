#include "game.h"
#include <random>
Game::Game()
{
    grid = Grid();
    blocks = GetAllBlocks();
}

Block Game::GetRandBlock()
{
    if(blocks.empty())
    {
        blocks = GetRandBlock();
    }
    int RandIndex = rand() % blocks.size();
    Block block = blocks[RandIndex];
    blocks.erase(blocks.begin() +RandIndex);
    return block;
}

std::vector<Block>Game::GetAllBlocks()
{
    return {IBlock(),JBlock(),ZBlock(),SBlock(),OBlock(),TBlock(),LBlock()};
}