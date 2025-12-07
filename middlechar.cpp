#include <iostream>
using namespace std;

string middle_char(string word) { 
    if(word.length() % 2 == 0)
    {
        return word[(word.length() /2)-1] + word[word.length() /2];
    }
    return word[word.length()/2];
}

int main()
{
    std::cout << middle_char
}