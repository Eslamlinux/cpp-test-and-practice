#include <iostream>
#include <algorithm>
#include <vector>

std::vector<int> gravity_flip(std::vector<int> columns) { 
    return sort(columns.begin(),columns.end());
}

int main()
{
    for(auto c:gravity_flip({3, 2, 1, 2}))
    {
        std::cout<< c << " ";
    }
}