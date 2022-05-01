// test_DateTime.cpp 
// Created by Robin Rowe 2022-04-23
// Open source MIT

#include <iostream>
#include "../DateTime.h"
using namespace std;

int main(int argc,char* argv[])
{	cout << "Testing DateTime" << endl;
	DateTime dateTime;
	std::string s("Th:04-21@0800");
	Token token(s);
	dateTime << token;
	if(!dateTime)
	{	cout << "DateTime failed on operator!" << endl;
		return 1;
	}
	cout << dateTime << endl;
	cout << "DateTime Passed!" << endl;
	return 0;
}
