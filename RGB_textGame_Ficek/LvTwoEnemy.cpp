#include "LvTwoEnemy.h"
using namespace std;



LvTwoEnemy::LvTwoEnemy(int code, string name, int hp, int dmg, int drop, string sa, string weapon) : LvOneEnemy(code, name, hp, dmg, drop)
{
	this->hp = 300;
	this->dmg = 55;
	this->drop = 300;
	this->specialAttack = sa;
	this->weapon = weapon;
	
}
	


string LvTwoEnemy::GetSpecialAttack()
{
	return this->specialAttack;
}

string LvTwoEnemy::GetWeapon()
{
	return this->weapon;
}

