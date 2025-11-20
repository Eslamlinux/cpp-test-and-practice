/*
 The input is a string str of digits. Cut the string into chunks (a chunk here is a substring of the initial string) of size sz (ignore the last chunk if its size is less than sz).

If the sum of a chunk's digits is divisible by 2, reverse that chunk; otherwise rotate it to the left by one position. Put together these modified chunks and return the result as a string.

If

sz is <= 0 or if str == "" return ""
sz is greater (>) than the length of str it is impossible to take a chunk of size sz hence return "".
Examples:
("123456987654", 6) --> "234561876549"
("123456987653", 6) --> "234561356789"
("66443875", 4) --> "44668753"
("66443875", 8) --> "64438756"
("664438769", 8) --> "67834466"
("123456779", 8) --> "23456771"
("", 8) --> ""
("123456779", 0) --> "" 
("563000655734469485", 4) --> "0365065073456944"
Example of a string rotated to the left by one position:
s = "123456" gives "234561".
*/
#include <string>
#include <iostream>
#include <algorithm>
class RevRot
{
public:
    static std::string revRot(const std::string &strng, unsigned int sz)
    {
		if(strng.length() < sz)
		return  "";
		if(strng == "")
		return "";
		int ChunkNum = strng.length() / sz;
		size_t To_Sum = 0;
		size_t Temp = 0;
		std::string Result = "";
		std::string sTemp = "";
		for(size_t i= 0; i < strng.length() - ChunkNum; i++)
		{
			if(temp != sz)
			{
				To_Sum += std::stoi(strng[i]);
				sTemp += strng[i];
				temp++;
			}
			else
			{
				temp = 0;
				if(To_Sum % 2 == 0)
				{
					Result += std::reverce(sTemp.begin(),sTemp.end());
					sTemp = "";
				}
				
			}
			
		}
		return Result;
	}
};

int main()
{
	RevRot a;
	
	std::cout << a.revRot("123456987654",6);
	return 0;
}
