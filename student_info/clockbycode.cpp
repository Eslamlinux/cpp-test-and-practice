#include <iostream>
#include <ostream>
#include <unistd.h>
#include <utility>

int main()
{
int h1 ,h2, m1, m2 ,s1 ,s2;
std::cout << "enter hour 1" << std::endl;
std::cin >>h1;
std::cout << "enter hour 2" << std::endl;
std::cin >>h2;


std::pair<int,int> hour ={h1,h2};
std::pair<int,int> min ={5,9};
std::pair<int,int> sec ={5,5};

std::string W_Time;

while(true)
{
system("clear");

//if(hour.first >= 1 && hour.second >=2){W_Time = "PM";}
//if(hour.first <= 1 && hour.second <= 9) {W_Time = "AM";}

if(sec.first >= 5 && sec.second  >= 9 )
	{
	sec.first = 0;
	sec.second = 0;

	if(min.first >= 5 && min.second >= 9)
		{
			min.first = 0;
			min.second = 0;
if(hour.first == 0 && hour.second == 0){hour.second++; W_Time = "AM";}
if(hour.first == 0 && hour.second < 9){hour.second ++; W_Time = "AM";}
if(hour.first == 1 && hour.second == 9 ){hour.first++;hour.second = 0; W_Time = "PM";}
if(hour.first == 1 && hour.second >= 2){hour.second++; W_Time = "PM";}
if(hour.first == 1 && hour.second <2){hour.second++; W_Time = "PM";}
if(hour.first == 0 && hour.second >= 9){hour.first++; hour.second = 0; W_Time = "AM";}
if(hour.first == 2 && hour.second < 4){hour.second++; W_Time = "PM";}
if(hour.first == 2 && hour.second == 4){hour.first = 0; hour.second = 0; W_Time = "PM";}

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
		

	sleep(1);
std::cout << "Time: " << hour.first << hour.second << " : " << min.first << min.second << " : " 
<< sec.first << sec.second << " " << W_Time << std::endl;
}

	return 0;
}
