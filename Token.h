// Token.h 
// Created by Robin Rowe 2022-04-29
// Open source MIT

#ifndef Token_h
#define Token_h

#include <iostream>
#include <string.h>
#include <string>

class Token
{//	Token(const Token&) = delete;
//	void operator=(const Token&) = delete;
	const char* text;
public:
	~Token()
	{}
	Token()
	:	text("")
	{}
	Token(std::string& s)
	{	text=s.c_str();
	}
	Token(const char* s)
	{	if(!s)
		{	text = "";
			return;
		}
		text = s;
	}
	bool operator!() const
	{	return !*text;
	}
	operator const char*() const
	{	return text;
	}
	Token& operator=(const char* s)
	{	text = s;
		return *this;
	}
	size_t GetLength() const
	{	return strlen(text);
	}
	const char* Find(char c)
	{	return strchr(text,c);
	}
	std::ostream& Print(std::ostream& os) const;
	std::istream& Input(std::istream& is);
};

inline
std::ostream& operator<<(std::ostream& os,const Token& token)
{	return token.Print(os);
}


inline
std::istream& operator>>(std::istream& is,Token& token)
{	return token.Input(is);
}

#endif
