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

int main(){


benuts wheat;
wheat.set_b(30,350.5);
std::cout<< wheat.get_b(false);
    return 0;
}