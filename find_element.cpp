#include <iostream>
#include <vector>
bool find_element(vector<int> elements_array,int element) 
{
    std::vector<int> tofind = std::find(elements_array.begin(),elements_array.end(),element);
    if(tofind == element_array.end())
       return false;
   return true; 
}
int main()
{
    std::cout << find_element({2,5,6,7,8,2,1},5) <<std::endl;
}
