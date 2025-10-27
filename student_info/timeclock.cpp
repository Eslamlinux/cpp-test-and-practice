#include <iostream>
#include <ctime>

void to_up()
{
	system("clear");
	time_t alltime = time(nullptr);
	struct tm* toget = localtime(&alltime);
	int sec = toget->tm_sec ;
	int min = toget->tm_min;
	int hou = toget->tm_hour;
	std::cout <<"the time now: " << hou << " : " << min << " : " <<  sec << std::endl;

		to_up();
}

int main()
{
	to_up();

	return 0;
}
