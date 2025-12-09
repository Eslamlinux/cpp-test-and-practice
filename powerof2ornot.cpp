#include <iostream>

std::string powerof2(int num) { 
// wrong ansower return num % 2 == 0? std::to_string(num) + " is power of 2" : std::to_string(num) + " is not a power of 2";
return num > 0 && (num & (num - 1)) == 0? std::to_string(num) + " is power of 2" : std::to_string(num) + " is not a power of 2";

}

int main()
{

std::cout<< powerof2(8) << std::endl;
std::cout<< powerof2(16) << std::endl;
std::cout<< powerof2(64) << std::endl;
std::cout<< powerof2(6) << std::endl;
std::cout<< powerof2(3) << std::endl;

}