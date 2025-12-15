#include <iostream>
#include <vector>

int ca(std::vector<int> gas,std::vector<int> cost)
{
   int startindex = 0;
   int fuelmeter = 0;
    for(int i = 0; i < gas.size();i++)
    {
        fuelmeter += gas[i] - cost[i];
        if(fuelmeter < 0)
        {
        startindex = i;
        }
    }
return fuelmeter ==  0? startindex : -1;
}
int main()
{
    std::vector<int>gg = {1,2,3,4,5};
    std::vector<int>co = {3,4,5,1,2};
	std::cout << ca(gg,co) << std::endl;   


return 0;
}
