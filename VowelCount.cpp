/*
Description:
Return the number (count) of vowels in the given string.

We will consider a, e, i, o, u as vowels for this Kata (but not y).

The input string will only consist of lower case letters and/or spaces.
*/

#include <iostream>
#include <string>
#include <regex>

int getCount(const std::string& inputStr)
{
    //solve using regex
// std::regex vowelRegex("[aeiou]");
// return std::distance(std::sregex_iterator(inputStr.begin(), inputStr.end(), vowelRegex),
//                      std::sregex_iterator());
///////////////////////////////////////
//solve using count 
// std::string VowelStr("aeiou");
// size_t counter = 0;
//     for (char c : inputStr)
//     {
//         if (VowelStr.find(c) != std::string::npos)
//         {
//             counter++;
//         }
//     }
// return counter;
///////////////////////////////////////////

    
}

int main()
{

std::string testStr = "a hello world";
std::cout << "Number of vowels in \"" << testStr << "\": " << getCount(testStr) << std::endl;

    return 0;
}