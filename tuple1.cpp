#include <tuple>
#include <iostream>



int main()
{
    std::tuple<int,std::string ,char,std::string> t1;
    t1 = std::make_tuple(100 ,"hello" ,'E',"slam");
    

    int a = std::get<0>(t1);
    std::string b = std::get<1>(t1);
    char c = std::get<2>(t1);
    auto d = std::get<3>(t1);

    std::cout << a << " " << b << " " << c << "" << d << "\n";

    return 0;
}