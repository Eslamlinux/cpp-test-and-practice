#include <iostream>
#include <chrono>
#include <vector>
#include <algorithm>
#include <cmath>
std::vector<int> To_Binary(std::string& str)
{
    std::vector<int>result;
        for(char c :str)
    {
        if(isalpha(c)) break;
    }
    int Decimal = stoi(str);
    while(Decimal > 0)
    {
        Decimal % 2 == 0?result.insert(result.begin(),0):result.insert(result.begin(),1);
        Decimal /= 2;
    } 
    return result;
}

int To_Decimal(std::string str)
{
    std::vector<int> bits;
    int sum = 0;
    for(char c :str)
    {
        if(isalpha(c)) break;
        bits.insert(bits.begin(),c - '0');
    }
    for(int i = 0;i < bits.size();i++)
    {
        sum += pow(2,i) * bits[i] ;
    }
    return sum;
}

void Get_entry(std::string str)
{
    std::cout << "please chose wht you want to confert from " << std::endl;
    std::cout << "decimal to binary chose [1] " << std::endl;
    std::cout << "binary to decimal chose [2] " << std::endl;
    int chose;
    std::string entry;
    std::cin >> chose;
    if(chose == 1)
    {
    std::cout << "please enter decimal to convert: " ;
    std::cin >> entry;
    for(auto c:To_Binary(entry))
    {
            std::cout << c << "" ;
    }
    }
    else if(chose == 2)
    {
    std::cout << "please enter binary to convert: " ;
    std::cin >> entry;
    std::cout << To_Decimal(entry);
    }

}
int main()
{
    std::string ent;
    std::cin >>ent;
    for(auto c:ToBinary(ent))
    {
            std::cout << c << "" ;
    }
//         std::string ent;
// std::cin >> ent;
std::cout << To_Decimal(ent);
    return 0;
}