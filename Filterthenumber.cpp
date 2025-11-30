//Filter the number
#include <string>
#include <iostream>


long long filter_string(const std::string &value)
{
    return stoi(value); // complete this function :)
}

int main()
{
    std::cout << filter_string("a1b2c3") << std::endl;
    return 0;
}