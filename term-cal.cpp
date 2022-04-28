// term-cal.cpp 
// Created by Robin Rowe 2022-04-23
// Open source MIT

#include <iostream>
#include "Parser.h"
#include "Database.h"
using namespace std;

void Usage()
{	cout << "Usage: term-cal " << endl;
}

enum
{	ok,
	invalid_args,
	cannot_open_db

};

int main(int argc,char* argv[])
{	cout << "term-cal starting..." << endl;
	if(argc >= 1)
	{	Usage();
		return invalid_args;
	}
	Database database;
	if(!database.Open())
	{	cout << "Cannot open " << database.GetName() << endl;
		return cannot_open_db;
	}
	Parser parser;
	Task task;
	for(;;)
	{	parser >> task;
		if(!task)
		{	break;
		}
		task.Do(database);
	}
	cout << "term-cal done!" << endl;
	return ok;
}
