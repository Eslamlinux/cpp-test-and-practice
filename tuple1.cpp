#include <tuple>
#include <iostream>

std::tuple<std::string, int, int> customer(std::string name,int age,int id){
    std::tuple<std::string, int, int> result;
    result = std::make_tuple(name,age,id);
    return result;
}

int main()
{
    std::tuple<int,std::string ,char,std::string> t1;
    t1 = std::make_tuple(100 ,"hello" ,'E',"slam");
    

    int a = std::get<0>(t1);
    std::string b = std::get<1>(t1);
    char c = std::get<2>(t1);
    auto d = std::get<3>(t1);

    std::cout << a << " " << b << " " << c << "" << d << "\n";


    std::string f = std::get<0>(customer("Eslam",34,213));
    int i = std::get<1>(customer("Eslam",34,213));
    int s = std::get<2>(customer("Eslam",34,213));
    std::cout << f << " " << i << " " << s << "\n";


    std::cout << std::get<std::string>(customer("mohamed",24,214)) << " ";
    std::cout << std::get<1>(customer("mohamed",24,214)) << " ";
    std::cout << std::get<2>(customer("mohamed",24,214)) << " ";
    std::cout << std::get<std::string>(customer("mohamed",24,214)) << " ";
      
    return 0;
}