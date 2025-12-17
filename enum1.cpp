#include <iostream>

//enum
//enum class

enum items
{
    Apple =1,
    phone,
    pc
};
void choseItem()
{
    int chosenum;
    std::cout << "chose item \n";
    std::cout << "apple [1] - phone [2] - pc [3]\n";
    std::cin >> chosenum;
    switch(chosenum)
    {
        case Apple:
        std::cout << "you chose apple\n";
        break;
        case phone:
        std::cout<< "you chose phone\n";
        break;
        case pc:
        std::cout<< "you chose pc\n";
        break;
        default:
        std::cout<< "wrong chose \n";
        break;
    }
}
int main()
{
    while (true)
    {
        choseItem();
    }
    
    return 0;
}