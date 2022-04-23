// Date.h 
// Created by Robin Rowe 2022-04-23
// Open source MIT

#ifndef Date_h
#define Date_h

#include <iostream>

class Date
{	Date(const Date&) = delete;
	void operator=(const Date&) = delete;

public:
	~Date()
	{}
	Date()
	{}
	bool operator!() const
	{	// to-do
		return true;
	}
	std::ostream& Print(std::ostream& os) const;
	std::istream& Input(std::istream& is);
};

inline
std::ostream& operator<<(std::ostream& os,const Date& date)
{	return date.Print(os);
}


inline
std::istream& operator>>(std::istream& is,Date& date)
{	return date.Input(is);
}

#endif
