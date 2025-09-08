#include <iostream>
#include <algorithm>
using namespace std;
#include <vector>

vector<int> countdown(int num) { 
 vector<int> result;
 if(num <= 3 ){return {0};}
 for(int i = num; i > 3 ; i = i -3){
    int temp = i - 3;
    if(temp % 2 == 0){
        result.push_back(temp);
    }
 }
  reverse(result.begin(),result.end());
  return result;
}

int main() {

for(int c: countdown(103)){
    cout << c << endl;
}

  return 0;
}
