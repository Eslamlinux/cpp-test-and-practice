#include <iostream>
#include <ctime>
#include <string>
#include <vector>
std::string Time_Now()
{
    time_t thesec = time(nullptr);
    auto alltime = ctime(&thesec);
    struct tm *thetime = localtime(&thesec);
    std::string time_H_M_s;
    time_H_M_s +=  std::to_string(thetime->tm_hour) + ":" + std::to_string(thetime->tm_min) + ":" + std::to_string(thetime->tm_sec);
    return time_H_M_s;
}

struct BigNumber
{
    std::vector<std::string> zero()
    {
        std::vector<std::string> z;
        z[0] = "****";
        z[1] = "*  *";
        z[2] = "*  *";
        z[3] = "*  *";
        z[4] = "****";
        return z;
    }
};
int main()
{
    // while(true)
    // {
    //     std::cout << Time_Now() << std::endl;
    //     system("clear");
    // }
    BigNumber z;
        std::cout << z.zero() << " ";
        std::cout << z.zero() << std::endl;

    return 0;
}