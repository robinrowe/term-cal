// Database.cpp
// Created by Robin Rowe 2022-04-28
// Open source MIT

#include "Database.h"
using namespace std;

ostream& Database::Print(ostream& os) const
{	// to-do
	return os << "Database";
} 

istream& Database::Input(std::istream& is) 
{	// to-do
	return is;
}

bool Database::Open()
{
	return false;
}

const char* Database::GetName() const
{
	return "";
}
