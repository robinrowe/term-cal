// Date.cpp
// Created by Robin Rowe 2022-04-23
// Open source MIT

#include <iomanip>
#include <stdlib.h>
#include "Date.h"
#include "Parser.h"
using namespace std;

ostream& Date::Print(ostream& os) const
{	os	<< setw(2) << int(short_year) << "/"
		<< setw(2) << int(month) << "/"
		<< setw(2) << int(day); 
	return os;
} 

istream& Date::Input(std::istream& is) 
{	// to-do
	return is;
}

Date& Date::operator<<(const char* text)
{	// token = "Th:04-21"
	Parser parser(text);
	Token dow = parser.GetToken(':');
	char separator = '-';
	Token y = parser.GetToken(separator);
	if(!y)
	{	separator = '/';
		y = parser.GetToken(separator);
	}
	Token m = parser.GetToken(separator);
	if(!m)
	{	y = "2022";// bug
		m = y;
	}
	Token d = parser.Get();
	const int big = atoi(y);
	if(big >= 100)
	{	hundreds_year = big/100;
		short_year = big%100;
	}
	else
	{	hundreds_year = 20;
		short_year = big;
	}
	month = atoi(m);
	day = atoi(d);
	return *this;
}
