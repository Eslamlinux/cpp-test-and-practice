#include <iostream>
#include <tuple>

std::tuple<int ,std::string ,double> person()
{
    return std::make_tuple(33,"eslam",71.5);
}

int main()
{
    auto a = person();
    // std::cout << std::get<std::string>(a) << " " ;
    // std::cout << std::get<int>(a) << " ";
    // std::cout << std::get<double>(a) << " \n";

    auto [age, name, hight] = a;
std::cout << "Name: " << name << "\n";
std::cout << "Age: " << age << "\n";
std::cout << "Hight: " << hight << "\n";


    return 0;
}