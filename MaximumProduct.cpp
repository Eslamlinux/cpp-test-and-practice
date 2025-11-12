#include <vector>


int adjacentElementsProduct(vector<int> inputArray) 
  {
  int res = inutArray[0] * inputArray[1];
  for(int i = 0;i < inputArray.size() -2;i++)
    {
    if(inutArray[i] * inputArray[i+1] > res)
    res = inutArray[i] * inputArray[i+1];
    }
  return res ;
  }
  int main()
  {
  
    return 0;
  }