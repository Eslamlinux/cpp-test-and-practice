#include <stdio.h>
#include <string.h> // for strlen()

void main()
{
    char str[] = "string1";
    char str2[] = " string2";
    int len = strlen(str);

    printf("string 1 length = %d\n",len);

    strcat(str,str2);
    printf("%s\n",str);
    printf("%s\n",str2);
    printf("string 1 & 2 length after concat: %d\n",strlen(str));


}