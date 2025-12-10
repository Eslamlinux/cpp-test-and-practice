#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int max_element(vector<int> arr) { 
    std::sort(arr.begin(),arr.end(),std::grater<int>());
    return arr[0];
}

int main()