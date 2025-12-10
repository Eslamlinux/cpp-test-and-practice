#include <iostream>

std::string convertToBase7(int num) { 
std::string result ;
while(num >0)
{
    result = std::to_string(num % 7) + result;
    num /= 7;
}

return result;
}

int main()
{
std::cout << convertToBase7(100) <<std::endl;
std::cout << convertToBase7(-7) <<std::endl;
std::cout << convertToBase7(0) <<std::endl;
std::cout << convertToBase7(49) <<std::endl;

}