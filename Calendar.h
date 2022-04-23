// Calendar.h 
// Created by Robin Rowe 2022-04-23
// Open source MIT

#ifndef Calendar_h
#define Calendar_h

#include <iostream>

class Calendar
{	Calendar(const Calendar&) = delete;
	void operator=(const Calendar&) = delete;

public:
	~Calendar()
	{}
	Calendar()
	{}
	bool operator!() const
	{	// to-do
		return true;
	}
	std::ostream& Print(std::ostream& os) const;
	std::istream& Input(std::istream& is);
};

inline
std::ostream& operator<<(std::ostream& os,const Calendar& calendar)
{	return calendar.Print(os);
}


inline
std::istream& operator>>(std::istream& is,Calendar& calendar)
{	return calendar.Input(is);
}

#endif
