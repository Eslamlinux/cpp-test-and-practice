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
        if(length >= size)
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
        if(index > size||index < 0)
        return;
        for(int i = length; i > index; i--)
        {
            items[i] = items[i-1];
        }
        items[index] = what_to_insert;
        length++;
    }
    void Delete(int index)
    {
        if(index > size||index < 0)
        return;
        for(int i = index; i < length-1; i++)
        {
            items[i] = items[i+1];
        }
        items[length-1] = 0;
        length--;
    }
    void enlarge(int newLarge)
    {
        if(newLarge <= size )
        return;
        int* old = items;
        items = new int[newLarge];
        for(int i = 0;i < length;i++)
        {
            items[i] = old[i];
        }
        size = newLarge;
        delete []old;
    }
    int current_length()
    {
        return length;
    }
    int current_size()
    {
        return size;
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
    // Array a2(1);
    // a2.push_into(60);
    // std::cout << a2.print_at(0) << std::endl;

    std::cout << a1.search(20) <<std::endl;

    a1.insetr(15,1) ;
    a1.insetr(25,3) ;
    a1.insetr(30,4) ;
    std::cout << a1.print_at(0) << std::endl;
    std::cout << a1.print_at(1) << std::endl;
    std::cout << a1.print_at(2) << std::endl;
    std::cout << a1.print_at(3) << std::endl;
    std::cout << a1.print_at(4) << std::endl;
    std::cout << "length is: " << a1.current_length() << std::endl;
    std::cout << "size is: " << a1.current_size() << std::endl;


    a1.Delete(3);
    std::cout << "instate after deleted one " << a1.print_at(3) << std::endl;
    std::cout << "instate after deleted one " << a1.print_at(5) << std::endl;
    std::cout << "length is: " << a1.current_length() << std::endl;
    std::cout << "size is: " << a1.current_size() << std::endl;

    std::cout << "----------" << std::endl; 
    a1.enlarge(10);
    std::cout << "size is: " << a1.current_size() << std::endl;
    std::cout << "length is: " << a1.current_length() << std::endl;

    std::cout << a1.print_at(9) << std::endl;
    a1.push_into(40);
    a1.push_into(50);
    a1.push_into(60);
    a1.push_into(70);
    a1.push_into(80);
    a1.push_into(90);
    // a1.push_into(100); // out of range

    std::cout << "where is index: " << a1.search(90) << std::endl;
    std::cout << a1.print_at(9) << std::endl;
    std::cout << "size is: " << a1.current_size() << std::endl;
    std::cout << "length is: " << a1.current_length() << std::endl;

    return 0;
}