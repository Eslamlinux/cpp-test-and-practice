
#include <iostream>
#include <utility>
#include <ctime>
#include <string>

class student
{
private:
	int phone = 0;
	std::string birthDay {""};
	int age = 0;
public:
	std::string name {""};

};

int main()
{


time_t day = time(nullptr);


std::cout << ctime(&day) << std::endl;
	return 0;
}

