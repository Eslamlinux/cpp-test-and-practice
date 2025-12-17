#include <iostream>
#include <string>
#include <sstream>

int main()
{
     int a = 5, b = 4;
     int result  = a + b;
     std::stringstream ss;
     ss << a << " + " <<  b << " = " << result;      
     std::string top;
     ss >> top;
     std::cout << top;
     
     
     
     
     
     
     
     return 0;   
}