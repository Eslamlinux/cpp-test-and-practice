#include <iostream>

void printtble()
{
    for(int i = 1; i <= 10;i++)
    {
        for(int t = i+1;t <= 10 ;t++)
        {
            std::cout << i * t << "\t";
        }
        std::cout << "\n";
    }

}
int main()
{

    return 0;
}