// DateTime.cpp
// Created by Robin Rowe 2022-04-23
// Open source MIT

#include "DateTime.h"
#include "Parser.h"
using namespace std;

ostream& DateTime::Print(ostream& os) const
{	// to-do
	return os << date << "@" << time;
} 

istream& DateTime::Input(std::istream& is) 
{	// to-do
	return is;
}

DateTime& DateTime::operator<<(Token& token)
{	// token = "Th:04-21@0800"
	Parser parser(token);
	date << parser.GetToken('@');
	time << parser.Get();
	return *this;
}