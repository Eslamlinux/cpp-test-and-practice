/*
 Given an array of integers , Find the minimum sum which is obtained from summing each Two integers product .

Notes
Array/list will contain positives only .
Array/list will always have even size
Input >> Output Examples
minSum({5,4,2,3}) ==> return (22)
Explanation:
The minimum sum obtained from summing each two integers product ,  5*2 + 3*4 = 22
 */
#include <iostream>
#include <vector>

int minSum(const std::vector<int> &passed)
{
	int result = 0;
	std::vector<int> pass(passed);
	int mini =0, max=0;
	for(int i = 0 ;i < pass.size() /2;i++ )
	{
		mini = pass[i];
		max = pass[i];
		for(int t = i+1 ; t < pass.size();t++ )
		{
			if(pass[t] > max) max = pass[t];
			if(pass[t] < mini) mini = pass[t];
		}
		 result += (max * mini);
		for(int c = 0 ; c < pass.size();c++ )
		{
			if(pass[c] == max)  pass.erase(begin(pass)+c);
			if(pass[c] == mini) pass.erase(begin(pass)+c);
		}
	}
	return result;
}

int main()
{
	std::cout << minSum({5,4,2,3}); //5 2   4 3

	return 0;
}
