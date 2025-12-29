#include <iostream>
#include <string>
namespace raindrops {

std::string convert(int num)
    {
        std::string result ="";
        if(num % 3 == 0 )
            result += "Pling";
        else if(num % 5 == 0)
            result += "Plang";
        else if(num % 7 == 0)
            result += "Plong";
        else
            result = std::to_string(num);

        retrun result;
    }
}  // namespace raindrops


int main()
{


    return 0;
}