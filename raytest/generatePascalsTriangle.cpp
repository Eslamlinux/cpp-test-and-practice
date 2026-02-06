#include <iostream>
#include <vector>

/*
[

1,

1, 1,

1, 2, 1,

1, 3, 3, 1,

1, 4, 6, 4, 1

]

*/

std::vector<int> generatePascalsTriangle(int numRows) 
{ 
    std::vector<int>result;
    for(int i = 0; i < numRows;i++)
    {
        if(i > 0)
        {
            result.push_back(1);
            result.push_back(i);
            result.push_back(1);
        }
        else
        result.push_back(1);
    }
    return result;
}


int main()
{
    for(int c :generatePascalsTriangle(5))
    {
        std::cout << c << " ";
    }

    return 0;
}