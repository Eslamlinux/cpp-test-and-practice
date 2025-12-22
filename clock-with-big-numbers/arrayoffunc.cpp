#include <iostream>
#include <vector>

std::string p1()
{
    return "p1\n";
}
std::string p2()
{
    return< "p2\n";
}

std::string p3()
{
    return "p3\n";
}

static std::vector<void> aarfun[] ={p1,p2,p3};

int main()
{

    return 0;
}