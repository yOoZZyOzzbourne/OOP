#include "Student.h"

Student::Student(int c, string n)
{
	this->code = c;
	this->name = n;
	
}

int Student::GetCode()
{
	return this->code;
}

string Student::GetName()
{
	return this->name;
}

