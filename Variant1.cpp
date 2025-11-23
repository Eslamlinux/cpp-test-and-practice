#include <iostream>
#include <variant>

std::variant<std::string, int,double,float> func(std::string str)
{
    return str == "s" ?"hello this is string return\n":str == "i"? 123456:str == "f"? 1.45:1.23456;
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