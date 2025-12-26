#include <iostream>
enum protocols{www,http,https,web,httpss};


int main()
{
    std::cout << "==========================================\n" ;
    std::cout << "enter the protocol\n" ;
    std::cout << "www [0] \t http [1] \t https [2] \nweb [3] \t httpss [4]" << std::endl ;
    std::cout << "==========================================\n" ;
    int entry ;
    protocols proto = (protocols)entry;
    std::cin >> entry;

    switch(proto)
    {
        case protocols::www:
        std::cout << "www.website.com\n";
        break;

    }



}