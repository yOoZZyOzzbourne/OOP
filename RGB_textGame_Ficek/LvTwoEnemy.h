#pragma once
using namespace std;
#include "LvOneEnemy.h"
#include <string>

class LvTwoEnemy: public LvOneEnemy
{
private:

	string specialAttack;
	string weapon;

public:
	LvTwoEnemy(int code, string name,  int hp,  int dmg, int drop, string sa, string weapon);

	string GetSpecialAttack();
	string GetWeapon();
	

};