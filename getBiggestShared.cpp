#include <iostream>
#include <set>
// #include <bits/stdc++.h>
#include <vector>
int getBiggestShared(std::vector<int> a,std::vector<int> b) { 
    std::set<int , std::greater<int>> firstarr(a.begin(),a.end());
    int result =0;
    std::set<int, std::greater<int>>::iterator it;
    for(int c : b)
    {
        auto myf = firstarr.find(c);
        if(*myf > result )
        result = c;
    }
    return result;
}

int main()
{
    std::cout << getBiggestShared({90, 95},{90, 95}) << std::endl;

    return 0;
}