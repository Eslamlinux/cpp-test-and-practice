#include <iostream>
#include <vector>
#include <cmath>

bool is_primeary(int number)
{
    int the_end = sqrt(number);
    for(int i = 2; i <= the_end; i++)
    {
        if(number % i > 0)
        {
            return false;
        }
    }
    return true;
}

std::vector<int> getPrimesBetween(int a,int b) { 
    std::vector<int>result;
    for(int i = a; i < b;  i++)
    {
        if(is_primeary(i))
        {
            result.push_back(i);
        }
    }
    return result;
}


int main()
{

    for(auto c: getPrimesBetween(1,10))
    {
        std::cout << c << " ";
    }
    is_primeary(36);

    return 0;
}