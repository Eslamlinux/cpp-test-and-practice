#include <iostream>
#include <string>

bool kSumSubset(std::string dateString) { 
    std::string temp = dateString[0] + dateString[1] +dateString[2] + dateString[3];
    if(stoi(temp) > 2021 || stoi(temp) < 1825)
    return false;
return true;
}

int main()
{
std::cout << kSumSubset("2099-08-02T00:00:00") <<std::endl;

}