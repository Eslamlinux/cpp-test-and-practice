#include <iostream>


template<class a,class b>
class hello
{
b bb;
public:
a aa=10;
a ab=2.5;
b setb(std::string toset){bb = toset;}
a bbb = stoi(bb) + aa;

};
int main()
{
hello<double,std::string>obj;
obj.setb("11");
std::cout<< obj.aa + obj.ab << std::endl;
std::cout<< obj.bbb << std::endl;

return 0;
}