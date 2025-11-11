#include <iostream>
// #include <string>
// #include <algorithm>
std::string input_type(std::string value) { 
    if(std::isalpha(value[0])) {
        return "string";
    } 
    else if(std::isdigit(value[0])) {
        if(value.find('.') != std::string::npos)
        return "double";
        return "integer";
    } 
    return "unknown";
}

int main()
{
    // std::string str = "Hello, World!";
    // std::string str = "12345";
    std::string str = "12.345";
    std::cout << input_type(str) << std::endl;
    return 0;
}