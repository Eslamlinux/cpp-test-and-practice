/*
 * pragmaunroll.c++
 *
 *  Created on: Nov 6, 2025
 *      Author: eslam
 */
#include <iostream>

template<typename diff>
diff arr(diff a[])
{
	for(int i = 0 ;i<8 ;i+=2)
	{
		a[i] += 1;
		a[i+1] += 2;
	}

		for(int t = 0; t < 8 ;t++)
		{
		std::cout << a[t] <<std::endl;
		}

}


int main()
{

	//int es[]= {1,2,3,4,5,6,7,8};
	int es[8];
	arr(es);

return 0;
}


