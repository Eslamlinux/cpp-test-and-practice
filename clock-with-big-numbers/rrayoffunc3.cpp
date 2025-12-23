#include <iostream>

int sum(int a,int b)
{
    return a + b;
}

int def(int a,int b)
{
    return a / b;
}


int (*ptrtosum)(int,int) = sum ;
int (*ptrtodef)(int,int) = def ;

int main()
{

    int res = ptrtosum(5,5);
    std::cout << res <<std::endl; 
    res = ptrtodef(20,5);
    std::cout << res <<std::endl; 

}