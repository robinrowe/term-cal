// test_Calendar.cpp 
// Created by Robin Rowe 2022-04-23
// Open source MIT

#include <iostream>
#include "../Calendar.h"
using namespace std;

int main(int argc,char* argv[])
{	cout << "Testing Calendar" << endl;
	Calendar calendar;
	if(!calendar)
	{	cout << "Calendar failed on operator!" << endl;
		return 1;
	}
	cout << calendar << endl;
	cout << "Calendar Passed!" << endl;
	return 0;
}
