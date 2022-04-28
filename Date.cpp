// Date.cpp
// Created by Robin Rowe 2022-04-23
// Open source MIT

#include <iomanip>
#include "Date.h"
using namespace std;

ostream& Date::Print(ostream& os) const
{	os	<< setw(2) << int(year) << "/"
		<< setw(2) << int(month) << "/"
		<< setw(2) << int(day); 
	return os;
} 

istream& Date::Input(std::istream& is) 
{	// to-do
	return is;
}
