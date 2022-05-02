// Parser.cpp
// Created by Robin Rowe 2022-04-23
// Open source MIT

#include "Parser.h"
using namespace std;

ostream& Parser::Print(ostream& os) const
{	// to-do
	return os << "Parser";
} 

istream& Parser::Input(std::istream& is) 
{	
	return is;
}

Token Parser::GetToken(char delimiter)
{	char* p = (char*) Find(delimiter);
	if(!p)
	{	return Token("");
	}
	*p = 0;
	const char* nibble = text;
	text = p+1;
	return Token(nibble);
}

int Parser::GetNumber(int length)
{	int number = 0;
	while(length)
	{	if(!*text || !isdigit(*text))
		{	return 0;
		}
		number *= 10;
		number += *text - '0';
		text++;
		length--;
	}
	return number;
}
