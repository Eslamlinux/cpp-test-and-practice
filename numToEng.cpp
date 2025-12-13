//num To Eng
#include <iostream>

std::string numToEng(int n) { 
    std::string num = std::to_string(n);
    std::string result;
    for(char c:num)
    {
        switch(c -'0')
        {
            case 0:
            result += '0';
            break;
            case 1:
            result += '1';
            break;
            case 2:
            result += '2';
            break;
            case 3:
            result += '3';
            break;
            case 4:
            result += '4';
            break;
            
        }
    }
}

int main()
{
    std::cout << numToEng(798) << std::endl;
}