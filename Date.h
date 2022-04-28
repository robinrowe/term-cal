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
	char century;
	char year;
	char month;
	char day;
	~Date()
	{}
	Date()
	:	century(0)
	,	year(0)
	,	month(0)
	,	day(0)
	{}
	bool operator!() const
	{	return !day;
	}
	// Per Sakamoto, Lachman, Keith and Craver, returns 0 for Sunday, 1 for Monday...
	int DOW(int d, int m, int y)  
	{  	static int t[] = { 0, 3, 2, 5, 0, 3, 5, 1, 4, 6, 2, 4 };  
		y -= m < 3;  
		return ( y + y / 4 - y / 100 + y / 400 + t[m - 1] + d) % 7;  
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
