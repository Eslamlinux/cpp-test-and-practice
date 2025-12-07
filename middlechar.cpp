#include <iostream>

std::string middle_char(std::string word) { 
    std::string result ="";
    if(word.length() % 2 == 0)
    {
        result = word[(word.length() /2)-1] + word[word.length() /2];
    }
    else
    {
        result = word[word.length()/2];
    }
    return result;
}

int main()
{
    std::cout << middle_char("test") << std::endl;
}