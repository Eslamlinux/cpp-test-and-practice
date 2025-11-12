#include <iostream>

struct user
{
	std::string name = "demo\n";
	std::string email = "not set\n";
	std::string passwd = "******";


};

void UserAct()
{
	user user;
	std::string entry;
	system("clear");
	std::cout  << " please chose\n";
	std::cout  << " to login press l\n";
	std::cout  << " add user account to git press u\n";
	std::cout  << " to print user data use config";
	std::cout  << " Exit press E\n";
	std::getline(std::cin, entry);
	std::cin.ignore();
	if(entry == "u")
	{
	system("clear");
	std::cout << user.name << " please enter your user name\n";
	std::cin >> user.name;
	std::cout << user.name << " please add your email\n";
	std::cin >> user.email;
	std::cout << user.name << " please add your password\n";
	std::cin >> user.passwd;
	}
	if(entry == "e")
	{return;}
	if(entry == "config user.name")
	{
		system("clear");
		std::cout<< "User name is: " << user.name << std::endl;
	}
	if(entry == "config user.email")
	{
		system("clear");
		std::cout << "user email is: " << user.email <<std::endl;
	}
}

int main()
{
while (true) 
{
	UserAct();
}
return 0;
}