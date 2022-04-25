#pragma once
#include <string>
using namespace std;

class Item
{
private:
	int code;
	string name;
	int dmgBoost;
	int hpBoost;
	int cost;


public:
	Item(int code,string name, int dmgB, int hpB, int cost);

	int GetCode();
	string GetName();
	int GetDmgBoost();
	int GetHpBoost();
	int GetCost();




};

