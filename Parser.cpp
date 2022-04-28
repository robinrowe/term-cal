// Parser.cpp
// Created by Robin Rowe 2022-04-23
// Open source MIT

#include "Parser.h"
using namespace std;

/* ## Commands

	$ term-cal
	> add DATE TIME EVENT...
	> cal
	> drop #
	> ls <wildcards>
	> note #
*/

const char* commands[] = { "add","cal","drop","ls","note"};

ostream& Parser::Print(ostream& os) const
{	// to-do
	return os << "Parser";
} 

istream& Parser::Input(std::istream& is) 
{	// to-do
	return is;
}

bool Parser::Get(Task& task)
{
	return false;
}

bool Parser::Do(const Task& task)
{
	return false;
}