#include <stdio.h>

void coutt(int num)
{
    printf("\n%d ",num);
}
void pstr(char* str)
{
    printf("%s",str);
}
int main()
{
//     int a = 10;
//     char c = 'b';
//     void* ptr ;
//     ptr = &a;

// int* d;
// printf("ptr: %d ",d);

void (* ptr)(int) = &coutt;
coutt(10);
ptr(5);

char name[] ="eslam";

printf("\nname: %s\n",name);

int pnum;
char st[] = "enter a number\n";

pstr("enter a number\n");

scanf("%d",&pnum);

ptr(pnum);

}