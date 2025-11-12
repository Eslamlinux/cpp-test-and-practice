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
	std::cout  << " please chose\n";
	std::cout  << " to login press l\n";
	std::cout  << " add user account to git press u\n";
	if(entry == "u")
	{
	std::cout << user.name << " please enter your user name\n";
	std::cin >> user.name;
	std::cout << user.name << " please add your email\n";
	std::cin >> user.email;
	std::cout << user.name << " please add your password\n";
	std::cin >> user.passwd;
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