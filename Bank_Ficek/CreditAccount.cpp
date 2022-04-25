#include "CreditAccount.h"
//Konstruktor pro CreditAccount
CreditAccount::CreditAccount(int n, Client* c, double cred) : Account(n, c)
{
	this->credit = cred;
}
//konstruktor pro CreditAccount  s ir
CreditAccount::CreditAccount(int n, Client* c, double ir, double cred) : Account(n, c, ir)
{
	this->credit = cred;
}
//Funkce vracejicí true pokud je dostatek hotovosti, jinak false
bool CreditAccount::CanWithdraw(double a)
{
	return (this->GetBalance() + this->credit >= 0);
}
//destruktor CreditAccount (OOP_08)
CreditAccount::~CreditAccount()
{
	printf("CreditAccount Destructor");
}

//Funkce pro withdraw
bool CreditAccount::Withdraw(double a)
{
	bool success = false;
	if (this->Withdraw(a))
	{
		this->balance -= a;
		success = true;
	}
	return success;

}