//test using a type alias t
#include <iostream>
#include <vector>
#include <map>
// #include <utility>
#include <tuple>
using num = int;
using integer = int;
using str =std::string;
using v = void;
using bo = bool;
using ch = char;
using fl = float ;
using dou = double;

template<typename N>
using Tvec= std::vector<N>;


namespace ddaall
{
    int dal()
    {
        return 557788;
    }
}
v cc ()
{
    std::cout << "from cc\n";
}
int main()
{
num a = 5;
num b {10};
integer i {111};
str s = " eslam ";
bo bb = true;
ch c = 'c';
fl f = 1.2;
dou d = 2.20;
std::cout << a + b <<std::endl;
std::cout << s << std::endl;
if(bb)
cc();
std::cout << c << std::endl;
std::cout << f << std::endl;
std::cout << d << std::endl;
std::cout << i << std::endl;

using vec = std::vector<int>;
vec v1;

v1.push_back(10);

std::cout << v1[0] <<std::endl;

using map_vec_pair = std::map<std::string, std::vector<std::pair<int, double>>>;

map_vec_pair mvp;

Tvec<int> ttt;
Tvec<std::string>sss;

ttt.push_back(555);
sss.push_back("hhhh");

using namespace ddaall;
std::cout << dal() <<std::endl;

using std::cout;
using std::endl;
cout << endl;
cout << dal();
cout << endl;

#define u using
u g = int;
g H = 5;
cout << H << endl; 

u tap = std::tuple<int ,std::string,float> ;
tap tp1(10,"tuple",1.5);

    return 0;
}