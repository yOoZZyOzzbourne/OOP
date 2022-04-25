#include "LvOneEnemy.h"
using namespace std;
#include <iostream>


//int LvOneEnemy::objCount = 0;

LvOneEnemy::LvOneEnemy(int code, string name, int hp, int dmg, int drop)
{
	this->code = code;
	this->name = name;
	this->hp = 150;
	this->dmg = 20;
	this->drop = 150;
	//LvOneEnemy::objCount += 1;
}

int LvOneEnemy::GetCode()
{
	return this->code;
}

int LvOneEnemy::GetDmg()
{
	
	return this->dmg;
}

int LvOneEnemy::GetHp()
{	
	return this->hp;

}

int LvOneEnemy::GetDrop()
{
	
	return this->drop;
}

string LvOneEnemy::GetName()
{
	return this->name;
}

void LvOneEnemy::sethp(int hp)
{
	this->hp = hp;
}

void LvOneEnemy::setdmg(int dmg)
{
	this->dmg = dmg;
}
