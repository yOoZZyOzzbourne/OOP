#include "Item.h"
using namespace std;

Item::Item(int code, string name, int dmgB, int hpB, int cost)
{
	this->code = code;
	this->name = name;
	this->dmgBoost = dmgB;
	this->hpBoost = hpB;
	this->cost = cost;
}

int Item::GetCode()
{
	return this->code;
}

string Item::GetName()
{
	return this->name;
}

int Item::GetDmgBoost()
{
	return this->dmgBoost;
}

int Item::GetHpBoost()
{
	return this->hpBoost;
}

int Item::GetCost()
{
	return this->cost;
}
