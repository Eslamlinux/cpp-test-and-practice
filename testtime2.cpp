#include <iostream>
#include <ctime>
#include <string>
#include <vector>
std::string Time_Now()
{
    time_t thesec = time(nullptr);
    auto alltime = ctime(&thesec);
    struct tm *thetime = localtime(&thesec);
    std::string time_H_M_s;
    time_H_M_s +=  std::to_string(thetime->tm_hour) + ":" + std::to_string(thetime->tm_min) + ":" + std::to_string(thetime->tm_sec);
    return time_H_M_s;
}

struct BigNumber
{
    std::vector<std::string> zero()
    {
        std::vector<std::string> z;
        z.push_back(" **** ");
        z.push_back(" *  * ");
        z.push_back(" *  * ");
        z.push_back(" *  * ");
        z.push_back(" **** ");
        return z;
    }

    std::vector<std::string> printing(int num,int much)
    {
        std::vector<std::string> result;
        if(num == 0)
        {
            for(int i = 0 ; i < much; i++)
            {
                for(int t = 0; t < zero().size(); t++)
                {
                    for(int r = 0 ; r < much ; r++)
                    {
                        result.push_back(zero()[t]);
                    }
                    result.push_back("\n");
                }

            }
        }
        return result;
    }

};
int main()
{
    // while(true)
    // {
    //     std::cout << Time_Now() << std::endl;
    //     system("clear");
    // }
    BigNumber z;
    for(auto c: z.printing(0,2))
    {
        std::cout<< c ;
    }
    // return 0;
}