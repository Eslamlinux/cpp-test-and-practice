#include <iostream>
#include <vector>
#include <functional> 

std::string p1()
{
    return "p1\n";
}
std::string p2(std::string str)
{
    return "p2  hello " + str +"\n";
}

std::string p3()
{
    return "p3\n";
}


std::string p4(int i)
{
    return "p3\n";
}

std::string (* aarfun[])() ={p1,p3};

std::vector<std::function<std::string()>> func ={p1,p3};

std::vector<std::function<void()>> func_def_type ;

int main()
{
    // const std::string tr = aarfun[0];
    // std::cout << aarfun[0]  << std::endl;
    
    std::cout << func[0]()  << std::endl;
    std::cout << func[0]()  << std::endl;



    return 0;
}