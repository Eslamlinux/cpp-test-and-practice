#include<stdio.h>

void main()
{
    int a = 10;
    //normal condition == greater
    printf("normal condition a = 10\n");
    if(a >= 10)
    printf("greater\n");
    else if(a < 10)
    printf("lees\n");

    //conditional comilation befor macro == lees becuase var not yet set and it work only with define macros هذا لان البرنامج في حالة المعالجة المسبقة لا يري المتغيرات لانه لم تحجز بعد
    printf("conditional comilation befor macro a = 10\n");
    #if(a >= 10)
        printf("greater\n");
    #elif (a <10)
        printf("lees\n");
    #endif
    //conditional comilation after macro
    printf("conditional comilation after macro a = 10\n");
    #define a 10
    #if(a >= 10)
        printf("greater\n");
    #elif (a <10)
        printf("lees\n");

    #endif

}