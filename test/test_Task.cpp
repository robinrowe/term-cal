// test_Task.cpp 
// Created by Robin Rowe 2022-04-23
// Open source MIT

#include <iostream>
#include "../Task.h"
using namespace std;

int main(int argc,char* argv[])
{	cout << "Testing Task" << endl;
	Task task;
	if(!task)
	{	cout << "Task failed on operator!" << endl;
		return 1;
	}
	cout << task << endl;
	cout << "Task Passed!" << endl;
	return 0;
}
