// test time and date in ctim lib
#include <iostream>
#include <ctime>
#include <tuple>

std::tuple<float,char,float,char,float> inTime()
{
    time_t t = time(nullptr);
    struct tm* ptime = localtime(&t);
    return {ptime->tm_hour,':',ptime->tm_min , ':', ptime->tm_sec};
}

int main()
{

    auto [hour,c1, mine,c2,seco] = inTime();
    std::cout << hour << c1 << mine << c2 << seco;

}