//oct_to_dec
#include <iostream>

int oct_to_dec(int octal_number) { 
return (int) octal_number;
}


int main()
{
    std::cout << oct_to_dec(5252) <<std::endl; // 2730
    return 0;
}