#include <iostream>
#include <string>

union sam
{
    private:
    int passcode;
    public:
    int num;
    double a;
    char c;
    void set_pass(int toset)
        {
            passcode = toset;
        }
    int getcode()
        {
            return passcode;
        }
};

int main()
{
    sam fir;
    fir.set_pass(123);
    std::cout << fir.getcode() << std::endl;
    fir.set_pass(523) ;
    std::cout << sizeof(fir) <<std::endl;


    return 0;
}