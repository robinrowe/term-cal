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
	~Time()
	{}
	Time()
	{}
	bool operator!() const
	{	// to-do
		return true;
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
