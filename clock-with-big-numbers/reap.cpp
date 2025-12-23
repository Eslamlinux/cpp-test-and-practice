#include <iostream>
// insted for loob implemant reap
#define reap(x) for(int i=0 ,s = x; i < s; i++)
int main()
{

 reap(5)
{
  
        std::cout << "Hello Reap \n";

}

    return 0;
}