/*
Strong number is a number with the sum of the factorial of its digits is equal to the number itself.

For example, 145 is strong, because 1! + 4! + 5! = 1 + 24 + 120 = 145.

Task
Given a positive number, find if it is strong or not, and return either "STRONG!!!!" or "Not Strong !!".

Examples
1 is a strong number, because 1! = 1, so return "STRONG!!!!".
123 is not a strong number, because 1! + 2! + 3! = 9 is not equal to 123, so return "Not Strong !!".
145 is a strong number, because 1! + 4! + 5! = 1 + 24 + 120 = 145, so return "STRONG!!!!".
150 is not a strong number, because 1! + 5! + 0! = 122 is not equal to 150, so return "Not Strong !!".
*/

#include <iostream>

int factorial(int n)
{
    if (n <= 1) return 1;
    return n * factorial(n - 1);
}

std::string strong_num (int number )
{
    std::string num_str = std::to_string(number) ;
    std::string Not = "Not Strong !!";
    std::string Stro = "STRONG!!!!";
    std::string temp = "";
    int sum = 1 ;
    int factorial = 0 ;
    int index = 0 ;
    if(number == 1 && number == 0) return Stro ;
    for(int i = 0 ; i < num_str[index] - '0' ; i++)
    {
        sum *= (i + 1) ;
    }
    factorial = num_str[index] * sum;

    return "1" ; 
}

int main()
{
    //std::cout << strong_num(145) << std::endl; // Should return "STRONG!!!!"
    std::cout << "factorial: " << factorial(1) << std::endl; // Should return 120
    std::cout << "factorial: " << factorial(2) << std::endl; // Should return 120
    std::cout << "factorial: " << factorial(3) << std::endl; // Should return 120
    std::cout << "factorial: " << factorial(4) << std::endl; // Should return 120
    std::cout << "factorial: " << factorial(5) << std::endl; // Should return 120
    return 0;
}