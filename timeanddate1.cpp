// test time and date in ctim lib
#include <iostream>
#include <ctime>
#include <tuple>

std::tuple<int,char,int,char,int> inTime()
{
    time_t t = time(nullptr);
    struct tm* ptime = localtime(&t);
    return {ptime->tm_hour,':',ptime->tm_min, ':', ptime->tm_sec};
}

int main()
{



}