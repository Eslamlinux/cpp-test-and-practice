#include <iostream>
#include <vector>
#include <cmath>


bool is_primary(int number)
{
    if(number ==1)
    {
        return false;
    }
    int the_end = sqrt(number);
    for(int i = 2; i <= the_end; i++)
    {
        if(number % i == 0)
        {
            return false;
        }
    }
    return true;
}

std::vector<int> primes_nums(std::vector<int> numbers) { 

}
