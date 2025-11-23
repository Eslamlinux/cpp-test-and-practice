#include <iostream>
#include <variant>



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