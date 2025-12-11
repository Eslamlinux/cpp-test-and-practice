//longestClimbSegment
#include <iostream>
#include <vector>

int longestClimbSegment(std::vector<int> heights) { 
int result =0;
int temp = 1;
for(int i =0; i < heights.size(); i++)
{
if(heights[i] +1 == heights[i+1])
temp++;
else 
if(temp > result)
{
    result = temp;
    temp = 0;
}
}
return result ;
}

int main()
{
std::cout << longestClimbSegment({1, 2, 3, 2, 3, 4, 1}) <<std::endl;
std::cout << longestClimbSegment({5, 4, 3}) <<std::endl;
std::cout << longestClimbSegment({10, 11, 12, 13}) <<std::endl; 
std::cout << longestClimbSegment({1,1,1}) <<std::endl;
}