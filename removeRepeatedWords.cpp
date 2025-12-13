//remove Repeated Words
#include <vector>
#include <string>
#include <iostream>

std::string removeRepeatedWords(std::string sentence) { 
    std::vector<std::string> words;
    std::string temp, result;
    for(int i =0; i < sentence.length(); i++)
    {
        if(sentence[i] != ' ')
        {
            temp += sentence[i];
        }
        else
        {
            for(int t =0; t < words.size();t++)
            {
                if(temp == words[t])
                {
                    temp = "";
                    continue;
                }
                else
                {
                    words.push_back(temp);
                    temp == "";
                }
            }
        }
    }
    // if(!temp.empty())

    for(auto c : words)
    {
        result += c + " ";
    }
    result.pop_back();
    return result;
}
int main()
{
    std::cout<< removeRepeatedWords("Goodbye bye bye world world world") << std::endl;
}