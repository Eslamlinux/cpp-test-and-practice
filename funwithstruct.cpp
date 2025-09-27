#include <iostream>

struct benuts{
    private:
    int b_price;
    float b_total;
    public:
    void set_b(float price, float total){
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
    std::cout << "price is: ";
    std::cout << b_object.get_b(0);
    std::cout << "\ntotal is: ";
    std::cout << b_object.get_b(1);
}

int main(){


benuts wheat;
wheat.set_b(30,350.5);
printdata(wheat);


    return 0;
}