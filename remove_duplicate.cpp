#include <iostream>
#include <unordered_set>
#include <set>
#include <vector>
std::vector<int> remove_duplicate(std::vector<int> arr) { 
std::set<int> toset(arr.begin(),arr.end());
return {toset.begin(),toset.end()};

// std::set<int> tosets(arr.begin(),arr.end());
// std::vector<int> result(tosets.begin(),tosets.end());
// return result;

// std::unordered_set<int> toset(arr.begin(),arr.end());
// return {toset.begin(),toset.end()};
}
int main()
{
    for(auto c : remove_duplicate({7,8,9,7}))
    {
        std::cout << c << " ";
    }
    std::cout << std::endl;
        for(auto c : remove_duplicate({7,8,9,7}))
    {
        std::cout << c << " ";
    }
}