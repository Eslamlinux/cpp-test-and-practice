#include <iostream>
#include <vector>

/*
nums = [1, 2, 3, 4, 5, 6, 7]
k = 3
المخرجات (Outputs)

[5,6,7,1,2,3,4]
*/

void reverse_array(std::vector<int>& arr, int start, int end) {
    while (start < end) {
        std::swap(arr[start], arr[end]);
        start++;
        end--;
    }
}
std::vector<int> rotate(std::vector<int> nums,int k) { 
//     std::vector<int>result(nums);
//     if(nums.size() > k)
//     {
//         for(int i = nums.size()-1; i >= nums.size()-k; i--)
//         {
//             result.insert(result.begin(), nums[i]);
//             result.erase(result.end()-1);
//         }
//     }
//     else
//         for(int i = nums.size() - (k%nums.size()); i < nums.size(); i++ )
//         {
//             result.insert(result.begin(),nums[i]);
//             result.erase(result.end()-1);
//         }
//     return result;

    int n = nums.size();
    if (n == 0 || k % n == 0) {
        return; 
    }
    int actual_k = k % n;
    reverse_array(nums, 0, n - actual_k - 1);
    reverse_array(nums, n - actual_k, n - 1);
    reverse_array(nums, 0, n - 1);
}


int main()
{

    for(auto c :rotate({1, 2, 3, 4, 5, 6, 7},3))
    // for(auto c :rotate({-1, -100, 3, 99},2))
    // for(auto c :rotate({1, 2, 3},4))
    // for(auto c :rotate({1, 2, 3, 4, 5},0))
    {
        std::cout << c << " " ;
    }

}