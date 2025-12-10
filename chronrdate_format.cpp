#include <iostream>
#include <iomanip>
#include <sstream>
#include <ctime>
#include <string>

std::string date_format(std::string date) { 
std::tm t = {}; 
    std::istringstream ss(date);

    int year = t.tm_year + 1900;
    int month = t.tm_mon + 1;
    int day = t.tm_mday;
    
    std::string y_str = std::to_string(year);
    std::string m_str = std::to_string(month);
    std::string d_str = std::to_string(day);
    
    std::string format1 = y_str + "/" + m_str + "/" + d_str;
    std::string format2 = y_str + "-" + (month < 10 ? "0" : "") + m_str + "-" + (day < 10 ? "0" : "") + d_str;
    std::string format3 = m_str + "/" + d_str + "/" + y_str;
    
    return format1 + " | " + format2 + " | " + format3;
}
int main()
{
    std::cout << date_format("2020/1/1") <<std::endl;

    return 0;
}