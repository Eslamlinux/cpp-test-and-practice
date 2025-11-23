#include <iostream>
#include <variant>
#include <string>

std::variant<std::string,char, int,double,float> func(std::string str)
{
    if(str == "st")
    return  "hello this is string return\n";
    else if(str == "in")
    return 123456;
    else if(str == "fl")
    return 1.22;
    else
    return 1.23456;


    // return str == "st" ? "hello this is string return" :
    //        str == "in" ? 123456 :
    //        str == "fl" ? 1.4 : 1.23456 ;
}

int main()
{
    std::variant<std::string,int> v1;
    v1 = "hello";
    v1 = 5;
    if(std::get_if<std::string>(&v1))
    std::cout << std::get<std::string>(v1) << std::endl;
    else
    std::cout << std::get<int>(v1) << std::endl;

    return 0;
}