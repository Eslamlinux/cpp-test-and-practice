//test using a type alias t
#include <iostream>
using num = int;
using str =std::string;
using v = void;
using bo = bool;
using c = char;
using fl = float ;
using dou = double;


int main()
{
num a = 5;
num b {10};
str s = " eslam ";
std::cout << a + b <<std::endl;
std::cout << s << std::endl;

    return 0;
}