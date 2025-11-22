#include <iostream>
#include <chrono>
#include <vector>

std::vector<int> ToBinary(int& n)
{
    std::vector<int>result;
    while(n > 0)
    {
        n /= 2;
        n %2 = 0?result.push_back(0):result.push_back(1);
    }
    return result;
}


int main()
{
    // std::string ent;
    int ent;
    std::cin >>ent;

    return 0;
}