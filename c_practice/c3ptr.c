#include <stdio.h>

int main()
{
    int a = 10;
    char c = 'b';
    void* ptr = &a;
    ptr = &c;


    printf("ptr: %c ",ptr);
}