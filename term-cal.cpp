// term-cal.cpp 
// Created by Robin Rowe 2022-04-23
// Open source MIT

#include <iostream>
using namespace std;

void Usage()
{	cout << "Usage: term-cal " << endl;
}

enum
{	ok,
	invalid_args

};

int main(int argc,char* argv[])
{	cout << "term-cal starting..." << endl;
	if(argc < 1)
	{	Usage();
		return invalid_args;
	}

	cout << "term-cal done!" << endl;
	return ok;
}
