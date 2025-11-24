#include <iostream>

union sam
{
int passcode;
int num;
std::string str;
char c;
};

int main()
{
    sam fir;
    fir.c = 'e';
    std::cout << fir.c;


    return 0;
}