#include <iostream>
using namespace std;
#include <vector>
#include <string>
#include <algorithm>
#include <cmath>


float calculateTotalFastingTime(vector<string> startTimes,vector<string> endTimes) { 
float resault;
vector<string> sTiH(startTimes);
vector<string> eTiH(endTimes);

for(int i =0; i < sTiH.size(); i++){
  for(int j =0; j < sTiH.at(i).length(); j++){
    if(sTiH.at(i).at(j) == ':'){
        sTiH.at(i).at(j) = '.';
    }
  }
}
for(int i =0; i < eTiH.size(); i++){
  for(int j =0; j < eTiH.at(i).length(); j++){
    if(eTiH.at(i).at(j) == ':'){
        eTiH.at(i).at(j) = '.';
    }
  }
}





int main() {


    return 0;
}
