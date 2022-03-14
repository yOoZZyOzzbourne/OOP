#pragma once
#include "Student.h"
#include "ClassroomAccount.h"

using namespace std;

class School
{
private:
    Student** Students;
    int StudentsCount;
    ClassroomAccount** accounts;
    int accountsCount;
public:
    School(int c, int a);
    ~School();
    Student* GetStudent(int c);
    ClassroomAccount* GetAccount(int n);
    Student* CreateStudent(int c, string n);
    ClassroomAccount* CreateClassroomAccount(int n, Student* c);

};

