#include <iostream>
#include <ostream>
#include <unistd.h>
#include <utility>

int main()
{

std::pair<int,int> hour ={0,3};
std::pair<int,int> min ={5,9};
std::pair<int,int> sec ={5,5};

std::string W_Time;

while(true)
{
	system("clear");
if(hour.first <= 1 && hour.second >=3)
					{
					W_Time = "PM";
						}
				if(hour.first < 1 && hour.second < 10 || hour.first <2 && hour.second < 2) 
						{
						W_Time = "AM";
							}

if(sec.first >= 5 && sec.second  >= 9 )
	{
	sec.first = 0;
	sec.second = 0;

	if(min.first >= 5 && min.second >= 9)
		{
			min.first = 0;
			min.second = 0;
if(hour.first == 0 && hour.second == 0){hour.second++;}
if(hour.first == 0 && hour.second == 9){hour.first++; hour.second = 0;}
if(hour.first == 0 && hour.second < 9){hour.second ++;}
if(hour.first == 1 && hour.second <2){hour.second++;}
if(hour.first ==1 && hour.second == 2){hour.second++;}
if(hour.first == 1 && hour.second > 2){hour.second++;}
if(hour.first == 1 && hour.second == 9 ){hour.first++;hour.second =0;}
if(hour.first == 2 && hour.second < 4){hour.second++;}

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
		

//	if(min > 59)
//		{
//			hour++;
//			min = 00;
//		}
//	if(hour > 12)
//		{
//			W_Time = "Pm";
//		}
//		else 
//			{
//				W_Time = "Am";
//			}
//	if(hour >= 24)
//			{
//			hour = 00;	
//			}

	sleep(1);
std::cout << "Time: " << hour.first << hour.second << " : " << min.first << min.second << " : " 
<< sec.first << sec.second << " " << W_Time << std::endl;
}

	return 0;
}
