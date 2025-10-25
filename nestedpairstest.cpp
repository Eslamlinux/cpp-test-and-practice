#include <iostream>
#include <utility>

int main()
{

    std::pair<std::string ,std::pair<int,std::pair<int,double>>> nestedpair;
    nestedpair.first = "Eslam";
    nestedpair.second.first = 0123550;
    nestedpair.second.second.first = 34;
    nestedpair.second.second.second = 173.5;

    
    return 0;
}