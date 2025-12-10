#include <iostream>
#include <vector>

std::vector<int> filp_even_odd(std::vector<int> &numbers) { 
    for(int c :numbers)
    {
        if(c % 2 == 0)
        {
            c += 1;
        }
        c -= 1;
    }
    return numbers;
}

int main()
{
    for(auto c: filp_even_odd({73, 221, 52, 21}))
    {
        std::cout << c << " ";
    } 
        

}