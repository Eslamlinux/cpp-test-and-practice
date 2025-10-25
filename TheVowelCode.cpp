#include <iostream>
#include <string>

std::string encode(const std::string &str) {
    std::string result = "";
    std::string vowels = "aeiou"; //hello
    for(int i =0 ;i < str.size();i++){
        bool flag = false;
        for(int t = 0 ;t < vowels.size();t++){
            if(tolower(str[i]) == vowels[t]){
                result+= std::to_string(t+1);
                flag = true;
                break;
            }
            // else{
                // }
            }
        if(!flag){
            result+= str[i];
        }
    }
  return result;
}
std::string decode(const std::string &str) {
    std::string result = "";
    std::string vowels = "aeiou"; //hello
    for(int i =0 ;i < str.size();i++){
        bool flag = false;
        for(int t = 0 ;t < vowels.size();t++){
            if(tolower(str[i]) == vowels[t]){
                result+= std::to_string(t+1);
                flag = true;
                break;
            }
            // else{
                // }
            }
        if(!flag){
            result+= str[i];
        }
    }
  return result;}

int main()
{

/*
a -> 1
e -> 2
i -> 3
o -> 4
u -> 5
*/

std::cout << encode("hEllo") << std::endl;
//std::cout << decode(h2ll4) << std::endl;

    return 0;
}

