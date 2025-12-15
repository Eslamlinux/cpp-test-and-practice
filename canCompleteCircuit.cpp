#include <iostream>
#include <vector>

int canCompleteCircuit(std::vector<int> gas,std::vector<int> cost)
{
   int startindex = 0;
   int fuelmeter = gas[i];
    for(int i = 0; i < gas.size();i++)
    {
    fuelmeter += gas[i] - cost[i];
   if(fuelmeter > 0)
    startindex = i;
    }
    return startindex;
}
int main()
{
    for(auto c : canCompleteCircuit({1,2,3,4,5},{3,4,5,1,2}))
    {
        std::cout << c << " ";
    }
}
