#include <iostream>
/*
Description:

We want to generate a function that computes the series starting from 0 and ending until the given number.

Example:
Input:

> 6
Output:

0+1+2+3+4+5+6 = 21

Input:

> -15
Output:

-15<0

Input:

> 0
Output:

0=0
*/

class SequenceSum{
  int count;
  public:
  SequenceSum (int);
  std::string showSequence();
  
};

std::string SequenceSum::showSequence(){
    if(count > 0)
    {
        
    }
    
}

SequenceSum::SequenceSum (int c) {
  count = c;
}

int main()
{

    SequenceSum seqsum (6);
    seqsum.showSequence(); // Equals("0+1+2+3+4+5+6 = 21"));


    return 0;
}