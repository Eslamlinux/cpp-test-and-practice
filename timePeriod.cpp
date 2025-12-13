//time Period
#include <iostream>
#include <sstream>
bool timePeriod(std::string date1,std::string date2) 
{ 
int t;
std::string ts1;
std::string ts2;
std::stringstream ss(date1);
std::stringstream ss2(date2);
while (ss >> t)
{
    ts1 += std::to_string(abs(t));
}
while (ss2 >> t)
{
    ts2 += std::to_string(abs(t));
}

// std::cout << ts1 << " " << ts2 << std::endl;
return std::stoi(ts1) < std::stoi(ts2);
}

int main()
{
    std::cout << timePeriod("2017-08-02T00:00:00","2017-08-08T00:00:00") <<std::endl;
}