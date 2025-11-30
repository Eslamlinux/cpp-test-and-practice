//Filter the number
#include <string>
#include <iostream>


long long filter_string(const std::string &value)
{
    std::string temp;
    for(auto c : value)
    {
       if(isdigit(c))
       temp +=c;
    }
    return stoi(temp);
}

int main()
{
    std::cout << filter_string("a1b2c3") << std::endl;
    return 0;
}