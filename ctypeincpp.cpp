#include <iostream>

#define Error 1


int main()
{
    #ifdef __linux__
    std::cout << "linux on\n";
    
    #elif defined(_WIN32) || defined(_WIN64)
    std::cout << "win on\n";
    
    #else
    std::cout << "othe sys\n";

    #endif

    // #ifndef Error
    // #define Error 1
    // #endif

    #if Error == 1
    std::cout << "error\n";
    #else
    std::cout << "Status: Healthy\n";
    #endif


    return 0;
}