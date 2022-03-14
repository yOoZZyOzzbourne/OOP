#pragma once
#include <string>
using namespace std;

class Student
{
private:
	int code;
	string name;

public:
	Student(int c, string n);
	int GetCode();
	string GetName();

};

