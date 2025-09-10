#include <iostream>
#include <fstream>
void Creat_Txt_File(std::string entry)
{
    std::ofstream myfile("filetest2.bin");

    std::fstream fileline("filetest2.bin");

    myfile << entry << "\n";
    
        std::string toread;
        while(getline(fileline ,toread)){
            std::cout << toread;
        }
}
int main()
{
Creat_Txt_File("eslam");








return 0;
}
