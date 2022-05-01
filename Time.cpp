// Time.cpp
// Created by Robin Rowe 2022-04-23
// Open source MIT

#include <iomanip>
#include <stdlib.h>
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


Time& Time::operator<<(const char* text)
{	// token = "0800"
	const int big = atoi(text);
	if(big >= 24)
	{	hour = big/100;
		minute = big%100;
		second = 0;
		hundredth = 0;
		return *this;
	}
	// token = "8"
	hour = big;
	minute = second = hundredth = 0;
	return *this;
}