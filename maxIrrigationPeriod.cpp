//max Irrigation Period

#include <iostream>
#include <vector>

int maxIrrigationPeriod(std::vector<int> irrigation,int water) 
{ 
int Sum_Irri = 0, max_result = 0, left = 0;

    for (int right = 0; right < irrigation.size(); right++) {
        Sum_Irri += irrigation[right];
        while (Sum_Irri > water) {
            Sum_Irri -= irrigation[left];
            left++;
        }
        int current_length = right - left + 1;
        if (current_length > max_result) {
            max_result = current_length;
        }
    }
    return max_result;
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