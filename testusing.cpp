//test using a type alias t
#include <iostream>


int main()
{
using num = int;


num a = 5;
num b {10};

std::cout << a + b <<std::endl;


    return 0;
}