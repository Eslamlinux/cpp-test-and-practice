#include <stdio.h>

typedef struct
{
char string[6];
int num ;

}stdc;
int main()
{
	stdc str;

	str.string[0] = 'e';
	str.string[1] = 's';
	str.string[2] = 'l';
	str.string[3] = 'a';
	str.string[4] = 'm';
	printf("string = %c \n", str.string[0]);
	printf("string = %c \n", str.string[1]);
	printf("string = %c \n", str.string[2]);
	printf("string = %c \n", str.string[3]);
	printf("string = %c \n", str.string[4]);
}
