#include <iostream>

void println(int num)
{
    std::cout << "\n" << num << "\n";
}
int main()
{

    void(*ptr)(int) =println;
    
    
    return 0;
}