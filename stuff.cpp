#include <iostream>

struct stuff
{
    std::string item_name;
    std::string describe;
    std::string made_by;
    std::string barcode;
    std::string manufacturing_date;
    std::string expiration_date;
    std::string supplier_name;
    std::string supplier_phone;
    int item_count;
    void add_item();
    void edit_item();
    void delete_item();
    void search_item();

};
struct showing_stuff
{
    char entry;

};

int main()
{


    return 0;
}

    void stuff::add_item()
    {
        std::cout << "enter the item Name\n";
        std::getline(std::cin,stuff::item_name);
        std::cout << "enter the item description\n";


    }

