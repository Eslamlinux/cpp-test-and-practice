#include "game.h"
#include <random>
Game::Game()
{
    grid = Grid();
    blocks = GetAllBlocks();
    CurrentBlock = GetRandBlock();
    NextBlock = GetRandBlock();
}

Block Game::GetRandBlock()
{
    if(blocks.empty())
    {
        blocks = GetAllBlocks();
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

void Game::Draw()
{
    grid.Draw();
    CurrentBlock.Draw();
}

void Game::HandeleInput()
{
    int keypressed = GetKeyPressed();
    switch (keypressed)
    {
    case KEY_LEFT:
        MoveBLeft();
        break;

    case KEY_RIGHT:
        MoveBRight();
        break;

    case KEY_DOWN:
        MoveBDown();
        break;

    default:
        break;
    }

}

void Game::MoveBLeft()
{
    CurrentBlock.Move(0,-1);
}


void Game::MoveBRight()
{
    CurrentBlock.Move(0,-1);
}


void Game::MoveBDown()
{
    CurrentBlock.Move(0,-1);
}