#include <iostream>
#include <list>
#include <vector>
std::vector<int> remove_duplicate(std::vector<int> arr) { 
std::list<int> tolist(arr.begin(),arr.end());
std::vector<int> result(tolist.begin(),tolist.end());
return result;
}
int main()
{
    for(auto c : remove_duplicate({7, 8, 9, 7}))
    {
        std::cout << c << " ";
    }
}