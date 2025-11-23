#include <iostream>
#include <string>
#include <climits>

std::string multiply(std::string a, std::string b) {
std::string result;
   bigint num = stoi(a) * stoi(b);
  result = std::to_string(num);
  return result;
}

// int main()
// {

// std::cout << multiply("98765","56894"); //5619135910

// }