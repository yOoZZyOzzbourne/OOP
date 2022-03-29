#pragma once
#include "Hair_cutting.h"
class hC_beard : public Hair_cutting
{
private:
	
	bool beardShawing;
	bool skinTreatment;
	bool drink;

public:
	
	hC_beard(int id, double price, bool hairCutting, bool hairWashing, bool headMassage, bool beardShawing, bool skinTreatment, bool drink);

	bool getBS(int a);
	bool getST(int a);
	bool getDrink(int a);

};

