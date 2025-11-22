#include <iostream>
#include <chrono>
#include <vector>
#include <algorithm>
std::vector<int> ToBinary(int& n)
{
    std::vector<int>result;

    while(n > 0)
    {
        n % 2 == 0?result.insert(result.begin(),0):result.insert(result.begin(),1);
        n /= 2;
    } 
    return result;
}



int main()
{
    // std::string ent;
    int ent;
    std::cin >>ent;
    for(auto c:ToBinary(ent))
    {
        std::cout << c << "" ;
    }

    return 0;
}