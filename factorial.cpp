#include <iostream>
#include <cmath>


int factorial(int number) { 
    return tgamma(number+1);
}


int main()
{
    std::cout<< factorial(10) << std::endl;
    std::cout<< factorial(5) << std::endl;
    std::cout<< factorial(2) << std::endl;
    std::cout<< factorial(4) << std::endl;
    return 0;
}