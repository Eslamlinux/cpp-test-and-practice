#include <iostream>
#include <vector>

std::vector<int>generatePascalsTriangleLinear(int num)
{
    if(num <= 0)
    return {};
    std::vector<int>result;
    std::vector<int>previous;
    for(int i = 1;i <= num; i++)
    {
        std::vector<int>current;
        
    }

    return result;
}
int main()
{
    for(int c:generatePascalsTriangleLinear(5))
    {
        std::cout << c << " ";
    }

    return 0;
}