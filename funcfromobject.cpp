#include <iostream>

class whoami
{
    public:
    int i = 0;
};

whoami a(whoami a)
{
    return a ;
}
int main()
{
    whoami  who_a;

    a(who_a);

    return 0;
}