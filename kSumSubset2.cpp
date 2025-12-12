// kSumSubset 2

#include <iostream>
#include <vector>
bool kSumSubset(std::vector<int> numArray,int k) { 
    for(int a=0 ;a < numArray.size();a++)
    {
        int sum = 0;
        for(int b = a+1; b < numArray.size(); b++)
        {
            if(numArray[b] > k || sum > k)
            break;
            if(a != b)
            {
                sum += numArray[b];
            }
            if(sum == k)
            return true;
            // sum =numArray[a];
            // if(sum == k)
            // return true;

        }
        for(int b = a+1; b < numArray.size(); b++)
        {
            if(numArray[b] > k || sum > k)
            break;
            if(a != b)
            {
                sum += numArray[a] +numArray[b];
            }
            if(sum == k)
            return true;
            // sum =numArray[a];
            // if(sum == k)
            // return true;

        }

    }
    return false;
}
int main()
{
    // std::cout << kSumSubset({7, 3, 2, 5, 8},14) << std::endl;
    std::cout << kSumSubset({7, 3, 2, 5, 8},14) << std::endl;
    std::cout << kSumSubset({72, 4, 6, 8},11) << std::endl;
    std::cout << kSumSubset({7, 5, 3, 1},4) << std::endl;
    std::cout << kSumSubset({14, 8, 12, 9},21) << std::endl;
}