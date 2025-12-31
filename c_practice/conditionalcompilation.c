#include<stdio.h>

/*
#if(condtion)
{
body
}
#ifel(condtion)
{
body
}
#else

/////////////
#ifdev
#else
#endif

/////////////
#ifndev
#else
#endif

////////// examp most use for ///////

#ifdef _WIN32
    // كود خاص بنظام ويندوز فقط
#elif __linux__
    // كود خاص بنظام لينكس فقط
#endif





*/

void main()
{
    int a = 10;
    //normal condition == greater
    printf("normal condition a = 10\n");
    if(a >= 10)
    printf("greater\n");
    else if(a < 10)
    printf("lees\n");
    else
    //nothing

    //conditional comilation befor macro == lees becuase var not yet set and it work only with define macros هذا لان البرنامج في حالة المعالجة المسبقة لا يري المتغيرات لانه لم تحجز بعد
    printf("conditional comilation befor macro a = 10\n");
    #if(a >= 10)
        printf("greater\n");
    #elif (a <10)
        printf("lees\n");
    #else
    //nothing
    #endif
    //conditional comilation after macro
    printf("conditional comilation after macro a = 10\n");
    #define a 10
    #if(a >= 10)
        printf("greater\n");
    #elif (a <10)
        printf("lees\n");
    #else
    //nothing
    #endif

    typedef int integer;

    integer index = 100;
    printf("integer = %d\n",index);
    
    #ifdef(index < 100)
    {

    }

}