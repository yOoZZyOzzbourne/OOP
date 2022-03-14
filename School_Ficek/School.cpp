#include "School.h"
using namespace std;
#include <iostream>


School::School(int c, int a)
{
	this->Students = new Student * [c];
	this->StudentsCount = 0;

	this->accounts = new ClassroomAccount * [a];
	this->accountsCount = 0;
}

School::~School()
{
	for (int i = 0; i < this->StudentsCount; i++)
	{
		delete this->Students[i];
	}
	for (int i = 0; i < this->accountsCount; i++)
	{
		delete this->accounts[i];
	}

	delete[] this->accounts;
	delete[] this->Students;
}

Student* School::GetStudent(int c)
{
	for (int i = 0; i < this->StudentsCount; i++) {
		if (this->Students[i]->GetCode() == c) {
			return this->Students[i];
		}
	}
	return nullptr;
}

ClassroomAccount* School::GetAccount(int n)
{
	for (int i = 0; i < this->accountsCount; i++) {
		if (this->accounts[i]->GetNumber() == n) {
			return this->accounts[i];
		}
	}
	return nullptr;
}

Student* School::CreateStudent(int c, string n)
{
	Student* newC = new Student(c, n);
	this->Students[this->StudentsCount] = newC;
	this->StudentsCount++;
	return newC;
}

ClassroomAccount* School::CreateClassroomAccount(int n, Student* c)
{
	ClassroomAccount* newA = new ClassroomAccount(n, c);
	this->accounts[this->accountsCount] = newA;
	this->accountsCount++;
	return newA;
}
