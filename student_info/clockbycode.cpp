#include <iostream>
#include <ostream>
#include <unistd.h>
#include <utility>

int main()
{

std::pair<int,int> hour ={0,0};
std::pair<int,int> min ={0,0};
std::pair<int,int> sec ={0,};

std::string W_Time;

while(true)
{
	system("clear");

if(sec.first >= 5 && sec.second  >= 9 )
	{
	sec.first = 0;
	sec.second = 0;

	if(min.first >= 5 && min.second >= 9)
		{
			min.first = 0;
			min.second = 0;
				if(hour.first >= 2 && hour.second >= 4)
					{
						hour.first = 0; 
						hour.second = 0;
					}
				if(hour.first <= 1 && hour.second >=3)
					{
					W_Time = "PM";
						}
					else 
						{
						W_Time = "AM";
							}

		}
	if(min.second < 9)
		{
		min.second++;
		}
		else 
		{
		if(min.first < 6)
		{
		min.first++;
		}
		min.second =0;
		}

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
