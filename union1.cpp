#include <iostream>

union sam
{
private:
int passcode {123};
public:
int num {1};
std::string str{"hello"};

};
int main()
{

    return 0;
}