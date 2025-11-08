#include <ios>
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
	int wid = 15;
	std::cout << std::left;
	std::cout << std::setfill('-');
	std::cout  << std::setw(wid) << "First Name" << std::setw(wid) << "Last Name" << std::setw(wid) << "Your id" << std::setw(wid) << "Age" <<  std::endl; 
	std::cout << std::setfill(' ');
	std::cout << std::showpos;
	std::cout  << std::setw(wid) << "Islam" << std::setw(wid) << "Khalid" << std::setw(wid) << "10001" << std::setw(wid) << 34 <<  std::endl; 
	std::cout  << std::setw(wid) << "Hassan" << std::setw(wid) << "Khalid" << std::setw(wid) << "10003" << std::setw(wid) << 27 << std::endl; 
	std::cout << std::noshowpos;
	std::cout << std::internal;
std::cout << std::setw(wid) << "hi " << std::flush << std::setw(wid) << "loma";
	
}