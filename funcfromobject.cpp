#include <iostream>

class whoami
{
    public:
    int i = 0;
    int t = 0;
    whoami(int ia, int it)
    {
        i = ia;
        t = it;
    }
};

int a(whoami a)
{
    return a ;
}
int main()
{
    whoami  who_a;

    a(who_a);

    return 0;
}