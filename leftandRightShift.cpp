#include <iostream>
#include "binarydec.cpp"

int main()
{
    std::cout << To_Binary_dir("9") << std::endl; // 1001
    std::cout << To_Decimal("100100") << std::endl; // 36 after do << left shift
    std::cout << (9 << 2) << std::endl;
    std::cout << (36 >> 2) << std::endl;

    return 0;
}