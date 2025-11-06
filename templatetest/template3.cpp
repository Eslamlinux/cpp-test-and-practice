#include <iostream>
#include <cstdlib>
#include <iterator>

template<class a,class b>
class hello
{
b bb;
public:
a aa=10;
a ab=2.5;
char* end;
b setb(std::string toset){bb = toset;return bb;}
a bbb = std::strtol(bb.c_str(),&end,10) + aa;

};
int main()
{
hello<double,std::string>obj;
obj.setb("11");
std::cout<< obj.aa + obj.ab << std::endl;
std::cout<< obj.bbb << std::endl;

return 0;
}