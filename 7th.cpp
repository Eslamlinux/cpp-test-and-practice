#include <iostream>

std::string convertToBase7(int num) { 
std::string result;
while(num >0)
{
    result += std::to_string(num % 7);
    num /= 7;
}
return result;
}

int main()
{

    
}