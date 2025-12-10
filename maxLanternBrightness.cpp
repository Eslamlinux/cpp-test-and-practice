#include <iostream>
#include <vector>

int maxLanternBrightness(std::vector<int> brightness) { 
    int result = 0;
    for(int c: brightness)
    {
        result += c;
    }
    return result;
}

int main()
{
    std::cout << maxLanternBrightness({5,6,7}) <<std::endl;
    std::cout << maxLanternBrightness({10, -3, 5, -2, 6}) <<std::endl;

    return 0;
}