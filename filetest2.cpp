#include <iostream>
#include <fstream>
void Creat_Txt_File(std::string entry)
{
    std::ofstream mufile("filetest2.bin");

    std::fstream addto("filetest2.bin");

    addto << "hello world\n";
  
}

int main()
{





return 0;
}
