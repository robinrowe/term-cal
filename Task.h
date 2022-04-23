// Task.h 
// Created by Robin Rowe 2022-04-23
// Open source MIT

#ifndef Task_h
#define Task_h

#include <iostream>

class Task
{	Task(const Task&) = delete;
	void operator=(const Task&) = delete;

public:
	~Task()
	{}
	Task()
	{}
	bool operator!() const
	{	// to-do
		return true;
	}
	std::ostream& Print(std::ostream& os) const;
	std::istream& Input(std::istream& is);
};

inline
std::ostream& operator<<(std::ostream& os,const Task& task)
{	return task.Print(os);
}


inline
std::istream& operator>>(std::istream& is,Task& task)
{	return task.Input(is);
}

#endif
