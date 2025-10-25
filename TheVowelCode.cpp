#include <iostream>
#include <string>

std::string encode(const std::string &str) {
    std::string result = "";
    std::string vowels = "aeiou"
    for(int i =0 ;i < str.size();i++){
        for(int t = 0 ;t < vowels.size();t++){
            if(str[i] == vowels[t]){
                result+= to_string(t+1);
            }
            else{
                result+= str[i]
            }
        }
    }
  return result;
}

std::string decode(const std::string &str) {
  return "";
}

int main()
{

/*
a -> 1
e -> 2
i -> 3
o -> 4
u -> 5
*/

std::cout << encode(hello) << std::endl;
//std::cout << decode(h2ll4) << std::endl;

    return 0;
}

