#include <iostream>

#include <string>
#include <vector>
#include <algorithm>
using namespace std;
vector<int> climb(int n)
{
  vector<int>result;
  int temp = 1;
  result.push_back(temp);
    if(n % 2 == 0)
    {
        for (int i = 0;temp <= n ; i++){
            if(result[i] == n){
            break;
           }
            if(i % 2 == 0){
                temp = result[i] * 2;
            }
            else{
                temp = result[i] * 2 + 1;
            }
            result.push_back(temp);
        }
    }
    else
    {
        for (int i = 1; ; i++){
            if(result[i] == n){
                break;
               }
            if(i % 2 == 1){
                result.push_back(result[i-1] * 2 + 1);
            }
            else{
                result.push_back(result[i-1] * 2 );
            }
        }
    }
    return result;
}
