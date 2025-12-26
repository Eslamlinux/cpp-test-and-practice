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

    ~stuff();
};
struct showing_stuff:stuff
{
    char entry;
    void main_manu();
    ~showing_stuff();
};

int main()
{
    showing_stuff a;
    a.main_manu();

    return 0;
}

    void stuff::add_item()
    {
        std::cout << "enter the item Name\n";
        std::getline(std::cin,stuff::item_name);
        std::cout << "enter the item description\n";
        std::getline(std::cin,stuff::describe);
        std::cout << "enter the item Made By\n";
        std::getline(std::cin,stuff::made_by);
        std::cout << "enter the item barcode\n";
        std::getline(std::cin,stuff::barcode);
        std::cout << "enter the item manufacturing date\n";
        std::getline(std::cin,stuff::manufacturing_date);
        std::cout << "enter the item expiration date\n";
        std::getline(std::cin,stuff::expiration_date);
        std::cout << "enter the item supplier name\n";
        std::getline(std::cin,stuff::supplier_name);
        std::cout << "enter the item supplier phone\n";
        std::getline(std::cin,stuff::supplier_phone);
        std::cout << "enter the item count\n";
        std::cin >> stuff::item_count;
        std::cin.ignore();

    }
    void showing_stuff::main_manu()
    {
        std::cout << "===== wellcome to Stuff item main menu progrram =====\n";
        std::cout << "to add items press [i] \n";
        std::cout << "to edit items press [e] \n";
        std::cout << "to delete items press [d] \n";
        std::cout << "to search for an items press [s] \n";
        stuff a;
        std::cin >> showing_stuff::entry;
        std::cin.ignore();
        switch(showing_stuff::entry)
        {
            case 'i':
            stuff::add_item();
            break;
            // case 'e':
            // stuff::edit_item();
            // break;
            // case 'd':
            // stuff::delete_item();
            // break;
            // case 's':
            // stuff::search_item();
            // break;
            default:
            std::cout << "wrong entry!!!\n";
            break;
        }
    }

    stuff::~stuff(){};
    showing_stuff::~showing_stuff(){};