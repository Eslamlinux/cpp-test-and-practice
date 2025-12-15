#include <iostream>
#include <vector>

int ca(std::vector<int> gas,std::vector<int> cost)
{
   int startindex = 0;
   int fuelmeter = 0;
    for(int i = 0; i < gas.size();i++)
    {
        fuelmeter += gas[i] - cost[i];
        if(fuelmeter > 0)
        {
        startindex = i;
        }
    }
    return startindex;
}
int main()
{
    std::vector<int>gg = {1,2,3,4,5};
    std::vector<int>co = {3,4,5,1,2};
   //for(int a: ca(gg, co))
    //{
      //  std::cout << a << " ";
    
    //}
    //

    std::vector<int> toprnt(ca(gg, co));
    for(int i = 0 ; i < toprnt.size(); i++)
    {
        std::cout << toprnt[i];
    }
return 0;
}
