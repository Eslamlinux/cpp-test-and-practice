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
            Sum_Irri += irrigation[i];
            result++;
            if(Sum_Irri > water)
            {
                --result;
                Sum_Irri -= irrigation[i];
            }
    }
    return result;
}

int main()
{
    std::cout << maxIrrigationPeriod({1, 1, 1, 1},3) << std::endl;//3
    std::cout << maxIrrigationPeriod({1, 2, 3, 4, 5},5) << std::endl;//2
    std::cout << maxIrrigationPeriod({2,2,2},3) << std::endl;//1
    std::cout << maxIrrigationPeriod({},5) << std::endl;//0
    std::cout << maxIrrigationPeriod({1, 2, 1, 0, 1},4) << std::endl; //4
    std::cout << maxIrrigationPeriod({1, 5, 1, 1, 1},3) << std::endl; //3

    return 0;
}