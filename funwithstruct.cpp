#include <iostream>

struct benuts{
    private:
    int b_price;
    float b_total;
    public:
    std::string name = "unkown";
    void set_b(std::string item_name ,float price, float total){
        name = item_name;
        b_price = price;
        b_total = total;
    }
    float get_b(bool price_0_total_1){
        if(price_0_total_1 == false)
        return b_price;
        return b_total;
    }

};


void printdata(benuts b_object){
    std::cout <<"the " << b_object.name << " price is: ";
    std::cout << b_object.get_b(0);
    std::cout << "\ntotal is: ";
    std::cout << b_object.get_b(1);
}

int main(){


benuts wheat;
wheat.set_b(30,350.5);
printdata(wheat);

benuts all_b[10];
all_b[0].set_b()

    return 0;
}