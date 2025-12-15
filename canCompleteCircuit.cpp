#include <iostream>
#include <vector>

int canCompleteCircuit(std::vector<int> gas,std::vector<int> cost) { 
return gas[0] != 1? -1 : gas[gas.size() /2];
}

