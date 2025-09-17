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


int main() {

    return 0;
}
