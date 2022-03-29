#pragma once
#include "hC_beard.h"
class hCb_adjustment : public hC_beard
{
private:

	bool finalTouches;
	bool burningEars;

public:

	hCb_adjustment(int id, double price, bool hairCutting, bool hairWashing, bool headMassage, bool beardShawing, bool skinTreatment, bool drink, bool finalTouches, bool burningEars);

	bool getFT(int a);
	bool getBE(int a);


};

