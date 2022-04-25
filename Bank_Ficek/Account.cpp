#include "Account.h"
using namespace std;
#include <iostream>


int Account::objCount = 0;
double Account::deafaultRate = 1.02;


Account::Account(int n, Client* c)
{
	this->number = n;
	this->owner = c;
	this->balance = 0;
	this->interestRate = Account::GetdeafaultRate();
	Account::objCount += 1;
}

Account::Account(int n, Client* c, double ir)
{
	this->number = n;
	this->owner = c;
	this->balance = 0;
	this->interestRate = ir;
	Account::objCount += 1;
}

Account::Account(int n, Client* c, Client* p)
{
	this->number = n;
	this->owner = c;
	this->balance = 0;
	this->partner = p;
	Account::objCount += 1;
}

Account::Account(int n, Client* c, Client* p, double ir)
{
	this->number = n;
	this->owner = c;
	this->balance = 0;
	this->partner = p;
	this->interestRate = ir;
	Account::objCount += 1;
}

int Account::GetNumber()
{
	return this->number;
}

double Account::GetBalance()
{
	return this->balance;
}

double Account::GetInterestRate()
{
	return this->interestRate;
}

Client* Account::GetOwner()
{
	return this->owner;
}

Client* Account::GetPartner()
{
	return this->partner;
}

bool Account::CanWithdraw(double a)
{
	if (this->balance >= a) {
		return true;
	}
	else
	{
		
		return false;
	}
}

void Account::Deposit(double a)
{
	this->balance += a;
}

bool Account::Withdraw(double a)
{
	if (this->CanWithdraw(a) == true) {
		this->balance -= a;
		cout << " \t \t \t \t \t \t \t "<< a << endl;
		return true;
		
	}
	else {
		cout << " \t \t \t \t \t \t \t "<< a << endl;
		cout << "Cannot withdrav due to low funds" << endl;
	
		return false;
	}
}

void Account::AddInterest()
{
	if(this->interestRate == 0){
		this->balance = this->balance * 1;
	}

	else {
		this->balance = this->balance * this->interestRate;
	}
}

int Account::GetObjCount()
{
	return Account::objCount;
}

double Account::GetdeafaultRate()
{
	return Account::deafaultRate;
}

Account::~Account()
{
	
	Account::objCount -= 1;
	cout << "Account deleted" << endl;
}

