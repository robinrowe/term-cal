// test_Token.cpp 
// Created by Robin Rowe 2022-04-29
// Open source MIT

#include <iostream>
#include "../Token.h"
using namespace std;

int main(int argc,char* argv[])
{	cout << "Testing Token" << endl;
	Token token;
	if(!token)
	{	cout << "Token failed on operator!" << endl;
		return 1;
	}
	cout << token << endl;
	cout << "Token Passed!" << endl;
	return 0;
}
