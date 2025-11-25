#include <iostream>

std::string longestAlternatingSubstring(std::string digits) { 
    std::string temp ,result;
    for(int i =0; i < digits.length() -1;i++)
    {
        if(i = 0)
        temp = digits[0]; //12
        // if((digits[i+1] - '0' % 2 == 0) & ( temp[temp.size()-1] -'0' % 2 == 1))
        // {
        //         temp += digits[i+1];
        // }
        if((digits[i+1] -0 %2) != (temp[temp.size()-1] -'0' % 2))
        {
                temp += digits[i+1];
        }
        else
        {
            if(temp.size() > result.size())
            result = temp;
            temp = digits[i+1];
        }
    }
    return result;
}

int main()
{
    std::cout << longestAlternatingSubstring("1215787220351146") << std::endl;
    return 0; 
}