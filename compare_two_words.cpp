//compare_two_words

#include <iostream>
bool compare_two_words(std::string s1,std::string s2) { 
return s1[s1.size()-1] == s2[s2.size() -1];
}

int main()
{
std::cout << compare_two_words("abc","abc") <<std::endl;

}