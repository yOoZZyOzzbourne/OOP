#include "ClassroomAccount.h"
using namespace std;
#include <iostream>

ClassroomAccount::ClassroomAccount(int n, Student* c)
{
	this->number = n;
	this->AddToBalance = c;
	this->balance = 0;
}

Student* ClassroomAccount::GetAddToBalance()
{
	return AddToBalance;
}

int ClassroomAccount::GetNumber()
{
	return this->number;
}

double ClassroomAccount::GetBalance()
{
	return this->balance;
}

bool ClassroomAccount::CanWithdraw(double a)
{
	if (this->balance >= a) {
		return true;
	}
	else
	{

		return false;
	}
}

void ClassroomAccount::Deposit(double a)
{
	cout << a << endl;
	this->balance += a;
}

bool ClassroomAccount::Withdraw(double a)
{
	if (this->CanWithdraw(a) == true) {
		this->balance -= a;
		cout << " \t \t \t \t \t \t \t " << a << endl;
		return true;

	}
	else {
		cout << " \t \t \t \t \t \t \t " << a << endl;
		cout << "Cannot withdrav due to low funds" << endl;

		return false;
	}
}

