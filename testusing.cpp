//test using a type alias t
#include <iostream>
using num = int;
using integer = int;
using str =std::string;
using v = void;
using bo = bool;
using ch = char;
using fl = float ;
using dou = double;


v cc ()
{
    std::cout << "from cc\n";
}
int main()
{
num a = 5;
num b {10};
integer i {111};
str s = " eslam ";
bo bb = true;
ch c = 'c';
fl f = 1.2;
dou d = 2.20;
std::cout << a + b <<std::endl;
std::cout << s << std::endl;
if(bb)
cc();
std::cout << c << std::endl;
std::cout << f << std::endl;
std::cout << d << std::endl;
std::cout << i << std::endl;


    return 0;
}