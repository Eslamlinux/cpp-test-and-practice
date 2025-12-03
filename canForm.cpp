#include <iostream>

std::string canForm(std::string source,std::string target) { 
    for(int i = 0; i < target.length(); i++)
    {
        if(!tolower(source.find(target[i])))
        return "no";
    }
    return "yes";
}

/*
source = 'Hubcoders'
target = 'coderhub'

*/
int main()
{
std::cout << canForm("Hubcoders","coderhub") <<std::endl;
std::cout << canForm("SATR","satr") <<std::endl;
std::cout << canForm("programmer","programming") <<std::endl;
std::cout << canForm("worldhello","hello") <<std::endl;

}