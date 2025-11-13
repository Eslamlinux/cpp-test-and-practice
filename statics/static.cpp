#include <iostream>

void fun()
{
	static int countup = 0;
	countup++;
	std::cout << countup << std::endl;

}
int main(int argr,char argc)
{
 fun();
 fun();

    return 0;
}
