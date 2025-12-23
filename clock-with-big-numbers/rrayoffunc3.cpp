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

int main()
{

}