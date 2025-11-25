#include <iostream>

float area_of_rhombus(float q,float p) { 
float result = (q * p) / 2;
return result;
}


int main()
{
std::cout << area_of_rhombus(9.2,8.6) << std::endl;
    return 0;
}