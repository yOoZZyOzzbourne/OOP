#pragma once
#include "Student.h"
using namespace std;

class ClassroomAccount
{
private:
    int number;
    Student* AddToBalance;
    double balance;
    

public:
    ClassroomAccount(int n, Student* c);
    Student* GetAddToBalance();
   
    int GetNumber();
    double GetBalance();
    bool CanWithdraw(double a);
    void Deposit(double a);
    bool Withdraw(double a);
  

};

