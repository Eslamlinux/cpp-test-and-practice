#pragma once
#include "position.h"
#include <vector>
#include <map>

class Block
{
    int cellSize;
    int rotate;
    public:
    Block();
    int id;
    std::map<int ,std::vector<Position>> cells;

}