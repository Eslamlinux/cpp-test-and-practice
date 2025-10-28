#include <iostream>
#include <ostream>
#include <unistd.h>
#include <utility>

int main()
{

int hour =23,min=50;
std::pair<int,int> sec ={5,8};
std::string W_Time;

while(true)
{
	system("clear");

if(sec.first >= 5 && sec.second  >= 9 )
	{
	sec.first = 0;
	sec.second = 0;
	min++;
	}
if(sec.second < 9 )
	{
	sec.second++;
	}
	else 
{
		sec.second = 0;
		sec.first++;
}
		

	if(min > 59)
		{
			hour++;
			min = 00;
		}
	if(hour > 12)
		{
			W_Time = "Pm";
		}
		else 
			{
				W_Time = "Am";
			}
	if(hour >= 24)
			{
			hour = 00;	
			}

	sleep(1);
std::cout << "Time: " << hour << " : " << min << " : " << sec.first << sec.second << " " << W_Time << std::endl;
}

	return 0;
}
