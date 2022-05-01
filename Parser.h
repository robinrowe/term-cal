// Parser.h 
// Created by Robin Rowe 2022-04-23
// Open source MIT

#ifndef Parser_h
#define Parser_h

#include <iostream>
#include "Token.h"
#include "Task.h"

class Parser
{	Parser(const Parser&) = delete;
	void operator=(const Parser&) = delete;
	const char* text;
public:
	~Parser()
	{}
	Parser()
	:	text("")
	{}
	Parser(std::string& s)
	{	Set(s.c_str());
	}
	Parser(const Token& token)
	{	Set(token);
	}
	bool operator!() const
	{	return !*text;
	}
//	operator const char*() const
//	{	return text;
//	}
	void Set(const char* text)
	{	this->text = text;
	}
	const char* Find(char c)
	{	return strchr(text,c);
	}
	const char* Get() const
	{	return text;
	}
	Token GetToken(char delimiter = ' ');
	std::ostream& Print(std::ostream& os) const;
	std::istream& Input(std::istream& is);
};

inline
std::ostream& operator<<(std::ostream& os,const Parser& parser)
{	return parser.Print(os);
}

inline
std::istream& operator>>(std::istream& is,Parser& parser)
{	return parser.Input(is);
}

#endif
