#include <iostream>
#include <set>
#include <vector>
std::vector<int> remove_duplicate(std::vector<int> arr) { 
std::set<int> tosets(arr.begin(),arr.end());
std::vector<int> result(tosets.begin(),tosets.end());
return result;
}
int main()
{
    for(auto c : remove_duplicate({7, 8, 9, 7}))
    {
        std::cout << c << " ";
    }
}