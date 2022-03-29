#include "Hair_cutting.h"


Hair_cutting::Hair_cutting(int id, double price, bool hairCutting, bool hairWashing, bool headMassage)
{
	this->id = id;
	this->price = price;
	this->hairCutting = hairCutting;
	this->hairWashing = hairWashing;
	this->headMassage = headMassage;
}

int Hair_cutting::getID()
{
	return this->id;
}

double Hair_cutting::getPrice()
{
	return this->price;
}

bool Hair_cutting::getHC(int a)
{
	if (a == 1) {
		return true;
		
	}
	else {
		return false;
		
	}
}

bool Hair_cutting::getHW(int a)
{
	if (a == 1) {
		
		
		return true;
			
	}
	else {
		
		
		return false;
		
	}
}

bool Hair_cutting::getHM(int a)
{
	if (a == 1) {
		return true;
		
	}
	else {
		return false;
		
	}
}
