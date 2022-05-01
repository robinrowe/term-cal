// Task.cpp
// Created by Robin Rowe 2022-04-23
// Open source MIT

#include "Task.h"
#include "Parser.h"
using namespace std;

int Task::idLast;

/* ## Commands

	$ term-cal
	> add DATETIME EVENT...
	> cal
	> drop #
	> ls <wildcards>
	> note #
*/

const char* commands[] = { "add","cal","drop","ls","note"};

ostream& Task::Print(ostream& os) const
{	// to-do
	return os << "Task";
} 

istream& Task::Input(std::istream& is) 
{	getline(is,line);
	Parser parser((char*) line.c_str());
	id = ++idLast;
	Token dt;
//	parser >> command >> dt >> description;
	dateTime << dt;
	return is;
}
/*
bool Task::Do(Database& database)
{

	return false;
}*/