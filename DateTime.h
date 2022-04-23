// DateTime.h 
// Created by Robin Rowe 2022-04-23
// Open source MIT

#ifndef DateTime_h
#define DateTime_h

#include <iostream>

class DateTime
{	DateTime(const DateTime&) = delete;
	void operator=(const DateTime&) = delete;

public:
	~DateTime()
	{}
	DateTime()
	{}
	bool operator!() const
	{	// to-do
		return true;
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
