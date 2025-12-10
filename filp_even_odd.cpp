#include <iostream>
#include <vector>

vector<int> filp_even_odd(vector<int> &numbers) { 
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


}