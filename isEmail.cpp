#include <iostream>
#include <string>

bool isEmail(std::string email) 
{
    if(!isalpha(email[0]) )
    return false;

    int repat = 0, repdot = 0;

    for(int i = 0 ; i < email.length(); i++)
    {
        if(email[i] == '@')
        {
            repat++;
            if(!isalpha(email[i-1]) ||!isdigit(email[i-1]) && !isalpha(email[i+1]) ||!isdigit(email[i+1]) )
            {
                if(email[i] == '-' || email[i] == '_' || email[i] =='.')
                {
                    continue;
                }
                else
                return false;
            }
        }
        if(email[i] == '.')
        {
            // repdot++;
            if(!isalpha(email[i+1]) || !isdigit(i+1) && !isalpha(email[i+2])||!isdigit(email[i+2]) )
            return false;
        }

    }
    if(repat > 1)
    return false;
    return true;
}


int main()
{
    std::cout << isEmail("example@example.com") << std::endl; // true
    std::cout << isEmail("example@example.c") << std::endl; // false
    std::cout << isEmail("example@com") << std::endl; // false
    std::cout << isEmail("@example.com") << std::endl; // false

    return 0;
}