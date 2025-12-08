#include <iostream>

namespace One_Clan
{
    int func1(int& a,int b)
    {
        a = 4;
        return a + b;
    }
    void printf(int a , int b)
    {
        std::cout << func1(a ,b) <<std::endl;
    }
}
int main()
{
int d = 7;
One_Clan::printf(10,5);
std::cout << One_Clan::func1(d,3) << std::endl;
std::cout << d << std::endl;

}