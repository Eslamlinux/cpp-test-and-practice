#include <iostream>
#include <cmath>

int main()
{
double weight {7.7};
double savings {-5000};
std::cout << abs(savings) << std::endl;
std::cout << abs(weight) << std::endl;

std::cout << ceil(weight) << std::endl;
std::cout << floor(weight) << std::endl;

return 0;
}