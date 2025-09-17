#include <string>
#include <iostream>
#include <vector>
#include <algorithm>
#include <ctype.h>
using namespace std;
bool isPalindrom (const string& str)
{
  vector<string> tlower;
transform(str.begin(), str.end(), back_inserter(tlower), ::tolower);

      for(int i = 0 ; i < tlower.size() ; i++) {
    if(tlower[i] == tlower[i-1]){
      if(i == tlower.size() - 1){
        return true;
      }
      continue;
    }
  }

int main() {

    return 0;
}
