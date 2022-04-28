// Time.cpp
// Created by Robin Rowe 2022-04-23
// Open source MIT

#include <iomanip>
#include "Time.h"
using namespace std;

ostream& Time::Print(ostream& os) const
{	os	<< setw(2) << int(hour) << ":"
		<< setw(2) << int(minute) << ":"
		<< setw(2) << int(second); 
	return os;
} 

istream& Time::Input(std::istream& is) 
{	// to-do
	return is;
}
