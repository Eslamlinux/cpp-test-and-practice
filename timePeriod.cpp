//time Period
#include <iostream>
#include <ctime>
#include <cstdio>
#include <string>

bool timePeriod(std::string date1,std::string date2) 
{ 
std::tm tm1{};
std::tm tm2{};

const char* format = "%d-%d-%d*%c%d:%d:%d";
int success1 = std::sscanf(date1.c_str(),format,&tm1.tm_year, &tm1.tm_mon, &tm1.tm_mday, &tm1.tm_hour ,&tm1.tm_min, &tm1.tm_sec);
int success2 = std::sscanf(date2.c_str(),format,&tm2.tm_year, &tm2.tm_mon, &tm2.tm_mday, &tm2.tm_hour, &tm2.tm_min, &tm2.tm_sec);

if(success1 != 6 || success2 != 6)
return false;

tm1.tm_year -= 1900;
tm1.tm_mon -= 1;
tm2.tm_year -= 1900;
tm2.tm_mon -= 1;

std::time_t t1 = std::mktime(&tm1);
std::time_t t2 = std::mktime(&tm2);
if(t1 == (std::time_t) -1 || t2 == (std::time_t) -1)
return false;


return t1 < t2;

}

int main()
{
    std::cout << timePeriod("2017-08-02T00:00:00","2017-08-08T00:00:00") <<std::endl;
    std::cout << timePeriod("2022-01-02T00:00:00","2022-01-12T00:00:00") <<std::endl;
}