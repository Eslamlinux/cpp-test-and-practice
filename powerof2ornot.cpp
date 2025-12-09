#include <iostream>

std::string powerof2(int num) { 
return num % 2 == 0? std::to_string(num) + " is power of 2" : std::to_string(num) + " is not a power of 2";
}

int main()
{

std::cout<< powerof2(8) << std::endl;

}