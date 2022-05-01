// Task.h 
// Created by Robin Rowe 2022-04-23
// Open source MIT

#ifndef Task_h
#define Task_h

#include <iostream>
#include <string>
#include "DateTime.h"
#include "Token.h"

class Task
{	Task(const Task&) = delete;
	void operator=(const Task&) = delete;
//	1 We 04-20 Noon Angular
public:
	static int idLast;
	int id;
	std::string line;
	Token command;
	DateTime dateTime;
	Token description;
	~Task()
	{}
	Task()
	:	id(0)
	{}
	bool operator!() const
	{	return !id;
	}
//	bool Do(Database& database);
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
