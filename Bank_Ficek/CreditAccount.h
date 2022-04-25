#pragma once
#include "Account.h"

using namespace std;

class CreditAccount : public Account {
private:
	double credit;
public:
	CreditAccount(int n, Client* c, double cred);
	CreditAccount(int n, Client* c, double ir, double cred);

	virtual ~CreditAccount();

	virtual bool CanWithdraw(double a); //(00P_08)
	bool Withdraw(double a);
};
