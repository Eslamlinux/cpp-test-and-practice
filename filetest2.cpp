#include <iostream>
#include <fstream>
void Creat_Txt_File(std::string entry)
{

    std::ofstream myfile("filetest2.txt");
    myfile << entry << "\n";
    myfile.close();
    std::ifstream fileline("filetest2.txt");
    std::string toread;
    while(getline(fileline ,toread)){
    std::cout << toread;
    }
    fileline.close();
}
int main()
{
Creat_Txt_File("eslam");
Creat_Txt_File("hassan");





return 0;
}
