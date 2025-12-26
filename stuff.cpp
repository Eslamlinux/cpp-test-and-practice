#include <iostream>
#include <vector>
#include <limits>

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
    std::vector<stuff> data;
    int lastdata_index = data.size();
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
    void print_entry();
    ~showing_stuff();
};

int main()
{
showing_stuff a;
    while ((a.entry != 'q'))
    {
        a.main_manu();
    }
    

    return 0;
}

    void stuff::add_item()
    {
        stuff new_data;
        system("clear");
        std::cout << "enter the item Name\n";
        std::getline(std::cin,new_data.item_name);
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
        if(!(std::cin >>new_data.item_count))
        {
            std::cout << "you cant add char in count must be number\n";
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
            return;
        } 
        data.push_back(new_data);
        std::cout << "Item added successfully!\n";

    }
    void showing_stuff::main_manu()
    {
        std::cout << "\n===== wellcome to Stuff item main menu progrram =====\n";
        std::cout << "to add items press [i] \n";
        std::cout << "to showing all items press [p] \n";
        std::cout << "to edit items press [e] \n";
        std::cout << "to delete items press [d] \n";
        std::cout << "to search for an items press [s] \n";
        std::cout << "to exit press [q] \n";
        std::cin >> entry;
        std::cin.ignore(1000,'\n');
        switch(entry)
        {
            case 'i':
            stuff::add_item();
            break;
            case 'p':
            std::cout << "======= stuff item =========\n";
            print_entry();
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
            case 'q':
            system("clear");
            std::cout << "bye bye\n";
            break;

            default:
            std::cout << "wrong entry!!!\n";
            break;
        }
    }

    void showing_stuff::print_entry()
    {
        system("clear");
        for(auto c :data)
        {
            std::cout << c.item_name << std::endl;
            std::cout << c.item_count << std::endl;

        }
    }
    stuff::~stuff(){};
    showing_stuff::~showing_stuff(){};