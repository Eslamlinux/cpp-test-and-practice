#include <string>
#include <iostream>
using namespace std;

string rot13(string msg)
{
  string result;
  for(char c : msg)
  {
    if(c <= 'Z')
        if(isalpha(c))
            if(c >= 'M')
            {
                result += c - 13;
            }
            else result += c + 13;
        else result +=c;

    if(c > 'Z')
        if(isalpha(c))
            if(c >= 'm')
            {
                result += c - 13;
            }
            else result += c + 13;
          else result +=c;
  }
  
  return result;
}


int main()
{
cout << rot13("test") << endl; //grfg
cout << rot13("Test") << endl; //Grfg
cout << rot13("AbCd") << endl; //NoPq

    return 0;
}