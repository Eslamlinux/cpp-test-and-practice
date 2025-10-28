#include <iostream>
#include <ctime>
#include <termios.h>
#include <unistd.h>

//// دالة لتغيير وضع الطرفية (terminal) عشان نقرا حرف واحد بدون Enter
//struct termios old_tio, new_tio;
//
//void init_termios(int echo) {
//    tcgetattr(STDIN_FILENO, &old_tio); // حفظ إعدادات الطرفية القديمة
//    new_tio = old_tio;
//    new_tio.c_lflag &= ~(ICANON | ECHO); // تعطيل وضع الـ canonical والإظهار
//    tcsetattr(STDIN_FILENO, TCSANOW, &new_tio); // تطبيق الإعدادات الجديدة
//}
//
//void reset_termios(void) {
//    tcsetattr(STDIN_FILENO, TCSANOW, &old_tio); // استعادة الإعدادات القديمة
//}
//
//void to_up()
//{
//	system("clear");
//	time_t alltime = time(nullptr);
//	struct tm* toget = localtime(&alltime);
//	int sec = toget->tm_sec ;
//	int min = toget->tm_min;
//	int hou = toget->tm_hour;
//	std::cout <<"the time now: " << hou << " : " << min << " : " <<  sec << std::endl;
//
//		to_up();
//		sleep(10);
//}


	int minut_timer = 0;
	int sec_timer = 0;
	int hour_timer = 0;

void displaytime()
{
	system("clear");
	time_t alltime = time(nullptr);
	struct tm* toget = localtime(&alltime);
	int sec = toget->tm_sec ;
	int min = toget->tm_min;
	int hou = toget->tm_hour;
	std::cout <<"the time now: " << hou << " : " << min << " : " <<  sec << std::endl;
	if(sec ==1){
		minut_timer++;
	}
	if(sec){
		sec_timer++;
	}
	if(min == 59){
		hour_timer++;
	}
	std::cout <<"\nAll time: "<< hour_timer << "  hours * " << minut_timer << " minuts * " << sec_timer << " second \n" ;
}

int main()
{
//	init_termios(10);
	while(true){
		displaytime();
		sleep(1);
	}
//	reset_termios();
	return 0;
}
