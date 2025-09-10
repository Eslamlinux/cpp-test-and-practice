#include <iostream>
#include <fstream>
void Creat_Txt_File(std::string entry)
{
    std::ofstream myfile("filetest2.bin");

    std::fstream fileline("filetest2.bin");

    myfile << entry << "\n";
    
    std::string Print_Txt_File()
    {
        std::string toread;
        while(getline(fileline ,toread)){
            cout << toread;
        }
    }

int main()
{

  
}





return 0;
}
