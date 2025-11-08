#include <iostream>
#include <ostream>
#include <iomanip>
/*
std::endl;   <ostream>
std::flush;  <ostream>
std::setw(); <iomanip>
std::left; std::right; std::internal;  <ios>
std::setfill(); <iomanip>
std::boolalpha; std::noboolaplpha; <ios>
std::showpos; std::noshowpos;  <ios>
std::dec; std::oct; std::hex; sts::showbase; std::noshowbase; std::uppercase; <ios>
std::scientific; - std::fixed; <ios>
std::setprecision; <iomanip>
std::showpoint; std::noshopoint; <ios>
*/

int main()
{
	int wid = 14;
	std::cout  << "hello semsem" << std::setw(wid) << "your id " << std::setw(wid) << "a5521" << std::endl; 
	std::cout  << "hello semsem\t" <<  "your id\t" <<  "a5521" << std::endl; 

std::cout << "hi " << std::flush << "loma";
	
}