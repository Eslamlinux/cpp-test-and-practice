#include <iostream>
#include <vector>

std::vector<int>generatePascalsTriangleLinear(int num)
{
    if(num <= 0)
    return {};
    

}
int main()
{
    for(int c:generatePascalsTriangleLinear(5))
    {
        std::cout << c << " ";
    }

    return 0;
}