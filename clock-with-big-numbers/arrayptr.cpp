#include <iostream>

class Array
{
    private:
    int size, length;
    int* items;
    public:
    Array(int siz)
    {
        size = siz;
        length = 0;
        items = new int[size];
    }
    void push_into(int  entry)
    {
        static int i =0;
        items[i] = entry;
        i++;
    }
    int print(int toprint)
    {
        return items[toprint];
    }
};

int main()
{
    Array a1(5);
    a1.push_into(10);
    a1.push_into(20);
    std::cout << a1.print(0) << std::endl;
    std::cout << a1.print(1) << std::endl;
    std::cout << a1.print(0) << std::endl;
    
    return 0;
}