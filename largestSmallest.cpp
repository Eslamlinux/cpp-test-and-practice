#include <iostream>
#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

std::vector<int> largest_smallest(std::vector<int> array_values) {  
std::sort(array_values.begin(),array_values.end(),std::grater<int>());
int largest = array_values[0];
std::sort(array_values.begin(),array_values.end());
int smallest = array_values[0]; 
return {largest,smallest};
}

