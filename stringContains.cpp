// string Contains

#include <iostream>
#include <algorithm>

bool stringContains(std::string firstName,std::string contains)
{
size_t inor = std::find(firstName.begin(),firstName.end(),contains);
return inor != std::npos;
}
int main()
{
    std::cout << stringContains("Ahmed","A") <<std::endl;
}
