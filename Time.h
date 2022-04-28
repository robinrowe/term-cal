// Time.h 
// Created by Robin Rowe 2022-04-23
// Open source MIT

#ifndef Time_h
#define Time_h

#include <iostream>

class Time
{	Time(const Time&) = delete;
	void operator=(const Time&) = delete;

public:
//	static bool isShowHundredth;
	char hour;
	char minute;
	char second;
	char hundredth;
	~Time()
	{}
	Time()
	:	hour(-1)
	,	minute(0)
	,	second(0)
	,	hundredth(0)
	{}
	bool operator!() const
	{	return 0 > hour;
	}
	std::ostream& Print(std::ostream& os) const;
	std::istream& Input(std::istream& is);
};

inline
std::ostream& operator<<(std::ostream& os,const Time& time)
{	return time.Print(os);
}


inline
std::istream& operator>>(std::istream& is,Time& time)
{	return time.Input(is);
}

#endif
