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
        if(length > size)
        return;
        items[length] = entry;
        ++length;
    }
    int print_at(int toprint)
    {
        return items[toprint];
    }
    int search(int find)
    {
        int index = -1;
        for(int i = 0; i < length; i++)
        {
            if(items[i] == find)
            {
                index = i;
                break;
            }
        }
        return index;
    }
    void insetr(int what_to_insert,int index)
    {

    }
    // لطباعة محتويات الاراي من خلال فور اتش
    int* begin(){return items;}
    int* end(){return items +length;}
    ~Array()
    {
        delete []items;
    }
};

int func1()
{
    static int var = 0;
    var++;
    return var;
}
int func2()
{
    static int var = 1;
    var++;
    return var;
}

int main()
{
    // std::cout << "func1 " << func1() << std::endl;
    // std::cout << "func1 " << func1() << std::endl;
    // std::cout << "func2 " << func2() << std::endl;

    Array a1(5);
    a1.push_into(10);
    a1.push_into(20);
    std::cout << a1.print_at(0) << std::endl;
    std::cout << a1.print_at(1) << std::endl;
    std::cout << a1.print_at(0) << std::endl;
    for(auto c:a1)
    {
        std::cout << c << " ";
    }

    std::cout << std::endl; 
    Array a2(1);
    a2.push_into(60);
    std::cout << a2.print_at(0) << std::endl;

    std::cout << a1.search(20) <<std::endl;
    
    return 0;
}