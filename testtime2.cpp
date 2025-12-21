#include <iostream>
#include <ctime>
#include <string>
std::string Time_Now()
{
    time_t thesec = time(nullptr);
    auto alltime = ctime(&thesec);
    struct tm *thetime = localtime(&thesec);
    std::string time_H_M_s;
    time_H_M_s +=  thetime->tm_hour + ":" + thetime->tm_min + ":" + thetime->tm_sec;
    return time_H_M_s;
}

int main()
{
    std::cout << Time_Now() << std::endl;

    return 0;
}