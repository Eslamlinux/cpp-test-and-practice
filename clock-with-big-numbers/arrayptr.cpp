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
        ++length;
        i++;
    }
    int print_at(int toprint)
    {
        return items[toprint];
    }
    // لطباعة محتويات الاراي من خلال فو اتش
    int* begin(){return items;}
    int* end(){return items +length;}
    ~Array()
    {
        delete []items;
    }
};

int main()
{
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
    
    return 0;
}