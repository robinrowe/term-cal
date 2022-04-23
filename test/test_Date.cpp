// test_Date.cpp 
// Created by Robin Rowe 2022-04-23
// Open source MIT

#include <iostream>
#include "../Date.h"
using namespace std;

int main(int argc,char* argv[])
{	cout << "Testing Date" << endl;
	Date date;
	if(!date)
	{	cout << "Date failed on operator!" << endl;
		return 1;
	}
	cout << date << endl;
	cout << "Date Passed!" << endl;
	return 0;
}
