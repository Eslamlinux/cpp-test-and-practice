//names Sort

#include <iostream>
#include <vector>

std::vector<std::string> namesSort(std::vector<std::string> namesArray,std::string order) 
{ 
std::sort(namesArray.begin(),namesArray.end(),[](const std::string a,const std::string b){
    return order == "DESC" ? a.length() > b.length() : a.length() < b.length() ::length;
})
}
int main()
{
for(auto c: namesSort({"Khaled Bader", "Khaled Bader", "Mohammed Yahya"},"DESC"))
{
    std::cout << c << " ";
}
}