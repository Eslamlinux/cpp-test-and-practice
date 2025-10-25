#include <iostream>
#include <utility>

int main()
{

std::pair<int, std::pair<int,
std::pair<int, std::pair<int,
std::pair<int, std::pair<int,
std::pair<int, std::pair<int,
std::pair<int, int>>>>>>>>> manypairs;

manypairs.first = 1;
manypairs.second.first = 2;
manypairs.second.second.first = 3;
manypairs.second.second.second.first = 4;
manypairs.second.second.second.second.first = 5;
manypairs.second.second.second.second.second.first = 6;
manypairs.second.second.second.second.second.second.first = 7;
manypairs.second.second.second.second.second.second.second.first = 8; 
manypairs.second.second.second.second.second.second.second.second.first = 9; 
manypairs.second.second.second.second.second.second.second.second.second = 10; 
for(auto pair_element : {manypairs.first,
                         manypairs.second.first,
                         manypairs.second.second.first,
                         manypairs.second.second.second.first,
                         manypairs.second.second.second.second.first,
                         manypairs.second.second.second.second.second.first,
                         manypairs.second.second.second.second.second.second.first,
                         manypairs.second.second.second.second.second.second.second.first,
                         manypairs.second.second.second.second.second.second.second.second.first,
                         manypairs.second.second.second.second.second.second.second.second.second})
                         {
    std::cout << pair_element << std::endl;
                         }

    return 0;
}