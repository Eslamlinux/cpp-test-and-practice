#include <iostream>

enum country{Egypt =1,Irag,Oman,jordan,qatar};

int main()
{
    country mideleast;
    int num;
    std::cout << "enter country number\n";
    std::cin >> num;
    mideleast = (country)num;
    if(mideleast = country::Egypt)
    std::cout << "wellcome to Egypt\n";
    if(mideleast = country::Irag)
    std::cout << "wellcome to Iraq\n";
    if(mideleast = country::Oman)
    std::cout << "wellcome to Oman\n";
    if(mideleast = country::qatar)
    std::cout << "wellcome to Qatar\n";
}