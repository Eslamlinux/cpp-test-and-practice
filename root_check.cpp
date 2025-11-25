#include <iostream>
#include <cmath>


int root_check(float sqr,int num) { 
return sqrt(sqr) == num?sqr:0;
}

int main()
{

    std::cout << root_check(25,5);
    std::cout << "\n";
    std::cout << sqrt(25);
    return 0;
}