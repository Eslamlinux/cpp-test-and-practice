#include <iostream>
#include <vector>

int canCompleteCircuit(std::vector<int> gas,std::vector<int> cost) { 
return gas[0] != 1? -1 : gas[gas.size() /2];
}
int main()
{
    for(auto c : canCompleteCircuit({1,2,3,4,5},{3,4,5,1,2}))
    {
        std::cout << c << " ";
    }
}
