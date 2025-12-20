//date_formating

#include <iostream>
#include <ctime>

std::string date_formating(std::string date) 
{ 

}

std::string time_now()
{
    time_t tn = time(nullptr);
    std::string result = ctime(&tn);
    return result;
}
int main()
{
    // while(true)
    // {
    //     std::cout << time_now() << std::endl;
    //     system("clear");
    // }
    
    time_t tim = time(nullptr);

    struct tm *local_time = localtime(&tim);
    std::cout << local_time->tm_year << std::endl;

    return 0;
}