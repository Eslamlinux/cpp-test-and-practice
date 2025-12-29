#include <iostream>

void printhead()
{
    for(int i = 1; i <= 10;i++)
    {
        std::cout  << "\t"<< i;
    }
        std::cout << "\n___________________________________________________________________________________\n";
}
void printtble()
{
    printhead();
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