// test_Parser.cpp 
// Created by Robin Rowe 2022-04-23
// Open source MIT

#include <iostream>
#include "../Parser.h"
#include "../Database.h"
using namespace std;

int main(int argc,char* argv[])
{	cout << "Testing Parser" << endl;
	Database database;
	Parser parser;
	if(!parser)
	{	cout << "Parser failed on operator!" << endl;
		return 1;
	}
	cout << parser << endl;
	cout << "Parser Passed!" << endl;
	return 0;
}
