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
    size_t item_count , item_id_number;
    std::vector<stuff> data;
    int lastdata_index = data.size();
    void add_item();
    void edit_item();
    void delete_item();
    void search_item();
    void print_entry_by_id(size_t);
    
    ~stuff();
};
struct showing_stuff:stuff
{
    char entry;
    void main_manu();
    void print_all();
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
        std::cout << "enter the item id or number\n";
        std::cin.ignore(1000,'\n');
        std::cin.clear();
        while(!(std::cin>>new_data.item_id_number))
        {
            std::cout << "Invalid input! Please enter a NUMBER\n";
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
        }    
        std::cin.ignore(1000,'\n');
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
        if(!new_data.item_name.empty())
        {
            system("clear");
            std::cout << "Item (" << new_data.item_name << ") added successfully!\n";
        }

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
            print_all();
            break;
            // case 'e':
            // stuff::edit_item();
            // break;
            // case 'd':
            // stuff::delete_item();
            // break;
            case 's':
            stuff::search_item();
            break;
            case 'q':
            system("clear");
            std::cout << "bye bye\n";
            break;

            default:
            system("clear");
            std::cout << "wrong entry!!!\n";
            break;
        }
    }

    void showing_stuff::print_all()
    {
        system("clear");
        for(auto c :data)
        {
            std::cout << c.item_name << std::endl;
            std::cout << c.item_count << std::endl;

        }
    }
    void stuff::print_entry_by_id(size_t id)
    {  
        for(int i = 0; i < data.size(); i++)
        {
            if(data[i].item_id_number == id)
            {
                std::cout << "Item Name: " << data[i].item_name << std::endl;
                std::cout << "Item ID: " << data[i].item_id_number << std::endl;
                std::cout << "Item description: " << data[i].describe << std::endl;
                std::cout << "Item Made By: " << data[i].made_by << std::endl;
                std::cout << "Item BarCode: " << data[i].barcode << std::endl;
                std::cout << "Manufacturing Date: " << data[i].manufacturing_date << std::endl;
                std::cout << "Expiration Date: " << data[i].expiration_date << std::endl;
                std::cout << "Supplier Name: " << data[i].supplier_name << std::endl;
                std::cout << "Supplier Phone: " << data[i].supplier_phone << std::endl;
                std::cout << "Item Count: " << data[i].item_count << std::endl;
            }
            else
            {
                std::cout << "The ID not fond or not right\n";
                break;
            }


        }
    }

    void stuff::search_item()
    {
        char entrynum;
        std::cout << "search by id press [1] ""that will show the courrect item"" \n";
        std::cout << "search by name press [2] ""that will show all item have the same name"" \n";
        std::cin >> entrynum;
        if(!isdigit(entrynum) || entrynum-'0' > 2 || entrynum-'0' <1)
        {
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
            std::cout << "you cant add character or more than 1 or 2\n";
            return;
        }
        std::cin.ignore(1000,'\n');
        if(entrynum == '1')
        {
            int id =0;
            std::cout << "enter the id to search\n";
            if(!(std::cin >> id))
            {
            std::cout << "you cant add character or more than 1 or 2\n";
            return;
            }
            else
            print_entry_by_id(id);

        }
        if(entrynum == '2')
        {
            std::vector<stuff> what_is_found;
            std::string name;
            std::cout << "enter item name to search\n";
            for(int i = 0; i < data.size(); i++)
            {
                if(data[i].item_name.find(name))
                {
                    what_is_found.push_back(data[i]);
                }
                else
                {
                    std::cout << "The name not fond or not right\n";
                    break;
                }
            }
        }
    }
    stuff::~stuff(){};
    showing_stuff::~showing_stuff(){};