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
int success1 = std::sscanf()

}

int main()
{
    std::cout << timePeriod("2017-08-02T00:00:00","2017-08-08T00:00:00") <<std::endl;
}