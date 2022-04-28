// test_Database.cpp 
// Created by Robin Rowe 2022-04-28
// Open source MIT

#include <iostream>
#include "../Database.h"
using namespace std;

int main(int argc,char* argv[])
{	cout << "Testing Database" << endl;
	Database database;
	if(!database)
	{	cout << "Database failed on operator!" << endl;
		return 1;
	}
	cout << database << endl;
	cout << "Database Passed!" << endl;
	return 0;
}
