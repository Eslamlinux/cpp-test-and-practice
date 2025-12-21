#include <iostream>
#include <ctime>
#include <string>
std::string Time_Now()
{
    time_t thesec = time(nullptr);
    auto alltime = ctime(&thesec);
    struct tm *thetime = localtime(&thesec);
    std::string time_H_M_s;
    time_H_M_s +=  std::to_string(thetime->tm_hour) + ":" + std::to_string(thetime->tm_min) + ":" + std::to_string(thetime->tm_sec);
    return time_H_M_s;
}

int main()
{
    while(true)
    {
        std::cout << Time_Now() << std::endl;
        system("clear");
    }

    return 0;
}