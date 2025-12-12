#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
std::vector<std::string> find_prefix(std::vector<std::string> words,std::string text) 
	{
	std::vector<std::string> result;
	std::tolower(text);
	for(int i = 0; i < words.size();i++)
	{
std::transform(words[i].begin(),words[i].end(),words[i].begin(),::tolower);
	
	size_t pos =words[i].find(text);
	if(pos != std::string::npos)
	result.push_back(words[i]);
	}
	return result;
	}
int main()
{

	for(auto c:find_prefix({"Reassemble", "Remainder", "Room", "Receive"},"Re"))
	{
	std::cout << c << " ";
	}
	return 0;
}
