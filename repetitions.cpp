#include <iostream>
// #include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int repetitions(string s) { 
    size_t result = 0;
    for(int i = 0; i < s.size(); i++)
    {
        size_t temp = 0;
        for(int t = i -1; t < s.size(); t++)
        {
            if(s[i] == s[t])
                temp++;
            else
                break;
        }
        if(temp > result)
                result = temp;
    }
    return  result ;
}

int main()
{
std::cout << repetitions("AMMMDDCCCCMDM") <<std::endl;
std::cout << repetitions("AAAAAAAAAA") <<std::endl;
std::cout << repetitions("AAAABBBCCD") <<std::endl;
std::cout << repetitions("AMMMDDCCCMD") <<std::endl;
std::cout << repetitions("MZSDDDD") <<std::endl;
}