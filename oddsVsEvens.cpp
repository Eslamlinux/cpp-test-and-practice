//odds Vs Evens & equal

#include <iostream>

std::string oddsVsEvens(int num) 
{ 
    int odd = 0 ,even = 0;
    for(auto c : std::to_string(num))
    {
        if(c % 2 == 0)
        even += c - '0';
        odd += c - '0';
    }
    
}

int main()
{
std::cout<< oddsVsEvens(54870) <<std::endl;

}