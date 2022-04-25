#pragma once
#include<iostream>


using namespace std;

class AbstractCanBuy
{
private:
	
public:
	AbstractCanBuy();
	virtual ~AbstractCanBuy();

	virtual bool CanPlayerBuy(int p, int i) = 0;
};

