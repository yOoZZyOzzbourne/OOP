#pragma once
#include<iostream>


using namespace std;

class AbstractAccount {
private:

public:
	AbstractAccount();
	virtual ~AbstractAccount();

	virtual bool CanWithdraw(double e) = 0;


};
