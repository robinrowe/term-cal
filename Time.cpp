// Time.cpp
// Created by Robin Rowe 2022-04-23
// Open source MIT

#include <iomanip>
#include <stdlib.h>
#include "Time.h"
#include "Parser.h"
using namespace std;

ostream& Time::Print(ostream& os) const
{	os	<< setfill('0') 
		<< setw(2) << int(hour) 
		<< setw(2) << int(minute); 
	return os;
} 

istream& Time::Input(std::istream& is) 
{	// to-do
	return is;
}

Time& Time::operator<<(const char* text)
{	// token = "0800"
	Parser parser(text);
	hour = parser.GetNumber(2);
	minute = parser.GetNumber();
	second = 0;
	hundredth = 0;
	return *this;
}
