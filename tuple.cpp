#include <iostream>
#include <tuple>

std::tuple<int ,std::string ,double> person()
{
    return std::make_tuple(33,"eslam",71.5);
}

int main()
{

    return 0;
}