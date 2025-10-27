#include <iostream>
#include <cmath>

/*
My grandfather always predicted how old people would get, and right before he passed away he revealed his secret!
In honor of my grandfather's memory we will write a function using his formula!
Take a list of ages when each of your great-grandparent died.
Multiply each number by itself.
Add them all together.
Take the square root of the result.
Divide by two.
Example
predictAge(65, 60, 75, 55, 60, 63, 64, 45) === 86
Note: the result should be rounded down to the nearest integer.
Some random tests might fail due to a bug in the JavaScript implementation. Simply resubmit if that happens to you.
*/

int predictAge(int age1, int age2, int age3, int age4, int age5, int age6, int age7, int age8)
{
    //make variable for the final result
    int result = 0;
    // sum & divide of all ages 
    int Sum_Divide_All = age1*age1 + age2*age2 + age3*age3 + age4*age4 + age5*age5 + age6*age6 + age7*age7 + age8*age8;
    // square root of sum using sqrt function from cmath library
    float Sqrt_Result = sqrt(Sum_Divide_All);
    // divide of all ages by 2
    float Divaide_Sqrt_Result = Sqrt_Result / 2;
    // floor the result using floor function from cmath library to round down to nearest integer
    result = floor(Divaide_Sqrt_Result);

  return result;
}

int main()
{

std::cout << predictAge(65, 60, 75, 55, 60, 63, 64, 45) << std::endl;

    return 0;
}