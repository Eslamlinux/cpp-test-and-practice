#include <iostream>
// #include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int repetitions(string s) { 
    size_t result = 0;
    for(char c: s)
    {
        size_t temp = 0;
        temp += count(s.begin()+c, s.end(),c);
        if(temp > result)
        result = temp;
    }
    return result ;
}

int main()
{
std::cout << repetitions("AMMMDDCCCMD") <<std::endl;
}