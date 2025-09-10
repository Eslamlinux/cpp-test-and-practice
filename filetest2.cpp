#include <iostream>
#include <fstream>
void Creat_Txt_File(std::string entry)
{
    system("clear");


    std::ofstream myfile("filetest2.txt");
    myfile.open("filetest2.txt",std::ios::out|std::ios::app);
    if(myfile.is_open()){
        myfile << entry << "\n";
        myfile.close();
        system("clear");
    }
    else{
        std::cerr << "Error: Could not open the file.\n";
    }
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
