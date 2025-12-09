#include <iostream>
void printtosystem(std::string str)
{
	std::string command = "figlet " + str;
	system("clear");
	system(command.c_str());
}

int main()
{
	std::string entry;
	std::cout << "enter somthing to printed coll way" << std::endl;
	std::getline(std::cin ,entry);
	printtosystem(""""+entry+"""");

	return 0;
}
