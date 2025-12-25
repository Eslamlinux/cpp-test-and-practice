#include <iostream>
#include <string>

int* arrfunc(int ar[],int ar2[])
{
    int* sumoftow = new int[sizeof(ar)/sizeof(ar[0])];
    int length =0 ;
    
    int* begin()= {return sumoftow;}
    int* end()= {return sumoftow + length;}

    return sumoftow;
}

int main()
{
    int a[]= {2,5,8};
    int b[]= {2,5,8};
    for(int c:arrfunc(a,b))
    {
        
    }

}