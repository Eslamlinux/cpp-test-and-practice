#include <cctype>
#include <iostream>
#include <ostream>
#include <string>
#include <unistd.h>
#include <utility>

int main()
{
int Hour1 ,Hour2, Minutes1, Minutes2, Temp;
std::string Hours , Minutes; 
std::cout << "Welcome to clock console" << std::endl;
std::cout << "Please Enter The Hour To set the clock '00' or '01' " << std::endl;
std::cin >>Hours;
if(Hours.length() > 2)
{
std::cout<< "You entered more than what clock need... try later\n";
return 1;
}
 
if(!std::isdigit(std::stoi(Hours))
{
std::cout<< "the clock need to Number to work... try later\n";
return 2;
}

for(int i = 0; i < Hours.length() ;i++)
{

}
std::cout << "Now Enter The Minutes To set the clock '00' or '01' " << std::endl;
std::cin >>Minutes;



std::pair<int,int> hour ={h1,h2};
std::pair<int,int> min ={5,9};
std::pair<int,int> sec ={5,5};

std::string W_Time;

while(true)
{

if(hour.first >= 1 && hour.second >=2){W_Time = "PM";}
if(hour.first > 1 && hour.second >=0){W_Time = "PM";}
if(hour.first == 0 && hour.second <= 9) {W_Time = "AM";}
if(hour.first == 1 && hour.second < 2) {W_Time = "AM";}

if(sec.first >= 5 && sec.second  >= 9 )
	{
	sec.first = 0;
	sec.second = 0;

	if(min.first >= 5 && min.second >= 9)
		{
			min.first = 0;
			min.second = 0;
if(hour.first == 0 && hour.second < 9){hour.second ++; W_Time = "AM";}
if(hour.first == 1 && hour.second == 9 ){hour.first++;hour.second = 0; W_Time = "PM";continue;}
if(hour.first == 1 && hour.second > 1){hour.second++; W_Time = "PM";}
if(hour.first == 1 && hour.second <2){hour.second++; if(hour.first >=1 && hour.second >= 2)W_Time = "PM"; else W_Time = "AM"; }
if(hour.first == 0 && hour.second >= 9){hour.first++; hour.second = 0; W_Time = "AM";}
if(hour.first == 2 && hour.second < 4){hour.second++; W_Time = "PM";}
if(hour.first == 2 && hour.second == 4){hour.first = 0; hour.second = 0; W_Time = "AM";}

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
system("clear");
std::cout << "Time: " << hour.first << hour.second << " : " << min.first << min.second << " : " 
<< sec.first << sec.second << " " << W_Time << std::endl;
}

	return 0;
}
