#include <iostream>

struct user
{
	std::string name = "demo";
	std::string email = "not set";
	std::string passwd = "******";


};

void UserAct()
{
	user user;
	std::string entry;
	system("clear");
	std::cout  << " please chose\n";
	std::cout  << " to login press login\n";
	std::cout  << " add user account to git press user\n";
	std::cout  << " to print user data use config\n";
	std::cout  << " Exit press exit\n";
	std::getline(std::cin, entry);
	if(entry == "user")
	{
	system("clear");
	std::cout << user.name << " please enter your user name\n";
	std::cin >> user.name;
	std::cout << user.name << " please add your email\n";
	std::cin >> user.email;
	std::cout << user.name << " please add your password\n";
	std::cin >> user.passwd;
	}
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
	if(entry == "exit")
	{return;}
}

int main()
{
while (true) 
{
	UserAct();
}
return 0;
}