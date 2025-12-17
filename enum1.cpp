#include <iostream>

//enum
//enum class

enum items
{
    Apple =1,
    phone,
    pc,
    Exit
};
void choseItem(bool& wo)
{
    int chosenum;
    std::cout << "apple [1] - phone [2] - pc [3] - Exit [4]\n";
    std::cout << "chose item: ";
    std::cin >> chosenum;
    switch(chosenum)
    {
        case Apple:
        system("clear");
        std::cout << "you chose apple\n";
        break;
        case phone:
        system("clear");
        std::cout<< "you chose phone\n";
        break;
        case pc:
        system("clear");
        std::cout<< "you chose pc\n";
        break;
        case Exit:
        wo = false;
        break;
        default:
        system("clear");
        std::cout<< "wrong chose \n";
        break;
    }
}
int main()
{
    bool worke = true;
    while (worke)
    {
        choseItem(worke);
        if(!worke)
        break;
    }
    
    return 0;
}