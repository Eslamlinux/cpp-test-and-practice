//max Irrigation Period

#include <iostream>
#include <vector>

int maxIrrigationPeriod(std::vector<int> irrigation,int water) 
{ 
    if(irrigation.empty() || water < 1)
    return 0;
    int Sum_Irri = 0,result = 0;
    for( int i =0; i < irrigation.size();i++)
    {
        if(Sum_Irri + irrigation[i] <= water)
        {
            Sum_Irri += irrigation[i];
            result++;
        }
    }
    return result;
}

int main()
{
    std::cout << maxIrrigationPeriod({1, 1, 1, 1},3) << std::endl;
    std::cout << maxIrrigationPeriod({1, 2, 3, 4, 5},5) << std::endl;

    return 0;
}