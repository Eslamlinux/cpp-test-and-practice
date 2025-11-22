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

int To_Decimal(std::string str)
{
    std::vector<int> bits;
    if(isalpha(str[0])) return 0;
    int sum = 0;
    for(char c :str)
    {
        if(isalpha(c)) break;
        bits.push_back(c - '0');
    }
    std::cout << bits[0] << std::endl;
    return sum;
}

int main()
{
    // int ent;
    // std::cin >>ent;
    // for(auto c:ToBinary(ent))
    // {
        //     std::cout << c << "" ;
        // }
        std::string ent;
std::cin >> ent;
std::cout << To_Decimal(ent);
    return 0;
}