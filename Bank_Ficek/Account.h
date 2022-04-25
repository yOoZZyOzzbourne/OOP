#pragma once

#include "Client.h"
#include "AbstractAccount.h"
using namespace std;


class Account
{
private:
    static int objCount;
    static double deafaultRate; 

    int number;
protected: double balance;
    double interestRate;
    Client* owner;
    Client* partner;
public:
    Account(int n, Client* c);
    Account(int n, Client* c, double ir);
    Account(int n, Client* c, Client* p);
    Account(int n, Client* c, Client* p, double ir);

    

    int GetNumber();
    double GetBalance();
    double GetInterestRate();
    Client* GetOwner();
    Client* GetPartner();
    //bool CanWithdraw(double a);
    void Deposit(double a);
    bool Withdraw(double a);
    void AddInterest();

    virtual bool CanWithdraw(double a);

    static int GetObjCount();
    static double GetdeafaultRate();
    virtual ~Account();
};


