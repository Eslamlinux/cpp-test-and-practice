#include <iostream>
#include <vector>

/*
nums = [1, 2, 3, 4, 5, 6, 7]
k = 3
المخرجات (Outputs)

[5,6,7,1,2,3,4]
*/
std::vector<int> rotate(std::vector<int> nums,int k) { 
    std::vector<int>result(nums);
    if(nums.size() > k)
    {
        for(int i = nums.size()-1; i >= nums.size()-k; i--)
        {
            result.insert(result.begin(), nums[i]);
            result.erase(result.end()-1);
        }
    }
    else
        for(int i = nums.size() - (k%nums.size()); i < nums.size(); i++ )
        {
            result.insert(result.begin(),nums[i]);
            result.erase(result.end()-1);
        }
    return result;
}

int main()
{

    // for(auto c :rotate({1, 2, 3, 4, 5, 6, 7},3))
    // for(auto c :rotate({-1, -100, 3, 99},2))
    // for(auto c :rotate({1, 2, 3},4))
    for(auto c :rotate({1, 2, 3, 4, 5},0))
    {
        std::cout << c << " " ;
    }

}