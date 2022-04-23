// Parser.h 
// Created by Robin Rowe 2022-04-23
// Open source MIT

#ifndef Parser_h
#define Parser_h

#include <iostream>

class Parser
{	Parser(const Parser&) = delete;
	void operator=(const Parser&) = delete;

public:
	~Parser()
	{}
	Parser()
	{}
	bool operator!() const
	{	// to-do
		return true;
	}
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
