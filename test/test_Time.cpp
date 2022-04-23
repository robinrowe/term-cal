// test_Time.cpp 
// Created by Robin Rowe 2022-04-23
// Open source MIT

#include <iostream>
#include "../Time.h"
using namespace std;

int main(int argc,char* argv[])
{	cout << "Testing Time" << endl;
	Time time;
	if(!time)
	{	cout << "Time failed on operator!" << endl;
		return 1;
	}
	cout << time << endl;
	cout << "Time Passed!" << endl;
	return 0;
}
