//max Irrigation Period

#include <iostream>
#include <vector>

int maxIrrigationPeriod(std::vector<int> irrigation,int water) 
{ 
    if(irrigation.empty() || water < 1)
    return 0;
    int Sum_Irri = 0;
    int i =0;
    while(Sum_Irri < water)
    {
        Sum_Irri += irrigation[i++];
    }
    return i;
}

int main()
{
    std::cout << maxIrrigationPeriod({1, 1, 1, 1},3) << std::endl;
    std::cout << maxIrrigationPeriod({1, 1, 1, 1},3) << std::endl;

    return 0;
}