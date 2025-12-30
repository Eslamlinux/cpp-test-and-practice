#include <stdio.h>

auto main()
{
    int a = 10;
    char c = 'b';
    void* ptr = &a;
    ptr = &c;


    printf("ptr: %c ",ptr);
}