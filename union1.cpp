#include <iostream>

union sam
{
private:
int passcode {123};
public:
int num;
std::string str;
int get_code()
{
    return passcode;
}
char c;
};
int main()
{
    
    std::cout << sam::get_code();


    return 0;
}