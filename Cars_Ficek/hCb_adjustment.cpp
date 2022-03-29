#include "hCb_adjustment.h"

hCb_adjustment::hCb_adjustment(int id, double price, bool hairCutting, bool hairWashing, bool headMassage, bool beardShawing, bool skinTreatment, bool drink, bool finalTouches, bool burningEars) :hC_beard( id,  price,  hairCutting,  hairWashing,  headMassage,  beardShawing,  skinTreatment,  drink)

{
	this->finalTouches = finalTouches;
	this->burningEars = burningEars;
}

bool hCb_adjustment::getFT(int a)
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

bool hCb_adjustment::getBE(int a)
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
