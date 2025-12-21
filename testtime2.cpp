#include <iostream>
#include <ctime>
#include <string>
std::string Time_Now()
{
    time_t thesec = time(nullptr);
    auto alltime = ctime(&thesec);
}

int main()
{

    return 0;
}