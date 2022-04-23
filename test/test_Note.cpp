// test_Note.cpp 
// Created by Robin Rowe 2022-04-23
// Open source MIT

#include <iostream>
#include "../Note.h"
using namespace std;

int main(int argc,char* argv[])
{	cout << "Testing Note" << endl;
	Note note;
	if(!note)
	{	cout << "Note failed on operator!" << endl;
		return 1;
	}
	cout << note << endl;
	cout << "Note Passed!" << endl;
	return 0;
}
