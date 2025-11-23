#include <iostream>
#include <variant>
#include <string>

std::variant<std::string,char, int,double> func(std::string str)
{
    if(str == "st")
    return  "hello this is string return";
    else if(str == "in")
    return 123456;
    else if(str == "fl")
    return 1.22;
    else if(str == "do")
    return 1.23456;
    else return 1;


    // return str == "st" ? "hello this is string return" :
    //        str == "in" ? 123456 :
    //        str == "fl" ? 1.4 : 1.23456 ;
}

int main()
{
    // std::variant<std::string,int> v1;
    // v1 = "hello";
    // v1 = 5;
    // if(std::get_if<std::string>(&v1))
    // std::cout << std::get<std::string>(v1) << std::endl;
    // else
    // std::cout << std::get<int>(v1) << std::endl;

        std::cout<< std::get<std::string>(func("st")) <<std::endl;
        std::cout<< std::get<int>(func("in")) <<std::endl;
        std::cout<< std::get<double>(func("fl")) <<std::endl;
        std::cout<< std::get<double>(func("do")) <<std::endl;
    return 0;
}