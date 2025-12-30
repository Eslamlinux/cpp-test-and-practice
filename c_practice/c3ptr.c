#include <stdio.h>

void cout(int num)
{
    printf("\n%d ",num);
}

int main()
{
//     int a = 10;
//     char c = 'b';
//     void* ptr ;
//     ptr = &a;

// int* d;
// printf("ptr: %d ",d);

void (* ptr)(int) = &cout;
cout(10);
ptr(5);


}