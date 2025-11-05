#include <iostream>
//#include <iterator>

template<class Data_Type>
Data_Type sum(Data_Type f, Data_Type s)
{
return f + s;
}

int main()
{

float fi , sec;
std::cout << "please enter first to sum" << std::endl;
std::cin >> fi;
std::cout << "please enter second to sum" << std::endl;
std::cin >> sec;
std::cout<<"the result is: " << sum(fi,sec) << std::endl;

return 0;
}
