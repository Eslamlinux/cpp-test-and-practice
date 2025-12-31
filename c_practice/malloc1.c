#include <stdio.h>
#include <stdlib.h>


void main()
{
    int* array;
    array =(int *)malloc(2*sizeof(int));
    array[0] = 10;
    array[1]=5;
    printf("%d %d\n",array[0],array[1]);

    int* arrayc;
    arrayc = (int*)calloc(2,sizeof(int));
    printf("try to print empty arrary = %d\n",arrayc[0]);
}


