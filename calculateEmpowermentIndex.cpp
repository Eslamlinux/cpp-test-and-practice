//calculateEmpowermentIndex
#include <iostream>
#include <vector>

float calculateEmpowermentIndex(std::vector<float> achievements,std::vector<float> weights) { 
    float sum = 0.0;
    for(int i =0 ; i < achievements.size(); i++)
    {
        achievements[i] = achievements[i] * weights[i];
        sum += achievements[i];
    }

    return sum / achievements.size();
}

int main()
{

    std::cout << calculateEmpowermentIndex({8, 7, 9.1},{1,1,1}) <<std::endl;
    return 0;
}