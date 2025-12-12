//add_five to array

#include <iostream>
#include <vector>
std::vector<std::string> add_five(std::vector<std::string> arr) { 
for(auto& c:arr)
{
    c += "5";
}
return arr;
}
