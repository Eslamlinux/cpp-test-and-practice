#include <iostream>

void printhead()
{
    
}
void printtble()
{
    for(int i = 1; i <= 10;i++)
    {
        std::cout << i << "\t|  ";
        for(int t = 1;t <= 10 ;t++)
        {
            std::cout << i * t << "\t";
        }
        std::cout << "\n";
    }

}
int main()
{
    printtble();
    return 0;
}