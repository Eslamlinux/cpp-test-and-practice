//max Irrigation Period

#include <iostream>
#include <vector>

int maxIrrigationPeriod(std::vector<int> irrigation,int water) 
{ 
    if(irrigation.empty() || water < 1)
    return 0;

}

int main()
{
    std::cout << maxIrrigationPeriod({1, 1, 1, 1},3) << std::endl;

    return 0;
}