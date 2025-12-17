#include <iostream>
#include <string>
using namespace std;

bool isNumber(string s) { 
    int cd =0 , ce = 0, cE = 0,c_ = 0, cp = 0;
    for (char c : s) {
                if(c == '+' && cp < 1) 
                {
                cp++;
                continue ;
                }
                else if(c == '.' && cd < 1)
                {
                    cd++;
                continue;
                } 
                else if(c == 'e' && ce < 1)
                {
                ce++;
                continue ;
                }
                else if(c == 'E' && cE < 1)
                {
                cE++;
                continue ;
                }
                else if(c == '-' & c_ < 1) 
                {
                c_++;
                continue ;
                }
       return !isdigit(c)? false : true;
    }   
return true;
}

int main()
{
    std::cout << isNumber("53.5e93") <<std::endl;
    std::cout << isNumber("53.5e93") <<std::endl;

    return 0;
}