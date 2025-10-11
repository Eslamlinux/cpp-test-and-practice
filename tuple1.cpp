#include <tuple>
#include <iostream>



int main()
{
    std::tuple<int,std::string ,char> t1;
    t1 = std::make_tuple(100 ,"hello" ,'E');
    


    return 0;
}