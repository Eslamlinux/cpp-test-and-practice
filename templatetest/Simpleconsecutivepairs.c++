/*
 * Simpleconsecutivepairs.c++
 *
 *  Created on: Nov 7, 2025
 *      Author: eslam
 */
/*
In this Kata your task will be to return the count of pairs that have consecutive numbers as follows:

pairs([1,2,5,8,-4,-3,7,6,5]) = 3
The pairs are selected as follows [(1,2),(5,8),(-4,-3),(7,6),5]
--the first pair is (1,2) and the numbers in the pair are consecutive; Count = 1
--the second pair is (5,8) and are not consecutive
--the third pair is (-4,-3), consecutive. Count = 2
--the fourth pair is (7,6), also consecutive. Count = 3. 
--the last digit has no pair, so we ignore.

*/
#include <iostream>
#include <vector>

int pairs(std::vector<int>arr){
  std::vector<std::pair<int,int>> pai;
	int arrsize = 0;
	arr.size() %2 == 0?arrsize = arr.size():arrsize = arr.size()-1;
	return arrsize;
};

int main()
{
std::vector<int> vec = {1,2,5,8,-4,-3,7,6,5};//=3
std::cout << pairs(vec) << std::endl;
return 0;
}


