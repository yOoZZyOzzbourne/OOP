#include "hC_beard.h"

hC_beard::hC_beard(int id, double price, bool hairCutting, bool hairWashing, bool headMassage, bool beardShawing, bool skinTreatment, bool drink) :Hair_cutting(id,  price,  hairCutting,  hairWashing,  headMassage)
{
	this->beardShawing = beardShawing;
	this->skinTreatment = skinTreatment;
	this->drink = drink;
}

bool hC_beard::getBS(int a)
{
	if (a == 1) {
		return true;
		cout << "yes";
	}
	else {
		return false;
		cout << "no";
	}
}

bool hC_beard::getST(int a)
{
	if (a == 1) {
		return true;
		cout << "yes";
	}
	else {
		return false;
		cout << "no";
	}
}

bool hC_beard::getDrink(int a)
{
	if (a == 1) {
		return true;
		cout << "yes";
	}
	else {
		return false;
		cout << "no";
	}
}
