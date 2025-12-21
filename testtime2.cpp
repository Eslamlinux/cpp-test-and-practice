#include <iostream>
#include <ctime>
#include <string>
std::string Time_Now()
{
    time_t thesec = time(nullptr);
    auto alltime = ctime(&thesec);
    struct tm *thetime = &thesec;

    return alltime;
}

int main()
{
    std::cout << Time_Now() << std::endl;

    return 0;
}