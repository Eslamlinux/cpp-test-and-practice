//test using a type alias t
#include <iostream>


int main()
{
using num = int;
using str =std::string;

num a = 5;
num b {10};
str s = " eslam ";
std::cout << a + b <<std::endl;
std::cout << s << std::endl;

    return 0;
}