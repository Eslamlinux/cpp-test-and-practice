#include <iostream>

std::string middle_char(std::string word) { 
    if(word.length() % 2 == 0)
    {
        return word[(word.length() /2)-1] + word[word.length() /2];
    }
    return word[word.length()/2];
}

int main()
{
    std::cout << middle_char("test") << std::endl;
}