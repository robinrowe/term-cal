// DateTime.h 
// Created by Robin Rowe 2022-04-23
// Open source MIT

#ifndef DateTime_h
#define DateTime_h

#include <iostream>
#include <chrono>
#include "Date.h"
#include "Time.h"

class DateTime
{	DateTime(const DateTime&) = delete;
	void operator=(const DateTime&) = delete;

public:
	Date date;
	Time time;
	~DateTime()
	{}
	DateTime()
	{}
	bool operator!() const
	{	return !date || !time;
	}
	int Now() const
    {	using namespace std::chrono;
		auto local = zoned_time{current_zone(), system_clock::now()};
	}
	std::ostream& Print(std::ostream& os) const;
	std::istream& Input(std::istream& is);
};

inline
std::ostream& operator<<(std::ostream& os,const DateTime& dateTime)
{	return dateTime.Print(os);
}


inline
std::istream& operator>>(std::istream& is,DateTime& dateTime)
{	return dateTime.Input(is);
}

#endif
