#include <iostream>
#include <variant>

int main()
{
    std::variant<std::string,int> v1;
    v1 = "hello";

    std::cout << std::get_if<std::string>(v1) << std::endl;

    return 0;
}