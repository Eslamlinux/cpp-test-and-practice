#include <algorithm>
#include <iostream>
#include <limits>

int main()
{
std::cout << "short: " << std::numeric_limits<short>::min() << std::numeric_limits<short>::max() << std::endl;
std::cout <<"unsignd short: " << std::numeric_limits<unsigned short>::min() << std::numeric_limits<unsigned short>::max() <<std::endl;
std::cout << "long: " << std::numeric_limits<long>::min() << std::numeric_limits<long>::max() << std::endl;
std::cout << "int: " << std::numeric_limits<int>::min() << std::numeric_limits<int>::max() << std::endl;

std::cout << "float: " << std::numeric_limits<float>::min() << std::numeric_limits<float>::max() << std::endl;
std:: cout << "lowes float: " << std::numeric_limits<float>::lowest() << std::numeric_limits<float>::max() << std::endl;
std::cout << "double: " <<std::numeric_limits<double>::min() <<std::numeric_limits<double>::max() << std::endl;
}