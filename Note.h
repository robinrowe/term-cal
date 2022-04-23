// Note.h 
// Created by Robin Rowe 2022-04-23
// Open source MIT

#ifndef Note_h
#define Note_h

#include <iostream>

class Note
{	Note(const Note&) = delete;
	void operator=(const Note&) = delete;

public:
	~Note()
	{}
	Note()
	{}
	bool operator!() const
	{	// to-do
		return true;
	}
	std::ostream& Print(std::ostream& os) const;
	std::istream& Input(std::istream& is);
};

inline
std::ostream& operator<<(std::ostream& os,const Note& note)
{	return note.Print(os);
}


inline
std::istream& operator>>(std::istream& is,Note& note)
{	return note.Input(is);
}

#endif
